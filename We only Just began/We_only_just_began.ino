

// include our list of note pitches
#include "pitches.h"

// the pin the speaker is attached to
int speakerPin = 8;

// the notes in our melody and their duration in fractions of a second
// e.g. quarter note = 4, eighth note = 8, etc.
const int melody[][2] = 
{
    {NOTE_C4, 8},
    {NOTE_D4, 8},
    {NOTE_F4, 8},
    {NOTE_F4, 8},
    {NOTE_C5, 8},
    {NOTE_A4, 2},
    {NOTE_A4, 4},
    {NOTE_B4, 8},
    {NOTE_C5, 1},
    {NOTE_C5, 4},
    {NOTE_BLANK, 8},
    {NOTE_E5, 8},
     {NOTE_D5, 8},
  {NOTE_C5, 8},
  {NOTE_A4, 4},
   {NOTE_G4, 8},
     {NOTE_F4, 2},
       {NOTE_BLANK, 8},
       {NOTE_E5, 16},
       {NOTE_E5, 8},
       {NOTE_F5, 16},
       {NOTE_F5, 16},
       {NOTE_D5, 16},
       {NOTE_C5, 16},
       {NOTE_A4, 4},
        {NOTE_B4, 8},
         {NOTE_G4, 2},
          {NOTE_G4, 2},
            {NOTE_BLANK, 8},
              {NOTE_C4, 8},
    {NOTE_D4, 8},
    {NOTE_F4, 8},
    {NOTE_F4, 8},
    {NOTE_C5, 8},
    {NOTE_A4, 2},
    {NOTE_A4, 4},
    {NOTE_B4, 8},
    {NOTE_C5, 1},
    {NOTE_C5, 4},
    {NOTE_BLANK, 8},
    {NOTE_E5, 8},
     {NOTE_D5, 8},
  {NOTE_C5, 8},
  {NOTE_A4, 4},
   {NOTE_G4, 8},
     {NOTE_F4, 2},
       {NOTE_BLANK, 8},
       {NOTE_E5, 16},
       {NOTE_E5, 8},
       {NOTE_F5, 16},
       {NOTE_F5, 16},
       {NOTE_D5, 16},
       {NOTE_C5, 16},
       {NOTE_A4, 4},
        {NOTE_B4, 8},
         {NOTE_G4, 2},
          {NOTE_G4, 2},
          {NOTE_BLANK, 8},
          
         {NOTE_C4, 8},
          {NOTE_D4, 8},
           {NOTE_F4, 8},
           {NOTE_F4, 8},
           {NOTE_C5, 8},
            {NOTE_A4, 2},
              {NOTE_A4, 4},
                {NOTE_C5, 1},
                {NOTE_C5, 4},
                   
                   {NOTE_BLANK, 8},
                   
            {NOTE_E5, 4},
            {NOTE_D5, 4},
            {NOTE_C5, 4},
            {NOTE_A4, 4},
            {NOTE_G4, 8},
            {NOTE_F4, 2},
            {NOTE_BLANK, 8},
            {NOTE_E5, 16},
            {NOTE_E5, 8},
             {NOTE_F5, 16},
             {NOTE_F5, 16},
             {NOTE_D5, 16},
             {NOTE_C5, 8},
             {NOTE_B4, 8},
             {NOTE_G4, 2},
             {NOTE_G4, 4},
              {NOTE_BLANK, 8},
              {NOTE_C4, 8},
              {NOTE_D4, 8},
              {NOTE_F4, 8},
              {NOTE_F4, 8},
              {NOTE_C5, 8},
               {NOTE_A4, 1}
   // {NOTE_G3, 8},
   // {NOTE_G3, 8},
//    {NOTE_A3, 4},
    //{NOTE_G3, 4},
 //  {NOTE_BLANK, 4},
 //   {NOTE_B3, 4},
  //  {NOTE_C4, 4}
};

void setup()
{ int a ;
    // figure out the number of notes in our melody
    int numberOfNotes = sizeof(melody) / sizeof(melody[0]);
   for( a = 0; a < 1; a++){
    // iterate over the notes of the melody
    for (int thisNote = 0; thisNote < numberOfNotes; thisNote++)
    {
        // grab our note and note duration from our array
        int thisNoteTone = melody[thisNote][0];
        int thisNoteDuration = melody[thisNote][1];

        // to calculate the note duration in ms
        int noteDurationMS = 1500 / thisNoteDuration;

        // play the note
        tone(speakerPin, thisNoteTone, noteDurationMS);

        // to distinguish the notes, set a minimum time between them.
        // the note's duration + 30% seems to work well:
        delay(noteDurationMS * 1.30);}
    }
}

void loop()
{
    // no need to repeat the melody.
    // do nothing
}
