#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostPal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GhostPal_def.hpp"
#include "GlobalNamespace/zzzz__GhostPal_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostPal.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostPal::*)()>(&::GlobalNamespace::GhostPal::Awake)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x57f4648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostPal.BounceOnTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GhostPal::*)()>(&::GlobalNamespace::GhostPal::BounceOnTrigger)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57f474c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal*>(),
                        {"BounceOnTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostPal.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostPal::*)()>(&::GlobalNamespace::GhostPal::LateUpdate)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x57f47e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostPal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostPal::*)()>(&::GlobalNamespace::GhostPal::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57f4ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_minDistanceFromPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromPlayer;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_minDistanceFromPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistanceFromPlayer;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_minDistanceFromPlayer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistanceFromPlayer = value;
}
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_orbitRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitRadius;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_orbitRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitRadius;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_orbitRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitRadius = value;
}
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_orbitHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitHeight;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_orbitHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitHeight;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_orbitHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitHeight = value;
}
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_orbitSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitSpeed;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_orbitSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orbitSpeed;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_orbitSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orbitSpeed = value;
}
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_faceMovementDirectionStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceMovementDirectionStrength;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_faceMovementDirectionStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceMovementDirectionStrength;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_faceMovementDirectionStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceMovementDirectionStrength = value;
}
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_lookAtDotProductMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtDotProductMin;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_lookAtDotProductMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtDotProductMin;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_lookAtDotProductMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookAtDotProductMin = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GhostPal::__cordl_internal_get_rotateTowardsPlayerFromLookTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateTowardsPlayerFromLookTime;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GhostPal::__cordl_internal_get_rotateTowardsPlayerFromLookTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateTowardsPlayerFromLookTime;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_rotateTowardsPlayerFromLookTime(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateTowardsPlayerFromLookTime = value;
}
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_minLookTimeToTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLookTimeToTrigger;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_minLookTimeToTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLookTimeToTrigger;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_minLookTimeToTrigger(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minLookTimeToTrigger = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GhostPal::__cordl_internal_get_bounceOnTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceOnTrigger;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GhostPal::__cordl_internal_get_bounceOnTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceOnTrigger;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_bounceOnTrigger(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceOnTrigger = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GhostPal::__cordl_internal_get_triggerAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GhostPal::__cordl_internal_get_triggerAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerAudioSource;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_triggerAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerAudioSource = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GhostPal::__cordl_internal_get_triggerAudioPitchMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerAudioPitchMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GhostPal::__cordl_internal_get_triggerAudioPitchMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerAudioPitchMinMax;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_triggerAudioPitchMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerAudioPitchMinMax = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::GhostPal::__cordl_internal_get_triggerAudioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerAudioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::GhostPal::__cordl_internal_get_triggerAudioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerAudioClips;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_triggerAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerAudioClips = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GhostPal::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GhostPal::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::GhostPal::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::GhostPal::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_lookAtTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtTime;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_lookAtTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookAtTime;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_lookAtTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookAtTime = value;
}
constexpr bool& GlobalNamespace::GhostPal::__cordl_internal_get_hasTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTriggered;
}
constexpr bool const& GlobalNamespace::GhostPal::__cordl_internal_get_hasTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTriggered;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_hasTriggered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasTriggered = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GhostPal::__cordl_internal_get_bounceCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GhostPal::__cordl_internal_get_bounceCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceCoroutine;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_bounceCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceCoroutine = value;
}
constexpr float_t& GlobalNamespace::GhostPal::__cordl_internal_get_bounceHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceHeight;
}
constexpr float_t const& GlobalNamespace::GhostPal::__cordl_internal_get_bounceHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounceHeight;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_bounceHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounceHeight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GhostPal::__cordl_internal_get_trailingPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailingPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GhostPal::__cordl_internal_get_trailingPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailingPosition;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_trailingPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailingPosition = value;
}
constexpr int32_t& GlobalNamespace::GhostPal::__cordl_internal_get_triggerAudioClipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerAudioClipIndex;
}
constexpr int32_t const& GlobalNamespace::GhostPal::__cordl_internal_get_triggerAudioClipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerAudioClipIndex;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_triggerAudioClipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerAudioClipIndex = value;
}
constexpr int32_t& GlobalNamespace::GhostPal::__cordl_internal_get_neutralAnimID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neutralAnimID;
}
constexpr int32_t const& GlobalNamespace::GhostPal::__cordl_internal_get_neutralAnimID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neutralAnimID;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_neutralAnimID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neutralAnimID = value;
}
constexpr int32_t& GlobalNamespace::GhostPal::__cordl_internal_get_friendlyAnimID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendlyAnimID;
}
constexpr int32_t const& GlobalNamespace::GhostPal::__cordl_internal_get_friendlyAnimID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendlyAnimID;
}
constexpr void GlobalNamespace::GhostPal::__cordl_internal_set_friendlyAnimID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendlyAnimID = value;
}
inline void GlobalNamespace::GhostPal::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GhostPal::BounceOnTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal*>(),
                        {"BounceOnTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GhostPal::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostPal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostPal* GlobalNamespace::GhostPal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostPal*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostPal::GhostPal()   {
}
//  Writing Method size for method: ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::*)(int32_t)>(&::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57f47b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::*)()>(&::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57f50b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::*)()>(&::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x57f50b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::*)()>(&::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f51d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::*)()>(&::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57f51e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::*)()>(&::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f5218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostPal>& GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GhostPal> const& GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GhostPal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void GlobalNamespace::GhostPal__BounceOnTrigger_d__23::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
inline void GlobalNamespace::GhostPal__BounceOnTrigger_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GhostPal__BounceOnTrigger_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostPal__BounceOnTrigger_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GhostPal__BounceOnTrigger_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GhostPal__BounceOnTrigger_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GhostPal__BounceOnTrigger_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23* GlobalNamespace::GhostPal__BounceOnTrigger_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostPal__BounceOnTrigger_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GhostPal__BounceOnTrigger_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GhostPal__BounceOnTrigger_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GhostPal__BounceOnTrigger_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GhostPal__BounceOnTrigger_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GhostPal__BounceOnTrigger_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GhostPal__BounceOnTrigger_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostPal__BounceOnTrigger_d__23::GhostPal__BounceOnTrigger_d__23()   {
}
