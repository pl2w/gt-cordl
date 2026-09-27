#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/Voice/Audio/Decoding/AudioDecoderJson.hpp"
#include "Meta/Voice/Audio/Decoding/AudioDecoderMp3.hpp"
#include "Meta/Voice/Audio/Decoding/AudioDecoderMp3Frame.hpp"
#include "Meta/Voice/Audio/Decoding/AudioDecoderOpus.hpp"
#include "Meta/Voice/Audio/Decoding/AudioDecoderPcm.hpp"
#include "Meta/Voice/Audio/Decoding/AudioDecoderPcmType.hpp"
#include "Meta/Voice/Audio/Decoding/AudioDecoderWav.hpp"
#include "Meta/Voice/Audio/Decoding/AudioJsonDecodeDelegate.hpp"
#include "Meta/Voice/Audio/Decoding/AudioSampleDecodeDelegate.hpp"
#include "Meta/Voice/Audio/Decoding/IAudioDecoder.hpp"
#ifdef __cpp_modules
                    export module Decoding;
                    #endif
                
