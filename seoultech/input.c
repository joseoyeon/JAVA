#include"stdio.h"
int main(){
    char a[] ="447105979887320887866896352215904019354379020486352604926026193433822089904079001754747519909143561934147426257373153480534182313442592713527042725905858434630783470870206325001718562786366086018849022913965358982021095047353584748836954228646299400858305643503699588164014528202129779950102959766133358701182799370634221230597673767876531154588272438742476872948714592268830730687487541283774124653563174876118709659170917713441999975305528617444132098602915774618002414835757885182998273291527529062100438031102884268334908104451395445237826389983333429201639712099518718817430804902315492160776638229460644132631108975779796173408443613258259386862732246792994737829575704276739013445176665995139882680402210561335862923320507101772076151322606883803347163626103479933811271911319310373125541796214667156969595689950838221766750850010727150757793811150186969372628646621887991187250010032578542199513469840573596023963984507930541195228107866926681938257082269218240726605302376893567555931305771162644784631056821467792839605235598388872650714689064357992124596958326690396362907517535475681065527415107462382415685548132112166192181363760053424138703457043631161143217226557716050666264082350855172715722800166002331390299127048525684704564041012718545876636555702189484404762143514939252416020276828446457011307520237520458538869614929265045635126775533178529931592473832061896451162453304122058887969058179666917980403150641474780212960601921546906232770168986171226308601432400201442510040316664544567481262821748278736570216955596843349523284972198155591789050445842668832405359399481494733376336507922311145537968066722212239678315021004603878742333677414545825069673650000514258248112563630189903952320118179266826816349342371139905340011067849754339697742645857992934308734077858943634113106729474878037041429569797160343251059319141093316154337927586908499508948055359100070110737412626028303687352297680335310231727703329387404082405742875603883761509989999968839630469218350794920548436340796349675110250611933248455634901032793675174697466084072588356031900204791820126717965815469208494181548413602143987790343113648997930095209957948125953604849131480337652406279346588318271529093098322540186549716670015756205087125496363340208039412028481319238957460672518955671137439521511210035203734147232845315295483040643848035920010163818071728882393262022525556255785220151154954605473032684064866550103433743828133304651864357833743809691841677662150042915628647029264644642745050660303995616183534609798566020493188298417407093302961952525193662917731972919206767655701909870106459422899766433307125657349675056941921626196477547797431244351959495278170696752176249457472695714985435737242400309105658788781947345065439686444063741346994362898531101116846766606306677390441263707608292563102545771548641982603189081033424338861607585031362439244878592365827723214097252815801486005029953131666817157387275616578713361257194614533894671865186173637573271764720593418343708011502515507115704792275881873277609549204174666806207987655005400349436188057687474106522023595150927265192777322707906434307584195027493866279114054546681318822676378577632214707287590015551990031882933367767724879782315131831891074379150573157827021915657143768051785610683164174842454131546205432646645469646193853063029127736531756971767617655414033426651792277620492721279349284286677753147685601463581165900977822147218251508883365833556214862996780552245541410207308161014199784900732012842208976382507460195336924279584735181898047091122280544350918212414173173232585036755731870904980247318073543164147508912630204792159072943090751537806326010113803301588818941836194753370713405752665457170658328992939136750641722243673719427870151600987636692076044461055881260425874291226494380045323867562099776852890207442665585087103812601946499481073714628838936096794069268612362052789958382807230771444165334067725493656679146858594422599188714340567547006992189962381397162552217513926246151128343408925199128431351472507683748122862901128234805068796742477981800605728620287425156619885881403773302429105";
    char b[] = "973410236965825100731475120756401923947529924094784749769124719327472100191085083743631862297542429031532987223831951786203001815620877061904321626066518952271108861256246212024136087624967966164278952165939557207328874704753408330842070595585197772547268102174441525685051776937455194328922929140567369216199537922452636987899750199255097210869710442309450072531843601027956818686306311088175058599831523700110952164379450635717016585648909863574451812521856230389610129486487680419594864331510309943414108050610255508258600864077045588518277893441676423556015430388789275442693047929897647432042391348608628865159487040657981229779809125368236913286673927378289112180501385565296451746287586343837882969355524136953676329951832700844338543799304808934142866288199106489389045123659635864999094999252053323986371309913675744456904205098230931209277256235155210015088008621258738633352466935946792046966665339464169844705525122483977657901024728989740513061947546533950572694193602032773487206688205898340879766802828744762856012154989619732926521865823257789923071540018830662513691994498209157755199434877879631757618146892642931889931942724025914915349839604296372857587710210962472490951638783963584081078511567213650389247273591314467494664805570107196024058301675804165491726724919322782192938966991363908863774387011991901238617009793472556821689295460746489252975902161468226220593513937070429661309124822149528148039827718698621701800258972498996430002944212456382677799266529976240180837647799806480103501946248655525127611944828256937047298432143362575716163334494802770807108457973266435469180252710500259729070567636093740744248779275587197583260214913281565019458681058258885923613612281934338236193688581632059964723808120670368652885558226763038529223800396281353448744601248785477780724705858131817786430566640937618042176521940061112640538888155865436223464604423892400032061308433106859389380861990567135481284090726119317143868837988437053241205873944952048712593906759686931685937947378592970777133981735570051151215611794721309277926351090147461735322826476934081884141850654599017537535999920220803829955424507259333647739192588999492171315472125212308825752205634442580522980140000364138915993822585512689028308982607840712393461347181488673467051926027802586428584222141086345357531306474306787895800275853687526407784756174818466194401197922895555793377583626299156172076324765111891752775816082878271961388315196757467221524965271210169729340481682426293530032448406311233477746365410192377699668431713351009288025798391636350351493553163933444060120106178319422231188718757504070769215226872087804710600568035862944837880340401252354167826952883378115268937355461875566887951732011647832921942625947714150107564064237794165415304161795511935128850735395066692869321450703887762838108640865077111154041626953533517169511876748054490809669529946136437983178495610154056270100491500670183549741898645861544770639086489089981046352203171028170716387181770626571143763448281724572614174552763289463434496191019693747211995028589096522142473655559978004334258319637608387259919439460167942161269775009217803837439608717142547191011692659214906747718658790565250609367753337879240679717918287715929604512503216637324442310920161503675951103518676878343130473458164162778391589761142064114410876309842312116996160524333453129857921550402568137617089866974302552032083938388786733514532524767765935197976701178319286526193838846466711862366868096131434558209856016770728847783851390533211684754369722523399250072822911986977154017251086662232134332178531163748869020192487585075488755290943303010211384582934283053552929417998015486300037791627700766067897345060137505949656262839853265996012460103711725936204644892151898128153937010838275719641703660599360128513492789958810395306172847746201044737159696583771638257132875704506292484178143830711859704695203141267592104408971361251114565338753547099395122079944959643388413160471141839691810521811651182446978605794695150579582538268738238917038642346664199184578648932563280991895692108517533830136580231903337204375086804";
    printf("%d ",sizeof(a));
    printf("%d",sizeof(b));
    return 0;
}