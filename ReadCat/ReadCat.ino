/* read cat */

#include <toneAC.h>
#define OCTAVE_OFFSET 0

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

int notes[] = { 
  0,
  NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4,
  NOTE_C5, NOTE_CS5, NOTE_D5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_GS5, NOTE_A5, NOTE_AS5, NOTE_B5,
  NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_DS6, NOTE_E6, NOTE_F6, NOTE_FS6, NOTE_G6, NOTE_GS6, NOTE_A6, NOTE_AS6, NOTE_B6,
  NOTE_C7, NOTE_CS7, NOTE_D7, NOTE_DS7, NOTE_E7, NOTE_F7, NOTE_FS7, NOTE_G7, NOTE_GS7, NOTE_A7, NOTE_AS7, NOTE_B7
};

char *song = "MissionImp:d=16,o=6,b=95:32d,32d#,32d,32d#,32d,32d#,32d,32d#,32d,32d,32d#,32e,32f,32f#,32g,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,a#,g,2d,32p,a#,g,2c#,32p,a#,g,2c,a#5,8c,2p,32p,a#5,g5,2f#,32p,a#5,g5,2f,32p,a#5,g5,2e,d#,8d";
//char *song0 = "pacman:d=4,o=5,b=112:32b,32p,32b6,32p,32f#6,32p,32d#6,32p,32b6,32f#6,16p,16d#6,16p,32c6,32p,32c7,32p,32g6,32p,32e6,32p,32c7,32g6,16p,16e6,16p,32b,32p,32b6,32p,32f#6,32p,32d#6,32p,32b6,32f#6,16p,16d#6,16p,32d#6,32e6,32f6,32p,32f6,32f#6,32g6,32p,32g6,32g#6,32a6,32p,32b.6";
//char *song1 = "wwtbam1:d=4,o=5,b=140:16g,16c6,16d#6,16g6,16c7,16g6,16d#6,16c6,16g,16c6,16d#6,16g6,16c7,16g6,16d#6,16c6,16g#,16c6,16d#6,16g#6,16c7,16g#6,16d#6,16c6,16g#,16c6,16d#6,16g#6,16c7,16g#6,16d#6,16c6,16f#,16c6,16d#6,16f#6,16c7,16f#6,16d#6,16c6,16f#,16c6,16d#6,16f#6,16c7,16f#6,16d#6,16c6,16g,16b,16d6,16g6,16b6,16g6,16d6,16b,16g,16b,16d6,16g6,16b6,16g6,16d6,16b";
//char *song2 = "Barbie girl:d=4,o=5,b=125:8g#,8e,8g#,8c#6,a,p,8f#,8d#,8f#,8b,g#,8f#,8e,p,8e,8c#,f#,c#,p,8f#,8e,g#,f#";
//char *song3 = "KnightRider:d=4,o=5,b=63:16e,32f,32e,8b,16e6,32f6,32e6,8b,16e,32f,32e,16b,16e6,d6,8p,p,16e,32f,32e,8b,16e6,32f6,32e6,8b,16e,32f,32e,16b,16e6,f6,p";
char *song4 = "PinkPanther:d=4,o=5,b=160:8d#,8e,2p,8f#,8g,2p,8d#,8e,16p,8f#,8g,16p,8c6,8b,16p,8d#,8e,16p,8b,2a#,2p,16a,16g,16e,16d,2e";
//char *song5 = "axelf:d=4,o=5,b=160:f#,8a.,8f#,16f#,8a#,8f#,8e,f#,8c.6,8f#,16f#,8d6,8c#6,8a,8f#,8c#6,8f#6,16f#,8e,16e,8c#,8g#,f#";
//char *song6 = "Xfiles:d=4,o=5,b=125:e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,g6,f#6,e6,d6,e6,2b.,1p,g6,f#6,e6,d6,f#6,2b.,1p,e,b,a,b,d6,2b.,1p,e,b,a,b,e6,2b.,1p,e6,2b";
//char *song7 = "YMCA:d=4,o=5,b=160:8c#6,8a#,2p,8a#,8g#,8f#,8g#,8a#,c#6,8a#,c#6,8d#6,8a#,2p,8a#,8g#,8f#,8g#,8a#,c#6,8a#,c#6,8d#6,8b,2p,8b,8a#,8g#,8a#,8b,d#6,8f#6,d#6,f.6,d#.6,c#.6,b.,a#,g#";

#include <Adafruit_PN532.h>

#define SCK  (2)
#define MOSI (3)
#define SS   (4)
#define MISO (5)

Adafruit_PN532 nfc(SCK, MISO, MOSI, SS);

void uidToString(const byte * data, char *out){
  const int numBytes=4;
  uint32_t szPos;
  int inIndex=0;
  int outIndex=0;

  for(inIndex=0;inIndex<numBytes;inIndex++){
    out[outIndex] = (data[inIndex] >> 4) + 0x30;
    if (out[outIndex] > 0x39) out[outIndex] +=7;
    outIndex++;
    out[outIndex] = (data[inIndex] & 0x0f) + 0x30;
    if (out[outIndex] > 0x39) out[outIndex] +=7;
    outIndex++; 
  }
  out[8]='\0';

}


void setup(void) {
  Serial.begin(9600);
  Serial.println("Hey Cats, wat up?");

  nfc.begin();

  uint32_t versiondata = nfc.getFirmwareVersion();
  if (! versiondata) {
    Serial.print("Didn't find PN53x board");
    while (1); // halt
  }
  // Got ok data, print it out!
  Serial.print("Found chip PN5"); 
  Serial.println((versiondata>>24) & 0xFF, HEX); 
  Serial.print("Firmware ver. "); 
  Serial.print((versiondata>>16) & 0xFF, DEC); 
  Serial.print('.'); 
  Serial.println((versiondata>>8) & 0xFF, DEC);

  // configure board to read RFID tags
  nfc.SAMConfig();

  Serial.println("Waiting for an ISO14443A Card ...");
}
//    tag["9DC5C723"]= " (Anita)";
//    tag["4B7F8CBD"]="A (Your Name Here)";
//    tag["CB127BBD"]="Amelia"
//    tag["B047ABD"]= "C (Your Name Here)";
//    tag["BB91727F"]= "Tucker"
//    tag["EB3A87BD"]="Lily Bug"

void loop(void) {
  uint8_t success;
  char catID[9];
  uint8_t uid[] = { 
    0, 0, 0, 0, 0, 0, 0 ,0 ,0    };  // Buffer to store the returned UID
  uint8_t uidLength;                        // Length of the UID (4 or 7 bytes depending on ISO14443A card type)

  // Wait for an ISO14443A type cards (Mifare, etc.).  When one is found
  // 'uid' will be populated with the UID, and uidLength will indicate
  // if the uid is 4 bytes (Mifare Classic) or 7 bytes (Mifare Ultralight)
  success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, uid, &uidLength);

  if (success) {
    // Display some basic information about the card
    uidToString(uid,catID);
    Serial.println(catID);

    if(strcmp("4B7F8CBD",catID)==0) { // tag A
      play_rtttl(song);    
      toneAC();
    }
    if(strcmp("9DC5C723",catID)==0){ // tag 'Anita'
      play_rtttl(song4);   
      toneAC();
    }
  } 
  delay(1000);
}



void play_rtttl(char *p)
{
  // Absolutely no error checking in here on arduino segway clone
  byte default_dur = 4;
  byte default_oct = 6;
  int bpm = 63;
  int num;
  long wholenote;
  long duration;
  byte note;
  byte scale;

  // format: d=N,o=N,b=NNN:
  // find the start (skip name, etc)

  while(*p != ':') p++;    // ignore name
  p++;                     // skip ':'

  // get default duration
  if(*p == 'd')
  {
    p++; 
    p++;              // skip "d="
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }
    if(num > 0) default_dur = num;
    p++;                   // skip comma
  }

  // get default octave
  if(*p == 'o')
  {
    p++; 
    p++;              // skip "o="
    num = *p++ - '0';
    if(num >= 3 && num <=7) default_oct = num;
    p++;                   // skip comma
  }

  // get BPM
  if(*p == 'b')
  {
    p++; 
    p++;              // skip "b="
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }
    bpm = num;
    p++;                   // skip colon
  }

  // BPM usually expresses the number of quarter notes per minute
  wholenote = (60 * 1000L / bpm) * 4;  // this is the time for whole note (in milliseconds)

  // now begin note loop
  while(*p)
  {
    // first, get note duration, if available
    num = 0;
    while(isdigit(*p))
    {
      num = (num * 10) + (*p++ - '0');
    }

    if(num) duration = wholenote / num;
    else duration = wholenote / default_dur;  // we will need to check if we are a dotted note after

      // now get the note
    note = 0;

    switch(*p)
    {
    case 'c':
      note = 1;
      break;
    case 'd':
      note = 3;
      break;
    case 'e':
      note = 5;
      break;
    case 'f':
      note = 6;
      break;
    case 'g':
      note = 8;
      break;
    case 'a':
      note = 10;
      break;
    case 'b':
      note = 12;
      break;
    case 'p':
    default:
      note = 0;
    }
    p++;

    // now, get optional '#' sharp
    if(*p == '#')
    {
      note++;
      p++;
    }

    // now, get optional '.' dotted note
    if(*p == '.')
    {
      duration += duration/2;
      p++;
    }

    // now, get scale
    if(isdigit(*p))
    {
      scale = *p - '0';
      p++;
    }
    else
    {
      scale = default_oct;
    }

    scale += OCTAVE_OFFSET;

    if(*p == ',')
      p++;       // skip comma for next note (or we may be at the end)

    // now play the note
    if(note)
    {
      toneAC(notes[(scale - 4) * 12 + note], 10, duration, true);
      delay(duration);
      toneAC();
    }
    else
    {
      delay(duration);
    }
  }
}



