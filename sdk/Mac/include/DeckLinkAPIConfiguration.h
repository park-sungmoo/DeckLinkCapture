/* -LICENSE-START-
** Copyright (c) 2019 Blackmagic Design
**
** Permission is hereby granted, free of charge, to any person or organization
** obtaining a copy of the software and accompanying documentation covered by
** this license (the "Software") to use, reproduce, display, distribute,
** execute, and transmit the Software, and to prepare derivative works of the
** Software, and to permit third-parties to whom the Software is furnished to
** do so, all subject to the following:
** 
** The copyright notices in the Software and this entire statement, including
** the above license grant, this restriction and the following disclaimer,
** must be included in all copies of the Software, in whole or in part, and
** all derivative works of the Software, unless such copies or derivative
** works are solely in the form of machine-executable object code generated by
** a source language processor.
** 
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
** SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
** FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
** ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
** -LICENSE-END-
*/

#ifndef BMD_DECKLINKAPICONFIGURATION_H
#define BMD_DECKLINKAPICONFIGURATION_H


#ifndef BMD_CONST
    #if defined(_MSC_VER)
        #define BMD_CONST __declspec(selectany) static const
    #else
        #define BMD_CONST static const
    #endif
#endif

#ifndef BMD_PUBLIC
	#define BMD_PUBLIC
#endif

// Type Declarations


// Interface ID Declarations

BMD_CONST REFIID IID_IDeckLinkConfiguration                       = /* 912F634B-2D4E-40A4-8AAB-8D80B73F1289 */ {0x91,0x2F,0x63,0x4B,0x2D,0x4E,0x40,0xA4,0x8A,0xAB,0x8D,0x80,0xB7,0x3F,0x12,0x89};
BMD_CONST REFIID IID_IDeckLinkEncoderConfiguration                = /* 138050E5-C60A-4552-BF3F-0F358049327E */ {0x13,0x80,0x50,0xE5,0xC6,0x0A,0x45,0x52,0xBF,0x3F,0x0F,0x35,0x80,0x49,0x32,0x7E};

/* Enum BMDDeckLinkConfigurationID - DeckLink Configuration ID */

typedef uint32_t BMDDeckLinkConfigurationID;
enum _BMDDeckLinkConfigurationID {

    /* Serial port Flags */

    bmdDeckLinkConfigSwapSerialRxTx                              = 'ssrt',

    /* Video Input/Output Integers */

    bmdDeckLinkConfigHDMI3DPackingFormat                         = '3dpf',
    bmdDeckLinkConfigBypass                                      = 'byps',
    bmdDeckLinkConfigClockTimingAdjustment                       = 'ctad',

    /* Audio Input/Output Flags */

    bmdDeckLinkConfigAnalogAudioConsumerLevels                   = 'aacl',

    /* Video output flags */

    bmdDeckLinkConfigFieldFlickerRemoval                         = 'fdfr',
    bmdDeckLinkConfigHD1080p24ToHD1080i5994Conversion            = 'to59',
    bmdDeckLinkConfig444SDIVideoOutput                           = '444o',
    bmdDeckLinkConfigBlackVideoOutputDuringCapture               = 'bvoc',
    bmdDeckLinkConfigLowLatencyVideoOutput                       = 'llvo',
    bmdDeckLinkConfigDownConversionOnAllAnalogOutput             = 'caao',
    bmdDeckLinkConfigSMPTELevelAOutput                           = 'smta',
    bmdDeckLinkConfigRec2020Output                               = 'rec2',	// Ensure output is Rec.2020 colorspace
    bmdDeckLinkConfigQuadLinkSDIVideoOutputSquareDivisionSplit   = 'SDQS',

    /* Video Output Flags */

    bmdDeckLinkConfigOutput1080pAsPsF                            = 'pfpr',

    /* Video Output Integers */

    bmdDeckLinkConfigVideoOutputConnection                       = 'vocn',
    bmdDeckLinkConfigVideoOutputConversionMode                   = 'vocm',
    bmdDeckLinkConfigAnalogVideoOutputFlags                      = 'avof',
    bmdDeckLinkConfigReferenceInputTimingOffset                  = 'glot',
    bmdDeckLinkConfigVideoOutputIdleOperation                    = 'voio',
    bmdDeckLinkConfigDefaultVideoOutputMode                      = 'dvom',
    bmdDeckLinkConfigDefaultVideoOutputModeFlags                 = 'dvof',
    bmdDeckLinkConfigSDIOutputLinkConfiguration                  = 'solc',
    bmdDeckLinkConfigPlaybackGroup                               = 'plgr',

    /* Video Output Floats */

    bmdDeckLinkConfigVideoOutputComponentLumaGain                = 'oclg',
    bmdDeckLinkConfigVideoOutputComponentChromaBlueGain          = 'occb',
    bmdDeckLinkConfigVideoOutputComponentChromaRedGain           = 'occr',
    bmdDeckLinkConfigVideoOutputCompositeLumaGain                = 'oilg',
    bmdDeckLinkConfigVideoOutputCompositeChromaGain              = 'oicg',
    bmdDeckLinkConfigVideoOutputSVideoLumaGain                   = 'oslg',
    bmdDeckLinkConfigVideoOutputSVideoChromaGain                 = 'oscg',

    /* Video Input Flags */

    bmdDeckLinkConfigVideoInputScanning                          = 'visc',	// Applicable to H264 Pro Recorder only
    bmdDeckLinkConfigUseDedicatedLTCInput                        = 'dltc',	// Use timecode from LTC input instead of SDI stream
    bmdDeckLinkConfigSDIInput3DPayloadOverride                   = '3dds',

    /* Video Input Flags */

    bmdDeckLinkConfigCapture1080pAsPsF                           = 'cfpr',

    /* Video Input Integers */

    bmdDeckLinkConfigVideoInputConnection                        = 'vicn',
    bmdDeckLinkConfigAnalogVideoInputFlags                       = 'avif',
    bmdDeckLinkConfigVideoInputConversionMode                    = 'vicm',
    bmdDeckLinkConfig32PulldownSequenceInitialTimecodeFrame      = 'pdif',
    bmdDeckLinkConfigVANCSourceLine1Mapping                      = 'vsl1',
    bmdDeckLinkConfigVANCSourceLine2Mapping                      = 'vsl2',
    bmdDeckLinkConfigVANCSourceLine3Mapping                      = 'vsl3',
    bmdDeckLinkConfigCapturePassThroughMode                      = 'cptm',
    bmdDeckLinkConfigCaptureGroup                                = 'cpgr',

    /* Video Input Floats */

    bmdDeckLinkConfigVideoInputComponentLumaGain                 = 'iclg',
    bmdDeckLinkConfigVideoInputComponentChromaBlueGain           = 'iccb',
    bmdDeckLinkConfigVideoInputComponentChromaRedGain            = 'iccr',
    bmdDeckLinkConfigVideoInputCompositeLumaGain                 = 'iilg',
    bmdDeckLinkConfigVideoInputCompositeChromaGain               = 'iicg',
    bmdDeckLinkConfigVideoInputSVideoLumaGain                    = 'islg',
    bmdDeckLinkConfigVideoInputSVideoChromaGain                  = 'iscg',

    /* Audio Input Flags */

    bmdDeckLinkConfigMicrophonePhantomPower                      = 'mphp',

    /* Audio Input Integers */

    bmdDeckLinkConfigAudioInputConnection                        = 'aicn',

    /* Audio Input Floats */

    bmdDeckLinkConfigAnalogAudioInputScaleChannel1               = 'ais1',
    bmdDeckLinkConfigAnalogAudioInputScaleChannel2               = 'ais2',
    bmdDeckLinkConfigAnalogAudioInputScaleChannel3               = 'ais3',
    bmdDeckLinkConfigAnalogAudioInputScaleChannel4               = 'ais4',
    bmdDeckLinkConfigDigitalAudioInputScale                      = 'dais',
    bmdDeckLinkConfigMicrophoneInputGain                         = 'micg',

    /* Audio Output Integers */

    bmdDeckLinkConfigAudioOutputAESAnalogSwitch                  = 'aoaa',

    /* Audio Output Floats */

    bmdDeckLinkConfigAnalogAudioOutputScaleChannel1              = 'aos1',
    bmdDeckLinkConfigAnalogAudioOutputScaleChannel2              = 'aos2',
    bmdDeckLinkConfigAnalogAudioOutputScaleChannel3              = 'aos3',
    bmdDeckLinkConfigAnalogAudioOutputScaleChannel4              = 'aos4',
    bmdDeckLinkConfigDigitalAudioOutputScale                     = 'daos',
    bmdDeckLinkConfigHeadphoneVolume                             = 'hvol',

    /* Device Information Strings */

    bmdDeckLinkConfigDeviceInformationLabel                      = 'dila',
    bmdDeckLinkConfigDeviceInformationSerialNumber               = 'disn',
    bmdDeckLinkConfigDeviceInformationCompany                    = 'dico',
    bmdDeckLinkConfigDeviceInformationPhone                      = 'diph',
    bmdDeckLinkConfigDeviceInformationEmail                      = 'diem',
    bmdDeckLinkConfigDeviceInformationDate                       = 'dida',

    /* Deck Control Integers */

    bmdDeckLinkConfigDeckControlConnection                       = 'dcco'
};

/* Enum BMDDeckLinkEncoderConfigurationID - DeckLink Encoder Configuration ID */

typedef uint32_t BMDDeckLinkEncoderConfigurationID;
enum _BMDDeckLinkEncoderConfigurationID {

    /* Video Encoder Integers */

    bmdDeckLinkEncoderConfigPreferredBitDepth                    = 'epbr',
    bmdDeckLinkEncoderConfigFrameCodingMode                      = 'efcm',

    /* HEVC/H.265 Encoder Integers */

    bmdDeckLinkEncoderConfigH265TargetBitrate                    = 'htbr',

    /* DNxHR/DNxHD Compression ID */

    bmdDeckLinkEncoderConfigDNxHRCompressionID                   = 'dcid',

    /* DNxHR/DNxHD Level */

    bmdDeckLinkEncoderConfigDNxHRLevel                           = 'dlev',

    /* Encoded Sample Decriptions */

    bmdDeckLinkEncoderConfigMPEG4SampleDescription               = 'stsE',	// Full MPEG4 sample description (aka SampleEntry of an 'stsd' atom-box). Useful for MediaFoundation, QuickTime, MKV and more
    bmdDeckLinkEncoderConfigMPEG4CodecSpecificDesc               = 'esds'	// Sample description extensions only (atom stream, each with size and fourCC header). Useful for AVFoundation, VideoToolbox, MKV and more
};

// Forward Declarations

class IDeckLinkConfiguration;
class IDeckLinkEncoderConfiguration;

/* Interface IDeckLinkConfiguration - DeckLink Configuration interface */

class BMD_PUBLIC IDeckLinkConfiguration : public IUnknown
{
public:
    virtual HRESULT SetFlag (/* in */ BMDDeckLinkConfigurationID cfgID, /* in */ bool value) = 0;
    virtual HRESULT GetFlag (/* in */ BMDDeckLinkConfigurationID cfgID, /* out */ bool *value) = 0;
    virtual HRESULT SetInt (/* in */ BMDDeckLinkConfigurationID cfgID, /* in */ int64_t value) = 0;
    virtual HRESULT GetInt (/* in */ BMDDeckLinkConfigurationID cfgID, /* out */ int64_t *value) = 0;
    virtual HRESULT SetFloat (/* in */ BMDDeckLinkConfigurationID cfgID, /* in */ double value) = 0;
    virtual HRESULT GetFloat (/* in */ BMDDeckLinkConfigurationID cfgID, /* out */ double *value) = 0;
    virtual HRESULT SetString (/* in */ BMDDeckLinkConfigurationID cfgID, /* in */ CFStringRef value) = 0;
    virtual HRESULT GetString (/* in */ BMDDeckLinkConfigurationID cfgID, /* out */ CFStringRef *value) = 0;
    virtual HRESULT WriteConfigurationToPreferences (void) = 0;

protected:
    virtual ~IDeckLinkConfiguration () {} // call Release method to drop reference count
};

/* Interface IDeckLinkEncoderConfiguration - DeckLink Encoder Configuration interface. Obtained from IDeckLinkEncoderInput */

class BMD_PUBLIC IDeckLinkEncoderConfiguration : public IUnknown
{
public:
    virtual HRESULT SetFlag (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* in */ bool value) = 0;
    virtual HRESULT GetFlag (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ bool *value) = 0;
    virtual HRESULT SetInt (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* in */ int64_t value) = 0;
    virtual HRESULT GetInt (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ int64_t *value) = 0;
    virtual HRESULT SetFloat (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* in */ double value) = 0;
    virtual HRESULT GetFloat (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ double *value) = 0;
    virtual HRESULT SetString (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* in */ CFStringRef value) = 0;
    virtual HRESULT GetString (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ CFStringRef *value) = 0;
    virtual HRESULT GetBytes (/* in */ BMDDeckLinkEncoderConfigurationID cfgID, /* out */ void *buffer /* optional */, /* in, out */ uint32_t *bufferSize) = 0;

protected:
    virtual ~IDeckLinkEncoderConfiguration () {} // call Release method to drop reference count
};

/* Functions */

extern "C" {


}


#endif /* defined(BMD_DECKLINKAPICONFIGURATION_H) */