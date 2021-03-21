#pragma once

namespace chowdsp
{

namespace SIMDUtils
{

/**
JUCE doesn't implement the divide operator for
SIMDRegister, so here's a simple implementation.

Based on: https://forum.juce.com/t/divide-by-simdregister/28968/18
*/
using vec4 = juce::dsp::SIMDRegister<float>;
using vec2 = juce::dsp::SIMDRegister<double>;

#if defined(__i386__) || defined(__amd64__) || defined(_M_X64) || defined(_X86_) || defined(_M_IX86)
inline vec4 operator / (const vec4 &l, const vec4 &r)
{
    return _mm_div_ps(l.value, r.value);
}

inline vec2 operator / (const vec2 &l, const vec2 &r)
{
    return _mm_div_pd(l.value, r.value);
}

#elif defined(_M_ARM64) || defined (__arm64__) || defined (__aarch64__)
inline vec4 operator / (const vec4 &l, const vec4 &r)
{
    return vdivq_f32(l.value, r.value);
}

inline vec2 operator / (const vec2 &l, const vec2 &r)
{
    return vdivq_f64(l.value, r.value);
}

#else
JUCE_COMPILER_WARNING ("SIMD divide not implemented for this platform... using non-vectorized implementation")

inline vec4 operator / (const vec4 &l, const vec4 &r)
{
    vec4 out (l);
    out[0] = out[0] / r[0];
    out[1] = out[1] / r[1];
    out[2] = out[2] / r[2];
    out[3] = out[3] / r[3];
    return out;
}

inline vec2 operator / (const vec2 &l, const vec2 &r)
{
    vec2 out (l);
    out[0] = out[0] / r[0];
    out[1] = out[1] / r[1];
    return out;
}
#endif

/**
 * Fast implementation of the JUCE
 * FastMathapproximations::sin function
 * with SIMD optomisation.
 */ 
template <typename T>
inline juce::dsp::SIMDRegister<T> fastsinSIMD (juce::dsp::SIMDRegister<T> x) noexcept
{
    const auto m11511339840 = juce::dsp::SIMDRegister<T> ((T) 11511339840);
    const auto m1640635920 = juce::dsp::SIMDRegister<T> ((T) 1640635920);
    const auto m52785432 = juce::dsp::SIMDRegister<T> ((T) 52785432);
    const auto m479249 = juce::dsp::SIMDRegister<T> ((T) 479249);
    const auto m277920720 = juce::dsp::SIMDRegister<T> ((T) 277920720);
    const auto m3177720 = juce::dsp::SIMDRegister<T> ((T) 3177720);
    const auto m18361 = juce::dsp::SIMDRegister<T> ((T) 18361);
    const auto mnegone = juce::dsp::SIMDRegister<T> ((T) -1);

    auto x2 = x * x;
    auto num = mnegone * (x * ((x2 * (m1640635920 + (x2 * ((x2 * m479249) - m52785432)))) - m11511339840));
    auto den = m11511339840 + (x2 * (m277920720 + (x2 * (m3177720 + (x2 * m18361)))));

    return num / den;
}

/**
 * Fast implementation of the JUCE
 * FastMathapproximations::cos function
 * with SIMD optomisation.
 */ 
template <typename T>
inline juce::dsp::SIMDRegister<T> fastcosSIMD (juce::dsp::SIMDRegister<T> x) noexcept
{
    const auto m39251520 = juce::dsp::SIMDRegister<T> ((T) 39251520);
    const auto m18471600 = juce::dsp::SIMDRegister<T> ((T) 18471600);
    const auto m1075032 = juce::dsp::SIMDRegister<T> ((T) 1075032);
    const auto m14615 = juce::dsp::SIMDRegister<T> ((T) 14615);
    const auto m1154160 = juce::dsp::SIMDRegister<T> ((T) 1154160);
    const auto m16632 = juce::dsp::SIMDRegister<T> ((T) 16632);
    const auto m127 = juce::dsp::SIMDRegister<T> ((T) 127);

    auto x2 = x * x;
    auto num = m39251520 - (x2 * (m18471600 + (x2 * ((m14615 * x2) - m1075032))));
    auto den = m39251520 + (x2 * (m1154160 + (x2 * (m16632 + (x2 * m127)))));

    return num / den;
}

/** Clamps the input value to the range (-pi, pi) */
template <typename T>
inline juce::dsp::SIMDRegister<T> clampToPiRangeSIMD (juce::dsp::SIMDRegister<T> x)
{
    const auto mpi = juce::dsp::SIMDRegister<T> (juce::MathConstants<T>::pi);
    const auto m2pi = juce::dsp::SIMDRegister<T> (juce::MathConstants<T>::twoPi);
    const auto oo2p = juce::dsp::SIMDRegister<T> ((T) 1.0 / juce::MathConstants<T>::twoPi);
    const auto mz = juce::dsp::SIMDRegister<T> ((T) 0);

    auto y = x + mpi;
    auto yip = juce::dsp::SIMDRegister<T>::truncate (y * oo2p);
    auto p = y - (m2pi * yip);
    auto off = m2pi & juce::dsp::SIMDRegister<T>::lessThan (p, mz);
    p = p + off;
    return p - mpi;
}

} // namespace SIMDUtils

} // namespace chowdsp