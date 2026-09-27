#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBall.hpp"
#include "GlobalNamespace/zzzz__GameBallId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameBall_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBall_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameBall.get_IsLaunched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::get_IsLaunched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a0d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"get_IsLaunched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::Awake)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x57a0d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::FixedUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x57a0edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.WasLaunched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::WasLaunched)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57a1054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"WasLaunched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.GetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::GetVelocity)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57a1088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"GetVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GameBall::SetVelocity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57a1144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.PlayCatchFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::PlayCatchFx)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x57a115c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"PlayCatchFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.PlayThrowFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::PlayThrowFx)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57a122c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"PlayThrowFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.PlayBounceFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::PlayBounceFX)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57a12ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"PlayBounceFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.SetHeldByTeamId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)(int32_t)>(&::GlobalNamespace::GameBall::SetHeldByTeamId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a13ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"SetHeldByTeamId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.IsGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameBall::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GameBall::IsGamePlayer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x57a13b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"IsGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall.SetVisualOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)(bool)>(&::GlobalNamespace::GameBall::SetVisualOffset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57a1428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"SetVisualOffset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBall._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBall::*)()>(&::GlobalNamespace::GameBall::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57a14c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameBallId& GlobalNamespace::GameBall::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::GlobalNamespace::GameBallId const& GlobalNamespace::GameBall::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_id(::GlobalNamespace::GameBallId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr float_t& GlobalNamespace::GameBall::__cordl_internal_get_gravityMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityMult;
}
constexpr float_t const& GlobalNamespace::GameBall::__cordl_internal_get_gravityMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityMult;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_gravityMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityMult = value;
}
constexpr bool& GlobalNamespace::GameBall::__cordl_internal_get_disc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disc;
}
constexpr bool const& GlobalNamespace::GameBall::__cordl_internal_get_disc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disc;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_disc(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disc = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GameBall::__cordl_internal_get_localDiscUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localDiscUp;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GameBall::__cordl_internal_get_localDiscUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localDiscUp;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_localDiscUp(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localDiscUp = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GameBall::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GameBall::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GameBall::__cordl_internal_get_catchSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GameBall::__cordl_internal_get_catchSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSound;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_catchSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchSound = value;
}
constexpr float_t& GlobalNamespace::GameBall::__cordl_internal_get_catchSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSoundVolume;
}
constexpr float_t const& GlobalNamespace::GameBall::__cordl_internal_get_catchSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSoundVolume;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_catchSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchSoundVolume = value;
}
constexpr float_t& GlobalNamespace::GameBall::__cordl_internal_get__catchSoundDecay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____catchSoundDecay;
}
constexpr float_t const& GlobalNamespace::GameBall::__cordl_internal_get__catchSoundDecay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____catchSoundDecay;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set__catchSoundDecay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____catchSoundDecay = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GameBall::__cordl_internal_get_throwSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GameBall::__cordl_internal_get_throwSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_throwSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSound = value;
}
constexpr float_t& GlobalNamespace::GameBall::__cordl_internal_get_throwSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSoundVolume;
}
constexpr float_t const& GlobalNamespace::GameBall::__cordl_internal_get_throwSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSoundVolume;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_throwSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GameBall::__cordl_internal_get_groundSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GameBall::__cordl_internal_get_groundSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundSound;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_groundSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundSound = value;
}
constexpr float_t& GlobalNamespace::GameBall::__cordl_internal_get_groundSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundSoundVolume;
}
constexpr float_t const& GlobalNamespace::GameBall::__cordl_internal_get_groundSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundSoundVolume;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_groundSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GameBall::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GameBall::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GameBall::__cordl_internal_get_collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GameBall::__cordl_internal_get_collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collider = value;
}
constexpr int32_t& GlobalNamespace::GameBall::__cordl_internal_get_heldByActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldByActorNumber;
}
constexpr int32_t const& GlobalNamespace::GameBall::__cordl_internal_get_heldByActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldByActorNumber;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_heldByActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldByActorNumber = value;
}
constexpr int32_t& GlobalNamespace::GameBall::__cordl_internal_get_lastHeldByActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeldByActorNumber;
}
constexpr int32_t const& GlobalNamespace::GameBall::__cordl_internal_get_lastHeldByActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeldByActorNumber;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_lastHeldByActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeldByActorNumber = value;
}
constexpr int32_t& GlobalNamespace::GameBall::__cordl_internal_get_lastHeldByTeamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeldByTeamId;
}
constexpr int32_t const& GlobalNamespace::GameBall::__cordl_internal_get_lastHeldByTeamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeldByTeamId;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_lastHeldByTeamId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeldByTeamId = value;
}
constexpr int32_t& GlobalNamespace::GameBall::__cordl_internal_get_onlyGrabTeamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyGrabTeamId;
}
constexpr int32_t const& GlobalNamespace::GameBall::__cordl_internal_get_onlyGrabTeamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyGrabTeamId;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set_onlyGrabTeamId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyGrabTeamId = value;
}
constexpr bool& GlobalNamespace::GameBall::__cordl_internal_get__launched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launched;
}
constexpr bool const& GlobalNamespace::GameBall::__cordl_internal_get__launched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launched;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set__launched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launched = value;
}
constexpr float_t& GlobalNamespace::GameBall::__cordl_internal_get__launchedTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchedTimer;
}
constexpr float_t const& GlobalNamespace::GameBall::__cordl_internal_get__launchedTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____launchedTimer;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set__launchedTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____launchedTimer = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBall>& GlobalNamespace::GameBall::__cordl_internal_get__monkeBall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monkeBall;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBall> const& GlobalNamespace::GameBall::__cordl_internal_get__monkeBall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monkeBall;
}
constexpr void GlobalNamespace::GameBall::__cordl_internal_set__monkeBall(::UnityW<::GlobalNamespace::MonkeBall>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monkeBall = value;
}
inline bool GlobalNamespace::GameBall::get_IsLaunched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"get_IsLaunched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameBall::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBall::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBall::WasLaunched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"WasLaunched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GameBall::GetVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"GetVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::GameBall::SetVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline void GlobalNamespace::GameBall::PlayCatchFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"PlayCatchFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBall::PlayThrowFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"PlayThrowFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBall::PlayBounceFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"PlayBounceFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBall::SetHeldByTeamId(int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"SetHeldByTeamId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId);
}
inline bool GlobalNamespace::GameBall::IsGamePlayer(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"IsGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GameBall::SetVisualOffset(bool  detach)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {"SetVisualOffset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, detach);
}
inline void GlobalNamespace::GameBall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBall*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameBall* GlobalNamespace::GameBall::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameBall*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBall::GameBall()   {
}
