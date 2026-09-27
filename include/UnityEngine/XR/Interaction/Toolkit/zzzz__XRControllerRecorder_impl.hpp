#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRControllerRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerRecorder_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__IXRInputValueReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerRecorder_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerRecording_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerState_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_playOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_playOnStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_playOnStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.set_playOnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_playOnStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40189c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_playOnStart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_recording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_recording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4018a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_recording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.set_recording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_recording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4018ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_recording", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_visitEachFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_visitEachFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4018b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_visitEachFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.set_visitEachFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_visitEachFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4018bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_visitEachFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_isRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_isRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4018c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_isRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.set_isRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_isRecording)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb4018cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_isRecording", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_isPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.set_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_isPlaying)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb401988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_isPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_currentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_currentTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_currentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_duration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb401edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_recordingStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_recordingStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_recordingStartTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.set_recordingStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_recordingStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_recordingStartTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::Awake)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb401fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::Update)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0xb402184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb402b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.GetInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::GetInteractor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb402650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"GetInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.SetInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::SetInteractor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb402b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"SetInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.ResetPlayback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::ResetPlayback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb401ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"ResetPlayback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::StartPlaying)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xb401adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"StartPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::StopPlaying)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb401d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"StopPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.UpdatePlaybackTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(double_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::UpdatePlaybackTime)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xb4027cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"UpdatePlaybackTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.GetControllerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::GetControllerState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb402bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.get_xrController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_xrController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb402c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_xrController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder.set_xrController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_xrController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb402c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_xrController", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb402c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PlayOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayOnStart;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PlayOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayOnStart;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_PlayOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayOnStart = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_Recording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recording;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_Recording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recording;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_Recording(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Recording = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_InteractorObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_InteractorObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_InteractorObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorObject = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_VisitEachFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisitEachFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_VisitEachFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisitEachFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_VisitEachFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisitEachFrame = value;
}
constexpr double_t& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_CurrentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTime;
}
constexpr double_t const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_CurrentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_CurrentTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get__recordingStartTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartTime_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get__recordingStartTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartTime_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set__recordingStartTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingStartTime_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_Interactor(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_IsRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRecording;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_IsRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRecording;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_IsRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsRecording = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_IsPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsPlaying;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_IsPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsPlaying;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_IsPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsPlaying = value;
}
constexpr double_t& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_LastPlaybackTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPlaybackTime;
}
constexpr double_t const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_LastPlaybackTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPlaybackTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_LastPlaybackTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPlaybackTime = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_LastFrameIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameIdx;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_LastFrameIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFrameIdx;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_LastFrameIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFrameIdx = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevEnableInputActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevEnableInputActions;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevEnableInputActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevEnableInputActions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_PrevEnableInputActions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevEnableInputActions = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevEnableInputTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevEnableInputTracking;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevEnableInputTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevEnableInputTracking;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_PrevEnableInputTracking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevEnableInputTracking = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevSelectBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevSelectBypass;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevSelectBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevSelectBypass;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_PrevSelectBypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevSelectBypass = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevActivateBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevActivateBypass;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevActivateBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevActivateBypass;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_PrevActivateBypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevActivateBypass = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevUIPressBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevUIPressBypass;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevUIPressBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevUIPressBypass;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_PrevUIPressBypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevUIPressBypass = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevUIScrollBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevUIScrollBypass;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_PrevUIScrollBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevUIScrollBypass;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_PrevUIScrollBypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevUIScrollBypass = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_SelectBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectBypass;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_SelectBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectBypass;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_SelectBypass(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectBypass = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_ActivateBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateBypass;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_ActivateBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateBypass;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_ActivateBypass(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateBypass = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_UIPressBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressBypass;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_UIPressBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressBypass;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_UIPressBypass(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIPressBypass = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_UIScrollBypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollBypass;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_UIScrollBypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollBypass;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_UIScrollBypass(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIScrollBypass = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_XRController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRController;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_get_m_XRController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::__cordl_internal_set_m_XRController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XRController = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_playOnStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_playOnStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_playOnStart(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_playOnStart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_recording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_recording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_recording(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_recording", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_visitEachFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_visitEachFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_visitEachFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_visitEachFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_isRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_isRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_isRecording(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_isRecording", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_isPlaying(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_isPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_currentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_currentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_recordingStartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_recordingStartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_recordingStartTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_recordingStartTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::GetInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"GetInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::SetInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"SetInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::ResetPlayback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"ResetPlayback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::StartPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"StartPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::StopPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"StopPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::UpdatePlaybackTime(double_t  playbackTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"UpdatePlaybackTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playbackTime);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::GetControllerState(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controllerState);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::get_xrController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"get_xrController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {"set_xrController", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder::XRControllerRecorder()   {
}
template<typename TValue>
constexpr TValue& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::__cordl_internal_get__state_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state_k__BackingField;
}
template<typename TValue>
constexpr TValue const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::__cordl_internal_get__state_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state_k__BackingField;
}
template<typename TValue>
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::__cordl_internal_set__state_k__BackingField(TValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state_k__BackingField = value;
}
template<typename TValue>
inline TValue UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TValue>
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::set_state(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>*>(),
                        {"set_state", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TValue>
inline TValue UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::ReadValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>*>(),
                        {"ReadValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TValue>
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::TryReadValue(::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>*>(),
                        {"TryReadValue", {}, {::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename TValue>
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TValue>
inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
template<typename TValue>
constexpr  UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_TValue_() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
template<typename TValue>
constexpr  UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>::XRControllerRecorder_ValueBypass_1()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionState (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb402e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass.set_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionState)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::set_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb402e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"set_state", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass.ReadIsPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::ReadIsPerformed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb402e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"ReadIsPerformed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass.ReadWasPerformedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::ReadWasPerformedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb402e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"ReadWasPerformedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass.ReadWasCompletedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::ReadWasCompletedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb402e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"ReadWasCompletedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::ReadValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb402e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"ReadValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass.TryReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::*)(::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::TryReadValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb402e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"TryReadValue", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb402df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::__cordl_internal_get__state_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::__cordl_internal_get__state_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::__cordl_internal_set__state_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionState>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::set_state(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"set_state", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::ReadIsPerformed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"ReadIsPerformed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::ReadWasPerformedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"ReadWasPerformedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::ReadWasCompletedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"ReadWasCompletedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::ReadValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"ReadValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::TryReadValue(::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {"TryReadValue", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr  UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputButtonReader() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr  UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_float_t_() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr  UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass::XRControllerRecorder_ButtonBypass()   {
}
