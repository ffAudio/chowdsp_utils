#pragma once

namespace ModeParams
{
constexpr int numModes = 209;
constexpr float analysisFs = 44100.0f;

alignas (chowdsp::SIMDUtils::CHOWDSP_DEFAULT_SIMD_ALIGNMENT) constexpr float freqs[] = {
    42.164877525623f,
    44.17272883636695f,
    46.84986391735889f,
    60.012444732235906f,
    62.689579813227844f,
    65.58980948430244f,
    70.49789046612099f,
    76.29834980827019f,
    78.75239029917945f,
    80.31405242975809f,
    85.89141718182462f,
    89.01474144298189f,
    93.92282242480043f,
    106.19302487934681f,
    109.76253832066939f,
    113.55514635207463f,
    119.35560569422383f,
    129.8410514281089f,
    134.5260378198448f,
    138.09555126116737f,
    140.99578093224198f,
    153.04288879670568f,
    156.61240223802827f,
    159.73572649918555f,
    166.42856420166538f,
    174.4599694446412f,
    176.91400993555047f,
    181.3759017372037f,
    188.06873943968353f,
    202.79298238513917f,
    206.8086850066271f,
    213.7246172991896f,
    220.6405495917521f,
    228.22576565456257f,
    235.36479253720773f,
    249.4197517124154f,
    253.4354543339033f,
    263.9209000677884f,
    269.27517022977224f,
    274.8525349818388f,
    282.66084563473197f,
    288.46130497688114f,
    295.823426449609f,
    300.2853182512622f,
    306.30887218349403f,
    321.25620971903237f,
    329.5107095520908f,
    342.22710118680254f,
    347.80446593886904f,
    356.2820603620102f,
    364.53656019506866f,
    369.22154658680455f,
    378.36842478019366f,
    383.2765057620122f,
    391.75410018515333f,
    402.23954591903845f,
    411.1633295223449f,
    417.18688345457673f,
    425.8875724678005f,
    438.60396410251224f,
    444.1813288545788f,
    456.6746258992078f,
    466.26769327276224f,
    476.53004441656464f,
    485.2307334297885f,
    491.70047654218564f,
    504.4168681768973f,
    512.2251788297905f,
    523.1568137438409f,
    531.8575027570647f,
    541.2274755405365f,
    551.2667320942562f,
    559.298137337232f,
    570.0066776611998f,
    579.5997450347542f,
    588.300434047978f,
    598.7858797818631f,
    608.1558525653348f,
    617.7489199388893f,
    635.1502979653369f,
    651.6592976314538f,
    671.7378107388934f,
    680.2154051620345f,
    699.4015399091434f,
    713.2334044942684f,
    726.3959853091454f,
    737.9969039934438f,
    757.1830387405527f,
    772.3534708661737f,
    788.4162813521252f,
    801.8019567570849f,
    818.3109564232019f,
    827.457834616591f,
    836.3816182198974f,
    863.1529690298167f,
    873.4153201736192f,
    892.6014549207281f,
    913.7954409785809f,
    934.9894270364338f,
    955.7372239141213f,
    978.9390612827181f,
    1001.6947094711495f,
    1027.127492740573f,
    1049.2138571587564f,
    1075.3159241984279f,
    1096.286815666198f,
    1121.7195989356212f,
    1142.0212066331435f,
    1175.7084897356253f,
    1189.5403543207503f,
    1223.4507320133148f,
    1254.4608800348049f,
    1282.57079838522f,
    1300.6414601819158f,
    1317.3735544381154f,
    1368.0160263868795f,
    1386.755971953823f,
    1415.9813632546516f,
    1432.936552100934f,
    1451.6764976678774f,
    1479.1171322480448f,
    1497.1877940447405f,
    1535.1138743587928f,
    1572.1475763125145f,
    1590.2182381092102f,
    1618.9974402298735f,
    1653.577101692686f,
    1691.2800874166558f,
    1711.3586005240952f,
    1738.1299513340145f,
    1773.1558019769925f,
    1811.5280714712103f,
    1830.2680170381539f,
    1857.4855570282384f,
    1921.9598935621277f,
    1967.2480953489078f,
    2013.4286754960187f,
    2048.4545261389967f,
    2108.4669708712327f,
    2191.904347562148f,
    2243.885387051408f,
    2306.574966864636f,
    2385.1042625737327f,
    2459.840950251424f,
    2500.221071056386f,
    2547.2940295638273f,
    2587.674150368789f,
    2628.0542711737507f,
    2697.882877869624f,
    2790.913321934094f,
    2848.9179153555856f,
    2892.644455011787f,
    2939.494318929146f,
    3000.1760474316297f,
    3031.855479223368f,
    3081.828667401884f,
    3132.471139350648f,
    3195.3838137539587f,
    3274.359298643221f,
    3319.870595020084f,
    3421.601728097777f,
    3476.706091848195f,
    3514.8552667523295f,
    3552.7813470663823f,
    3659.1974665358116f,
    3706.0473304531706f,
    3767.3983427259022f,
    3888.7617997308703f,
    3928.472636765584f,
    4004.9940811639367f,
    4054.7441747523703f,
    4103.37879539039f,
    4252.405981565608f,
    4299.7020346631325f,
    4357.260438904459f,
    4504.725962949098f,
    4606.010906846626f,
    4748.122160729282f,
    4807.465321691269f,
    4880.8634418284655f,
    4935.7447109888f,
    4989.733601788804f,
    5106.188977811953f,
    5278.864190535933f,
    5338.876635268169f,
    5458.901524732641f,
    5604.136102876453f,
    5698.728209071502f,
    5818.753098535974f,
    5938.7779880004455f,
    6058.802877464917f,
    6298.629561803778f,
    6898.530914536054f,
    7138.580693464998f,
    7378.407377803859f,
    7498.432267268331f,
    7738.482046197275f,
    8578.210083268412f,
    9178.111436000689f,
    10617.740825804101f,
    10857.790604733045f,
    11457.691957465322f,
    11817.543531268655f,
    11937.568420733127f,
    12057.593310197599f,
    12297.41999453646f,
    12897.321347268737f,
    13257.39601566215f,
    13497.222700001012f
};

constexpr float taus[] = {
    44491.19138054288f,
    44558.63725073983f,
    43889.3962635028f,
    43072.473317421674f,
    28922.80525661928f,
    39998.93343346819f,
    39347.08905039978f,
    39885.80301587076f,
    39389.65735113392f,
    39069.68257903743f,
    36965.12048154356f,
    36282.37333362186f,
    35151.435046853476f,
    32518.794093671862f,
    31898.012002735235f,
    31289.314210075987f,
    30444.84429052198f,
    28900.162446650498f,
    28369.11707036094f,
    28050.48572614079f,
    27660.972666609287f,
    26163.16319387938f,
    25763.849330012465f,
    24897.40830119471f,
    22217.84958670727f,
    22112.088149546442f,
    22048.463392271013f,
    21942.0532876969f,
    21811.125054104425f,
    21089.315510791053f,
    21111.819768485708f,
    21171.309308410437f,
    22838.86086079286f,
    22863.55452810216f,
    22911.24405013708f,
    23084.362541580944f,
    23205.25327335275f,
    23541.59979921583f,
    23612.388018254096f,
    23767.945322748288f,
    23813.87165944816f,
    23926.157530512624f,
    24037.370072305344f,
    24132.440980235075f,
    24255.36203173853f,
    24854.731411288736f,
    25013.910640621176f,
    25216.399616819173f,
    25255.67668977479f,
    25295.05808540183f,
    25340.029752176055f,
    25323.307424288578f,
    25264.66694160828f,
    25220.284608536105f,
    25124.110431302164f,
    24977.261564518918f,
    24852.6487988332f,
    24739.34313976939f,
    23501.185989231322f,
    23221.01620769824f,
    21360.852084421953f,
    21207.62107909923f,
    21110.41214279997f,
    21025.33768793065f,
    20976.401267419966f,
    20937.927792205f,
    20905.257689051778f,
    20898.649911545126f,
    21408.511541861506f,
    21407.343200411848f,
    21384.965719443582f,
    21355.558269913025f,
    21327.70113794627f,
    21286.93501265371f,
    21241.36757471546f,
    21190.500774870645f,
    21113.178217326607f,
    21041.295915283106f,
    20957.456223770703f,
    20777.40055230947f,
    20585.354380965175f,
    20325.162434771886f,
    20212.41578328806f,
    19954.92130724293f,
    19769.30656332642f,
    19598.564135025546f,
    19455.018758668964f,
    19227.269898683113f,
    19059.928674164472f,
    19168.70636467028f,
    19291.13691656698f,
    19215.211793683007f,
    19156.00413185072f,
    19102.16398112092f,
    18925.798744033294f,
    18868.758904606042f,
    18676.19640045824f,
    18580.72273600341f,
    18486.28734758882f,
    18403.641524344483f,
    18330.099642115165f,
    17873.07613924431f,
    17919.791213510587f,
    17969.53295059253f,
    18060.067467079774f,
    18153.746585091976f,
    18316.147725689276f,
    18444.274874890387f,
    18672.082993574495f,
    18768.621292599204f,
    19006.946083306615f,
    19224.780410422263f,
    19386.393729083557f,
    19469.589413495898f,
    19536.485492515007f,
    19650.44875634055f,
    19661.020231815077f,
    19651.239214738856f,
    19647.251554078157f,
    19614.89453461543f,
    19548.23721951208f,
    19491.88079387819f,
    19359.993427328744f,
    19230.64460840129f,
    19171.425459189893f,
    19044.714085813346f,
    18892.390670658544f,
    18724.88109947039f,
    18634.565469618505f,
    18534.98410776564f,
    18389.47621243696f,
    18228.55564475569f,
    18155.168296918004f,
    18047.76384124205f,
    17827.48007821373f,
    17677.130486161557f,
    17540.683836448665f,
    17457.486668381283f,
    17313.375978291395f,
    17157.849589951496f,
    17067.68704516037f,
    16970.22481636088f,
    16864.748354989053f,
    16747.32553958279f,
    16681.35839879916f,
    16597.650207428742f,
    16530.889810122284f,
    16451.95571666814f,
    16306.131859385105f,
    16103.187096437898f,
    15965.799879440825f,
    15861.937203166455f,
    15756.993166832028f,
    15618.83770450238f,
    15551.333327626837f,
    15444.663473064042f,
    15397.613835361157f,
    15257.319617711653f,
    15086.8238629947f,
    14995.810198489917f,
    14824.452739239492f,
    14732.852666664608f,
    14668.144283383155f,
    14609.899690178661f,
    14508.044517777704f,
    14445.747810951572f,
    14369.596245268927f,
    14240.38779897042f,
    14199.259824563927f,
    14131.744676636225f,
    14101.082739992768f,
    14074.426020049821f,
    13977.035466705105f,
    13950.199294441298f,
    13919.265934058223f,
    13858.110327540386f,
    13822.590473726656f,
    13784.488602138135f,
    13772.143407977763f,
    13759.69396264203f,
    13752.09559859102f,
    13746.038707925278f,
    13737.528906168023f,
    13735.34755078526f,
    13737.213362739136f,
    13744.882371789006f,
    13807.57438320675f,
    13825.69930473167f,
    13887.25052211985f,
    13926.65893271218f,
    13975.07190361942f,
    14111.438077920824f,
    14693.935577559263f,
    15195.733648706739f,
    16329.978638402139f,
    17297.31599637376f,
    18620.579014667204f,
    50886.88516127634f,
    65581.61543787102f,
    155551.3011339513f,
    171931.4346322307f,
    906057.0283132402f,
    1012175.5724479144f,
    1043018.4999139496f,
    1071246.2943154182f,
    1119466.9404925413f,
    1195134.0028958158f,
    1215808.9004574958f,
    1221769.4444979636f
};

constexpr float amps_real[] = {
    1.91121470172957e-05f,
    -3.1442160429661866e-06f,
    3.5089635430172864e-05f,
    0.0004016223837688078f,
    -2.2384435798404817e-05f,
    4.8899500971516855e-05f,
    2.2758324679306743e-05f,
    -5.206384338883779e-05f,
    5.166881889552384e-05f,
    4.0653595058315155e-05f,
    0.0015002245212254281f,
    -0.002017908679477644f,
    -0.0011542002426727207f,
    -0.0006236727983126274f,
    -0.0018166309265923788f,
    -5.430199292806408e-05f,
    0.00015325638351771633f,
    -0.0028022666625738147f,
    0.0015796830963361176f,
    -0.0011410725966931052f,
    0.00509089341776283f,
    0.000794197588596747f,
    -0.00015253301998876775f,
    0.0030684360846493126f,
    0.00021541228588924143f,
    0.0008197687622755005f,
    -0.00015366180735864807f,
    0.007476296289534811f,
    0.004284163046357856f,
    0.007786691801555464f,
    0.00016305770970575107f,
    0.00019131889705942522f,
    0.007541931059564196f,
    0.002641124038668048f,
    -0.0014385387843736542f,
    0.006318193634088398f,
    -0.008360788280039942f,
    -0.0022328802450732417f,
    0.002904678076476529f,
    -0.0027776824999544217f,
    -0.009052673060519226f,
    -0.00287654115070525f,
    -0.002215659226203668f,
    -0.003738750258937701f,
    -0.0010198404727686699f,
    -0.008432710414727703f,
    -0.004163090611160513f,
    -0.003053950779521664f,
    -0.004060019336831882f,
    -0.000268293500514259f,
    0.0002468506881873993f,
    -0.006260785383669476f,
    -0.003893996704050857f,
    -0.0015834909321688865f,
    -0.005491125642878328f,
    -0.0011358580124882812f,
    -0.008154983956340874f,
    -0.004883071936327518f,
    -0.0024182233768261577f,
    -0.00966649608673566f,
    -0.0006722095758144664f,
    -0.009433778748028318f,
    -0.006234799627220878f,
    -0.003595756637643879f,
    -0.005768855995533886f,
    -3.176758325253962e-05f,
    -0.002775079927435105f,
    -0.0037126630599629558f,
    -0.004825245163322681f,
    -0.0023189185639774226f,
    -0.0002325031550137866f,
    -0.0010003761892342315f,
    0.004689133247495084f,
    0.000578070678228219f,
    0.0011464677238345825f,
    0.0049808339996215735f,
    0.0007186988739681715f,
    0.0034587143165430265f,
    0.005302539507838768f,
    0.006136101723137373f,
    0.0027109647727845652f,
    0.0065003834415363025f,
    0.0021858873475199127f,
    0.0021056545001532077f,
    0.005732520156912336f,
    0.0026169769969164166f,
    -8.516232206544599e-05f,
    0.0007066184545493496f,
    0.00248123663024896f,
    0.006750625974549341f,
    0.003556727586180861f,
    0.0007662984034483582f,
    0.0018305219913241472f,
    0.002333562933358147f,
    0.001669016852238802f,
    -5.5168715251466965e-05f,
    0.00018989399484458367f,
    1.1219496250827786e-05f,
    0.0006453201518855989f,
    -0.002610189971181669f,
    -0.0014509319202529098f,
    -0.002125362934961827f,
    -0.0006130375250834831f,
    -0.0021459487861697187f,
    -0.004764511909899288f,
    -0.0007253437740165935f,
    -0.001919612966993518f,
    -0.0009260898509581322f,
    0.0009777877110505252f,
    -0.0002331097455715662f,
    0.0011410614119879495f,
    0.0004747987519341157f,
    0.0008794497659145441f,
    2.1762604690961785e-05f,
    -0.0008224970072803313f,
    -0.0004855040249364847f,
    -0.001193705315317488f,
    -0.0009895745687511569f,
    -0.0006972257307579035f,
    -0.0018459014218407985f,
    -0.0005944475086894263f,
    -0.0011058194111442472f,
    0.0001091326655557139f,
    0.0022227608880969188f,
    0.003178932221902883f,
    0.0030623045618274076f,
    -0.00043213003997743767f,
    -0.0014691012744663676f,
    -0.0013292334875925592f,
    -0.0029298798675023415f,
    -0.002133399197010031f,
    -0.0006652941615367979f,
    -0.0006070230645252538f,
    0.0021161284168340544f,
    0.004424943028888207f,
    0.0011891023163768744f,
    -0.0008347355719987499f,
    -0.003430035678006482f,
    0.0013298091477817954f,
    0.0004965115685205991f,
    -0.002607598997166383f,
    0.0016313314743956948f,
    -0.001451326355653704f,
    0.0008245060711232022f,
    -0.00015265639796310294f,
    5.698955183955256e-05f,
    0.0011789775507882545f,
    -0.0004043968117307746f,
    -0.0009221071462387675f,
    -0.0009057333804433749f,
    0.0008516515793717588f,
    0.0001327491163874993f,
    -0.001057462038716729f,
    0.0008224249020571434f,
    -0.0007604437506229132f,
    0.0009325270067091266f,
    -0.0003299221868073156f,
    0.0006665704363590123f,
    -0.00010037477709181936f,
    -0.00011222327050696259f,
    -0.0009996077201751895f,
    0.00017601380644326247f,
    -0.0004625168385025188f,
    4.279780695828168e-05f,
    -0.00016831409901111563f,
    -0.0006034140583644856f,
    -7.238712929354021e-05f,
    -0.00043432146964878003f,
    0.00035620932068411394f,
    -0.0003902821549639434f,
    -0.0003471420924681041f,
    -0.0003661530082437463f,
    -4.214868263199053e-05f,
    0.00011835903779940137f,
    -0.00019083735371025652f,
    5.918183009162039e-05f,
    7.858613111370611e-06f,
    1.6960841421523928e-05f,
    1.2864502407802878e-05f,
    -4.145695277956926e-05f,
    2.0758039986981235e-05f,
    6.480805288015812e-05f,
    -4.155505154767149e-05f,
    1.0577837290157242e-05f,
    -1.987015811464178e-06f,
    -3.7182477935655e-06f,
    -6.302256462430633e-06f,
    1.4231798625012658e-05f,
    2.9888288065820596e-06f,
    1.0849533259597237e-05f,
    -1.7031763421504866e-05f,
    -1.713988961115438e-05f,
    1.2579784456532965e-05f,
    -1.7983017678245783e-05f,
    -1.3945811405578499e-05f,
    1.3253995192235596e-05f,
    1.0906156321221193e-05f,
    4.69162222236242e-06f,
    -8.250052696776207e-06f,
    7.282110550530484e-06f,
    -2.9884805280286017e-06f,
    -4.2736033566037786e-06f,
    -2.648971993590276e-06f,
    6.082839597294602e-06f,
    -7.717749877906264e-07f,
    3.12954899055716e-06f,
    4.994331645160905e-06f,
    4.472441717084941e-06f,
    3.186421493328595e-07f
};

constexpr float amps_imag[] = {
    -8.735300116357855e-06f,
    7.532330825238248e-05f,
    -1.6118883042230345e-05f,
    0.0004473646063296948f,
    6.29521984310486e-05f,
    5.3705394052458566e-05f,
    1.398634576912916e-05f,
    1.1776627587188317e-05f,
    4.287597929232447e-05f,
    5.669573152914439e-05f,
    0.0007866059318674475f,
    -0.0025673690256931775f,
    0.0018462368956212454f,
    0.00023906563704974878f,
    -0.0010090476583494326f,
    0.0009840359686065434f,
    3.0956038139962495e-05f,
    0.0005049506480527493f,
    0.00706757622714556f,
    0.0010317637516722429f,
    0.0005634867885353223f,
    0.0005151206321713309f,
    0.005170457427097747f,
    -0.0013179942881579323f,
    0.00048000072677697986f,
    0.0013460010913497128f,
    0.001617457392116434f,
    0.0005050221524076242f,
    -0.006655844029929312f,
    0.0024647289861748924f,
    -0.00615271238527302f,
    0.0002627319871230734f,
    -0.004602268747906569f,
    -0.0066668125102219665f,
    -0.008657295727051177f,
    -0.00532056066949012f,
    -0.003283956711855985f,
    -0.003481423398553619f,
    -0.0021303543369039597f,
    -0.004902983179680112f,
    -0.0034323333087763214f,
    0.0025424756976481933f,
    -0.007819955756262778f,
    -0.0006318918514907775f,
    0.004179799960245907f,
    -0.003799894728536312f,
    0.001110141788823436f,
    -0.0022117193300339286f,
    0.0019079821164343217f,
    -0.0018461518285613652f,
    -0.009388412878454556f,
    0.0003963738368334721f,
    0.0005013212263470542f,
    -0.000566136561751196f,
    -0.005480892703812523f,
    -0.0009226088976597167f,
    -0.0028204996019290493f,
    0.0031653456910338326f,
    0.002772799512242499f,
    0.0008003078159387453f,
    0.006559600440438081f,
    0.0033195597928581382f,
    0.00672046327800905f,
    0.002099161154633809f,
    0.00471520435299939f,
    0.00505551978802468f,
    0.0067135295794369205f,
    0.00615673431937936f,
    0.006081986159255104f,
    0.005844712263592268f,
    0.0074584923933799716f,
    0.005852985139978687f,
    0.004349672051321753f,
    0.005556438720476398f,
    0.0074315438574111894f,
    0.007265358015273789f,
    0.001114092138000082f,
    0.002502230591904506f,
    0.0060274885092318035f,
    0.0007709258234192174f,
    0.0007107522599898054f,
    -0.004945270724806244f,
    -0.0014751888283528439f,
    -0.00511259672418638f,
    7.051215056291175e-05f,
    0.001637160642389818f,
    0.0025770082512157864f,
    0.003286803587953966f,
    3.1620426784162697e-06f,
    -0.0019630877248463805f,
    0.003050714381181127f,
    -0.0030566247344990757f,
    -0.00046840393847240574f,
    -0.00398398570672946f,
    -0.002548436831746918f,
    -0.0020920481594177537f,
    -0.0038706592779722895f,
    -0.0018410051674712816f,
    -0.0013278391564467687f,
    -0.002613163219136968f,
    -0.003622266510423454f,
    -0.002436452619977663f,
    -0.00383771795887747f,
    -0.001149353839195252f,
    -0.00012429624161607586f,
    -3.268943159878549e-05f,
    0.0011056764394544209f,
    4.906817724767822e-05f,
    0.001778028950994775f,
    0.0007841370711838083f,
    6.668715634047074e-05f,
    -0.0005378829558001733f,
    -0.0009272028197058149f,
    -5.693622186592434e-05f,
    0.0011639156975979201f,
    0.00011411877904759403f,
    0.0003035562685195115f,
    -0.0001253768933389862f,
    0.0012660075787250893f,
    0.0012435890181900842f,
    0.0012190459378404192f,
    0.002248755236358276f,
    0.002422669115634754f,
    0.0017714037622051863f,
    -0.0008347357866911282f,
    -0.0005695742138635327f,
    -0.0026686059914058486f,
    -0.002930081619874823f,
    -0.0024772145557279473f,
    0.00040849337363391537f,
    0.0023421583048133495f,
    0.002780147846263526f,
    0.004154640954113868f,
    0.002434170613742511f,
    -0.0020212161365211236f,
    -0.0049858381747847486f,
    -0.003729912721633367f,
    0.0018033522710966716f,
    0.004317799673786715f,
    -0.0027812423595068338f,
    0.000562151051604803f,
    0.0026738421545135036f,
    -0.002235057566719985f,
    0.0017678081994772685f,
    -0.0008177735108712026f,
    -0.00019714759169840376f,
    0.00035417023462219494f,
    -0.001295337356898833f,
    0.0006972008979659061f,
    -0.00017914160682058018f,
    0.0003868153127801901f,
    -0.0010254078346865808f,
    0.00011136055539592859f,
    -0.0008708729292559471f,
    -0.0007435071075212244f,
    0.000584320962518791f,
    -0.001121885753095721f,
    -0.0006834163521235279f,
    0.0011042616956122029f,
    -0.001093149273706501f,
    2.4323505957831327e-05f,
    -0.0008443028271068235f,
    0.0009384777235138327f,
    -0.0010203179356643465f,
    0.0006298501007922827f,
    -0.0004854969708532788f,
    -0.0004803035257192594f,
    5.324693420047724e-05f,
    0.0002533400584198402f,
    -0.00026212318220898267f,
    -0.0002980381676186305f,
    -0.00033023940878294214f,
    0.00028122562941169677f,
    8.105932348464323e-05f,
    -0.00017078507717392124f,
    -4.6691063220845406e-05f,
    2.8926171115371303e-05f,
    -1.530468641441153e-05f,
    5.3517254972949434e-05f,
    -5.199893398142512e-05f,
    -1.5424244180334366e-05f,
    -1.5432231077360707e-05f,
    5.39338136384467e-05f,
    3.6323695860559276e-07f,
    7.843193119907652e-06f,
    -1.1543584281031903e-05f,
    8.624697094157183e-06f,
    2.3050413321724656e-06f,
    -6.223200557941427e-06f,
    -1.2175097957773306e-05f,
    -1.1513775674911342e-05f,
    6.490282950378243e-06f,
    9.979967620440012e-07f,
    -2.5915256088018357e-05f,
    5.667389255268479e-06f,
    1.1838383259642248e-05f,
    -1.3013131821410428e-05f,
    4.451004217989173e-06f,
    6.610906316549363e-06f,
    2.607878045653069e-06f,
    -5.897394114452378e-06f,
    8.174761823701894e-07f,
    -6.852730411419398e-06f,
    -9.221947680261317e-07f,
    5.457179060204542e-06f,
    5.972454837547322e-06f,
    -2.6034374590042444e-06f,
    -5.666111094998526e-06f,
    -5.468112506851067e-06f
};
} // namespace ModeParams