#pragma once
// IWYU pragma private; include "GlobalNamespace/HowManyMonkeDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HowManyMonkeDisplay_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HowManyMonkeDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonkeDisplay::*)()>(&::GlobalNamespace::HowManyMonkeDisplay::OnEnable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x56c16a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonkeDisplay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonkeDisplay::*)()>(&::GlobalNamespace::HowManyMonkeDisplay::OnDisable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x56c1758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonkeDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonkeDisplay::*)()>(&::GlobalNamespace::HowManyMonkeDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56c188c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonkeDisplay.HowManyMonke_OnCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonkeDisplay::*)(int32_t)>(&::GlobalNamespace::HowManyMonkeDisplay::HowManyMonke_OnCheck)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56c19b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"HowManyMonke_OnCheck", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonkeDisplay.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonkeDisplay::*)()>(&::GlobalNamespace::HowManyMonkeDisplay::SliceUpdate)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x56c19d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HowManyMonkeDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HowManyMonkeDisplay::*)()>(&::GlobalNamespace::HowManyMonkeDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56c1da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr float_t& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_observableDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableDistance;
}
constexpr float_t const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_observableDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableDistance;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_observableDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observableDistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_observableActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_observableActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observableActive;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_observableActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observableActive = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystem;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystem = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_particleSystemRateToCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystemRateToCount;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_particleSystemRateToCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystemRateToCount;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_particleSystemRateToCount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystemRateToCount = value;
}
constexpr bool& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_observable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observable;
}
constexpr bool const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_observable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observable;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_observable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observable = value;
}
constexpr int32_t& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_currValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currValue;
}
constexpr int32_t const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_currValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currValue;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_currValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currValue = value;
}
constexpr int32_t& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_nextValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextValue;
}
constexpr int32_t const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_nextValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextValue;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_nextValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextValue = value;
}
constexpr float_t& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_checkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkTime;
}
constexpr float_t const& GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_get_checkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkTime;
}
constexpr void GlobalNamespace::HowManyMonkeDisplay::__cordl_internal_set_checkTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkTime = value;
}
inline void GlobalNamespace::HowManyMonkeDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HowManyMonkeDisplay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HowManyMonkeDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HowManyMonkeDisplay::HowManyMonke_OnCheck(int32_t  thisMany)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"HowManyMonke_OnCheck", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisMany);
}
inline void GlobalNamespace::HowManyMonkeDisplay::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HowManyMonkeDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HowManyMonkeDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HowManyMonkeDisplay* GlobalNamespace::HowManyMonkeDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HowManyMonkeDisplay*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::HowManyMonkeDisplay::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::HowManyMonkeDisplay::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HowManyMonkeDisplay::HowManyMonkeDisplay()   {
}
