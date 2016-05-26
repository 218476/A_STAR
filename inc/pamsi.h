#ifndef guard_pamsi
#define guard_pamsi

#define LICZBA_PRZYSTANKOW 178

std::string Tab[] =
{
    "Pusty",
    "Dworzec Nadodrze",                 //   1
    "Plac Sztaszica",                   //   2
    "Pomorska",                         //   3
    "Dmowskiego",                       //   4
    "Plac Jana Pawla II",               //   5
    "Plac Orlat Lwowskich",             //   6
    "Plac Legionow",                    //   7
    "Arkady - Capitol",                 //   8
    "Dworzec Glowny PKP",               //   9
    "Pulawskiego",                      //  10
    "Kosciuszki",                       //  11
    "Komuny Paryskiej",                 //  12
    "Plac Wroblewskiego",               //  13
    "Urzad Wojewodzki",                 //  14
    "Most Grunwaldzki",                 //  15
    "Plac Grunwaldzki",                 //  16
    "Piastowska",                       //  17
    "Prusa",                            //  18
    "Wyszynskiego",                     //  19
    "Nowowiejska",                      //  20
    "Slowianska",                       //  21
    "Biskupin",                         //  22
    "Spoldzielcza",                     //  23
    "Chelmonskiego",                    //  24
    "Tramwajowa",                       //  25
    "Zoo",                              //  26
    "Hala Stulecia",                    //  27
    "Kliniki",                          //  28
    "Trzebnicka",                       //  29
    "Broniewskiego",                    //  30
    "Kepinska",                         //  31
    "Wolowska",                         //  32
    "Poswietne",                        //  33
    "Reja",                             //  34
    "Katedra",                          //  35
    "Galeria Dominikanska",             //  36
    "Hotel Wroclaw",                    //  37
    "Wielka",                           //  38
    "Rondo",                            //  39
    "Sztabowa",                         //  40
    "Hallera",                          //  41
    "Jastrzebia",                       //  42
    "Orla",                             //  43
    "Krzyki",                           //  44
    "Ksiaze Male",                      //  45
    "Glubczycka",                       //  46
    "Karwinska",                        //  47
    "Park Wschodni",                    //  48
    "Armii Krajowej",                   //  49
    "Krakowska - Centrum Handlowe",     //  50
    "Krakowska",                        //  51
    "Na Niskich Lakach",                //  52
    "Plac Zgody",                       //  53
    "Swidnicka",                        //  54
    "Rynek",                            //  55
    "Mlodych Technikow",                //  56
    "Plac Strzegomski",                 //  57
    "Zachodnia",                        //  58
    "Niedzwiedzia",                     //  59
    "Malopanewska",                     //  60
    "Kwiska",                           //  61
    "DH AStra",                         //  62
    "Park Zachodni",                    //  63
    "Bajana",                           //  64
    "Metalowcow",                       //  65
    "Pilczyce",                         //  66
    "Stadion Wroclaw",                  //  67
    "Glinianki",                        //  68
    "Kosmonautow Szpital",              //  69
    "Grabowa",                          //  70
    "Kamieniogorska",                   //  71
    "Zlotnicka",                        //  72
    "Wschowska",                        //  73
    "Jeleniogorska",                    //  74
    "Lesnica",                          //  75
    "Oporow",                           //  76
    "Grabiszynska",                     //  77
    "FAT",                              //  78
    "Hutmen",                           //  79
    "Bzowa",                            //  80
    "Fadroma",                          //  81
    "Stalowa",                          //  82
    "Pereca",                           //  83
    "Narodowe Forum Muzyki",            //  84
    "Renoma",                           //  85
    "Opera",                            //  86
    "Olawska",                          //  87
    "Wita Stwosza",                     //  88
    "Uniwersytecka",                    //  89
    "Dubois",                           //  90
    "Plac Bema",                        //  91
    "Na Szancach",                      //  92
    "Jednosci Narodowej",               //  93
    "Daszynskiego",                     //  94
    "Mosty Warszawskie",                //  95
    "Kromera",                          //  96
    "Ketrzynska",                       //  97
    "Kwidzynska",                       //  98
    "Gesia",                            //  99
    "Bociania",                         // 100
    "Kowale",                           // 101
    "Paulinska",                        // 102
    "Uniwersytet",                      // 103
    "Dworzec Autobusowy",               // 104
    "Dyrekcyjna",                       // 105
    "Joannitow",                        // 106
    "Gajowa",                           // 107
    "Prudnicka",                        // 108
    "Kamienna",                         // 109
    "Bardzka",                          // 110
    "Nyska",                            // 111
    "Transbud",                         // 112
    "Klimasa",                          // 113
    "Tarnogaj",                         // 114
    "Park Poludniowy",                  // 115
    "Pultuska",                         // 116
    "Weigla",                           // 117
    "Jaworowa",                         // 118
    "Wisniowa",                         // 119
    "Uniwersytet Ekonomiczny",          // 120
    "Sanocka",                          // 121
    "Wzgorze Partyzantow",              // 122
    "Plac Nowy Targ",                   // 123
    "Hala Targowa",                     // 124
    "Ogrod Botaniczny",                 // 125
    "Gornickiego",                      // 126
    "Grunwaldzka",                      // 127
    "Kochanowskiego",                   // 128
    "Chopina",                          // 129
    "Karlowicza",                       // 130
    "Stadion Olimpijski",               // 131
    "9 Maja",                           // 132
    "Godebskiego",                      // 133
    "Sepolno",                          // 134
    "Osobowice",                        // 135
    "Most Milenijny",                   // 136
    "Osobowicka",                       // 137
    "Serbska",                          // 138
    "Most Osobowicki",                  // 139
    "Kleczkowska",                      // 140
    "Gajowicka",                        // 141
    "Mielecka",                         // 142
    "Ojca Beyzyma",                     // 143
    "Aleja Pracy",                      // 144
    "Kamienskiego",                     // 145
    "Baltycka",                         // 146
    "Park Staromiejski",                // 147
    "Radio i Telewizja",                // 148
    "Przyjazni",                        // 149
    "Braterska",                        // 150
    "Sasiedzka",                        // 151
    "Klecina",                          // 152
    "Fiolkowa",                         // 153
    "Dolmed",                           // 154
    "Srubowa",                          // 155
    "Wroclawski Park Przemyslowy",      // 156
    "Gornicza",                         // 157
    "Modra",                            // 158
    "Pilczycka",                        // 159
    "Kolista",                          // 160
    "Krynicka",                         // 161
    "Morwowa",                          // 162
    "Swieradowska",                     // 163
    "Gaj",                              // 164
    "Kozanow",                          // 165
    "Kozanowska",                       // 166
    "Bujwida",                          // 167
    "Wrozamet",                         // 168
    "Piramowicza",                      // 169
    "Kosmonautow - Nowe Zerniki",       // 170
    "Stadion Miejski",                  // 171
    "Forum Muzyki",                     // 172
    "Grabiszynska - Cmentarz I",        // 173
    "Grabiszynska - Cmentarz II",       // 174
    "Zawalna",                          // 175
    "Osobowicka - Cmentarz II",         // 176
    "GAJ - Petla",                      // 177
    "Dokerska"                          // 178


};

void Macierz(short int**, unsigned int);


#endif
