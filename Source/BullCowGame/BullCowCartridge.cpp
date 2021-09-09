// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    //Welcome the player
    PrintLine(TEXT("Welcome to Bulls and Cows"));
    PrintLine(TEXT("Guess the 5 letter word"));
    PrintLine(TEXT("Press Enter to continue..."));
    InitGame();    //Game initilaized. Function was created in the header (BullCowCartridge.h) file
    // Git commit test
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("Your guess is correct!"));
    }
    else
    {
        PrintLine(TEXT("Your guess is wrong!"));
    }

}

void UBullCowCartridge::InitGame()
{
    
    HiddenWord = TEXT("apple");
    Lives = 3;
}