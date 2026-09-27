#pragma once
// IWYU pragma private; include "GlobalNamespace/AngryBeeAnimator.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AngryBeeAnimator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AngryBeeAnimator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeAnimator::*)()>(&::GlobalNamespace::AngryBeeAnimator::Awake)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5e08f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeAnimator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeAnimator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeAnimator::*)()>(&::GlobalNamespace::AngryBeeAnimator::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e093c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeAnimator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeAnimator.SetEmergeFraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeAnimator::*)(float_t)>(&::GlobalNamespace::AngryBeeAnimator::SetEmergeFraction)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e09480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeAnimator*>(),
                        {"SetEmergeFraction", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeAnimator::*)()>(&::GlobalNamespace::AngryBeeAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e09580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beePrefab;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_beePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beePrefab = value;
}
constexpr int32_t& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_numBees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numBees;
}
constexpr int32_t const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_numBees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numBees;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_numBees(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numBees = value;
}
constexpr float_t& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMinRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMinRadius;
}
constexpr float_t const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMinRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMinRadius;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_orbitMinRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitMinRadius = value;
}
constexpr float_t& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMaxRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMaxRadius;
}
constexpr float_t const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMaxRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMaxRadius;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_orbitMaxRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitMaxRadius = value;
}
constexpr float_t& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMaxHeightDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMaxHeightDisplacement;
}
constexpr float_t const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMaxHeightDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMaxHeightDisplacement;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_orbitMaxHeightDisplacement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitMaxHeightDisplacement = value;
}
constexpr float_t& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMaxCenterDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMaxCenterDisplacement;
}
constexpr float_t const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMaxCenterDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMaxCenterDisplacement;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_orbitMaxCenterDisplacement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitMaxCenterDisplacement = value;
}
constexpr float_t& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMaxTilt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMaxTilt;
}
constexpr float_t const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitMaxTilt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitMaxTilt;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_orbitMaxTilt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitMaxTilt = value;
}
constexpr float_t& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitSpeed;
}
constexpr float_t const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_orbitSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitSpeed;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_orbitSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitSpeed = value;
}
constexpr float_t& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeScale;
}
constexpr float_t const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeScale;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_beeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beeScale = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beeOrbits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeOrbits;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beeOrbits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeOrbits;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_beeOrbits(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beeOrbits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_bees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bees;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_bees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bees;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_bees(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bees = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beeOrbitalAxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeOrbitalAxes;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beeOrbitalAxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeOrbitalAxes;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_beeOrbitalAxes(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beeOrbitalAxes = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beeOrbitalRadii()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeOrbitalRadii;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::AngryBeeAnimator::__cordl_internal_get_beeOrbitalRadii() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeOrbitalRadii;
}
constexpr void GlobalNamespace::AngryBeeAnimator::__cordl_internal_set_beeOrbitalRadii(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beeOrbitalRadii = value;
}
inline void GlobalNamespace::AngryBeeAnimator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeAnimator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeAnimator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeAnimator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeAnimator::SetEmergeFraction(float_t  fraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeAnimator*>(),
                        {"SetEmergeFraction", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fraction);
}
inline void GlobalNamespace::AngryBeeAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AngryBeeAnimator* GlobalNamespace::AngryBeeAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AngryBeeAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AngryBeeAnimator::AngryBeeAnimator()   {
}
