#include "ZombieHorde.hpp"

Zombie	ZombieHorde::new_rand_zombie(void)
{
	const std::string name[] = {"Aaron", "Ab", "Abba", "Abbe", "Abbey", "Abbie", "Abbot", "Abbott", "Abby", "Abdel", "Abdul", "Abe", "Abel", "Abelard", "Abeu", "Abey", "Abie", "Abner", "Abraham", "Abrahan", "Abram", "Abramo", "Abran", "Ad", "Adair", "Adam", "Adamo", "Adams", "Adan", "Addie", "Addison", "Addy", "Ade", "Adelbert", "Adham", "Adlai", "Adler", "Ado", "Adolf", "Adolph", "Adolphe", "Adolpho", "Adolphus", "Adrian", "Adriano", "Adrien", "Agosto", "Aguie", "Aguistin", "Aguste", "Agustin", "Aharon", "Ahmad", "Ahmed", "Ailbert", "Akim", "Aksel", "Al", "Alain", "Alair", "Alan", "Aland", "Alano", "Alanson", "Alard", "Alaric", "Alasdair", "Alastair", "Alasteir", "Alaster", "Alberik", "Albert", "Alberto", "Albie", "Albrecht", "Alden", "Aldin", "Aldis", "Aldo", "Aldon", "Aldous", "Aldric", "Aldrich", "Aldridge", "Aldus", "Aldwin", "Alec", "Alejandro", "Alejoa", "Aleksandr", "Alessandro", "Alex", "Alexander", "Alexandr", "Alexandre", "Alexandro", "Alexandros", "Alexei", "Alexio", "Alexis", "Alf", "Alfie", "Alfons", "Alfonse", "Alfonso", "Alford", "Alfred", "Alfredo", "Alfy", "Algernon", "Ali", "Alic", "Alick", "Alisander", "Alistair", "Alister", "Alix", "Allan", "Allard", "Allayne", "Allen", "Alley", "Alleyn", "Allie", "Allin", "Allister", "Allistir", "Allyn", "Aloin", "Alon", "Alonso", "Alonzo", "Aloysius", "Alphard", "Alphonse", "Alphonso", "Alric", "Aluin", "Aluino", "Alva", "Alvan", "Alvie", "Alvin", "Alvis", "Alvy", "Alwin", "Alwyn", "Alyosha", "Amble", "Ambros", "Ambrose", "Ambrosi", "Ambrosio", "Ambrosius", "Amby", "Amerigo", "Amery", "Amory", "Amos", "Anatol", "Anatole", "Anatollo", "Ancell", "Anders", "Anderson", "Andie", "Andonis", "Andras", "Andre", "Andrea", "Andreas", "Andrej", "Andres", "Andrew", "Andrey", "Andris", 
"Andros", "Andrus", "Andy", "Ange", "Angel", "Angeli", "Angelico", "Angelo", "Angie", "Angus", "Ansel", "Ansell", "Anselm", "Anson", "Anthony", "Antin", "Antoine", "Anton", "Antone", "Antoni", "Antonin", "Antonino", 
"Antonio", "Antonius", "Antons", "Antony", "Any", "Ara", "Araldo", "Arch", "Archaimbaud", "Archambault", "Archer", "Archibald", "Archibaldo", "Archibold", "Archie", "Archy", "Arel", "Ari", "Arie", "Ariel", "Arin", "Ario", "Aristotle", "Arlan", "Arlen", "Arley", "Arlin", "Arman", "Armand", "Armando", "Armin", "Armstrong", "Arnaldo", "Arne", "Arney", "Arni", "Arnie", "Arnold", "Arnoldo", "Arnuad", "Arny", "Aron", "Arri", "Arron", 
"Art", "Artair", "Arte", "Artemas", "Artemis", "Artemus", "Arther", "Arthur", "Artie", "Artur", "Arturo", "Artus", "Arty", "Arv", "Arvie", "Arvin", "Arvy", "Asa", "Ase", "Ash", "Ashbey", "Ashby", "Asher", "Ashley", "Ashlin", "Ashton", "Aube", "Auberon", "Aubert", "Aubrey", "Augie", "August", "Augustin", "Augustine", "Augusto", "Augustus", "Augy", "Aurthur", "Austen", "Austin", "Ave", "Averell", "Averil", "Averill", "Avery", "Avictor", "Avigdor", "Avram", "Avrom", "Ax", "Axe", "Axel", "Aylmar", "Aylmer", "Aymer", "Bail", "Bailey", "Bailie", "Baillie", "Baily", "Baird", "Bald", "Balduin", "Baldwin", "Bale", "Ban", "Bancroft", "Bank", "Banky", "Bar", "Barbabas", "Barclay", "Bard", "Barde", "Barn", "Barnabas", "Barnabe", "Barnaby", "Barnard", "Barnebas", "Barnett", "Barney", "Barnie", "Barny", "Baron", "Barr", "Barret", "Barrett", "Barri", "Barrie", "Barris", "Barron", "Barry", "Bart", "Bartel", "Barth", "Barthel", "Bartholemy", "Bartholomeo", "Bartholomeus", "Bartholomew", "Bartie", "Bartlet", "Bartlett", "Bartolemo", "Bartolomeo", "Barton", "Bartram", "Barty", "Bary", "Baryram", "Base", "Basil", "Basile", "Basilio", "Basilius", "Bastian", "Bastien", "Bat", "Batholomew", "Baudoin", "Bax", "Baxie", "Baxter", "Baxy", "Bay", "Bayard", "Beale", "Bealle", "Bear", "Bearnard", "Beau", 
"Beaufort", "Beauregard", "Beck", "Beltran", "Ben", "Bendick", "Bendicty", "Bendix", "Benedetto", "Benedick", "Benedict", "Benedicto", "Benedikt", "Bengt", "Beniamino", "Benito", "Benjamen", "Benjamin", "Benji", "Benjie", "Benjy", "Benn", "Bennett", "Bennie", "Benny", "Benoit", "Benson", "Bent", "Bentlee", "Bentley", "Benton", "Benyamin", "Ber", "Berk", "Berke", "Berkeley", "Berkie", "Berkley", "Berkly", "Berky", "Bern", "Bernard", "Bernardo", "Bernarr", "Berne", "Bernhard", "Bernie", "Berny", "Bert", "Berti", "Bertie", "Berton", "Bertram", "Bertrand", "Bertrando", "Berty", "Bev", "Bevan", "Bevin", "Bevon", "Bil", "Bill", "Billie", "Billy", "Bing", "Bink", "Binky", "Birch", "Birk", "Biron", "Bjorn", "Blaine", "Blair", "Blake", "Blane", "Blayne", "Bo", "Bob", "Bobbie", "Bobby", "Bogart", "Bogey", "Boigie", "Bond", "Bondie", "Bondon", "Bondy", "Bone", "Boniface", "Boone", "Boonie", "Boony", "Boot", "Boote", "Booth", "Boothe", "Bord", "Borden", "Bordie", "Bordy", "Borg", "Boris", "Bourke", "Bowie", "Boy", "Boyce", "Boycey", "Boycie", "Boyd", "Brad", "Bradan", "Brade", "Braden", "Bradford", "Bradley", "Bradly", "Bradney", "Brady", "Bram", "Bran", "Brand", "Branden", "Brander", "Brandon", "Brandtr", "Brandy", "Brandyn", "Brannon", "Brant", "Brantley", "Bren", "Brendan", "Brenden", "Brendin", "Brendis", "Brendon", "Brennan", "Brennen", "Brent", "Bret", "Brett", "Brew", "Brewer", "Brewster", "Brian", "Briano", "Briant", "Brice", "Brien", "Brig", "Brigg", "Briggs", "Brigham", "Brion", "Brit", "Britt", "Brnaba", "Brnaby", "Brock", "Brockie", "Brocky", "Brod", "Broddie", "Broddy", "Broderic", "Broderick", "Brodie", "Brody", "Brok", "Bron", "Bronnie", "Bronny", "Bronson", "Brook", "Brooke", "Brooks", "Brose", 
"Bruce", "Brucie", "Bruis", "Bruno", "Bryan", "Bryant", "Bryanty", "Bryce", "Bryn", "Bryon", "Buck", "Buckie", "Bucky", "Bud", "Budd", "Buddie", "Buddy", "Buiron", "Burch", "Burg", "Burgess", "Burk", "Burke", "Burl", "Burlie", "Burnaby", "Burnard", "Burr", "Burt", "Burtie", "Burton", "Burty", "Butch", "Byram", "Byran", "Byrann", "Byrle", "Byrom", "Byron", "Cad", "Caddric", "Caesar", "Cal", "Caldwell", "Cale", "Caleb", "Calhoun", "Callean", "Calv", "Calvin", "Cam", "Cameron", "Camey", "Cammy", "Car", "Carce", "Care", "Carey", "Carl", "Carleton", "Carlie", "Carlin", "Carling", "Carlo", "Carlos", "Carly", "Carlyle", "Carmine", "Carney", "Carny", "Carolus", "Carr", "Carrol", "Carroll", "Carson", "Cart", "Carter", "Carver", "Cary", "Caryl", "Casar", "Case", "Casey", "Cash", "Caspar", "Casper", "Cass", "Cassie", "Cassius", "Caz", "Cazzie", "Cchaddie", "Cece", "Cecil", "Cecilio", "Cecilius", "Ced", "Cedric", "Cello", "Cesar", "Cesare", "Cesaro", "Chad", "Chadd", "Chaddie", "Chaddy", "Chadwick", "Chaim", "Chalmers", "Chan", "Chance", "Chancey", "Chandler", "Chane", "Chariot", "Charles", "Charley", "Charlie", "Charlton", "Chas", "Chase", "Chaunce", "Chauncey", "Che", "Chen", "Ches", "Chester", "Cheston", "Chet", "Chev", "Chevalier", "Chevy", "Chic", "Chick", "Chickie", "Chicky", "Chico", "Chilton", "Chip", "Chris", "Chrisse", "Chrissie", "Chrissy", "Christian", "Christiano", "Christie", "Christoffer", "Christoforo", "Christoper", "Christoph", "Christophe", "Christopher", "Christophorus", "Christos", "Christy", "Chrisy", "Chrotoem", "Chucho", "Chuck", "Cirillo", "Cirilo", "Ciro", "Claiborn", "Claiborne", "Clair", "Claire", "Clarance", "Clare", "Clarence", "Clark", "Clarke", "Claudell", "Claudian", "Claudianus", "Claudio", "Claudius", "Claus", "Clay", "Clayborn", "Clayborne", "Claybourne", "Clayson", "Clayton", "Cleavland", "Clem", "Clemens", "Clement", "Clemente", "Clementius", "Clemmie", "Clemmy", "Cleon", "Clerc", "Cletis", "Cletus", "Cleve", "Cleveland", "Clevey", "Clevie", "Cliff", "Clifford", "Clim", "Clint", "Clive", "Cly", "Clyde", "Clyve", "Clywd", "Cob", "Cobb", "Cobbie", "Cobby", "Codi", "Codie", "Cody", "Cointon", "Colan", "Colas", "Colby", "Cole", "Coleman", "Colet", "Colin", "Collin", "Colman", "Colver", "Con", "Conan", "Conant", "Conn", "Conney", "Connie", "Connor", "Conny", "Conrad", "Conrade", "Conrado", "Conroy", "Consalve", "Constantin", "Constantine", "Constantino", "Conway", "Coop", "Cooper", "Corbet", "Corbett", "Corbie", "Corbin", "Corby", "Cord", "Cordell", "Cordie", "Cordy", "Corey", "Cori", "Cornall", "Cornelius", "Cornell", "Corney", "Cornie", "Corny", "Correy", "Corrie", "Cort", "Cortie", "Corty", "Cory", "Cos", "Cosimo", "Cosme", "Cosmo", "Costa", "Court", "Courtnay", "Courtney", "Cozmo", "Craggie", "Craggy", "Craig", "Crawford", "Creigh", 
"Creight", "Creighton", "Crichton", "Cris", "Cristian", "Cristiano", "Cristobal", "Crosby", "Cross", "Cull", "Cullan", "Cullen", "Culley", "Cullie", "Cullin", "Cully", "Culver", "Curcio", "Curr", "Curran", "Currey", 
"Currie", "Curry", "Curt", "Curtice", "Curtis", "Cy", "Cyril", "Cyrill", "Cyrille", "Cyrillus", "Cyrus", "Dael", "Dag", "Dagny", "Dal", "Dale", "Dalis", "Dall", "Dallas", "Dalli", "Dallis", "Dallon", "Dalston", "Dalt", "Dalton", "Dame", "Damian", "Damiano", "Damien", "Damon", "Dan", "Dana", "Dane", "Dani", "Danie", "Daniel", "Dannel", "Dannie", "Danny", "Dante", "Danya", "Dar", "Darb", "Darbee", "Darby", "Darcy", "Dare", "Daren", "Darill", "Darin", "Dario", "Darius", "Darn", "Darnall", "Darnell", "Daron", "Darrel", "Darrell", "Darren", "Darrick", "Darrin", "Darryl", "Darwin", "Daryl", "Daryle", "Dav", "Dave", "Daven", "Davey", "David", "Davidde", "Davide", "Davidson", "Davie", "Davin", "Davis", "Davon", "Davy", "De Witt", "Dean", "Deane", "Decca", "Deck", "Del", "Delainey", "Delaney", "Delano", "Delbert", "Dell", "Delmar", "Delmer", "Delmor", "Delmore", "Demetre", "Demetri", "Demetris", "Demetrius", "Demott", "Den", "Dene", "Denis", "Dennet", "Denney", "Dennie", "Dennis", "Dennison", "Denny", "Denver", "Denys", "Der", "Derby", "Derek", "Derick", "Derk", 
"Dermot", "Derrek", "Derrick", "Derrik", "Derril", "Derron", "Derry", "Derward", "Derwin", "Des", "Desi", "Desmond", "Desmund", "Dev", "Devin", "Devland", "Devlen", "Devlin", "Devy", "Dew", "Dewain", "Dewey", "Dewie", "Dewitt", "Dex", "Dexter", "Diarmid", "Dick", "Dickie", "Dicky", "Diego", "Dieter", "Dietrich", "Dilan", "Dill", "Dillie", "Dillon", "Dilly", "Dimitri", "Dimitry", "Dino", "Dion", "Dionisio", "Dionysus", "Dirk", "Dmitri", "Dolf", "Dolph", "Dom", "Domenic", "Domenico", "Domingo", "Dominic", "Dominick", "Dominik", "Dominique", "Don", "Donal", "Donall", "Donalt", "Donaugh", "Donavon", "Donn", "Donnell", "Donnie", "Donny", "Donovan", "Dore", "Dorey", "Dorian", "Dorie", "Dory", "Doug", "Dougie", "Douglas", "Douglass", "Dougy", "Dov", "Doy", "Doyle", "Drake", "Drew", "Dru", "Drud", "Drugi", "Duane", "Dud", "Dudley", "Duff", "Duffie", "Duffy", "Dugald", "Duke", "Dukey", "Dukie", "Duky", "Dun", "Dunc", "Duncan", "Dunn", "Dunstan", "Dur", "Durand", "Durant", "Durante", "Durward", "Dwain", "Dwayne", "Dwight", "Dylan", "Eadmund", "Eal", "Eamon", "Earl", "Earle", "Earlie", "Early", "Earvin", "Eb", "Eben", "Ebeneser", "Ebenezer", "Eberhard", "Eberto", "Ed", "Edan", "Edd", "Eddie", "Eddy", "Edgar", "Edgard", "Edgardo", "Edik", "Edlin", "Edmon", "Edmund", "Edouard", "Edsel", "Eduard", "Eduardo", "Eduino", "Edvard", "Edward", "Edwin", "Efrem", "Efren", "Egan", "Egbert", "Egon", "Egor", "El", "Elbert", "Elden", "Eldin", "Eldon", "Eldredge", "Eldridge", "Eli", "Elia", "Elias", "Elihu", "Elijah", "Eliot", "Elisha", "Ellary", "Ellerey", "Ellery", "Elliot", "Elliott", "Ellis", "Ellswerth", "Ellsworth", "Ellwood", "Elmer", "Elmo", "Elmore", "Elnar", "Elroy", "Elston", "Elsworth", "Elton", "Elvin", "Elvis", 
"Elvyn", "Elwin", "Elwood", "Elwyn", "Ely", "Em", "Emanuel", "Emanuele", "Emelen", "Emerson", "Emery", "Emile", "Emilio", "Emlen", "Emlyn", "Emmanuel", "Emmerich", "Emmery", "Emmet", "Emmett", "Emmit", "Emmott", "Emmy", "Emory", "Engelbert", "Englebert", "Ennis", "Enoch", "Enos", "Enrico", "Enrique", "Ephraim", "Ephrayim", "Ephrem", "Erasmus", "Erastus", "Erek", "Erhard", "Erhart", "Eric", "Erich", "Erick", "Erie", "Erik", "Erin", "Erl", "Ermanno", "Ermin", "Ernest", "Ernesto", "Ernestus", "Ernie", "Ernst", "Erny", "Errick", "Errol", "Erroll", "Erskine", "Erv", "ErvIn", "Erwin", "Esdras", "Esme", "Esra", "Esteban", "Estevan", "Etan", "Ethan", "Ethe", "Ethelbert", "Ethelred", "Etienne", "Ettore", "Euell", "Eugen", "Eugene", "Eugenio", "Eugenius", "Eustace", "Ev", "Evan", "Evelin", "Evelyn", "Even", "Everard", "Evered", "Everett", "Evin", "Evyn", "Ewan", "Eward", "Ewart", "Ewell", "Ewen", "Ezechiel", "Ezekiel", "Ezequiel", "Eziechiele", "Ezra", "Ezri", "Fabe", "Faber", "Fabian", "Fabiano", "Fabien", "Fabio", "Fair", "Fairfax", "Fairleigh", "Fairlie", "Falito", "Falkner", "Far", "Farlay", "Farlee", "Farleigh", "Farley", "Farlie", "Farly", "Farr", "Farrel", "Farrell", "Farris", "Faulkner", "Fax", "Federico", "Fee", "Felic", "Felice", "Felicio", "Felike", "Feliks", "Felipe", "Felix", "Felizio", "Feodor", "Ferd", "Ferdie", "Ferdinand", "Ferdy", "Fergus", "Ferguson", "Fernando", "Ferrel", "Ferrell", "Ferris", "Fidel", "Fidelio", "Fidole", "Field", "Fielding", "Fields", "Filbert", "Filberte", "Filberto", "Filip", "Filippo", "Filmer", "Filmore", "Fin", "Findlay", "Findley", "Finlay", "Finley", "Finn", "Fitz", "Fitzgerald", "Flem", "Fleming", "Flemming", "Fletch", "Fletcher", "Flin", "Flinn", "Flint", "Florian", "Flory", "Floyd", "Flynn", "Fons", "Fonsie", "Fonz", "Fonzie", "Forbes", "Ford", "Forest", "Forester", "Forrest", "Forrester", "Forster", "Foss", "Foster", "Fowler", "Fran", "Francesco", "Franchot", "Francis", "Francisco", "Franciskus", "Francklin", "Francklyn", "Francois", "Frank", "Frankie", "Franklin", "Franklyn", "Franky", "Frannie", "Franny", "Frans", "Fransisco", "Frants", "Franz", "Franzen", "Frasco", "Fraser", "Frasier", "Frasquito", "Fraze", "Frazer", "Frazier", "Fred", "Freddie", "Freddy", "Fredek", "Frederic", "Frederich", "Frederick", "Frederico", "Frederigo", "Frederik", "Fredric", "Fredrick", "Free", "Freedman", "Freeland", "Freeman", "Freemon", "Fremont", "Friedrich", "Friedrick", "Fritz", "Fulton", "Gabbie", "Gabby", "Gabe", "Gabi", "Gabie", "Gabriel", "Gabriele", "Gabriello", "Gaby", "Gael", "Gaelan", "Gage", "Gail", "Gaile", "Gal", "Gale", "Galen", "Gallagher", "Gallard", "Galvan", "Galven", "Galvin", "Gamaliel", "Gan", "Gannie", "Gannon", "Ganny", "Gar", "Garald", "Gard", "Gardener", "Gardie", "Gardiner", "Gardner", "Gardy", "Gare", "Garek", "Gareth", "Garey", "Garfield", "Garik", "Garner", "Garold", "Garrard", "Garrek", "Garret", "Garreth", "Garrett", "Garrick", "Garrik", "Garrot", "Garrott", "Garry", "Garth", "Garv", "Garvey", "Garvin", "Garvy", "Garwin", "Garwood", "Gary", "Gaspar", "Gaspard", "Gasparo", "Gasper", "Gaston", "Gaultiero", "Gauthier", "Gav", "Gavan", "Gaven", "Gavin", "Gawain", "Gawen", "Gay", "Gayelord", "Gayle", "Gayler", "Gaylor", "Gaylord", "Gearalt", "Gearard", "Gene", "Geno", "Geoff", "Geoffrey", "Geoffry", "Georas", "Geordie", "Georg", "George", "Georges", "Georgi", "Georgie", "Georgy", "Gerald", "Gerard", "Gerardo", "Gerek", "Gerhard", "Gerhardt", "Geri", "Gerick", "Gerik", "Germain", "Germaine", "Germayne", "Gerome", "Gerrard", "Gerri", "Gerrie", "Gerry", "Gery", "Gherardo", "Giacobo", "Giacomo", "Giacopo", "Gian", "Gianni", "Giavani", "Gib", "Gibb", "Gibbie", "Gibby", "Gideon", "Giff", "Giffard", "Giffer", "Giffie", "Gifford", "Giffy", "Gil", "Gilbert", "Gilberto", "Gilburt", "Giles", "Gill", "Gilles", "Ginger", "Gino", "Giordano", "Giorgi", "Giorgio", "Giovanni", "Giraldo", "Giraud", "Giselbert", "Giulio", "Giuseppe", "Giustino", "Giusto", "Glen", "Glenden", "Glendon", "Glenn", "Glyn", "Glynn", "Godard", "Godart", "Goddard", "Goddart", "Godfree", "Godfrey", "Godfry", "Godwin", "Gonzales", "Gonzalo", "Goober", "Goran", "Goraud", "Gordan", "Gorden", "Gordie", "Gordon", "Gordy", "Gothart", "Gottfried", "Grace", "Gradeigh", "Gradey", "Grady", "Graehme", "Graeme", "Graham", "Graig", "Gram", "Gran", "Grange", "Granger", "Grannie", "Granny", "Grant", "Grantham", "Granthem", "Grantley", "Granville", "Gray", "Greg", "Gregg", "Greggory", "Gregoire", "Gregoor", "Gregor", "Gregorio", "Gregorius", "Gregory", "Grenville", "Griff", "Griffie", "Griffin", "Griffith", "Griffy", "Gris", "Griswold", "Griz", "Grove", "Grover", "Gualterio", "Guglielmo", "Guido", "Guilbert", "Guillaume", "Guillermo", "Gun", "Gunar", "Gunner", "Guntar", "Gunter", "Gunther", "Gus", "Guss", "Gustaf", "Gustav", "Gustave", "Gustavo", "Gustavus", "Guthrey", "Guthrie", "Guthry", "Guy", "Had", "Hadlee", "Hadleigh", "Hadley", "Hadrian", "Hagan", "Hagen", "Hailey", "Haily", "Hakeem", "Hakim", "Hal", "Hale", "Haleigh", "Haley", "Hall", "Hallsy", "Halsey", "Halsy", "Ham", "Hamel", "Hamid", "Hamil", "Hamilton", "Hamish", "Hamlen", "Hamlin", "Hammad", "Hamnet", "Hanan", "Hank", "Hans", "Hansiain", "Hanson", "Harald", "Harbert", "Harcourt", "Hardy", "Harlan", "Harland", "Harlen", "Harley", "Harlin", "Harman", "Harmon", "Harold", "Haroun", "Harp", "Harper", "Harris", "Harrison", "Harry", "Hart", "Hartley", "Hartwell", "Harv", "Harvey", "Harwell", "Harwilll", "Hasheem", "Hashim", "Haskel", "Haskell", "Haslett", "Hastie", "Hastings", "Hasty", "Haven", "Hayden", "Haydon", "Hayes", "Hayward", "Haywood", "Hayyim", "Haze", "Hazel", "Hazlett", "Heall", "Heath", "Hebert", "Hector", "Heindrick", "Heinrick", "Heinrik", "Henderson", "Hendrick", "Hendrik", "Henri", "Henrik", "Henry", "Herb", "Herbert", "Herbie", "Herby", "Herc", "Hercule", "Hercules", "Herculie", "Heriberto", "Herman", "Hermann", "Hermie", "Hermon", "Hermy", "Hernando", "Herold", "Herrick", "Hersch", "Herschel", "Hersh", "Hershel", "Herve", "Hervey", "Hew", "Hewe", "Hewet", "Hewett", "Hewie", "Hewitt", "Heywood", "Hi", "Hieronymus", "Hilario", "Hilarius", "Hilary", "Hill", "Hillard", "Hillary", "Hillel", "Hillery", "Hilliard", "Hillie", "Hillier", "Hilly", "Hillyer", "Hilton", "Hinze", "Hiram", "Hirsch", "Hobard", "Hobart", "Hobey", "Hobie", "Hodge", "Hoebart", "Hogan", "Holden", "Hollis", "Holly", "Holmes", "Holt", "Homer", "Homere", "Homerus", "Horace", "Horacio", "Horatio", "Horatius", "Horst", "Hort", "Horten", "Horton", "Howard", "Howey", "Howie", "Hoyt", "Hube", "Hubert", "Huberto", "Hubey", "Hubie", "Huey", "Hugh", "Hughie", "Hugibert", "Hugo", "Hugues", "Humbert", "Humberto", "Humfrey", "Humfrid", "Humfried", "Humphrey", "Hunfredo", "Hunt", "Hunter", "Huntington", "Huntlee", "Huntley", "Hurlee", "Hurleigh", "Hurley", "Husain", "Husein", "Hussein", "Hy", "Hyatt", "Hyman", "Hymie", "Iago", "Iain", "Ian", "Ibrahim", "Ichabod", "Iggie", "Iggy", "Ignace", "Ignacio", "Ignacius", "Ignatius", "Ignaz", "Ignazio", "Igor", "Ike", "Ikey", "Ilaire", "Ilario", "Immanuel", "Ingamar", "Ingar", "Ingelbert", "Ingemar", "Inger", "Inglebert", "Inglis", "Ingmar", "Ingra", "Ingram", "Ingrim", "Inigo", "Inness", "Innis", "Iorgo", "Iorgos", "Iosep", "Ira", "Irv", "Irvin", "Irvine", "Irving", "Irwin", "Irwinn", "Isa", "Isaac", "Isaak", "Isac", "Isacco", "Isador", "Isadore", "Isaiah", "Isak", "Isiahi", "Isidor", "Isidore", "Isidoro", "Isidro", "Israel", "Issiah", "Itch", "Ivan", "Ivar", "Ive", "Iver", "Ives", "Ivor", "Izaak", "Izak", "Izzy", "Jabez", "Jack", "Jackie", "Jackson", "Jacky", "Jacob", "Jacobo", "Jacques", "Jae", "Jaime", "Jaimie", "Jake", "Jakie", "Jakob", "Jamaal", "Jamal", "James", "Jameson", "Jamesy", "Jamey", "Jamie", "Jamil", "Jamill", "Jamison", "Jammal", "Jan", "Janek", "Janos", "Jarad", "Jard", "Jareb", "Jared", "Jarib", "Jarid", "Jarrad", "Jarred", "Jarret", "Jarrett", "Jarrid", "Jarrod", "Jarvis", "Jase", "Jasen", "Jason", "Jasper", "Jasun", "Javier", "Jay", "Jaye", "Jayme", "Jaymie", "Jayson", "Jdavie", "Jean", "Jecho", "Jed", "Jedd", "Jeddy", "Jedediah", "Jedidiah", "Jeff", "Jefferey", "Jefferson", "Jeffie", "Jeffrey", "Jeffry", "Jeffy", "Jehu", "Jeno", "Jens", "Jephthah", "Jerad", "Jerald", "Jeramey", "Jeramie", "Jere", "Jereme", "Jeremiah", "Jeremias", "Jeremie", "Jeremy", "Jermain", "Jermaine", "Jermayne", "Jerome", "Jeromy", "Jerri", "Jerrie", "Jerrold", "Jerrome", "Jerry", "Jervis", "Jess", "Jesse", "Jessee", "Jessey", "Jessie", "Jesus", "Jeth", "Jethro", "Jim", "Jimmie", "Jimmy", "Jo", "Joachim", "Joaquin", "Job", "Jock", "Jocko", "Jodi", "Jodie", "Jody", "Joe", "Joel", "Joey", "Johan", "Johann", "Johannes", "John", "Johnathan", "Johnathon", "Johnnie", "Johnny", "Johny", "Jon", "Jonah", "Jonas", "Jonathan", "Jonathon", "Jone", "Jordan", "Jordon", "Jorgan", "Jorge", "Jory", "Jose", "Joseito", "Joseph", "Josh", "Joshia", "Joshua", "Joshuah", "Josiah", "Josias", "Jourdain", "Jozef", "Juan", "Jud", "Judah", "Judas", "Judd", "Jude", "Judon", "Jule", "Jules", "Julian", "Julie", "Julio", "Julius", "Justen", "Justin", "Justinian", "Justino", "Justis", "Justus", "Kahaleel", "Kahlil", "Kain", "Kaine", "Kaiser", "Kale", "Kaleb", "Kalil", "Kalle", "Kalvin", "Kane", "Kareem", "Karel", "Karim", "Karl", "Karlan", "Karlens", "Karlik", "Karlis", "Karney", "Karoly", "Kaspar", "Kasper", "Kayne", "Kean", "Keane", "Kearney", "Keary", "Keefe", "Keefer", "Keelby", "Keen", "Keenan", "Keene", "Keir", "Keith", "Kelbee", "Kelby", "Kele", "Kellby", "Kellen", "Kelley", "Kelly", "Kelsey", "Kelvin", "Kelwin", "Ken", "Kendal", "Kendall", "Kendell", "Kendrick", "Kendricks", "Kenn", "Kennan", "Kennedy", "Kenneth", "Kennett", "Kennie", "Kennith", "Kenny", "Kenon", "Kent", "Kenton", "Kenyon", "Ker", "Kerby", "Kerk", "Kermie", "Kermit", "Kermy", "Kerr", "Kerry", "Kerwin", "Kerwinn", "Kev", "Kevan", "Keven", "Kevin", "Kevon", "Khalil", "Kiel", "Kienan", "Kile", "Kiley", "Kilian", "Killian", "Killie", "Killy", "Kim", "Kimball", 
"Kimbell", "Kimble", "Kin", "Kincaid", "King", "Kingsley", "Kingsly", "Kingston", "Kinnie", "Kinny", "Kinsley", "Kip", "Kipp", "Kippar", "Kipper", "Kippie", "Kippy", "Kirby", "Kirk", "Kit", "Klaus", "Klemens", "Klement", "Kleon", "Kliment", "Knox", "Koenraad", "Konrad", "Konstantin", "Konstantine", "Korey", "Kort", "Kory", "Kris", "Krisha", "Krishna", "Krishnah", "Krispin", "Kristian", "Kristo", "Kristofer", "Kristoffer", "Kristofor", "Kristoforo", "Kristopher", "Kristos", "Kurt", "Kurtis", "Ky", "Kyle", "Kylie", "Laird", "Lalo", "Lamar", "Lambert", "Lammond", "Lamond", "Lamont", "Lance", "Lancelot", "Land", "Lane", "Laney", "Langsdon", "Langston", "Lanie", "Lannie", "Lanny", "Larry", "Lars", "Laughton", "Launce", "Lauren", "Laurence", "Laurens", "Laurent", "Laurie", "Lauritz", "Law", "Lawrence", "Lawry", "Lawton", "Lay", "Layton", "Lazar", "Lazare", "Lazaro", "Lazarus", "Lee", "Leeland", "Lefty", "Leicester", "Leif", "Leigh", "Leighton", "Lek", "Leland", "Lem", "Lemar", "Lemmie", "Lemmy", "Lemuel", "Lenard", "Lenci", "Lennard", "Lennie", "Leo", "Leon", "Leonard", "Leonardo", "Leonerd", "Leonhard", "Leonid", "Leonidas", "Leopold", "Leroi", "Leroy", "Les", "Lesley", "Leslie", "Lester", "Leupold", "Lev", "Levey", "Levi", "Levin", "Levon", "Levy", "Lew", "Lewes", "Lewie", "Lewiss", "Lezley", "Liam", "Lief", "Lin", "Linc", "Lincoln", "Lind", "Lindon", "Lindsay", "Lindsey", "Lindy", "Link", "Linn", "Linoel", "Linus", "Lion", "Lionel", "Lionello", "Lisle", "Llewellyn", "Lloyd", "Llywellyn", "Lock", "Locke", "Lockwood", "Lodovico", "Logan", "Lombard", "Lon", "Lonnard", "Lonnie", "Lonny", "Lorant", "Loren", "Lorens", "Lorenzo", "Lorin", "Lorne", "Lorrie", "Lorry", "Lothaire", "Lothario", "Lou", "Louie", "Louis", "Lovell", "Lowe", "Lowell", "Lowrance", "Loy", "Loydie", "Luca", "Lucais", "Lucas", "Luce", "Lucho", "Lucian", "Luciano", "Lucias", "Lucien", "Lucio", "Lucius", "Ludovico", "Ludvig", "Ludwig", "Luigi", "Luis", 
"Lukas", "Luke", "Lutero", "Luther", "Ly", "Lydon", "Lyell", "Lyle", "Lyman", "Lyn", "Lynn", "Lyon", "Mac", "Mace", "Mack", "Mackenzie", "Maddie", "Maddy", "Madison", "Magnum", "Mahmoud", "Mahmud", "Maison", "Maje", 
"Major", "Mal", "Malachi", "Malchy", "Malcolm", "Mallory", "Malvin", "Man", "Mandel", "Manfred", "Mannie", "Manny", "Mano", "Manolo", "Manuel", "Mar", "Marc", "Marcel", "Marcello", "Marcellus", "Marcelo", "Marchall", "Marco", "Marcos", "Marcus", "Marijn", "Mario", "Marion", "Marius", "Mark", "Markos", "Markus", "Marlin", "Marlo", "Marlon", "Marlow", "Marlowe", "Marmaduke", "Marsh", "Marshal", "Marshall", "Mart", "Martainn", "Marten", "Martie", "Martin", "Martino", "Marty", "Martyn", "Marv", "Marve", "Marven", "Marvin", "Marwin", "Mason", "Massimiliano", "Massimo", "Mata", "Mateo", "Mathe", "Mathew", "Mathian", "Mathias", "Matias", "Matt", "Matteo", "Matthaeus", "Mattheus", "Matthew", "Matthias", "Matthieu", "Matthiew", "Matthus", "Mattias", "Mattie", "Matty", "Maurice", "Mauricio", "Maurie", "Maurise", "Maurits", "Maurizio", "Maury", "Max", "Maxie", "Maxim", "Maximilian", "Maximilianus", "Maximilien", "Maximo", "Maxwell", "Maxy", "Mayer", "Maynard", "Mayne", "Maynord", "Mayor", "Mead", "Meade", "Meier", "Meir", "Mel", "Melvin", "Melvyn", "Menard", "Mendel", "Mendie", "Mendy", "Meredeth", "Meredith", "Merell", "Merill", "Merle", "Merrel", "Merrick", "Merrill", "Merry", "Merv", "Mervin", "Merwin", "Merwyn", "Meryl", "Meyer", "Mic", "Micah", "Michael", "Michail", "Michal", "Michale", "Micheal", "Micheil", "Michel", "Michele", "Mick", "Mickey", "Mickie", "Micky", "Miguel", "Mikael", "Mike", "Mikel", "Mikey", "Mikkel", "Mikol", "Mile", "Miles", "Mill", "Millard", "Miller", "Milo", "Milt", "Miltie", "Milton", "Milty", "Miner", "Minor", "Mischa", "Mitch", "Mitchael", "Mitchel", "Mitchell", "Moe", "Mohammed", "Mohandas", "Mohandis", "Moise", "Moises", "Moishe", "Monro", "Monroe", "Montague", "Monte", "Montgomery", "Monti", "Monty", "Moore", "Mord", "Mordecai", "Mordy", "Morey", "Morgan", "Morgen", "Morgun", "Morie", "Moritz", "Morlee", "Morley", "Morly", "Morrie", "Morris", "Morry", "Morse", "Mort", "Morten", "Mortie", "Mortimer", "Morton", "Morty", "Mose", "Moses", "Moshe", "Moss", "Mozes", "Muffin", "Muhammad", "Munmro", "Munroe", "Murdoch", "Murdock", "Murray", "Murry", "Murvyn", "My", "Myca", "Mycah", "Mychal", "Myer", "Myles", "Mylo", "Myron", "Myrvyn", "Myrwyn", "Nahum", "Nap", "Napoleon", "Nappie", "Nappy", "Nat", "Natal", "Natale", "Nataniel", "Nate", "Nathan", "Nathanael", "Nathanial", "Nathaniel", "Nathanil", "Natty", "Neal", "Neale", "Neall", "Nealon", "Nealson", "Nealy", "Ned", "Neddie", "Neddy", "Neel", "Nefen", "Nehemiah", "Neil", "Neill", "Neils", "Nels", "Nelson", "Nero", "Neron", "Nester", "Nestor", "Nev", "Nevil", "Nevile", "Neville", "Nevin", "Nevins", "Newton", "Nial", "Niall", "Niccolo", "Nicholas", "Nichole", "Nichols", "Nick", "Nickey", "Nickie", "Nicko", "Nickola", "Nickolai", "Nickolas", "Nickolaus", "Nicky", "Nico", "Nicol", "Nicola", "Nicolai", "Nicolais", "Nicolas", "Nicolis", "Niel", "Niels", "Nigel", "Niki", "Nikita", "Nikki", "Niko", "Nikola", "Nikolai", "Nikolaos", "Nikolas", "Nikolaus", "Nikolos", "Nikos", "Nil", "Niles", "Nils", "Nilson", "Niven", "Noach", "Noah", "Noak", "Noam", "Nobe", "Nobie", "Noble", "Noby", "Noe", "Noel", "Nolan", "Noland", "Noll", "Nollie", "Nolly", "Norbert", "Norbie", "Norby", "Norman", "Normand", "Normie", "Normy", "Norrie", "Norris", "Norry", "North", "Northrop", "Northrup", "Norton", "Nowell", "Nye", "Oates", "Obadiah", "Obadias", "Obed", "Obediah", "Oberon", "Obidiah", "Obie", "Oby", "Octavius", "Ode", "Odell", "Odey", "Odie", "Odo", "Ody", "Ogdan", "Ogden", "Ogdon", "Olag", "Olav", "Ole", "Olenolin", "Olin", "Oliver", "Olivero", "Olivier", "Oliviero", "Ollie", "Olly", "Olvan", "Omar", "Omero", "Onfre", "Onfroi", "Onofredo", "Oran", "Orazio", "Orbadiah", "Oren", "Orin", "Orion", "Orlan", "Orland", "Orlando", "Orran", "Orren", "Orrin", "Orson", "Orton", "Orv", "Orville", "Osbert", "Osborn", "Osborne", "Osbourn", "Osbourne", "Osgood", "Osmond", "Osmund", "Ossie", 
"Oswald", "Oswell", "Otes", "Othello", "Otho", "Otis", "Otto", "Owen", "Ozzie", "Ozzy", "Pablo", "Pace", "Packston", "Paco", "Pacorro", "Paddie", "Paddy", "Padget", "Padgett", "Padraic", "Padraig", "Padriac", "Page", "Paige", "Pail", "Pall", "Palm", "Palmer", "Panchito", "Pancho", "Paolo", "Papageno", "Paquito", "Park", "Parke", "Parker", "Parnell", "Parrnell", "Parry", "Parsifal", "Pascal", "Pascale", "Pasquale", "Pat", "Pate", "Paten", "Patin", "Paton", "Patric", "Patrice", "Patricio", "Patrick", "Patrizio", "Patrizius", "Patsy", "Patten", "Pattie", "Pattin", "Patton", "Patty", "Paul", "Paulie", "Paulo", "Pauly", "Pavel", "Pavlov", "Paxon", "Paxton", "Payton", "Peadar", "Pearce", "Pebrook", "Peder", "Pedro", "Peirce", "Pembroke", "Pen", "Penn", "Pennie", "Penny", "Penrod", "Pepe", "Pepillo", "Pepito", "Perceval", "Percival", "Percy", "Perice", "Perkin", "Pernell", "Perren", "Perry", "Pete", "Peter", "Peterus", "Petey", "Petr", "Peyter", "Peyton", "Phil", "Philbert", "Philip", "Phillip", "Phillipe", "Phillipp", "Phineas", "Phip", "Pierce", "Pierre", "Pierson", "Pieter", "Pietrek", "Pietro", "Piggy", "Pincas", "Pinchas", "Pincus", "Piotr", "Pip", "Pippo", "Pooh", "Port", "Porter", "Portie", "Porty", "Poul", "Powell", "Pren", "Prent", "Prentice", "Prentiss", "Prescott", "Preston", "Price", "Prince", "Prinz", "Pryce", "Puff", "Purcell", "Putnam", "Putnem", "Pyotr", "Quent", "Quentin", "Quill", "Quillan", "Quincey", "Quincy", "Quinlan", "Quinn", "Quint", "Quintin", "Quinton", "Quintus", "Rab", "Rabbi", "Rabi", "Rad", "Radcliffe", "Raddie", "Raddy", "Rafael", "Rafaellle", "Rafaello", "Rafe", "Raff", "Raffaello", "Raffarty", "Rafferty", "Rafi", "Ragnar", "Raimondo", "Raimund", "Raimundo", "Rainer", "Raleigh", "Ralf", "Ralph", "Ram", "Ramon", "Ramsay", "Ramsey", "Rance", "Rancell", "Rand", "Randal", "Randall", "Randell", "Randi", "Randie", "Randolf", "Randolph", "Randy", "Ransell", "Ransom", "Raoul", "Raphael", "Raul", "Ravi", "Ravid", "Raviv", "Rawley", "Ray", "Raymond", "Raymund", "Raynard", "Rayner", "Raynor", "Read", "Reade", "Reagan", "Reagen", "Reamonn", "Red", "Redd", "Redford", "Reece", "Reed", "Rees", "Reese", "Reg", "Regan", "Regen", "Reggie", "Reggis", "Reggy", "Reginald", "Reginauld", "Reid", "Reidar", "Reider", "Reilly", "Reinald", "Reinaldo", "Reinaldos", "Reinhard", "Reinhold", "Reinold", "Reinwald", "Rem", "Remington", "Remus", "Renado", "Renaldo", "Renard", "Renato", "Renaud", "Renault", "Rene", "Reube", "Reuben", "Reuven", "Rex", "Rey", "Reynard", "Reynold", "Reynolds", "Rhett", "Rhys", "Ric", "Ricard", "Ricardo", "Riccardo", "Rice", 
"Rich", "Richard", "Richardo", "Richart", "Richie", "Richmond", "Richmound", "Richy", "Rick", "Rickard", "Rickert", "Rickey", "Ricki", "Rickie", "Ricky", "Ricoriki", "Rik", "Rikki", "Riley", "Rinaldo", "Ring", "Ringo", "Riobard", "Riordan", "Rip", "Ripley", "Ritchie", "Roarke", "Rob", "Robb", "Robbert", "Robbie", "Robby", "Robers", "Robert", "Roberto", "Robin", "Robinet", "Robinson", "Rochester", "Rock", "Rockey", "Rockie", "Rockwell", "Rocky", "Rod", "Rodd", "Roddie", "Roddy", "Roderic", "Roderich", "Roderick", "Roderigo", "Rodge", "Rodger", "Rodney", "Rodolfo", "Rodolph", "Rodolphe", "Rodrick", "Rodrigo", "Rodrique", "Rog", "Roger", "Rogerio", "Rogers", "Roi", "Roland", "Rolando", "Roldan", "Roley", "Rolf", "Rolfe", "Rolland", "Rollie", "Rollin", "Rollins", "Rollo", "Rolph", "Roma", "Romain", "Roman", "Romeo", "Ron", "Ronald", "Ronnie", "Ronny", "Rooney", "Roosevelt", "Rorke", "Rory", "Rosco", "Roscoe", "Ross", "Rossie", "Rossy", "Roth", "Rourke", "Rouvin", "Rowan", "Rowen", "Rowland", "Rowney", "Roy", "Royal", "Royall", "Royce", "Rriocard", "Rube", "Ruben", "Rubin", "Ruby", "Rudd", "Ruddie", "Ruddy", "Rudie", "Rudiger", "Rudolf", "Rudolfo", "Rudolph", "Rudy", "Rudyard", "Rufe", "Rufus", "Ruggiero", "Rupert", "Ruperto", "Ruprecht", "Rurik", "Russ", "Russell", "Rustie", "Rustin", "Rusty", "Rutger", "Rutherford", "Rutledge", "Rutter", "Ruttger", "Ruy", "Ryan", "Ryley", "Ryon", "Ryun", "Sal", "Saleem", "Salem", "Salim", "Salmon", "Salomo", "Salomon", "Salomone", "Salvador", "Salvatore", "Salvidor", "Sam", "Sammie", "Sammy", "Sampson", "Samson", "Samuel", "Samuele", "Sancho", "Sander", "Sanders", "Sanderson", "Sandor", "Sandro", "Sandy", "Sanford", "Sanson", "Sansone", "Sarge", "Sargent", "Sascha", "Sasha", "Saul", "Sauncho", "Saunder", "Saunders", "Saunderson", "Saundra", "Sauveur", "Saw", "Sawyer", "Sawyere", "Sax", "Saxe", "Saxon", "Say", "Sayer", "Sayers", "Sayre", "Sayres", "Scarface", "Schuyler", "Scot", "Scott", "Scotti", "Scottie", "Scotty", "Seamus", "Sean", "Sebastian", "Sebastiano", "Sebastien", "See", "Selby", "Selig", "Serge", "Sergeant", "Sergei", "Sergent", "Sergio", "Seth", "Seumas", "Seward", "Seymour", "Shadow", "Shae", "Shaine", "Shalom", "Shamus", "Shanan", "Shane", "Shannan", "Shannon", "Shaughn", "Shaun", "Shaw", "Shawn", "Shay", "Shayne", "Shea", "Sheff", "Sheffie", "Sheffield", "Sheffy", "Shelby", "Shelden", "Shell", "Shelley", "Shelton", "Shem", "Shep", "Shepard", "Shepherd", "Sheppard", "Shepperd", "Sheridan", "Sherlock", "Sherlocke", "Sherm", "Sherman", "Shermie", "Shermy", "Sherwin", "Sherwood", "Sherwynd", "Sholom", "Shurlock", "Shurlocke", "Shurwood", "Si", "Sibyl", "Sid", "Sidnee", "Sidney", "Siegfried", "Siffre", "Sig", "Sigfrid", "Sigfried", "Sigismond", "Sigismondo", "Sigismund", "Sigismundo", "Sigmund", "Sigvard", "Silas", "Silvain", "Silvan", "Silvano", "Silvanus", "Silvester", "Silvio", "Sim", "Simeon", "Simmonds", "Simon", "Simone", "Sinclair", "Sinclare", "Siward", "Skell", "Skelly", "Skip", "Skipp", "Skipper", "Skippie", "Skippy", "Skipton", "Sky", "Skye", "Skylar", "Skyler", "Slade", "Sloan", "Sloane", "Sly", "Smith", "Smitty", "Sol", "Sollie", "Solly", "Solomon", "Somerset", "Son", "Sonnie", "Sonny", "Spence", "Spencer", "Spense", "Spenser", 
"Spike", "Stacee", "Stacy", "Staffard", "Stafford", "Staford", "Stan", "Standford", "Stanfield", "Stanford", "Stanislas", "Stanislaus", "Stanislaw", "Stanleigh", "Stanley", "Stanly", "Stanton", "Stanwood", "Stavro", 
"Stavros", "Stearn", "Stearne", "Stefan", "Stefano", "Steffen", "Stephan", "Stephanus", "Stephen", "Sterling", "Stern", "Sterne", "Steve", "Steven", "Stevie", "Stevy", "Steward", "Stewart", "Stillman", "Stillmann", "Stinky", "Stirling", "Stu", "Stuart", "Sullivan", "Sully", "Sumner", "Sunny", "Sutherlan", "Sutherland", "Sutton", "Sven", "Svend", "Swen", "Syd", "Sydney", "Sylas", "Sylvan", "Sylvester", "Syman", "Symon", "Tab", "Tabb", "Tabbie", "Tabby", "Taber", "Tabor", "Tad", "Tadd", "Taddeo", "Taddeusz", "Tadeas", "Tadeo", "Tades", "Tadio", "Tailor", "Tait", "Taite", "Talbert", "Talbot", "Tallie", "Tally", "Tam", "Tamas", "Tammie", "Tammy", "Tan", "Tann", "Tanner", "Tanney", "Tannie", "Tanny", "Tarrance", "Tate", "Taylor", "Teador", "Ted", "Tedd", "Teddie", "Teddy", "Tedie", "Tedman", "Tedmund", "Temp", "Temple", "Templeton", "Teodoor", "Teodor", "Teodorico", "Teodoro", "Terence", "Terencio", "Terrance", "Terrel", "Terrell", "Terrence", "Terri", "Terrill", "Terry", "Thacher", "Thaddeus", "Thaddus", "Thadeus", "Thain", "Thaine", "Thane", "Thatch", "Thatcher", "Thaxter", "Thayne", "Thebault", "Thedric", "Thedrick", "Theo", "Theobald", "Theodor", "Theodore", "Theodoric", "Thibaud", "Thibaut", "Thom", "Thoma", "Thomas", "Thor", "Thorin", "Thorn", "Thorndike", "Thornie", "Thornton", "Thorny", "Thorpe", "Thorstein", "Thorsten", "Thorvald", "Thurstan", "Thurston", "Tibold", "Tiebold", "Tiebout", "Tiler", "Tim", "Timmie", "Timmy", "Timofei", "Timoteo", "Timothee", "Timotheus", "Timothy", "Tirrell", "Tito", "Titos", "Titus", "Tobe", "Tobiah", "Tobias", "Tobie", "Tobin", "Tobit", "Toby", "Tod", "Todd", "Toddie", "Toddy", "Toiboid", "Tom", "Tomas", "Tomaso", "Tome", "Tomkin", "Tomlin", "Tommie", "Tommy", "Tonnie", "Tony", "Tore", "Torey", "Torin", "Torr", "Torrance", "Torre", "Torrence", "Torrey", "Torrin", "Torry", "Town", "Towney", "Townie", "Townsend", "Towny", "Trace", "Tracey", "Tracie", "Tracy", "Traver", "Travers", "Travis", "Travus", "Trefor", "Tremain", "Tremaine", "Tremayne", "Trent", "Trenton", "Trev", "Trevar", "Trever", "Trevor", "Trey", "Trip", "Tripp", "Tris", "Tristam", "Tristan", "Troy", "Trstram", "Trueman", "Trumaine", "Truman", "Trumann", "Tuck", "Tucker", "Tuckie", "Tucky", "Tudor", "Tull", "Tulley", "Tully", "Turner", "Ty", "Tybalt", "Tye", "Tyler", "Tymon", "Tymothy", "Tynan", "Tyrone", "Tyrus", "Tyson", "Udale", "Udall", "Udell", "Ugo", "Ulberto", "Ulick", "Ulises", "Ulric", "Ulrich", "Ulrick", "Ulysses", "Umberto", "Upton", "Urbain", "Urban", "Urbano", "Urbanus", "Uri", "Uriah", "Uriel", "Urson", "Vachel", "Vaclav", "Vail", "Val", "Valdemar", "Vale", "Valentijn", "Valentin", "Valentine", "Valentino", "Valle", "Van", "Vance", "Vanya", "Vasili", "Vasilis", "Vasily", "Vassili", "Vassily", "Vaughan", "Vaughn", "Verge", "Vergil", "Vern", "Verne", 
"Vernen", "Verney", "Vernon", "Vernor", "Vic", "Vick", "Victoir", "Victor", "Vidovic", "Vidovik", "Vin", "Vince", "Vincent", "Vincents", "Vincenty", "Vincenz", "Vinnie", "Vinny", "Vinson", "Virge", "Virgie", "Virgil", "Virgilio", "Vite", "Vito", "Vittorio", "Vlad", "Vladamir", "Vladimir", "Von", "Wade", "Wadsworth", "Wain", "Wainwright", "Wait", "Waite", "Waiter", "Wake", "Wakefield", "Wald", "Waldemar", "Walden", "Waldo", "Waldon", "Walker", "Wallace", "Wallache", "Wallas", "Wallie", "Wallis", "Wally", "Walsh", "Walt", "Walther", "Walton", "Wang", "Ward", "Warde", "Warden", "Ware", "Waring", "Warner", "Warren", "Wash", "Washington", "Wat", "Waverley", "Waverly", "Way", "Waylan", "Wayland", "Waylen", "Waylin", "Waylon", "Wayne", "Web", "Webb", "Weber", "Webster", "Weidar", "Weider", "Welbie", "Welby", "Welch", "Wells", "Welsh", "Wendall", "Wendel", "Wendell", "Werner", "Wernher", "Wes", "Wesley", "West", "Westbrook", "Westbrooke", "Westleigh", "Westley", "Weston", "Weylin", "Wheeler", "Whit", "Whitaker", "Whitby", "Whitman", "Whitney", "Whittaker", "Wiatt", "Wilbert", "Wilbur", "Wilburt", "Wilden", "Wildon", "Wilek", "Wiley", "Wilfred", "Wilfrid", "Wilhelm", "Will", "Willard", "Willdon", "Willem", "Willey", "Willi", "William", "Willie", "Willis", "Willy", "Wilmar", "Wilmer", 
"Wilt", "Wilton", "Win", "Windham", "Winfield", "Winfred", "Winifield", "Winn", "Winnie", "Winny", "Winslow", "Winston", "Winthrop", "Wit", "Wittie", "Witty", "Wolf", "Wolfgang", "Wolfie", "Wolfy", "Wood", "Woodie", 
"Woodman", "Woodrow", "Woody", "Worden", "Worth", "Worthington", "Worthy", "Wright", "Wyatan", "Wyatt", "Wye", "Wylie", "Wyn", "Wyndham", "Wynn", "Xavier", "Xenos", "Xerxes", "Xever", "Ximenes", "Ximenez", "Xymenes", "Yale", "Yanaton", "Yance", "Yancey", "Yancy", "Yank", "Yankee", "Yard", "Yardley", "Yehudi", "Yehudit", "Yorgo", "Yorgos", "York", "Yorke", "Yorker", "Yul", "Yule", "Yulma", "Yuma", "Yuri", "Yurik", "Yves", "Yvon", "Yvor", "Zaccaria", "Zach", "Zacharia", "Zachariah", "Zacharias", "Zacharie", "Zachary", "Zacherie", "Zachery", "Zack", "Zackariah", "Zak", "Zane", "Zared", "Zeb", "Zebadiah", "Zebedee", "Zebulen", "Zebulon", "Zechariah", "Zed", "Zedekiah", "Zeke", "Zelig", "Zerk", "Zollie", "Zolly"};

const std::string type[] = {"Runner", "Stalker", "Clicker", "Bloater"};	

return (Zombie(std::string(name[(rand()) % 3896]), std::string(type[(rand()) % 4])));
}

void	ZombieHorde::announce(void)
{
	int n = this->_nbz;

	while(n)
	{
		n--;
		this->_horde[n].advert();
	}
}
