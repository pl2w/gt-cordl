#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderProjectileTarget.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectileTarget_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileHitNotifier_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::Awake)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c2eb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c2ed0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c2ed9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.OnProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collision*)>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::OnProjectileHit)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c2ee5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::OnStateChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c2ef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::OnStateRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c2f10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::IsStateValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c2ef98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.PlayHitEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::PlayHitEffects)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c2efa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"PlayHitEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2f22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget.GetInteractionDistace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::GetInteractionDistace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c2f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"GetInteractionDistace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileTarget::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c2f238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitNotifier;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitNotifier;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_hitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitNotifier = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldown;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldown;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_hitCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitCooldown = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitSoundbank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundbank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitSoundbank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundbank;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_hitSoundbank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundbank = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitAnimation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitAnimation;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_hitAnimation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitAnimation = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_scoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_scoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreText;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_scoreText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreText = value;
}
constexpr double_t& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_lastHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr double_t const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_lastHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_lastHitTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitTime = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCount;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_get_hitCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCount;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileTarget::__cordl_internal_set_hitCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitCount = value;
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::OnProjectileHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderProjectileTarget::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::PlayHitEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"PlayHitEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GorillaTagScripts::Builder::BuilderProjectileTarget::GetInteractionDistace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {"GetInteractionDistace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderProjectileTarget* GorillaTagScripts::Builder::BuilderProjectileTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderProjectileTarget*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderProjectileTarget::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderProjectileTarget::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderProjectileTarget::BuilderProjectileTarget()   {
}
