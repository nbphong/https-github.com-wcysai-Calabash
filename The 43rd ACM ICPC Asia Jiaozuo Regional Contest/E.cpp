#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define Rep(i, n) for (int i = 1; i <=int(n); i++)
#define range(x)
#ifdef __LOCAL_DEBUG__
#define _debug(fmt, ...) fprintf(stderr, "[%s] " fmt "\n", __func__, ##__VA_ARGS__)
#else
#define _debug(...) ((void) 0)
#endif
typedef long long LL;
typedef unsigned long long ULL;

string t;

extern map<string, string> ans;

int main() {
    int T; cin >> T;
    while (T--) {
        cin >> t;
        string dum = "";
        for (int i = 0; i < 200 - t.size(); i++) dum.push_back('0');
        t = dum + t;
        auto it = prev(ans.upper_bound(t));
//        cout << t << endl;
//        cout << it->first << endl;
        cout << it->second << endl;
    }
    return 0;
}

map<string, string> ans = {
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" , "1/1" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002" , "2/3" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000006" , "1/2" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000030" , "5/12" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000210" , "35/96" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002310" , "385/1152" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000030030" , "715/2304" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000510510" , "12155/41472" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000009699690" , "46189/165888" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000223092870" , "1062347/3981312" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000006469693230" , "30808063/119439360" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000200560490130" , "955049953/3822059520" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000007420738134810" , "1859834119/7644119040" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000304250263527210" , "76253198879/321052999680" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000013082761331670030" , "298080686527/1284211998720" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000614889782588491410" , "14009792266769/61642175938560" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000032589158477190044730" , "742518990138757/3328677500682240" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001922760350154212639070" , "43808620418186663/199720650040934400" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000117288381359406970983270" , "86204059532560853/399441300081868800" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000007858321551080267055879090" , "339745411098916303/1597765200327475200" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000557940830126698960967415390" , "24121924188023057513/115039094423578214400" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000040729680599249024150621323470" , "47591904479072518877/230078188847156428800" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000003217644767340672907899084554130" , "3759760453846728991283/18406255107772514304000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000267064515689275851355624017992790" , "312060117669278506276489/1546125429052891201536000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000023768741896345550770650537601358310" , "27773350472565787058607521/139151288614760208138240000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002305567963945518424753102147331756070" , "2694014995838881344684929537/13636826284246500397547520000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000232862364358497360900063316880507363070" , "272095514579727015813177883237/1390956280993143040549847040000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000023984823528925228172706521638692258396210" , "2155833692439375586827486305647/11127650247945144324398776320000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000002566376117594999414479597815340071648394470" , "230674205091013187790541034704229/1201786226778075587035067842560000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000279734996817854936178276161872067809674997230" , "25143488354920437469168972782760961/132196484945588314573857462681600000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000031610054640417607788145206291543662493274686990" , "2841214184106009434016093924451988593/15070399283797067861419750745702400000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000004014476939333036189094441199026045136645885247730" , "360834201381463198120043928405402551311/1929011108326024686261728095449907200000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000525896479052627740771371797072411912900610967452630" , "47269280380971678953725754621107734221741/254629466299035258586548108599387750400000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000072047817630210000485677936198920432067383702541010310" , "281560496182309565941757755786598242972979/1527776797794211551519288651596326502400000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010014646650599190067509233131649940057366334653200433090" , "39136908969341029665904328054337155773244081/213888751691189617212700411223485710336000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001492182350939279320058875736615841068547583863326864530410" , "5831399436431813420219744880096236210213368069/32083312753678442581905061683522856550400000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000225319534991831177328890236228992001350685163362356544091910" , "880541314901203826453181476894531667742218578419/4876663538559123272449569375895474195660800000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000035375166993717494840635767087951744212057570647889977422429870" , "1749936537208721528520879643954955339690231858377/9753327077118246544899138751790948391321600000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005766152219975951659023630035336134306565384015606066319856068810" , "6957064769878575832900082486942871228524580315011/39013308308472986179596555007163793565286400000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000962947420735983927056946215901134429196419130606213075415963491270" , "1161829816569722164094313775319459495163604912606837/6554235795823461678172221241203517318968115200000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000166589903787325219380851695350896256250980509594874862046961683989710" , "6930915802295239116838492521733327333217367237275269/39325414774940770069033327447221103913808691200000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000029819592777931214269172453467810429868925511217482600306406141434158090" , "1240633928610847801914090161390265592645908735472273151/7078574659489338612425998940499798704485564416000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005397346292805549782720214077673687806275517530364350655459511599582614290" , "224554741078563452146450319211638072268909481120481440331/1288300588027059627461531807170963364216372723712000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001030893141925860008499560888835674370998623848299590975192766715520279329390" , "42889955546005619359972010969422871803361710894011955103221/247353712901195448472614106976824965929543562952704000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000198962376391690981640415251545285153602734402721821058212203976095413910572270" , "85337746601846232334789671310294992351018661881900075617749/494707425802390896945228213953649931859087125905408000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000039195588149163123383161804554421175259738677336198748467804183290796540382737190" , "16811536080563707769953565248128113493150676390734314896696553/97952070308873397595155186362822686508099250929270784000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000007799922041683461553249199106329813876687996789903550945093032474868511536164700810" , "3345495680032177846220759484377494585136984601756128664442614047/19590414061774679519031037272564537301619850185854156800000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001645783550795210387735581011435590727981167322669649249414629852197255934130751870910" , "13318860160128104255709061343465119952149127376802700909384746489/78361656247098718076124149090258149206479400743416627200000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000367009731827331916465034565550136732339800312955331782619462457039988073311157667212930" , "2970105815708567249023120679592721749329255405027002302792798467047/17553010999350112849051809396217825422251385766525324492800000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000083311209124804345037562846379881038241134671040860314654617977748077292641632790457335110" , "674214020165844765528248394267547837097740976941129522733965252019669/4002086507851825729583812542337664196273315954767773984358400000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000019078266889580195013601891820992757757219839668357012055907516904309700014933909014729740190" , "154395010617978451305968882287268454695382683719518660706078042712504201/920479896805919917804276884737662765142862669596588016402432000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000004445236185272185438169240794291312557432222642727183809026451438704160103479600800432029464270" , "35974037473988979154290749572933549944024165306647847944516183952013478833/215392295852585260766200791028613087043429864685601595838169088000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001062411448280052319722448549835623701226301211611796930357321893850294264731624591303255041960530" , "8597794956283366017875489147931118436621775508288835658739367964531221441087/51694151004620462583888189846867140890423167524544383001160581120000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000256041159035492609053110100510385311995538591998443060216114576417920917800321526504084465112487730" , "2072068584464291210307992884651399543225847897497609393756187679452024367301967/12509984543118151945300941942941848095482406540939740686280860631040000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000064266330917908644872330635228106713310880186591609208114244758680898150367880703152525200743234420230" , "520089214700537093787306214047501285349687822271899957832803107542458116192793717/3152516104865774290215837369621345720061566448316814652942776879022080000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000016516447045902521732188973253623425320896207954043566485360902980990824644545340710198976591011245999110" , "3108440190186931002403202256051344891508599309857634631698381363683993857245301983/18915096629194645741295024217728074320369398689900887917656661274132480000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000004343825573072363215565699965702960859395702691913457985649917484000586881515424606782330843435957697765930" , "817519770019162853632042193341503706466761618492557908136674298648890384455514421529/4993585510107386475701886393480211620577521254133834410261358576370974720000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001168489079156465704987173290774096471177444024124720198139827803196157871127649219224446996884272620699035170" , "219912818135154807627019350008864497039558875374498077288765386336551513418533379391301/1348268087728994348439509326239657137555930738616135290770566815620163174400000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000316660540451402206051523961799780143689087330537799173695893334666158783075592938409825136155637880209438531070" , "59596373714626952866922243852402278697720455226488978945255419697205460136422545815042571/366728919862286462775546536737186741415213160903588799089594173848684383436800000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000087714969705038411076272137418539099801877190558970371113762453702525982911939243939521562715111692818014473106390" , "118763996539220618303147205374931159706968101422571562358530584576445413365388814322063253/733457839724572925551093073474373482830426321807177598179188347697368766873600000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000000024647906487115793512432470614609487044327490547070674282967249490409801198254927547005559122946385681862066942895590" , "710057085691936037089029036390545869737405031909417213249938175871939599056899081372335619/4400747038347437553306558440846240896982557930843065589075130086184212601241600000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000000006975357535853769564018389183934484833544679824821000822079731605785973739106144495802573231793827147966964944839451970" , "2830227538743914063326693201387668748389938366624860159855387377067026852578907606033394087/17602988153389750213226233763384963587930231723372262356300520344736850404966400000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000002043779758005154482257388030892804056228591188672553240869361360495290305558100337270153956915591354354320728837959427210" , "829256668851966820554721108006586943278251941421084026837628501480638867805619928567784467491/5175278517096586562688512726435179294851488126671445132752352981352634019060121600000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000000627440385707582426053018125484090845262177494922473844946893937672054123806336803541937264773086545786776463753253544153470" , "254581797337553813910299380158022191586423346016272796239151949954556132416325318070309831519737/1593985783265748661308061919742035222814258343014805100887724718256611277870517452800000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000000195133959955058134502488637025552252876537200920889365778484014616008832503770745901542489344429915739687480227261852231729170" , "79174938971979236126103107229144901583377660611060839630376256435866957181477173919866357602638207/497323564378913582328115318959514989518048603020619191476970112096062718695601445273600000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000000061076929465933196099278943388997855150356143888238371488665496574810764573680243467182799164806563626522181311132959748531230210" , "157845578969614655461594092756193338825459922109949317224890243722460876419123283037695349870227763/994647128757827164656230637919029979036097206041238382953940224192125437391202890547200000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000000019361386640700823163471425054312320082662897612571563761906962414215012369856637179096947335243680669607531475629148240284399976570" , "50037048533367845781325327403713288407670795308853933560290207260020097824862080722949425908862200871/316297786944989038360681342858251533333478911521113805779352991293095889090402519194009600000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000000006408618978071972467109041692977377947361419109761187605191204559105169094422546906281089567965658301640092918433248067534136392244670" , "199545338127045264501429920128061427264325701773863277210313959073092197349751189389111565973896246847/1265191147779956153442725371433006133333915646084455223117411965172383556361610076776038400000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000002159704595610254721415747050533376368260798239989520222949435936418441984820398307416727184404426847652711313512004598759003964186453790" , "67246778948814254136981883083156700988077761497791924419875804207632070506866150824130597733203035187439/427634607949625179863641175544356073066863488376545865413685244228265642050224205950300979200000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000000749417494676758388331264226535081599786496989276363517363454269937199368732678212673604332988336116135490825788665595769374375572699465130" , "23334632295238546185532713429855375242862983239733797773696904060048328465882554335973317413421453210041333/148816843566469562592547129089435913427268493955037961163962464991436443433478023670704740761600000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000000261546705642188677527611215060743478325487449257450867559845540208082579687704696223087912212929304531286298200244292923511657074872113330370" , "8143786671038252618750916987019525959759181150667095423020219516956866634593011463254687777284087170304425217/52085895248264346907391495181302569699543972884263286407386862747002755201717308284746659266560000000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000000092325987091692603167246758916442447848897069587880156248625475693453150629759757766750033011164044499544063264686235401999614947429856005620610" , "48724689743669545329136842312167672267711710952296350581798940499758880034090390619133979413242080866397662739/312515371489586081444348971087815418197263837305579718444321176482016531210303849708479955599360000000000000000" }, 
{ "00000000000000000000000000000000000000000000000000000033145029365917644537041586451002838777754047982048976093256545773949681076083753038263261851007891975336318712022358509317861766127318306017798990" , "17492163617977366773160126390068194344108504231874389858865819639413437932238450232269098609353907031036760923301/112505533736250989319965629591613550551014981430008698639955623533525951235709385895052784015769600000000000000000" }, 
{ "00000000000000000000000000000000000000000000000000012164225777291775545094262227518041831435735609411974226225152299039532954922737365042617099319896354948428967312205572919655268168725818308532229330" , "6419624047797693605749766385155027324287821053097901078203755807664731721131511235242759189632883880390491258851467/41402036414940364069747351689713786602773513166243201099503669460337550054741054009379424517803212800000000000000000" }, 
{ "00000000000000000000000000000000000000000000000004537256214929832278320159810864229603125529382310666386381981807541745792186181037160896178046321340395764004807452678699031415026934730229082521540090" , "2394519769828539714944662861662825191959357252805517102170000916258944931982053690745549177733065687385653239551597191/15484361619187696162085509531952956189437293924174957211214372378166243720473154199507904769658401587200000000000000000" }, 
{ "00000000000000000000000000000000000000000000001719620105458406433483340568317543019584575635895742560438771105058321655238562613083979651479555788009994557822024565226932906295208262756822275663694110" , "907522992765016551964027224570210747752596398813290981722430347262140129221198348792563138360831895519162577790055335389/5884057415291324541592493622142123351986171691186483740261461503703172613779798595813003812470192603136000000000000000000" }, 
{ "00000000000000000000000000000000000000000000658614500390569664024119437665618976500892468548069400648049333237337193956369480811164206516669866807827915645835408481915303111064764635862931579194844130" , "347581306229001339402222427010390716389244420745490445999690823001399669491718967587551681992198615983839267293591193453987/2259478047471868623971517550902575367162689929415609756260401217422018283691442660792193463988553959604224000000000000000000" }, 
{ "00000000000000000000000000000000000000000256201040651931599305382461251925781858847170265198996852091190629324168449027728035542876334984578188245059186229973899465052910204193443350680384306794366570" , "135209128123081521027464524107041988675416079669995783493879730147544471432278678391557604294965261617713474977206974253600943/881196438514028763348891844852004393193449072472087804941556474794587130639662637708955450955536044245647360000000000000000000" }, 
{ "00000000000000000000000000000000000000101711813138816844924236837117014535397962326595284001750280202679841694874264008030110521904988877540733288496933299638087626005351064797010220112569797363528290" , "269738813391273185165343799349224469870051174015016713804373129992839975671430328248484265854779944031317837014829993862711429/1762392877028057526697783689704008786386898144944175609883112949589174261279325275417910901911072088491294720000000000000000000" }, 
{ "00000000000000000000000000000000000040786437068665554814618971683922828694582892964708884701862361274616519644579867220074319283900539893834048687270253154873138028145776983601098265140488742774844290" , "1614406927908963391810490500582671827132694340000323913963486942195952690212590472054361053847265038157588845417116828939511687/10574357262168345160186702138224052718321388869665053659298677697535045567675951652507465411466432530947768320000000000000000000" }, 
{ "00000000000000000000000000000000016681652761084211919179159418724436936084403222565933843061705761318156534633165693010396587115320816578125913093533540343113453511622786292849190442459895794911314610" , "660292433514766027250490614738312777297271985060132480811066159358144650296949503070233671023531400606453837775600783036260279983/4335486477489021515676547876671861614511769436562672000312457855989368682747140177528060818701237337688585011200000000000000000000" }, 
{ "00000000000000000000000000000006989612506894284794136067796445539076219364950255126280242854713992307588011296425371356170001319422146234757586190553403764537021369947456703810795390696338067840821590" , "276662529642686965417955567575353053687556961740195509459836720771062608474421841786427908158859656854104158027976728092193057312877/1820904320545389036584150108202181878094943163356322240131232299515534846753798874561785543854519681829205704704000000000000000000000" }, 
{ "00000000000000000000000000002942626865402493898331284542303571951088352644057408163982241834590761494552755795081340947570555476723564832943786222982984870085996747879272304344859483158326560985889390" , "552013862462422807777058265162197325130149198543233694230290329121409280415789551621261371255355049931648580709849301074944441368347/3641808641090778073168300216404363756189886326712644480262464599031069693507597749123571087709039363658411409408000000000000000000000" }, 
{ "00000000000000000000000001268272178988474870180783637732839510919079989588742918676346230708618204152237747680057948402909410467856442998771862105666479007064598335966363172634437241238747784918327090" , "237917974721304230151912112284907047131094304572133722213255131851327399859205296748763651011058026520540538285945048763301054229757557/1573261332951216127608705693486685142674030893139862415473384706781422107595282227621382709890305005100433728864256000000000000000000000" }, 
{ "00000000000000000000000549161853502009618788279315138319508227961635491925683786857917896831682397918944745465091658459774732581839818468216291753585410058971079473435253750711325456377790869635629970" , "103018483054324731655777944619364751407763833879733901718339472091624764139035893492214660887788125483394053077814206114509356481485022181/682795418500827799382178270973221351920529407622700288315448962743137194696352486787680096092392372213588238327087104000000000000000000000" }, 
{ "00000000000000000000241082053687382222648054619345722264112075157980955375182430625956709108572686416743259175238063841107603427680307546952079823995015888303888838076396562271875349850191770041556830" , "45225114060848557196886517687901125868008323073203182854351028248223271457036757243082236129738987087209989301160436484269607495371924737459/300429984140364231728158439228217394845032939353988126858797543606980365666395094186579242280652643773978824863918325760000000000000000000000" }, 
{ "00000000000000000106799349783510324633088196370154963001649294985563231205816767298822135097700082617263814630462281610668318462376243299771362029792038518622755267843677086440779983634954128409675690" , "20034725528955910838220727335740198759527687121429010004477505513962909255467283458685430605474371279634025260414073362531436120449762658694337/133390912958321718887302347017328523311194625073170728325306109361499282355879421818841183572609773835646598239579736637440000000000000000000000" }, 
{ "00000000000000047952908052796135760256600170199578387740533448517890811411728517171138658867337095151452769077564443190074989606933241597341551376625294861617115261811011811910212652094403655944384810" , "8995591762501203966361106573747349243027931517521625492010399975769346255704810272949758341857992704555677341925918939776614818081943433753757313/60025910831244773499286056157797835490037581282926827746387749212674677060145739818478532607674398226040969207810881486848000000000000000000000000" }, 
{ "00000000000021914478980127834042437266277781207323197423785972676100815159932347210367102373052484213915468446950537864270250368491409985088979117759751759021674647632398042967182007142470766583858170" , "17951901464904149400118016175556937135649627526233112881435601698369394056144534038157378001000448323065260022970065307763812104207197158189812629/120051821662489546998572112315595670980075162565853655492775498425349354120291479636957065215348796452081938415621762973696000000000000000000000000" }, 
{ "00000000010102574809838931493563579754057136575994012365333403682475788728812063979234193977195222615030954044197955428585419874540003126019373287245560908992012558535497807870905292679023395158616370" , "8275826575320812873454405456931748019534478289593465038341812382948290659882630191590551258461206676933084870589200106879117380039517889925503621969/55463941608070170713340315889805199992794725105424388837662280272511401603574663592274164129491143960861855548017254493847552000000000000000000000000" }, 
{ "00000004677492136955425281519937426128454234685227725149365904986290181439985622385431811441388070759331722463653363435049401912021447346969831994694700863301814601935485044229150510387831958439379310" , "3831707704373536360409389726559399333044463448081774312752259133305058575525657778706425232667538691420018295082799649485031346958296783035508176971647/25735268906144559210989906572869612796656752448916916420675298046445290344058643906815212156083890797839900974280006085145264128000000000000000000000000" }, 
{ "00002184388827958183606469810778001988127598001347644753877628597514732473285653996655943128229044607914390526120724168070692914015911034911541522425303161947419103871515655013288351117524591190137770" , "1789407497942441480311185002303239488531764430254188604055305015253462354770482182655900583655740568893148543803667436309509639029524597677582318645759149/12044105848075653710743276276102978788835360146093116884876039485736395881019445348389519289047260893389073655963042847847983611904000000000000000000000000" }, 
{ "01046322248591969947499039362662952313119442645521837107384098209556854703828264398196758421712367190993062011826876505861905813621385722628389241720214572813750754455998751365120185294279180075991830" , "857126191514429469069057616103251715006715162091756341342491102306408467935060965492176379571099732499818152481956701992255117095142282287561930631318632371/5781170807076313781156772612529429818640972870124696104740498953153470022889333767226969258742685228826755354862260566967032133713920000000000000000000000000" }
};
close