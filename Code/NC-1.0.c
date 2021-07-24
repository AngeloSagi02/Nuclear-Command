////////////////////////////////////////////////////////
// Angelo Saginario, Elliot Ercuta, Giacomo Mancini	  //
//  Deus Vult Corporation (DVC) 08/04/18			  //
//			COMMAND NUCLEAR  VERS. 1.0	     		  //
////////////////////////////////////////////////////////

/*NUCLEAR COMMAND: Gioco strategico*/


#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

  void inter(void); //inter. + quest

void quest_1(void); //quest numero 1
void quest_2(void);
void quest_3(void);
void quest_4(void);
void quest_5(void);
void quest_6(void);
void quest_7(void);
void quest_8(void);
void quest_9(void);
void quest_10(void);
void quest_11(void);
void quest_12(void);
void quest_13(void);
void quest_14(void);
void quest_15(void);
void quest_16(void);
void quest_17(void);
void quest_18(void);
void quest_19(void);
void quest_20(void);
void quest_21(void);
void quest_22(void);
void quest_23(void);
void quest_24(void);
void quest_25(void);
void quest_26(void);
void quest_27(void);
void quest_28(void);
void quest_29(void);
void quest_30(void);
void quest_31(void);
void quest_32(void);
void quest_33(void);
void quest_34(void);
void quest_35(void);
void quest_36(void);
void quest_37(void);
void quest_38(void);
void quest_39(void);
void quest_40(void);
void quest_41(void);
void quest_42(void);


void possi(void); //possibilita'
void m_banner(void); //logo sulle quest
void banner(void); //logo e menu

void antibug(void); //controllo ed eliminazione di possibili bug

int risorse = 5 /* per risorse si intende anche l'umore del popolo*/ , economia = 5, esercito = 5, radio = 5; //variabili delle risorse
int scelta = 0; //scelta dell'utente
int n_quest; //numero della quest casuale  
int score = 0;

int main(int argc, char * argv[]) {
  int i; //ciclo
  int extern risorse, economia, esercito, radio; //richiamo le variabili
  int extern n_quest;
  int count = 0; //punteggio score

  banner();
  system("cls");
  srand(time(NULL));

  for (i = 0; i <= 999; i++) {
    n_quest = rand() % 43 + 1;
    //printf("%d\n",n_quest); //verifica	

    system("cls");

    if (n_quest == 1) {
      quest_1();
    }
    if (n_quest == 2) {
      quest_2();
    }
    if (n_quest == 3) {
      quest_3();
    }
    if (n_quest == 4) {
      quest_4();
    }
    if (n_quest == 5) {
      quest_5();
    }
    if (n_quest == 6) {
      quest_6();
    }
    if (n_quest == 7) {
      quest_7();
    }
    if (n_quest == 8) {
      quest_8();
    }
    if (n_quest == 9) {
      quest_9();
    }
    if (n_quest == 10) {
      quest_10();
    }
    if (n_quest == 11) {
      quest_11();
    }
    if (n_quest == 12) {
      quest_12();
    }
    if (n_quest == 13) {
      quest_13();
    }
    if (n_quest == 14) {
      quest_14();
    }
    if (n_quest == 15) {
      quest_15();
    }
    if (n_quest == 16) {
      quest_16();
    }
    if (n_quest == 17) {
      quest_17();
    }
    if (n_quest == 18) {
      quest_19();
    }
    if (n_quest == 20) {
      quest_20();
    }
    if (n_quest == 21) {
      quest_21();
    }
    if (n_quest == 22) {
      quest_22();
    }
    if (n_quest == 23) {
      quest_23();
    }
    if (n_quest == 24) {
      quest_24();
    }
    if (n_quest == 25) {
      quest_25();
    }
    if (n_quest == 26) {
      quest_26();
    }
    if (n_quest == 27) {
      quest_27();
    }
    if (n_quest == 28) {
      quest_28();
    }
    if (n_quest == 29) {
      quest_29();
    }
    if (n_quest == 30) {
      quest_30();
    }
    if (n_quest == 31) {
      quest_31();
    }
    if (n_quest == 32) {
      quest_32();
    }
    if (n_quest == 33) {
      quest_33();
    }
    if (n_quest == 34) {
      quest_34();
    }
    if (n_quest == 35) {
      quest_35();
    }
    if (n_quest == 36) {
      quest_36();
    }
    if (n_quest == 37) {
      quest_37();
    }
    if (n_quest == 38) {
      quest_38();
    }
    if (n_quest == 39) {
      quest_39();
    }
    if (n_quest == 40) {
      quest_40();
    }
    if (n_quest == 41) {
      quest_41();
    }
    if (n_quest == 42) {
      quest_42();
    }

    count = count + 1;
    printf("\n\n");

    if (risorse <= 0) {
      system("cls");
      m_banner();
      printf("\n\nLe persone vivono in condizioni critiche, si ribellano e giocano all'impiccato con te.\n\n");
      printf("SEI STATO IN CARICA PER %d\n\n\n", score);
      break;
    }
    if (risorse >= 10) {
      system("cls");
      m_banner();
      printf("\n\nProcede tutte bene, complimenti, ma sei sfortunato, ti viene un infarto e muori.\n\n");
      printf("SEI STATO IN CARICA PER %d\n\n\n", score);
      break;
    }
    if (economia <= 0) {
      system("cls");
      m_banner();
      printf("\n\nIl popolo e' povero, parte una rivolta, e vieni ucciso dalla ribellione.\n\n");
      printf("SEI STATO IN CARICA PER %d\n\n\n", score);
      break;
    }
    if (economia >= 10) {
      system("cls");
      m_banner();
      printf("\n\nIl popolo e' ricco, ma hai attirato l'attenzione di uno strano gruppo\ndi fatanici religiosi ti definiscono la rincarnazione di satana,\ne pagano un sicario per ucciderti.\n\n");
      printf("SEI STATO IN CARICA PER %d\n\n\n", score);
      break;
    }
    if (radio <= 0) {
      system("cls");
      m_banner();
      printf("\n\nL'ambiente e' libero da qualsiasi radiazione, ma scoppia un epidemia di\n peste e tu (indovina un po') muori.\n\n");
      printf("SEI STATO IN CARICA PER %d\n\n\n", score);
      break;
    }
    if (radio >= 10) {
      system("cls");
      m_banner();
      printf("\n\nL'ambiente e' saturo di radiazioni, bravo hai ricreato Chernobyl.\n\n");
      printf("SEI STATO IN CARICA PER %d", score);
      break;
    }
    if (esercito <= 0) {
      system("cls");
      m_banner();
      printf("\n\nIl tuo esercito e' debole e vieni attaccato da una cellula terroristica\n\n");
      printf("SEI STATO IN CARICA PER %d\n\n\n", score);
      break;
    }
    if (esercito >= 10) {
      system("cls");
      m_banner();
      printf("\n\nHai un esercito molto sviluppato, ma un soldato per sbaglio ti spara,\n uccidendoti.\n\n");
      printf("SEI STATO IN CARICA PER %d\n\n\n", score);
      break;
    } /* IL GIOCO TERMINA SE UNO O PIU' VALORI ARRIVANO 0 O A 10*/

  }

  return 0;
}
void banner(void) {
  printf("		  	   WELCOME IN THE\n\n");
  printf("		#   #  #  #  ###  #    ###   ###   ####\n");
  printf("		##  #  #  #  #    #    #    #   #  #  #\n");
  printf("		# # #  #  #  #    #    ###  #####  ####\n");
  printf("		#  ##  #  #  #    #    #    #   #  # #\n");
  printf("		#   #  ####  ###  ###  ###  #   #  #  #\n");

  printf("\n\n");
  printf("	     ###  ####  #   #  #   #   ###   #   #  ####\n");
  printf("	     #    #  #  ## ##  ## ##  #   #  ##  #  #   #\n");
  printf("	     #    #  #  # # #  # # #  #####  # # #  #   #\n");
  printf("	     #    #  #  #   #  #   #  #   #  #  ##  #   #\n");
  printf("	     ###  ####  #   #  #   #  #   #  #   #  ####\n");
  printf("\n\n");
  printf("	       ");
  system("pause");

  system("cls");
  printf("-------------------------------------REGOLE-------------------------------------\n\n\n Benvenuto in NUCLEAR COMMAND, ti spiego un po' le regole,\n proseguendo nel gioco si presenteranno delle scelte a cui \n puoi rispondere con si=1 oppure no=2, il tuo compito \n sara'riuscire a intuire leggendo le varie quest quali \n risorse saliranno e quali scenderanno, \n ecco le 4 risorse:\n _Economia\n _Benessere del Popolo\n _Esercito\n _Radiattivita'\n\n se uno di questi valori arriva a 0 oppure a 10\n il gioco finisce con la tua sconfitta\n il tuo compito sara' tenere tutto in equilibrio per il maggior \n numero di giocate possibile.\n\n ");
  system("pause");
  system("cls");
  printf("-------------------------------------STORIA-------------------------------------\n\n\n Ti trovi nel 2095, 30 Anni dopo un conflitto nucleare, \n vieni messo a comando di uno stato improvvisato\n dovrai fare delle scelte, fa la scelta sbagliata e morirai.\n\n ");
  system("pause");
}

void m_banner(void) {
  int extern score;
  printf("Giorno: %d       		NUCLEAR*COMMAND", score);
}
void inter(void) //interfaccia
  {
    int extern economia, risorse, esercito, radio;

    printf("\n\n\n%d Economia	  %d Benessere Pop.	 %d Esercito		%d Radiattivita'\n", economia, risorse, esercito, radio);
    printf("_______1=SI__________________________________________________________2=NO_______\n");

  }
void possi(void) {
  int extern scelta;
  scanf("%d", & scelta);
}

void quest_1(void) {
  int extern scelta, radio, score;
  m_banner();
  printf("\n\n\nUna strana persona di colore con in mano un libro con su scritto\n'guida galattica per autostoppisti'ti chiede di poter fare \ndelle ricerche prelevando delle scorie dal terreno \nin cambio ti dara' dei soldi \n\n");
  inter();
  possi();

  if (scelta == 1) {
    radio = radio - 2;
    economia = economia + 1;
  }

  if (scelta == 2) {
    radio = radio + 1;
  }
  score = score + 3;
}

void quest_2(void) {
  int extern scelta, economia, risorse, score, radio;

  system("cls");
  m_banner();
  _beep(500, 1250);
  _beep(0, 1250);
  _beep(500, 1250);
  _beep(0, 1250);
  _beep(500, 1250);

  printf("\n\n\n Ricevi una chiamata da un numero sconosciuto, ti propone\n di chiudere un occhio sullo scarico di alcune scorie in\n un campo illegalmente in cambio verrai, pero',pagato bene.\n");
  inter();
  possi();

  if (scelta == 1) {
    radio = radio + 2;
    risorse = risorse - 2;
    economia = economia + 2;
  }
  if (scelta == 2) {
    risorse = risorse + 1;
  }
  score = score + 10;
}

void quest_3(void) {
  int extern scelta, economia, score, esercito;

  system("cls");
  m_banner();
  printf("\n\n\n Il Generale ti propone di aumentare le difese dell'esercito\n ");
  inter();
  possi();

  if (scelta == 1) {
    economia = economia - 3;
    esercito = esercito - 1;
  }
  if (scelta == 2) {
    esercito = esercito + 3;
    economia = economia + 1;
  }
  score = score + 12;
}

void quest_4(void) {
  int extern scelta, score, economia, radio, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Ti propongono di riattivare un vecchio reattore nucleare \n per poter produrre molta piu' energia elettrica \n questo pero'produce molte scorie radiattive. ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 2;
    economia = economia - 2;
    radio = radio + 2;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
    radio = radio - 1;
  }
  score = score + 7;
}

void quest_5(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Un battaglione durante una perlustrazione trova relitti ovunque,\n ci potrebbero essere risorse preziose, ma si\n sentono strani rumori. \n Vuoi rischiare? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    economia = economia + 1;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
  }
  score = score + 4;
}

void quest_6(void) {

  int extern scelta, economia, score, radio, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Durante una perlustrazione uno dei tuoi soldati\n trova una base nemica, vuoi farli investigare? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 2;
    radio = radio + 1;
  }
  if (scelta == 2) {
    economia = economia - 1;
  }
  score = score + 8;
}

void quest_7(void) {

  int extern scelta, economia, radio, score, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Tra delle macerie, dei soldati, trovano un falo' \n con una spada conficcata in mezzo, vuoi far prelevare la spada? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    radio = radio - 1;
  }
  if (scelta == 2) {
    economia = economia + 1;
  }
  score = score + 4;
}

void quest_8(void) {

  int extern scelta, score, economia, radio, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n In un laboratorio ormai distrutto trovi un computer unix\n ancora funzionante, vuoi osservare il suo contenuto? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    economia = economia + 1;
  }
  if (scelta == 2) {
    radio = radio + 1;
  }
  score = score + 6;
}

void quest_9(void) {

  int extern scelta, score, economia, esercito;

  system("cls");
  m_banner();
  printf("\n\n\n Trovi dei soldati disertori, vuoi prenderli nel tuo esercito o lasciarli li'? ");
  inter();
  possi();

  if (scelta == 1) {
    esercito = esercito + 3;
    economia = economia + 1;
  }
  if (scelta == 2) {
    economia = economia - 1;
  }
  score = score + 3;
}

void quest_10(void) {

  int extern scelta, score, radio, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n All'improvviso venite attaccati da dei sopravvisuti, \n un tuo soldato viene ferito durante l'attacco\n vuoi salvarlo? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 1;
    esercito = esercito + 1;
  }
  if (scelta == 2) {
    radio = radio + 1;
    risorse = risorse + 1;
    esercito = esercito - 1;
  }
  score = score + 4;
}

void quest_11(void) {

  int extern scelta, score, economia, radio, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Le mura della tua base stanno per crollare, ripararle? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 2;
    esercito = esercito + 1;
  }
  if (scelta == 2) {
    esercito = esercito = -1;
  }
  score = score + 8;
}

void quest_12(void) {

  int extern scelta, score, economia, radio, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Durante la perlustrazione trovate un magazzino pieno di medicine,\n vuoi prenderle? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    economia = economia + 1;
  }
  if (scelta == 2) {
    risorse - 2;
    radio - 1;
  }
  score = score + 4;
}

void quest_13(void) {

  int extern scelta, score, economia, radio, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Un generatore si guasta, riparlo significa perdere molte risorse,\n continuare? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    economia = economia + 1;
    radio = radio + 2;
  }
  if (scelta == 2) {
    radio = radio - 1;
  }
  score = score + 6;
}

void quest_14(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");

  printf("\n\n\n La morte di uno dei generali turba tutto il tuo esercito, \n il suo ultimo desiderio e' essere sepellito molto lontano, \n vuoi esaudirlo?' ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 1;
    economia = economia - 1;
  }
  if (scelta == 2) {
    esercito = esercito - 1;
  }
  score = score + 4;
}
void quest_15(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");

  printf("\n\n\n Una torre radio ha mandato una richiesta di S.O.S,\n andare a controllare?  ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    esercito = esercito + 1;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
  }
  score = score + 4;
}
void quest_16(void) {

  int extern scelta, score, economia, esercito, risorse, radio;

  system("cls");
  m_banner();
  printf("\n\n\n Un esplosione molto vicina al quartier generale\n ha attirato la tua attenzione, vuoi mandare qualche soldato? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    radio = radio + 1;
  }
  if (scelta == 2) {
    economia = economia - 1;
  }
  score = score + 7;
}
void quest_17(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Un sopravvissuto ti informa che sta per esserci un attentato,\n ascoltarlo e rinforzare le difese? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 1;
    economia = economia + 1;

  }
  if (scelta == 2) {
    esercito = esercito - 3;
  }
  score = score + 6;
}

void quest_18(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Un camion di provviste appartenente a un altro stato\n nemico sta passando per la zona, attaccarlo? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    esercito = esercito - 1;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
  }
  score = score + 4;
}
void quest_19(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Le fonti d'acqua potabili scarseggiano, trovarne di nuove? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    economia = economia + 1;
  }
  if (scelta == 2) {
    esercito = esercito - 2;
  }
  score = score + 4;
}
void quest_20(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Hai trovato un cane abbandonato che ti segue, con una\n targhetta con su scritto 'dogmeat', lo prendi con te? ");
  inter();
  possi();

  if (scelta == 1) {
    economia = economia + 1;
    esercito = esercito + 1;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
  }
  score = score + 4;
}

void quest_21(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Un aereo alleato e' stato abbattuto, vuoi investigare? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 3;
    esercito = esercito - 1;
  }
  if (scelta == 2) {
    economia = economia - 2;
  }
  score = score + 7;
}
void quest_22(void) {

  int extern scelta, score, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Un razzo colpisce un accampamento vicino, mandare soccorsi? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 1;
    esercito = esercito - 2;
  }
  if (scelta == 2) {
    economia = economia - 1;
    risorse = risorse + 1;
  }
  score = score + 4;
}

void quest_23(void)

{

  int extern scelta, score, economia, radio, risorse;

  system("cls");

  m_banner();

  printf("\n\n\n Si presenta un tizio alla porta, dice di chiamarsi \n Hattori Hanzo e ti propone un lotto di katane in\n acciaio giapponese per il tuo esercito. ");

  inter();

  possi();

  if (scelta == 1)

  {

    risorse = risorse + 2;

    economia = economia - 2;

    esercito = esercito + 2;

  }

  if (scelta == 2)

  {

    risorse = risorse - 1;

    radio = radio - 1;

  }
  score = score + 3;
}

void quest_24(void)

{

  int extern scelta, score, economia, radio, risorse;

  system("cls");

  m_banner();

  printf("\n\n\nUn certo Clint chiede di farsi scortare dal tuo\n esercito per un sentiero nel deserto  ");

  inter();

  possi();

  if (scelta == 1)

  {

    risorse = risorse + 2;

    economia = economia - +2;

    esercito = esercito + 2;

  }

  if (scelta == 2)

  {

    risorse = risorse - 1;

    radio = radio - 1;

  }
  score = score + 3;
}

void quest_25(void)

{

  int extern scelta, score, economia, radio, risorse;

  system("cls");

  m_banner();

  printf("\n\n\nUn certo Jordan ti propone di guadagnare eseguendo alcune transazioni a tuo nome denominate penny stock ");

  inter();

  possi();

  if (scelta == 1)

  {

    risorse = risorse - 1;

    economia = economia - 2;

    radio = radio + 2;

  }

  if (scelta == 2)

  {

    risorse = risorse + 1;

    radio = radio - 1;

  }
  score = score + 5;
}

void quest_26(void)

{

  int extern scelta, score, economia, radio, risorse;

  system("cls");

  m_banner();

  printf("\n\n\nUn certo Jordan ti propone di guadagnare eseguendo alcune transazioni a tuo nome  ");

  inter();
  possi();
  if (scelta == 1)

  {
    risorse = risorse + 3;
    economia = economia + 2;
    radio = radio - 2;

  }

  if (scelta == 2)

  {

    risorse = risorse - 2;

    radio = radio + 2;

  }
  score = score + 6;
}

void quest_27(void)

{

  int extern scelta, score, economia, radio, risorse;

  system("cls");

  m_banner();

  printf("\n\n\nTi chiama un numero sconosciuto e ti propone di\n investire in una compagnia denominata “bubba gump”   ");

  inter();
  possi();

  if (scelta == 1)

  {
    risorse = risorse + 2;
    economia = economia + 1;
  }
  if (scelta == 2) {
    risorse = risorse - 2;
    radio = radio + 2;
  }
  score = score + 4;
}

void quest_28(void) {

  int extern scelta, score, economia, radio, risorse;

  system("cls");
  m_banner();

  printf("\n\n\n Ricevi una chiamata dal tuo amico Brian che\n ti propone l'acquisto di alcune macchine corazzate ");
  inter();

  possi();

  if (scelta == 1) {
    risorse = risorse + 2;
    economia = economia - 2;
    esercito = esercito + 2;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
    radio = radio - 1;
  }
  score = score + 4;
}

void quest_29(void) {
  int extern scelta, score, economia, radio, risorse, esercito;

  system("cls");
  m_banner();

  printf("\n\n\n Si vocifera di una ragazza immune al virus\n che sta girando ultimamente, e'in viaggio\n con un uomo di mezza eta', e sembrano scomparsi entrambi\n Vuoi dargli la caccia? ");

  inter();

  possi();

  if (scelta == 1) {
    risorse = risorse - 1;
    esercito = esercito - 1;
    risorse = risorse + 1;
  }

  if (scelta == 2) {
    risorse = risorse - 1;
  }
  score = score + 5;
}

//QUEST SPECIALE

void quest_30(void) {
  int extern scelta, score, economia, radio, risorse;
  
  system("cls");
  m_banner();

  printf("\n\n\n ''Hei, siamo gli sviluppatori ti sta piacendo il gioco?''\n\n ");
  printf("\n\n\n Ne eravamo sicuri, questo gioco piace a tutti.\n\n Ma non siamo qui per questo, Ti spiego:\n Adesso ti trovi in un posto speciale, qui puoi\n inserire dei codici, che potrebbero dare qualche risultato\n Hai una sola possibilita', non sprecarla :D");
  scanf("%d", & scelta);
  if (scelta == 666) {
    printf("\n\nZzz... EHHH, CHI OSA SVEGLIARM... ah sei l'amico\n degli sviluppatori, ascolta\n ultimamente ho molto da fare pero' ti daro' una mano\n con il gioco.\n LE TUE RISORSE SONO AUMENTATE DI 1");
    system("pause");
    system("cls");
    risorse = risorse + 1;
    esercito = esercito + 1;
    risorse = risorse + 1;
    radio = radio - 1;

    printf("\n\nContento ora? Non preoccuparti della tua anima\n non posso prenderla senza un contratto\n adesso vai via ho tante cose da fare,\n per esempio devo... Zzz...\n\n");
  }

  if (scelta == 777) {
    printf("\n\nCiao fono Paperon de'Paperoni, fer gli amici\n zio Paperone, quack, ho visto che non te la passi molto bene\n voglio darti una mano\n quack.");
    economia = economia + 3;
  }
  system("pause");
}

void quest_31(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Durante una tempesta un rottame colpisce i fili elettrici,\n riparare il tutto puo' costare. ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 4;
    economia = economia - 3;
  }
  if (scelta == 2) {
    esercito = esercito - 1;
  }
  score = score + 4;
}
void quest_32(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Sono stati trovati dei progetti su un estrattore \n di petrolio, costruirlo? potrebbe fornire molte risorse  ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 3;
    esercito = esercito + 1;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
    economia = economia - 1;
  }
}
void quest_33(void) {

  int extern scelta, economia, esercito, risorse, radio;

  system("cls");
  m_banner();
  printf("\n\n\n Varie ricerche ritrovate in un bunker mostrano\n come creare una cure per la radioattività, crearle? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 2;
    radio = radio - 3;
  }
  if (scelta == 2) {
    economia = economia - 1;
  }
  score = score + 6;
}
void quest_34(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Un accampamento ti chiede di aprire una rotta \n commerciale con loro, accettare? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 2;
    economia = economia + 2;

  }
  if (scelta == 2) {
    esercito = esercito - 3;
    risorse = risorse - 2;
  }
  score = score + 3;
}

void quest_35(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Attaccare un accampamento nemico può fornire grandi\n risorse, procedere? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 1;
    esercito = esercito - 1;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
  }
  score = score + 4;
}
void quest_36(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Creare un'allevamento di larve può fornire molto cibo,\n andare alla ricerca dei pezzi necessari?' ");
  inter();
  possi();

  if (scelta == 1) {
    esercito = esercito + 2;
    economia = economia + 1;
  }
  if (scelta == 2) {
    esercito = esercito - 2;
  }
  score = score + 4;
}
void quest_37(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Costruire un porto per una rotta commerciale? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 4;
    economia = economia + 2;
  }
  if (scelta == 2) {
    risorse = risorse + 1;
  }
  score = score + 4;
}
void quest_38(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n E' scoppiata una rissa, dividere i due o guardare\n lo scomtro all''ultimo sangue?' ");
  inter();
  possi();

  if (scelta == 1) {
    economia = economia + 1;
    esercito = esercito - 1;
  }
  if (scelta == 2) {
    risorse = risorse - 1;
  }
  score = score + 6;
}
void quest_39(void) {

  int extern scelta, economia, esercito, risorse, radio;

  system("cls");
  m_banner();
  printf("\n\n\n Una banda di predoni si arrende dinanzi alla potenza\n del tuo esercito, (1) prenderli oppure (2) ucciderli? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 3;
    economia = economia + 2;
    esercito = esercito + 2;
  }
  if (scelta == 2) {
    esercito = esercito - 2;
  }
  score = score + 5;
}
void quest_40(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Il bunker ha bisogno di manutenzione, procedere? ");
  inter();
  possi();

  if (scelta == 1) {
    esercito = esercito - 1;
  }
  if (scelta == 2) {
    economia = economia - 2;
    esercito = esercito - 2;
  }
  score = score + 3;
}
void quest_41(void) {

  int extern scelta, economia, esercito, risorse;

  system("cls");
  m_banner();
  printf("\n\n\n Una gratana e' esplosa accidentalmente causando gravi\n ferite ai soldati, usare le scorte mediche? ");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse - 3;
  }
  if (scelta == 2) {
    esercito = esercito - 4;
  }
  score = score + 7;
}

void quest_42(void) {

  int extern scelta, economia, esercito, risorse, radio;

  system("cls");
  m_banner();
  printf("\n\n\n Uno strano virus si sta diffondendo tra i sopravvissuti,\n vuoi contenere la diffusione?");
  inter();
  possi();

  if (scelta == 1) {
    risorse = risorse + 3;
    economia = economia - 2;
  }
  if (scelta == 2) {
    risorse = risorse - 2;
  }
  score = score + 5;
}

