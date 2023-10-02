#include "PluginEditor.h"

//==============================================================================
AutoGainControlAudioProcessorEditor::AutoGainControlAudioProcessorEditor(AutoGainControlAudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor(p)
{
    setSize(400, 300);

}

AutoGainControlAudioProcessorEditor::~AutoGainControlAudioProcessorEditor()
{
}

void AutoGainControlAudioProcessorEditor::paint(juce::Graphics& g)
{
    g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

    g.setColour(juce::Colours::white);
    g.setFont(15.0f);
    g.drawFittedText("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void AutoGainControlAudioProcessorEditor::resized()
{

}


