#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticControlZone.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticControlZone_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticControlZone_def.hpp"
#include "Meta/XR/Acoustics/zzzz__Spectrum_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MetaXRAcousticControlZone_State* (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9ef94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.get_ZoneColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::get_ZoneColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e9ef9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_ZoneColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.set_ZoneColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)(::UnityEngine::Color)>(&::GlobalNamespace::MetaXRAcousticControlZone::set_ZoneColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e9efb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"set_ZoneColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.get_Rt60
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::Acoustics::Spectrum* (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::get_Rt60)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e9efd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_Rt60", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.set_Rt60
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)(::Meta::XR::Acoustics::Spectrum*)>(&::GlobalNamespace::MetaXRAcousticControlZone::set_Rt60)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e9efec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"set_Rt60", {}, {::i2c::type_of<::Meta::XR::Acoustics::Spectrum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.get_ReverbLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::Acoustics::Spectrum* (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::get_ReverbLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e9f004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_ReverbLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.set_ReverbLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)(::Meta::XR::Acoustics::Spectrum*)>(&::GlobalNamespace::MetaXRAcousticControlZone::set_ReverbLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e9f01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"set_ReverbLevel", {}, {::i2c::type_of<::Meta::XR::Acoustics::Spectrum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.get_FadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::get_FadeDistance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e9f034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_FadeDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.set_FadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)(float_t)>(&::GlobalNamespace::MetaXRAcousticControlZone::set_FadeDistance)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e9f04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"set_FadeDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.get_NativeFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::get_NativeFadeDistance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e9f2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_NativeFadeDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.get_NativeBoxSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::get_NativeBoxSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e9f364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_NativeBoxSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)(::GlobalNamespace::MetaXRAcousticControlZone_State*)>(&::GlobalNamespace::MetaXRAcousticControlZone::Clone)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e9f3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"Clone", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticControlZone_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::_ctor)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9e9f418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9f6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.StartInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::StartInternal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9e9f6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"StartInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e9fcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.DestroyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::DestroyInternal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e9fcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"DestroyInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::OnEnable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9e9fd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::OnDisable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9e9fe38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::LateUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e9ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.ApplyTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::ApplyTransform)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x9e9f064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"ApplyTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone.ApplyProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone::ApplyProperties)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x9e9f890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"ApplyProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MetaXRAcousticControlZone_State*& GlobalNamespace::MetaXRAcousticControlZone::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::MetaXRAcousticControlZone_State* const& GlobalNamespace::MetaXRAcousticControlZone::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void GlobalNamespace::MetaXRAcousticControlZone::__cordl_internal_set__state(::GlobalNamespace::MetaXRAcousticControlZone_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAcousticControlZone::__cordl_internal_get__controlHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlHandle;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAcousticControlZone::__cordl_internal_get__controlHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlHandle;
}
constexpr void GlobalNamespace::MetaXRAcousticControlZone::__cordl_internal_set__controlHandle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controlHandle = value;
}
inline ::GlobalNamespace::MetaXRAcousticControlZone_State* GlobalNamespace::MetaXRAcousticControlZone::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MetaXRAcousticControlZone_State*>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::MetaXRAcousticControlZone::get_ZoneColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_ZoneColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::set_ZoneColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"set_ZoneColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::Acoustics::Spectrum* GlobalNamespace::MetaXRAcousticControlZone::get_Rt60()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_Rt60", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::Acoustics::Spectrum*>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::set_Rt60(::Meta::XR::Acoustics::Spectrum*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"set_Rt60", {}, {::i2c::type_of<::Meta::XR::Acoustics::Spectrum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::Acoustics::Spectrum* GlobalNamespace::MetaXRAcousticControlZone::get_ReverbLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_ReverbLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::Acoustics::Spectrum*>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::set_ReverbLevel(::Meta::XR::Acoustics::Spectrum*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"set_ReverbLevel", {}, {::i2c::type_of<::Meta::XR::Acoustics::Spectrum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MetaXRAcousticControlZone::get_FadeDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_FadeDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::set_FadeDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"set_FadeDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MetaXRAcousticControlZone::get_NativeFadeDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_NativeFadeDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MetaXRAcousticControlZone::get_NativeBoxSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"get_NativeBoxSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::Clone(::GlobalNamespace::MetaXRAcousticControlZone_State*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"Clone", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticControlZone_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::StartInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"StartInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::DestroyInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"DestroyInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::ApplyTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"ApplyTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticControlZone::ApplyProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone*>(),
                        {"ApplyProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticControlZone* GlobalNamespace::MetaXRAcousticControlZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticControlZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticControlZone::MetaXRAcousticControlZone()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone_State.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone_State::*)(::GlobalNamespace::MetaXRAcousticControlZone_State*)>(&::GlobalNamespace::MetaXRAcousticControlZone_State::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e9f3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone_State*>(),
                        {"Clone", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticControlZone_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticControlZone_State._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticControlZone_State::*)()>(&::GlobalNamespace::MetaXRAcousticControlZone_State::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e9f634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone_State*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::Meta::XR::Acoustics::Spectrum*& GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_get_rt60()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rt60;
}
constexpr ::Meta::XR::Acoustics::Spectrum* const& GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_get_rt60() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rt60;
}
constexpr void GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_set_rt60(::Meta::XR::Acoustics::Spectrum*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rt60 = value;
}
constexpr ::Meta::XR::Acoustics::Spectrum*& GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_get_reverbLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverbLevel;
}
constexpr ::Meta::XR::Acoustics::Spectrum* const& GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_get_reverbLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverbLevel;
}
constexpr void GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_set_reverbLevel(::Meta::XR::Acoustics::Spectrum*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverbLevel = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_get_fadeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeDistance;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_get_fadeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeDistance;
}
constexpr void GlobalNamespace::MetaXRAcousticControlZone_State::__cordl_internal_set_fadeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeDistance = value;
}
inline void GlobalNamespace::MetaXRAcousticControlZone_State::Clone(::GlobalNamespace::MetaXRAcousticControlZone_State*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone_State*>(),
                        {"Clone", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticControlZone_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MetaXRAcousticControlZone_State::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticControlZone_State*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticControlZone_State* GlobalNamespace::MetaXRAcousticControlZone_State::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticControlZone_State*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticControlZone_State::MetaXRAcousticControlZone_State()   {
}
