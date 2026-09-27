#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemSet.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemSet_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemSet__FadePlayBackSpeed_d__12_def.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemSet__FadeScaleXZ_d__20_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)()>(&::GlobalNamespace::ParticleSystemSet::Awake)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x570e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.SetFadeRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)(float_t)>(&::GlobalNamespace::ParticleSystemSet::SetFadeRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x570e5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetFadeRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.SetPlayBackSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)(float_t)>(&::GlobalNamespace::ParticleSystemSet::SetPlayBackSpeed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x570e4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetPlayBackSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.FadePlayBackSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)(float_t)>(&::GlobalNamespace::ParticleSystemSet::FadePlayBackSpeed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x570e5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"FadePlayBackSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)(::StringW)>(&::GlobalNamespace::ParticleSystemSet::SetColor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x570e68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)(::StringW)>(&::GlobalNamespace::ParticleSystemSet::SetColors)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x570e864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetColors", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)()>(&::GlobalNamespace::ParticleSystemSet::Pause)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x570ea70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.StartEmission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)()>(&::GlobalNamespace::ParticleSystemSet::StartEmission)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x570ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"StartEmission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.StopEmission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)()>(&::GlobalNamespace::ParticleSystemSet::StopEmission)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x570ebac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"StopEmission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)()>(&::GlobalNamespace::ParticleSystemSet::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x570ec54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.SetScaleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)(float_t)>(&::GlobalNamespace::ParticleSystemSet::SetScaleXZ)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x570ecb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetScaleXZ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet.FadeScaleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)(float_t)>(&::GlobalNamespace::ParticleSystemSet::FadeScaleXZ)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x570ecf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"FadeScaleXZ", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemSet::*)()>(&::GlobalNamespace::ParticleSystemSet::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x570edac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_ActiveDuringEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveDuringEmission;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_ActiveDuringEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveDuringEmission;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_ActiveDuringEmission(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveDuringEmission = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_localScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_localScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localScale;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_localScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localScale = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_ps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_ps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_ps(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ps = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_psMains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psMains;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_MainModule> const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_psMains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psMains;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_psMains(::ArrayW<::GlobalNamespace::ParticleSystem_MainModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___psMains = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_skipForSimulationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipForSimulationSpeed;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_skipForSimulationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipForSimulationSpeed;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_skipForSimulationSpeed(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipForSimulationSpeed = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ParticleSystem_MainModule>*& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_skipSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ParticleSystem_MainModule>* const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_skipSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipSet;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_skipSet(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ParticleSystem_MainModule>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipSet = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_psEmits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psEmits;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_psEmits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___psEmits;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_psEmits(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___psEmits = value;
}
constexpr bool& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr bool const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loop = value;
}
constexpr float_t& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_fadeRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeRate;
}
constexpr float_t const& GlobalNamespace::ParticleSystemSet::__cordl_internal_get_fadeRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeRate;
}
constexpr void GlobalNamespace::ParticleSystemSet::__cordl_internal_set_fadeRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeRate = value;
}
inline void GlobalNamespace::ParticleSystemSet::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemSet::SetFadeRate(float_t  rate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetFadeRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rate);
}
inline void GlobalNamespace::ParticleSystemSet::SetPlayBackSpeed(float_t  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetPlayBackSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::ParticleSystemSet::FadePlayBackSpeed(float_t  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"FadePlayBackSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::ParticleSystemSet::SetColor(::StringW  RRGGBB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetColor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, RRGGBB);
}
inline void GlobalNamespace::ParticleSystemSet::SetColors(::StringW  RRGGBBRRGGBB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetColors", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, RRGGBBRRGGBB);
}
inline void GlobalNamespace::ParticleSystemSet::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemSet::StartEmission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"StartEmission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemSet::StopEmission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"StopEmission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemSet::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemSet::SetScaleXZ(float_t  scaler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"SetScaleXZ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaler);
}
inline void GlobalNamespace::ParticleSystemSet::FadeScaleXZ(float_t  scaler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {"FadeScaleXZ", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaler);
}
inline void GlobalNamespace::ParticleSystemSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystemSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemSet* GlobalNamespace::ParticleSystemSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleSystemSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemSet::ParticleSystemSet()   {
}
