/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class VS22_3B_CompressorAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    VS22_3B_CompressorAudioProcessorEditor (VS22_3B_CompressorAudioProcessor&);
    ~VS22_3B_CompressorAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    VS22_3B_CompressorAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VS22_3B_CompressorAudioProcessorEditor)
};
