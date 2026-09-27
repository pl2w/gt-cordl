#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderProjectileLauncher.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectileLauncher_FunctionalState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectileLauncher_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectileLauncher_FunctionalState_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectile_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.LaunchProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)(int32_t)>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::LaunchProjectile)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x5c2e1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"LaunchProjectile", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::OnStateChanged)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c2e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.OnStateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::OnStateRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.IsStateValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)(uint8_t)>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::IsStateValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c2e7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.FunctionalPieceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::FunctionalPieceUpdate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c2e804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)(int32_t, int32_t)>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPieceCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2e998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2e99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2e9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPieceActivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c2e9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c2e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.RegisterProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)(::GorillaTagScripts::Builder::BuilderProjectile*)>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::RegisterProjectile)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c2d0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"RegisterProjectile", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher.UnRegisterProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)(::GorillaTagScripts::Builder::BuilderProjectile*)>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::UnRegisterProjectile)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c2d8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"UnRegisterProjectile", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderProjectileLauncher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderProjectileLauncher::*)()>(&::GorillaTagScripts::Builder::BuilderProjectileLauncher::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c2ea74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_launchedProjectiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchedProjectiles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>* const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_launchedProjectiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchedProjectiles;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_launchedProjectiles(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchedProjectiles = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_fireCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldown;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_fireCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldown;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_fireCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireCooldown = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_launchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_launchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchPosition;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_launchPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchPosition = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_launchVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchVelocity;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_launchVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchVelocity;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_launchVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchVelocity = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_launchSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_launchSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchSound;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_launchSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchSound = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_projectileScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileScale;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_projectileScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileScale;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_projectileScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileScale = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_gravityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityMultiplier;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_gravityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityMultiplier;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_gravityMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityMultiplier = value;
}
constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_knockbackConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackConfig;
}
constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_knockbackConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackConfig;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_knockbackConfig(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackConfig = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_lastFireTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFireTime;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_lastFireTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFireTime;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_lastFireTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFireTime = value;
}
constexpr ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_currentState(::GlobalNamespace::BuilderProjectileLauncher_FunctionalState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_allProjectiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allProjectiles;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>* const& GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_get_allProjectiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allProjectiles;
}
constexpr void GorillaTagScripts::Builder::BuilderProjectileLauncher::__cordl_internal_set_allProjectiles(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allProjectiles = value;
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::LaunchProjectile(int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"LaunchProjectile", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnStateRequest", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, instigator, timeStamp);
}
inline bool GorillaTagScripts::Builder::BuilderProjectileLauncher::IsStateValid(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"IsStateValid", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::FunctionalPieceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"FunctionalPieceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::RegisterProjectile(::GorillaTagScripts::Builder::BuilderProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"RegisterProjectile", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::UnRegisterProjectile(::GorillaTagScripts::Builder::BuilderProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {"UnRegisterProjectile", {}, {::i2c::type_of<::GorillaTagScripts::Builder::BuilderProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline void GorillaTagScripts::Builder::BuilderProjectileLauncher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderProjectileLauncher* GorillaTagScripts::Builder::BuilderProjectileLauncher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderProjectileLauncher*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr  GorillaTagScripts::Builder::BuilderProjectileLauncher::operator ::GlobalNamespace::IBuilderPieceFunctional*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* GorillaTagScripts::Builder::BuilderProjectileLauncher::i___GlobalNamespace__IBuilderPieceFunctional() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceFunctional*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::Builder::BuilderProjectileLauncher::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::Builder::BuilderProjectileLauncher::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderProjectileLauncher::BuilderProjectileLauncher()   {
}
