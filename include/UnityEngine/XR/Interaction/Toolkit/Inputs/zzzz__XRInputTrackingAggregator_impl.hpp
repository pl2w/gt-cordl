#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/XRInputTrackingAggregator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__XRInputTrackingAggregator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__TrackingStatus_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__XRInputTrackingAggregator_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__EyeGazeInteraction_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetHMDStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetHMDStatus)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb4b4d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetHMDStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetEyeGazeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetEyeGazeStatus)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb4b5004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetEyeGazeStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetLeftControllerStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetLeftControllerStatus)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb4b5198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetLeftControllerStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetRightControllerStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetRightControllerStatus)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb4b52b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetRightControllerStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetLeftTrackedHandStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetLeftTrackedHandStatus)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4b53d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetLeftTrackedHandStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetRightTrackedHandStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetRightTrackedHandStatus)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4b5464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetRightTrackedHandStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetLeftMetaAimHandStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetLeftMetaAimHandStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4b54f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetLeftMetaAimHandStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetRightMetaAimHandStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetRightMetaAimHandStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4b5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetRightMetaAimHandStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.TryGetDeviceWithExactCharacteristics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDeviceCharacteristics, ::by_ref<::UnityEngine::XR::InputDevice>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::TryGetDeviceWithExactCharacteristics)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb4b3580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"TryGetDeviceWithExactCharacteristics", {}, {::i2c::type_of<::UnityEngine::XR::InputDeviceCharacteristics>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::InputDevice>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetTrackingStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)(::UnityEngine::InputSystem::TrackedDevice*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetTrackingStatus)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4b4e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetTrackingStatus", {}, {::i2c::type_of<::UnityEngine::InputSystem::TrackedDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetTrackingStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetTrackingStatus)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4b50e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetTrackingStatus", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator.GetTrackingStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus (*)(::UnityEngine::XR::InputDevice)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetTrackingStatus)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb4b4f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetTrackingStatus", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::setStaticF_s_XRInputDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*, "s_XRInputDevices", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::getStaticF_s_XRInputDevices()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*, "s_XRInputDevices", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetHMDStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetHMDStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetEyeGazeStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetEyeGazeStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetLeftControllerStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetLeftControllerStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetRightControllerStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetRightControllerStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetLeftTrackedHandStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetLeftTrackedHandStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetRightTrackedHandStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetRightTrackedHandStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetLeftMetaAimHandStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetLeftMetaAimHandStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetRightMetaAimHandStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetRightMetaAimHandStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::TryGetDeviceWithExactCharacteristics(::UnityEngine::XR::InputDeviceCharacteristics  desiredCharacteristics, ::by_ref<::UnityEngine::XR::InputDevice>  inputDevice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"TryGetDeviceWithExactCharacteristics", {}, {::i2c::type_of<::UnityEngine::XR::InputDeviceCharacteristics>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::InputDevice>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, desiredCharacteristics, inputDevice);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetTrackingStatus(::UnityEngine::InputSystem::TrackedDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetTrackingStatus", {}, {::i2c::type_of<::UnityEngine::InputSystem::TrackedDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method, device);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetTrackingStatus(::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetTrackingStatus", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method, device);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::GetTrackingStatus(::UnityEngine::XR::InputDevice  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator*>(),
                        {"GetTrackingStatus", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(nullptr, ___internal_method, device);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator::XRInputTrackingAggregator()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b4f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_hmd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_eyeGaze
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_eyeGaze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b5190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_eyeGaze", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_leftController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_leftController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b3578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_leftController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_rightController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_rightController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b3884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_rightController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_leftTrackedHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_leftTrackedHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b545c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_leftTrackedHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_rightTrackedHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_rightTrackedHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b54f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_rightTrackedHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_leftHandInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_leftHandInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b37c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_leftHandInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_rightHandInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_rightHandInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b388c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_rightHandInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_leftMicrosoftHandInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_leftMicrosoftHandInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b37c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_leftMicrosoftHandInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics.get_rightMicrosoftHandInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_rightMicrosoftHandInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b3894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_rightMicrosoftHandInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_hmd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_hmd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_eyeGaze()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_eyeGaze", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_leftController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_leftController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_rightController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_rightController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_leftTrackedHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_leftTrackedHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_rightTrackedHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_rightTrackedHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_leftHandInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_leftHandInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_rightHandInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_rightHandInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_leftMicrosoftHandInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_leftMicrosoftHandInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::get_rightMicrosoftHandInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics*>(),
                        {"get_rightMicrosoftHandInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputTrackingAggregator_Characteristics::XRInputTrackingAggregator_Characteristics()   {
}
