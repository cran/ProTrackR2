// these BLEP routines were coded by aciddose

#include <stdint.h>
#include <assert.h>
#include "pt2_blep.h"

static const double dMinblepData[256+1] =
{
	 1.000047730261351741631870027, 1.000070326525919428561905988, 1.000026295486963423542192686, 0.999910424773336803383472216,
	 0.999715744379055859525351480, 0.999433014919733908598686867, 0.999050085771328588712947294, 0.998551121919525108694415394,
	 0.997915706233591937035498631, 0.997117832692634098457062919, 0.996124815495205595539118804, 0.994896148570364013963285288,
	 0.993382359323431773923118726, 0.991523909003057091204880180, 0.989250199364479221308954493, 0.986478750833182482793404233,
	 0.983114620682589257505412661, 0.979050130425507592057954298, 0.974164969358674692756494551, 0.968326735771705471300663248,
	 0.961391968634788374181709969, 0.953207710646355677042151910, 0.943613628528589098998224927, 0.932444698727279863703643059,
	 0.919534446669115101968827730, 0.904718706053873278349897191, 0.887839842029686909796737382, 0.868751359331251915563143484,
	 0.847322794437510795617640724, 0.823444770447693374926245724, 0.797034075604916458779314326, 0.768038612100722994924240083,
	 0.736442051783192774827568883, 0.702268030364621043126760469, 0.665583712234169455612686761, 0.626502564400415073997407944,
	 0.585186190589438104403541274, 0.541845095055891845525763983, 0.496738269945924404424886234, 0.450171529567763739621000241,
	 0.402494548939336449500103754, 0.354096601546017020201162495, 0.305401031227847563620514393, 0.256858534249934655768754510,
	 0.208939368513054252174399039, 0.162124646097439151226637932, 0.116896901459689991908952322, 0.073730159227936173382822460,
	 0.033079751373986221452128120,-0.004627847551233893637345762,-0.039004887382349466562470042,-0.069711629260494178961238276,
	-0.096464776709362487494558991,-0.119044790560825133884925719,-0.137301851759562276722448360,-0.151160268717908163882412964,
	-0.160621165999489917686204876,-0.165763337555641210308010614,-0.166742199141503621984128358,-0.163786829309547077304642926,
	-0.157195144771094669211564110,-0.147327312088839507131510231,-0.134597551740997606328775760,-0.119464540741507418974975963,
	-0.102420664473805989036492292,-0.083980405628003879092702277,-0.064668186778692057781192659,-0.045006002136687713044427284,
	-0.025501182606377806316722001,-0.006634636085273460347211394, 0.011150108072625494748386643, 0.027456744995838545247979212,
	 0.041944658451493331552395460, 0.054335772988313046916175608, 0.064419613137017092685532305, 0.072056443764197217194400480,
	 0.077178424602408784993556878, 0.079788772844964592212413379, 0.079958988468210145938996902, 0.077824255600564926083073658,
	 0.073577187846729327769246254, 0.067460134194076051827870799, 0.059756303384108616638670242, 0.050779997099921050929260957,
	 0.040866264989502618099059816, 0.030360306751458156215850437, 0.019606947961234157812304701, 0.008940507097049575288560952,
	-0.001324648208126466466388882,-0.010902586500777250097526938,-0.019543107356485005243751374,-0.027037657667711743197935803,
	-0.033223730539404389139335194,-0.037987660680654206091233505,-0.041265784496258707536586741,-0.043043987097204458591725995,
	-0.043355710312406585404954029,-0.042278543756813086185175621,-0.039929563528408616723819335,-0.036459618831699062979634363,
	-0.032046794692908199542191738,-0.026889298182776331241905510,-0.021198025763611533928143515,-0.015189070430455576393713457,
	-0.009076419455364113236806034,-0.003065077316892155564337363, 0.002655175361548794011473662, 0.007915206247809156159256361,
	 0.012570993866018958726171739, 0.016507022146950881685834034, 0.019638542128970374461838233, 0.021912677934460975809338734,
	 0.023308395228452325614876273, 0.023835389125096861917540991, 0.023531983633596965932444078, 0.022462165098004915897433875,
	 0.020711896771322700627759872, 0.018384880003473082210607714, 0.015597939105523964467558962, 0.012476211636472618604631890,
	 0.009148323764166686397625305, 0.005741721847351755579624832, 0.002378317065490789024989615,-0.000829419425005380466127403,
	-0.003781796760683148444365242,-0.006394592475568152724341164,-0.008601029202315702004710829,-0.010353009833494400057651852,
	-0.011621609729198234539637724,-0.012396851839770069853008394,-0.012686815497510708569683935,-0.012516151297987356677543502,
	-0.011924092281628086154032786,-0.010962065062340150406461348,-0.009691013345942120493781147,-0.008178550345073604815882007,
	-0.006496056025074358440674072,-0.004715830178801836899959987,-0.002908403455554361104196115,-0.001140096220006421448914247,
	 0.000529099845866712065883819, 0.002047259427257062253113773, 0.003371840725899812995364213, 0.004470560830528139475981142,
	 0.005321826318522163493107691, 0.005914733331712991419581993, 0.006248666963769690732566353, 0.006332543236118748190832672,
	 0.006183747823531677602348910, 0.005826833745009315536356187, 0.005292045316197638814281756, 0.004613737750803969042689978,
	 0.003828761006839943078355892, 0.002974873016054367744903653, 0.002089241623845963964634098, 0.001207086791118088800120467,
	 0.000360505313776118753877481,-0.000422490021201840063209965,-0.001118695810940623525803206,-0.001710197865787731110603920,
	-0.002184605984988852254297109,-0.002535053949380879686342771,-0.002759983640474954029453425,-0.002862739419386348127538611,
	-0.002851004510552685496799219,-0.002736115017663406229209144,-0.002532289317276390557681642,-0.002255810970882980801693884,
	-0.001924202080457771161722813,-0.001555421358101014960712005,-0.001167117308478276627506376,-0.000775962090624877551779670,
	-0.000397086112821087974713435,-0.000043627508742770710237387, 0.000273595371614305691784774, 0.000546286179945486565119606,
	 0.000768750680536383766867925, 0.000937862797633428843004089, 0.001052928740415311594305625, 0.001115464566897328381120391,
	 0.001128904823558016723081265, 0.001098261208043675284801166, 0.001029750572351520628011645, 0.000930411077785372455858925,
	 0.000807724029027989654482000, 0.000669256978018619233528064, 0.000522341243078797709889494, 0.000373794189875729877727689,
	 0.000229693626208723626408101, 0.000095208625460110475721871,-0.000025511844279469758173208,-0.000129393822077144692462430,
	-0.000214440509776957504047001,-0.000279687383686450809737456,-0.000325117484787396354272565,-0.000351545144152561614761532,
	-0.000360476947384593608518510,-0.000353958823942885139873099,-0.000334417806276329982514278,-0.000304506298090264292902779,
	-0.000266955691183075056582136,-0.000224444953912546549387383,-0.000179488462294699944012469,-0.000134345936549333598141603,
	-0.000090955956048889888797271,-0.000050893220267083281950406,-0.000015348557788785960678823, 0.000014870297520588306796089,
	 0.000039319915274267510328903, 0.000057887658269859997505705, 0.000070747063526119185008535, 0.000078305819543209774719408,
	 0.000081149939344861922907622, 0.000079987451948008292520673, 0.000075594520611004130655058, 0.000068766382254997158183021,
	 0.000060274927715552435942073, 0.000050834144795034220151546, 0.000041074060306237671633470, 0.000031523273709852359548023,
	 0.000022599698095009569128290, 0.000014608732178951863478521, 0.000007747790946751235789929, 0.000002115927046159247276264,
	-0.000002272821614624657917699,-0.000005473727618614671290435,-0.000007594607649309153682893,-0.000008779148282948222000235,
	-0.000009191289914471795693680,-0.000009001415957147717553273,-0.000008374862616584595860708,-0.000007463035714495605026032,
	-0.000006397209079216532043657,-0.000005284894977678962862369,-0.000004208528817468251939280,-0.000003226102468093129124012,
	-0.000002373314390120065336351,-0.000001666778737492929471595,-0.000001107845639559032712541,-0.000000686624974759576246945,
	-0.000000385868818649388185867,-0.000000184445440432801241354,-0.000000060222272723601931954, 0.000000007740724047001495273,
	 0.000000037708832885684096027, 0.000000044457942869060847864, 0.000000039034296310091607592, 0.000000028962932871006776366,
	 0.000000018763994698223029203, 0.000000010636937008622986639, 0.000000005187099504706206719, 0.000000002093670467469700098,
	 0.000000000648951812097509606, 0.000000000132018063854003986, 0.000000000011591335682393882, 0.000000000000000000000000000,

	 0.000000000000000000000000000 // 8bitbubsy: one extra zero is required for interpolation look-up
};

#define LERP(x, y, z) ((x) + ((y) - (x)) * (z))

void blepAdd(blep_t *b, double dOffset, double dAmplitude)
{
	assert(dOffset >= 0.0 && dOffset < 1.0);

	double f = dOffset * BLEP_SP;

	int32_t i = (int32_t)f; // 8bitbubsy: get integer part of f
	const double *dBlepSrc = dMinblepData + i;
	f -= i; // 8bitbubsy: remove integer part from f

	i = b->index;
	for (int32_t n = 0; n < BLEP_NS; n++)
	{
		b->dBuffer[i] += dAmplitude * LERP(dBlepSrc[0], dBlepSrc[1], f);
		dBlepSrc += BLEP_SP;

		i = (i + 1) & BLEP_RNS;
	}

	b->samplesLeft = BLEP_NS;
}

double blepRun(blep_t *b, double dInput)
{
	double dBlepOutput = dInput + b->dBuffer[b->index];
	b->dBuffer[b->index] = 0.0;

	b->index = (b->index + 1) & BLEP_RNS;

	b->samplesLeft--;
	return dBlepOutput;
}
