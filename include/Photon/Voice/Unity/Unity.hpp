#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Photon/Voice/Unity/AndroidAudioInAEC.hpp"
#include "Photon/Voice/Unity/AndroidAudioInParameters.hpp"
#include "Photon/Voice/Unity/AudioChangesHandler.hpp"
#include "Photon/Voice/Unity/AudioClipWrapper.hpp"
#include "Photon/Voice/Unity/AudioInEnumerator.hpp"
#include "Photon/Voice/Unity/AudioInEnumeratorEx.hpp"
#include "Photon/Voice/Unity/AudioOutCapture.hpp"
#include "Photon/Voice/Unity/ILoggable.hpp"
#include "Photon/Voice/Unity/ILoggableDependent.hpp"
#include "Photon/Voice/Unity/Logger.hpp"
#include "Photon/Voice/Unity/MicWrapper.hpp"
#include "Photon/Voice/Unity/MicWrapperPusher.hpp"
#include "Photon/Voice/Unity/NativeAndroidMicrophoneSettings.hpp"
#include "Photon/Voice/Unity/PhotonVoiceCreatedParams.hpp"
#include "Photon/Voice/Unity/PlaybackDelaySettings.hpp"
#include "Photon/Voice/Unity/Recorder.hpp"
#include "Photon/Voice/Unity/Recorder_InputSourceType.hpp"
#include "Photon/Voice/Unity/Recorder_MicType.hpp"
#include "Photon/Voice/Unity/Recorder_SampleTypeConv.hpp"
#include "Photon/Voice/Unity/RemoteVoiceLink.hpp"
#include "Photon/Voice/Unity/Speaker.hpp"
#include "Photon/Voice/Unity/UnityAudioOut.hpp"
#include "Photon/Voice/Unity/UnityMicrophone.hpp"
#include "Photon/Voice/Unity/VoiceComponent.hpp"
#include "Photon/Voice/Unity/VoiceConnection.hpp"
#include "Photon/Voice/Unity/VoiceLogger.hpp"
#include "Photon/Voice/Unity/WebRtcAudioDsp.hpp"
#ifdef __cpp_modules
                    export module Unity;
                    #endif
                
