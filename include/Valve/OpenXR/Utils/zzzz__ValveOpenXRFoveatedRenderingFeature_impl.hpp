#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRFoveatedRenderingFeature.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRFoveatedRenderingFeature_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrResult_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA_def.hpp"
#include "Valve/OpenXR/Utils/zzzz__ValveOpenXRFoveatedRenderingFeature_def.hpp"
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature.get_foveatedRenderingLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::get_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb940914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"get_foveatedRenderingLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature.set_foveatedRenderingLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::*)(float_t)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::set_foveatedRenderingLevel)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb940af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"set_foveatedRenderingLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature.get_eyeTrackedFoveation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::get_eyeTrackedFoveation)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb940cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"get_eyeTrackedFoveation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature.set_eyeTrackedFoveation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::*)(bool)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::set_eyeTrackedFoveation)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb940eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"set_eyeTrackedFoveation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature.GetFoveationEyeTrackedCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::*)(::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::GetFoveationEyeTrackedCenter)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb941068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"GetFoveationEyeTrackedCenter", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature.OnSessionCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::*)(uint64_t)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::OnSessionCreate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb941194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature.OnSessionStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::*)(int32_t, int32_t)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::OnSessionStateChange)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb941220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::*)()>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94125c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get_applySettingsOnStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applySettingsOnStartup;
}
constexpr bool const& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get_applySettingsOnStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applySettingsOnStartup;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_set_applySettingsOnStartup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applySettingsOnStartup = value;
}
constexpr float_t& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get_initialFoveationLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFoveationLevel;
}
constexpr float_t const& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get_initialFoveationLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFoveationLevel;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_set_initialFoveationLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialFoveationLevel = value;
}
constexpr bool& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get_initialUseEyeTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialUseEyeTracking;
}
constexpr bool const& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get_initialUseEyeTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialUseEyeTracking;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_set_initialUseEyeTracking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialUseEyeTracking = value;
}
constexpr ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get__xrGetFoveationEyeTrackedStateMETA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrGetFoveationEyeTrackedStateMETA;
}
constexpr ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate* const& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get__xrGetFoveationEyeTrackedStateMETA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrGetFoveationEyeTrackedStateMETA;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_set__xrGetFoveationEyeTrackedStateMETA(::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrGetFoveationEyeTrackedStateMETA = value;
}
constexpr uint64_t& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get__xrSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrSession;
}
constexpr uint64_t const& Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_get__xrSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrSession;
}
constexpr void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::__cordl_internal_set__xrSession(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrSession = value;
}
inline float_t Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::get_foveatedRenderingLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"get_foveatedRenderingLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::set_foveatedRenderingLevel(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"set_foveatedRenderingLevel", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::get_eyeTrackedFoveation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"get_eyeTrackedFoveation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::set_eyeTrackedFoveation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"set_eyeTrackedFoveation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::GetFoveationEyeTrackedCenter(::by_ref<::UnityEngine::Vector2>  leftEye, ::by_ref<::UnityEngine::Vector2>  rightEye)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {"GetFoveationEyeTrackedCenter", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftEye, rightEye);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::OnSessionCreate(uint64_t  xrSession)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::OnSessionStateChange(int32_t  oldState, int32_t  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature* Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature*>());
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature::ValveOpenXRFoveatedRenderingFeature()   {
}
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods.FBSetFoveationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, uint32_t, float_t, uint32_t)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::FBSetFoveationLevel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb9413f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"FBSetFoveationLevel", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods.FBGetFoveationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::FBGetFoveationLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb941494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"FBGetFoveationLevel", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods.FBGetFoveationDynamic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::FBGetFoveationDynamic)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb941510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"FBGetFoveationDynamic", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods.MetaSetFoveationEyeTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, bool)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::MetaSetFoveationEyeTracked)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb94158c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"MetaSetFoveationEyeTracked", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods.MetaGetFoveationEyeTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::MetaGetFoveationEyeTracked)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb941610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"MetaGetFoveationEyeTracked", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods.Internal_SetHasEyeTrackingPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::Internal_SetHasEyeTrackingPermissions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9411a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"Internal_SetHasEyeTrackingPermissions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::FBSetFoveationLevel(uint64_t  session, uint32_t  level, float_t  verticalOffset, uint32_t  dynamic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"FBSetFoveationLevel", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, session, level, verticalOffset, dynamic);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::FBGetFoveationLevel(::by_ref<uint32_t>  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"FBGetFoveationLevel", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::FBGetFoveationDynamic(::by_ref<uint32_t>  dynamic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"FBGetFoveationDynamic", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dynamic);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::MetaSetFoveationEyeTracked(uint64_t  session, bool  isEyeTracked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"MetaSetFoveationEyeTracked", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, session, isEyeTracked);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::MetaGetFoveationEyeTracked(::by_ref<bool>  isEyeTracked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"MetaGetFoveationEyeTracked", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isEyeTracked);
}
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::Internal_SetHasEyeTrackingPermissions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods*>(),
                        {"Internal_SetHasEyeTrackingPermissions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_NativeMethods::ValveOpenXRFoveatedRenderingFeature_NativeMethods()   {
}
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::*)(::System::Object*, ::System::IntPtr)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb941264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::*)(uint64_t, ::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb941304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::*)(uint64_t, ::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>, ::System::AsyncCallback*, ::System::Object*)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb941318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrResult (::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::*)(::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>, ::System::IAsyncResult*)>(&::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb9413c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(),
                    {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::Invoke(uint64_t  session, ::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>  foveationState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(this, ___internal_method, session, foveationState);
}
inline ::System::IAsyncResult* Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::BeginInvoke(uint64_t  session, ::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>  foveationState, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, session, foveationState, callback, object);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::EndInvoke(::by_ref<::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateMETA>  foveationState, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrResult>(this, ___internal_method, foveationState, result);
}
inline ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate* Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Valve::OpenXR::Utils::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate::ValveOpenXRFoveatedRenderingFeature_XrGetFoveationEyeTrackedStateMETADelegate()   {
}
