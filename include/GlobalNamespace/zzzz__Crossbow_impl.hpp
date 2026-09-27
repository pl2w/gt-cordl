#pragma once
// IWYU pragma private; include "GlobalNamespace/Crossbow.hpp"
#include "GlobalNamespace/zzzz__AnimHashId_impl.hpp"
#include "GlobalNamespace/zzzz__ProjectileWeapon_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_impl.hpp"
#include "GlobalNamespace/zzzz__Crossbow_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Crossbow.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crossbow::*)()>(&::GlobalNamespace::Crossbow::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5649f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                    {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crossbow.SetReloadFraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crossbow::*)(float_t)>(&::GlobalNamespace::Crossbow::SetReloadFraction)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x564a018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                        {"SetReloadFraction", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crossbow.OnCrank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crossbow::*)(float_t)>(&::GlobalNamespace::Crossbow::OnCrank)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x564a0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                        {"OnCrank", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crossbow.GetLaunchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Crossbow::*)()>(&::GlobalNamespace::Crossbow::GetLaunchPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x564a1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                    {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crossbow.GetLaunchVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Crossbow::*)()>(&::GlobalNamespace::Crossbow::GetLaunchVelocity)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x564a1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                    {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crossbow.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crossbow::*)()>(&::GlobalNamespace::Crossbow::LateUpdateLocal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x564a230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                    {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crossbow.LateUpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crossbow::*)()>(&::GlobalNamespace::Crossbow::LateUpdateReplicated)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x564a324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                    {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crossbow.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crossbow::*)()>(&::GlobalNamespace::Crossbow::LateUpdateShared)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x564a378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                    {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Crossbow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Crossbow::*)()>(&::GlobalNamespace::Crossbow::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x564a3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Crossbow::__cordl_internal_get_launchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Crossbow::__cordl_internal_get_launchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchPosition;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_launchPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchPosition = value;
}
constexpr float_t& GlobalNamespace::Crossbow::__cordl_internal_get_launchSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSpeed;
}
constexpr float_t const& GlobalNamespace::Crossbow::__cordl_internal_get_launchSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSpeed;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_launchSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::Crossbow::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::Crossbow::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr float_t& GlobalNamespace::Crossbow::__cordl_internal_get_crankTotalDegreesToReload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankTotalDegreesToReload;
}
constexpr float_t const& GlobalNamespace::Crossbow::__cordl_internal_get_crankTotalDegreesToReload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankTotalDegreesToReload;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_crankTotalDegreesToReload(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankTotalDegreesToReload = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>& GlobalNamespace::Crossbow::__cordl_internal_get_cranks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cranks;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>> const& GlobalNamespace::Crossbow::__cordl_internal_get_cranks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cranks;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_cranks(::ArrayW<::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cranks = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::Crossbow::__cordl_internal_get_dummyProjectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyProjectile;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::Crossbow::__cordl_internal_get_dummyProjectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyProjectile;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_dummyProjectile(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyProjectile = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::Crossbow::__cordl_internal_get_reloadAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::Crossbow::__cordl_internal_get_reloadAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadAudio;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_reloadAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reloadAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::Crossbow::__cordl_internal_get_reloadComplete_audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadComplete_audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::Crossbow::__cordl_internal_get_reloadComplete_audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reloadComplete_audioClip;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_reloadComplete_audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reloadComplete_audioClip = value;
}
constexpr float_t& GlobalNamespace::Crossbow::__cordl_internal_get_crankSoundContinueDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundContinueDuration;
}
constexpr float_t const& GlobalNamespace::Crossbow::__cordl_internal_get_crankSoundContinueDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundContinueDuration;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_crankSoundContinueDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankSoundContinueDuration = value;
}
constexpr float_t& GlobalNamespace::Crossbow::__cordl_internal_get_crankSoundDegreesThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundDegreesThreshold;
}
constexpr float_t const& GlobalNamespace::Crossbow::__cordl_internal_get_crankSoundDegreesThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundDegreesThreshold;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_crankSoundDegreesThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankSoundDegreesThreshold = value;
}
constexpr ::GlobalNamespace::AnimHashId& GlobalNamespace::Crossbow::__cordl_internal_get_FireHashID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FireHashID;
}
constexpr ::GlobalNamespace::AnimHashId const& GlobalNamespace::Crossbow::__cordl_internal_get_FireHashID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FireHashID;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_FireHashID(::GlobalNamespace::AnimHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FireHashID = value;
}
constexpr ::GlobalNamespace::AnimHashId& GlobalNamespace::Crossbow::__cordl_internal_get_ReloadFractionHashID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReloadFractionHashID;
}
constexpr ::GlobalNamespace::AnimHashId const& GlobalNamespace::Crossbow::__cordl_internal_get_ReloadFractionHashID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReloadFractionHashID;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_ReloadFractionHashID(::GlobalNamespace::AnimHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReloadFractionHashID = value;
}
constexpr float_t& GlobalNamespace::Crossbow::__cordl_internal_get_totalCrankDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCrankDegrees;
}
constexpr float_t const& GlobalNamespace::Crossbow::__cordl_internal_get_totalCrankDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCrankDegrees;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_totalCrankDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalCrankDegrees = value;
}
constexpr float_t& GlobalNamespace::Crossbow::__cordl_internal_get_loadFraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFraction;
}
constexpr float_t const& GlobalNamespace::Crossbow::__cordl_internal_get_loadFraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadFraction;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_loadFraction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadFraction = value;
}
constexpr float_t& GlobalNamespace::Crossbow::__cordl_internal_get_playingCrankSoundUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingCrankSoundUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::Crossbow::__cordl_internal_get_playingCrankSoundUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingCrankSoundUntilTimestamp;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_playingCrankSoundUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playingCrankSoundUntilTimestamp = value;
}
constexpr float_t& GlobalNamespace::Crossbow::__cordl_internal_get_crankSoundDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundDegrees;
}
constexpr float_t const& GlobalNamespace::Crossbow::__cordl_internal_get_crankSoundDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankSoundDegrees;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_crankSoundDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankSoundDegrees = value;
}
constexpr bool& GlobalNamespace::Crossbow::__cordl_internal_get_wasPressingTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasPressingTrigger;
}
constexpr bool const& GlobalNamespace::Crossbow::__cordl_internal_get_wasPressingTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasPressingTrigger;
}
constexpr void GlobalNamespace::Crossbow::__cordl_internal_set_wasPressingTrigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasPressingTrigger = value;
}
inline void GlobalNamespace::Crossbow::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Crossbow::SetReloadFraction(float_t  newFraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                        {"SetReloadFraction", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newFraction);
}
inline void GlobalNamespace::Crossbow::OnCrank(float_t  degrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                        {"OnCrank", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, degrees);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Crossbow::GetLaunchPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Crossbow::GetLaunchVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::Crossbow::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Crossbow::LateUpdateReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Crossbow::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Crossbow*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Crossbow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Crossbow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Crossbow* GlobalNamespace::Crossbow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Crossbow*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Crossbow::Crossbow()   {
}
