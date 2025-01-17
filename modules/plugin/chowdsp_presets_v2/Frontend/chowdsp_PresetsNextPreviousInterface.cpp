#pragma once

namespace chowdsp::presets::frontend
{
NextPrevious::NextPrevious (PresetManager& manager) : presetManager (manager)
{
    presetChangedCallback = presetManager.getSaveLoadHelper().presetChangedBroadcaster.connect ([this]
                                                                                                { updateCurrentPresetIndex(); });
    updateCurrentPresetIndex();
}

void NextPrevious::updateCurrentPresetIndex()
{
    if (presetManager.getCurrentPreset() == nullptr)
    {
        currentPresetIndex = -1;
        return;
    }

    currentPresetIndex = presetManager.getPresetTree().getIndexForElement (*presetManager.getCurrentPreset());
}

bool NextPrevious::navigateThroughPresets (bool forward)
{
    const auto& presetTree = presetManager.getPresetTree();
    const auto numAvailablePresets = presetTree.size();
    if (currentPresetIndex < 0 || numAvailablePresets <= currentPresetIndex)
        return false;

    auto nextPresetIndex = currentPresetIndex + (forward ? 1 : -1);
    if (wrapAtEndOfTree)
        nextPresetIndex = juce::negativeAwareModulo (nextPresetIndex, numAvailablePresets);

    if (auto* nextPreset = presetTree.getElementByIndex (nextPresetIndex))
    {
        presetManager.loadPreset (*nextPreset);
        return true;
    }

    return false;
}

bool NextPrevious::goToNextPreset()
{
    return navigateThroughPresets (true);
}

bool NextPrevious::goToPreviousPreset()
{
    return navigateThroughPresets (false);
}
} // namespace chowdsp::presets::frontend
