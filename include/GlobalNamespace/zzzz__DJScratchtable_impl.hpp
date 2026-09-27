#pragma once
// IWYU pragma private; include "GlobalNamespace/DJScratchtable.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__DJScratchtable_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticFan_def.hpp"
#include "GlobalNamespace/zzzz__DJScratchSoundPlayer_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DJScratchtable.SetPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchtable::*)(bool)>(&::GlobalNamespace::DJScratchtable::SetPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564c0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"SetPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchtable.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchtable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::DJScratchtable::OnTriggerStay)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x564c0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchtable.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchtable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::DJScratchtable::OnTriggerExit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x564c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchtable.SelectTrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchtable::*)(int32_t)>(&::GlobalNamespace::DJScratchtable::SelectTrack)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x564c688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"SelectTrack", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchtable.PauseTrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchtable::*)()>(&::GlobalNamespace::DJScratchtable::PauseTrack)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x564c058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"PauseTrack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchtable.ResumeTrack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchtable::*)()>(&::GlobalNamespace::DJScratchtable::ResumeTrack)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x564c0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"ResumeTrack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DJScratchtable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DJScratchtable::*)()>(&::GlobalNamespace::DJScratchtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x564c83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DJScratchtable::__cordl_internal_get_isLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr bool const& GlobalNamespace::DJScratchtable::__cordl_internal_get_isLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeft;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_isLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeft = value;
}
constexpr ::UnityW<::GlobalNamespace::DJScratchSoundPlayer>& GlobalNamespace::DJScratchtable::__cordl_internal_get_scratchPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchPlayer;
}
constexpr ::UnityW<::GlobalNamespace::DJScratchSoundPlayer> const& GlobalNamespace::DJScratchtable::__cordl_internal_get_scratchPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchPlayer;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_scratchPlayer(::UnityW<::GlobalNamespace::DJScratchSoundPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchPlayer = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_scratchCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchCooldown;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_scratchCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchCooldown;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_scratchCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchCooldown = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_scratchMinAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchMinAngle;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_scratchMinAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scratchMinAngle;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_scratchMinAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scratchMinAngle = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GlobalNamespace::DJScratchtable::__cordl_internal_get_tracks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tracks;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GlobalNamespace::DJScratchtable::__cordl_internal_get_tracks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tracks;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_tracks(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tracks = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticFan>& GlobalNamespace::DJScratchtable::__cordl_internal_get_turntableVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turntableVisual;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticFan> const& GlobalNamespace::DJScratchtable::__cordl_internal_get_turntableVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turntableVisual;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_turntableVisual(::UnityW<::GlobalNamespace::CosmeticFan>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turntableVisual = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_trackDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackDuration;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_trackDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackDuration;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_trackDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackDuration = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr int32_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_lastSelectedTrack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSelectedTrack;
}
constexpr int32_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_lastSelectedTrack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSelectedTrack;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_lastSelectedTrack(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSelectedTrack = value;
}
constexpr bool& GlobalNamespace::DJScratchtable::__cordl_internal_get_isPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaying;
}
constexpr bool const& GlobalNamespace::DJScratchtable::__cordl_internal_get_isPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlaying;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_isPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlaying = value;
}
constexpr bool& GlobalNamespace::DJScratchtable::__cordl_internal_get_isTouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTouching;
}
constexpr bool const& GlobalNamespace::DJScratchtable::__cordl_internal_get_isTouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTouching;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_isTouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTouching = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::DJScratchtable::__cordl_internal_get_firstTouchRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstTouchRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::DJScratchtable::__cordl_internal_get_firstTouchRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstTouchRotation;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_firstTouchRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstTouchRotation = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_lastScratchSoundAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScratchSoundAngle;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_lastScratchSoundAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastScratchSoundAngle;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_lastScratchSoundAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastScratchSoundAngle = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_cantForwardScratchUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cantForwardScratchUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_cantForwardScratchUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cantForwardScratchUntilTimestamp;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_cantForwardScratchUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cantForwardScratchUntilTimestamp = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_cantBackScratchUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cantBackScratchUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_cantBackScratchUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cantBackScratchUntilTimestamp;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_cantBackScratchUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cantBackScratchUntilTimestamp = value;
}
constexpr float_t& GlobalNamespace::DJScratchtable::__cordl_internal_get_pausedUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pausedUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::DJScratchtable::__cordl_internal_get_pausedUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pausedUntilTimestamp;
}
constexpr void GlobalNamespace::DJScratchtable::__cordl_internal_set_pausedUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pausedUntilTimestamp = value;
}
inline void GlobalNamespace::DJScratchtable::SetPlaying(bool  playing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"SetPlaying", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playing);
}
inline void GlobalNamespace::DJScratchtable::OnTriggerStay(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::DJScratchtable::OnTriggerExit(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::DJScratchtable::SelectTrack(int32_t  track)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"SelectTrack", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, track);
}
inline void GlobalNamespace::DJScratchtable::PauseTrack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"PauseTrack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DJScratchtable::ResumeTrack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {"ResumeTrack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DJScratchtable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DJScratchtable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DJScratchtable* GlobalNamespace::DJScratchtable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DJScratchtable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DJScratchtable::DJScratchtable()   {
}
