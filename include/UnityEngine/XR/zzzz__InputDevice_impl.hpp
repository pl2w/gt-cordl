#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputDevice.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__HapticCapabilities_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputDevice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::InputDevice::*)(uint64_t)>(&::UnityEngine::XR::InputDevice::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb934420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.get_deviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::InputDevice::*)()>(&::UnityEngine::XR::InputDevice::get_deviceId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb934430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_deviceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)()>(&::UnityEngine::XR::InputDevice::get_isValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb934448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::InputDevice::*)()>(&::UnityEngine::XR::InputDevice::get_name)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb934500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.get_characteristics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDeviceCharacteristics (::UnityEngine::XR::InputDevice::*)()>(&::UnityEngine::XR::InputDevice::get_characteristics)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb9345ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_characteristics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.IsValidId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)()>(&::UnityEngine::XR::InputDevice::IsValidId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb9344a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"IsValidId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(uint32_t, float_t, float_t)>(&::UnityEngine::XR::InputDevice::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb934684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.TryGetHapticCapabilities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::by_ref<::UnityEngine::XR::HapticCapabilities>)>(&::UnityEngine::XR::InputDevice::TryGetHapticCapabilities)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9347d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetHapticCapabilities", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::HapticCapabilities>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.TryGetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<bool>, ::by_ref<bool>)>(&::UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb9348bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.TryGetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<uint32_t>, ::by_ref<uint32_t>)>(&::UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb934ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.TryGetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb934cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.TryGetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb934f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.TryGetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb93512c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.TryGetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb935348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.TryGetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState>, ::by_ref<::UnityEngine::XR::InputTrackingState>)>(&::UnityEngine::XR::InputDevice::TryGetFeatureValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb935564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::InputTrackingState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::System::Object*)>(&::UnityEngine::XR::InputDevice::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb9355f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                    {::i2c::class_of<::UnityEngine::XR::InputDevice>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::InputDevice::*)(::UnityEngine::XR::InputDevice)>(&::UnityEngine::XR::InputDevice::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb935688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::InputDevice::*)()>(&::UnityEngine::XR::InputDevice::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb9356b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                    {::i2c::class_of<::UnityEngine::XR::InputDevice>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputDevice.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::UnityEngine::XR::InputDevice)>(&::UnityEngine::XR::InputDevice::op_Equality)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb9356e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputDevice::setStaticF_s_InputSubsystemCache(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_InputSubsystemCache", ::UnityEngine::XR::InputDevice>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* UnityEngine::XR::InputDevice::getStaticF_s_InputSubsystemCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_InputSubsystemCache", ::UnityEngine::XR::InputDevice>();
}
inline void UnityEngine::XR::InputDevice::_ctor(uint64_t  deviceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, deviceId);
}
inline uint64_t UnityEngine::XR::InputDevice::get_deviceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_deviceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline bool UnityEngine::XR::InputDevice::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW UnityEngine::XR::InputDevice::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::XR::InputDeviceCharacteristics UnityEngine::XR::InputDevice::get_characteristics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"get_characteristics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDeviceCharacteristics>(*this, ___internal_method);
}
inline bool UnityEngine::XR::InputDevice::IsValidId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"IsValidId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::XR::InputDevice::SendHapticImpulse(uint32_t  channel, float_t  amplitude, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, channel, amplitude, duration);
}
inline bool UnityEngine::XR::InputDevice::TryGetHapticCapabilities(::by_ref<::UnityEngine::XR::HapticCapabilities>  capabilities)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetHapticCapabilities", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::HapticCapabilities>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, capabilities);
}
inline bool UnityEngine::XR::InputDevice::TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<bool>  usage, ::by_ref<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, usage, value);
}
inline bool UnityEngine::XR::InputDevice::TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<uint32_t>  usage, ::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, usage, value);
}
inline bool UnityEngine::XR::InputDevice::TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<float_t>  usage, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, usage, value);
}
inline bool UnityEngine::XR::InputDevice::TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>  usage, ::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, usage, value);
}
inline bool UnityEngine::XR::InputDevice::TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>  usage, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, usage, value);
}
inline bool UnityEngine::XR::InputDevice::TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>  usage, ::by_ref<::UnityEngine::Quaternion>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, usage, value);
}
inline bool UnityEngine::XR::InputDevice::TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState>  usage, ::by_ref<::UnityEngine::XR::InputTrackingState>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"TryGetFeatureValue", {}, {::i2c::type_of<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::InputTrackingState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, usage, value);
}
template<typename T>
inline bool UnityEngine::XR::InputDevice::CheckValidAndSetDefault(::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                    {"CheckValidAndSetDefault", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool UnityEngine::XR::InputDevice::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::InputDevice>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::XR::InputDevice::Equals(::UnityEngine::XR::InputDevice  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::XR::InputDevice::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::InputDevice>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::XR::InputDevice::op_Equality(::UnityEngine::XR::InputDevice  a, ::UnityEngine::XR::InputDevice  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputDevice>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::UnityEngine::XR::InputDevice>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
constexpr  UnityEngine::XR::InputDevice::operator ::System::IEquatable_1<::UnityEngine::XR::InputDevice>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputDevice>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::InputDevice>* UnityEngine::XR::InputDevice::i___System__IEquatable_1___UnityEngine__XR__InputDevice_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputDevice>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Initialized", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::InputDevice::InputDevice(uint64_t  m_DeviceId, bool  m_Initialized) noexcept  {
this->m_DeviceId = m_DeviceId;
this->m_Initialized = m_Initialized;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputDevice::InputDevice()   {
}
