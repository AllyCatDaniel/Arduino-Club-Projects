

// include our list of note pitches
#include "pitches.h"

// the pin the speaker is attached to
int speakerPin = 8;

// the notes in our melody and their duration in fractions of a second
// e.g. quarter note = 4, eighth note = 8, sixtenth note =16 etc.
const int LetitBe[][2] = 
{
    {NOTE_DS4, 16},
    {NOTE_DS4, 16},
    {NOTE_DS4, 8},  
    {NOTE_DS4, 16},
    {NOTE_ES4, 16},
    {NOTE_ES4, 8},
    {NOTE_BS4, 8},
    {NOTE_DS4, 16},
    {NOTE_DS4, 16},
    {NOTE_DS4, 16},
    {NOTE_GS4, 16},
    {NOTE_AS4, 8},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8},
    {NOTE_AS4, 8},
    {NOTE_AS4, 8},
    {NOTE_GS4, 8},
    {NOTE_GS4, 4},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8},
    {NOTE_CS5, 16},
    {NOTE_BS4, 16},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8},
    {NOTE_AS4, 8},  
    {NOTE_BLANK, 8},
    {NOTE_BS4, 16},
    {NOTE_AS4, 16},
    {NOTE_AS4, 16},
    {NOTE_AS4, 16},
    {NOTE_GS4, 2},
    {NOTE_GS4, 2},
    {NOTE_BLANK, 8},
    {NOTE_DS4, 16},
    {NOTE_DS4, 16},
    {NOTE_DS4, 8},
    {NOTE_ES4, 8},
    {NOTE_GS4, 16},
    {NOTE_DS4, 4},
    {NOTE_DS4, 8},
    {NOTE_GS4, 16},
    {NOTE_AS4, 8},
    {NOTE_AS4, 16},
    {NOTE_BS4, 8},
    {NOTE_BS4, 8},
    {NOTE_AS4, 16},
    {NOTE_AS4, 8},
    {NOTE_GS4, 8},
    {NOTE_GS4, 16},
    {NOTE_GS4, 8},
    {NOTE_GS4, 4},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8},
    {NOTE_AS4, 8},
    {NOTE_BS4, 16},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8}, 
    {NOTE_AS4, 8},
    {NOTE_BLANK, 8},
    {NOTE_BS4, 16},
    {NOTE_AS4, 16},
    {NOTE_AS4, 16},
    {NOTE_GS4, 8},
    {NOTE_GS4, 2},
    {NOTE_BS4, 16},
    {NOTE_AS4, 8},
    {NOTE_GS4, 16},
    {NOTE_GS4, 4},
    {NOTE_BS4, 16},
    {NOTE_DS5, 8},
    {NOTE_ES5, 16},
    {NOTE_ES5, 8},
    {NOTE_DS5, 8},
    {NOTE_DS5, 16},
    {NOTE_DS5, 8},
    {NOTE_BS4, 16},
    {NOTE_BS4, 16},
    {NOTE_AS4, 16},
    {NOTE_GS4, 8},
    {NOTE_ES4, 16},
    {NOTE_DS4, 8},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8},
    {NOTE_GS4, 4},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8},
    {NOTE_CS5, 16},
    {NOTE_CS5, 8},
    {NOTE_BS4, 16},
    {NOTE_BS4, 16},
    {NOTE_BS4, 8},
    {NOTE_AS4, 8},
    {NOTE_BLANK, 8},
    {NOTE_BS4, 16},
    {NOTE_AS4, 16},
    {NOTE_AS4, 16},
    {NOTE_AS4, 8},
    {NOTE_GS4, 4},
    {NOTE_GS4, 4}
 
};

void setup()
{ int a ;
    // figure out the number of notes in our melody
    int numberOfNotes = sizeof(LetitBe) / sizeof(LetitBe[0]);
   for( a = 0; a <1; a++){
    // iterate over the notes of the melody
    for (int thisNote = 0; thisNote < numberOfNotes; thisNote++)
    {
        // grab our note and note duration from our array
        int thisNoteTone = LetitBe[thisNote][0];
        int thisNoteDuration = LetitBe[thisNote][1];

        // to calculate the note duration in ms
        int noteDurationMS = 3000 / thisNoteDuration;

        // play the note
        tone(speakerPin, thisNoteTone, noteDurationMS);

        // to distinguish the notes, set a minimum time between them.
        
        delay(noteDurationMS * 1.30);}
    }
}

void loop()
{
    
    // do nothing
}
