/*
  ==============================================================================

    DJAudioPlayer.cpp
    Created: 2 Feb 2022 1:48:55pm
    Author:  Plamen Yankov

  ==============================================================================
*/

#include "DJAudioPlayer.h"

DJAudioPlayer::DJAudioPlayer(){
    
}
DJAudioPlayer::~DJAudioPlayer(){
    
}
void DJAudioPlayer::prepareToPlay (int samplesPerBlockExpected, double sampleRate){
    formatManager.registerBasicFormats();
    transportSource.prepareToPlay(samplesPerBlockExpected, sampleRate);
    resampleSource.prepareToPlay(samplesPerBlockExpected, sampleRate);
}
void DJAudioPlayer::getNextAudioBlock (const juce::AudioSourceChannelInfo& bufferToFill){
    resampleSource.getNextAudioBlock(bufferToFill);
}
void DJAudioPlayer::releaseResources(){
    transportSource.releaseResources();
    resampleSource.releaseResources();
}

void DJAudioPlayer::loadURL(juce::URL audioURL){
    
    auto* reader = formatManager.createReaderFor(audioURL.createInputStream(false));
    if (reader != nullptr) // good file!
    {
        std::unique_ptr<juce::AudioFormatReaderSource> newSource (new juce::AudioFormatReaderSource (reader,
true));
        transportSource.setSource (newSource.get(), 0, nullptr, reader->sampleRate);
        readerSource.reset (newSource.release());
    }
}
void DJAudioPlayer::setGain(double gain){
    if(0 < gain || gain > 1.0){
        std::cout << "DJAudioPlayer::setGain gain should be beteewn 0 and 1" << std::endl;
    }else{
        transportSource.setGain(gain);
    }
}
void DJAudioPlayer::setSpeed(double ratio){
    if(0 < ratio || ratio > 100.0){
        std::cout << "DJAudioPlayer::setSpeed ratio should be beteewn 0 and 100" << std::endl;
    }else{
        resampleSource.setResamplingRatio(ratio);
    }
}
void DJAudioPlayer::setPosition(double posInSec){
    transportSource.setPosition(posInSec);
}

void DJAudioPlayer::start(){
    transportSource.start();
}
void DJAudioPlayer::stop(){
    transportSource.stop();
}
void DJAudioPlayer::setPositionRelative(double pos){
    if(0 < pos || pos > 1.0){
        std::cout << "DJAudioPlayer::setPositionRelative pos should be beteewn 0 and 1" << std::endl;
    }else{
        double posInSec = transportSource.getLengthInSeconds() * pos;
        std::cout << "posInSec " << posInSec << std::endl;
        setPosition(posInSec);
    }
}
