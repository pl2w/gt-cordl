#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayer.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayer_HandData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameBallId_def.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayer_HandData_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayer::*)()>(&::GlobalNamespace::GameBallPlayer::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x57a6da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.CleanupPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayer::*)()>(&::GlobalNamespace::GameBallPlayer::CleanupPlayer)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57a6e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"CleanupPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.SetGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayer::*)(::GlobalNamespace::GameBallId, int32_t)>(&::GlobalNamespace::GameBallPlayer::SetGrabbed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57a7018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"SetGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.ClearGrabbedIfHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayer::*)(::GlobalNamespace::GameBallId)>(&::GlobalNamespace::GameBallPlayer::ClearGrabbedIfHeld)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57a70bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"ClearGrabbedIfHeld", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.ClearGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayer::*)(int32_t)>(&::GlobalNamespace::GameBallPlayer::ClearGrabbed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57a6e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"ClearGrabbed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.ClearAllGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayer::*)()>(&::GlobalNamespace::GameBallPlayer::ClearAllGrabbed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57a717c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"ClearAllGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.SetInGoalZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayer::*)(bool)>(&::GlobalNamespace::GameBallPlayer::SetInGoalZone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57a71c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"SetInGoalZone", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.IsHoldingBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameBallPlayer::*)()>(&::GlobalNamespace::GameBallPlayer::IsHoldingBall)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x57a71e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"IsHoldingBall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.GetGameBallId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameBallId (::GlobalNamespace::GameBallPlayer::*)(int32_t)>(&::GlobalNamespace::GameBallPlayer::GetGameBallId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57a7338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetGameBallId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.FindHandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameBallPlayer::*)(::GlobalNamespace::GameBallId)>(&::GlobalNamespace::GameBallPlayer::FindHandIndex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x57a7368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"FindHandIndex", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.GetGameBallId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameBallId (::GlobalNamespace::GameBallPlayer::*)()>(&::GlobalNamespace::GameBallPlayer::GetGameBallId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57a725c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetGameBallId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.IsLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameBallPlayer::*)()>(&::GlobalNamespace::GameBallPlayer::IsLocalPlayer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57a741c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"IsLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.IsLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GameBallPlayer::IsLeftHand)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a74f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"IsLeftHand", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.GetHandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::GlobalNamespace::GameBallPlayer::GetHandIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a7504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetHandIndex", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.GetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (*)(int32_t)>(&::GlobalNamespace::GameBallPlayer::GetRig)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57a7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetRig", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.GetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameBallPlayer> (*)(int32_t)>(&::GlobalNamespace::GameBallPlayer::GetGamePlayer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57a7640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer.GetGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameBallPlayer> (*)(::UnityEngine::Collider*, bool)>(&::GlobalNamespace::GameBallPlayer::GetGamePlayer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x57a76ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameBallPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameBallPlayer::*)()>(&::GlobalNamespace::GameBallPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a77e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GameBallPlayer::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GameBallPlayer::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::GameBallPlayer::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
constexpr int32_t& GlobalNamespace::GameBallPlayer::__cordl_internal_get_teamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr int32_t const& GlobalNamespace::GameBallPlayer::__cordl_internal_get_teamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr void GlobalNamespace::GameBallPlayer::__cordl_internal_set_teamId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamId = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameBallPlayer_HandData>& GlobalNamespace::GameBallPlayer::__cordl_internal_get_hands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hands;
}
constexpr ::ArrayW<::GlobalNamespace::GameBallPlayer_HandData> const& GlobalNamespace::GameBallPlayer::__cordl_internal_get_hands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hands;
}
constexpr void GlobalNamespace::GameBallPlayer::__cordl_internal_set_hands(::ArrayW<::GlobalNamespace::GameBallPlayer_HandData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hands = value;
}
constexpr int32_t& GlobalNamespace::GameBallPlayer::__cordl_internal_get_inGoalZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGoalZone;
}
constexpr int32_t const& GlobalNamespace::GameBallPlayer::__cordl_internal_get_inGoalZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGoalZone;
}
constexpr void GlobalNamespace::GameBallPlayer::__cordl_internal_set_inGoalZone(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inGoalZone = value;
}
inline void GlobalNamespace::GameBallPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayer::CleanupPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"CleanupPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayer::SetGrabbed(::GlobalNamespace::GameBallId  gameBallId, int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"SetGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, handIndex);
}
inline void GlobalNamespace::GameBallPlayer::ClearGrabbedIfHeld(::GlobalNamespace::GameBallId  gameBallId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"ClearGrabbedIfHeld", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId);
}
inline void GlobalNamespace::GameBallPlayer::ClearGrabbed(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"ClearGrabbed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GameBallPlayer::ClearAllGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"ClearAllGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameBallPlayer::SetInGoalZone(bool  inZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"SetInGoalZone", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inZone);
}
inline bool GlobalNamespace::GameBallPlayer::IsHoldingBall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"IsHoldingBall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::GameBallId GlobalNamespace::GameBallPlayer::GetGameBallId(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetGameBallId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameBallId>(this, ___internal_method, handIndex);
}
inline int32_t GlobalNamespace::GameBallPlayer::FindHandIndex(::GlobalNamespace::GameBallId  gameBallId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"FindHandIndex", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, gameBallId);
}
inline ::GlobalNamespace::GameBallId GlobalNamespace::GameBallPlayer::GetGameBallId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetGameBallId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameBallId>(this, ___internal_method);
}
inline bool GlobalNamespace::GameBallPlayer::IsLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"IsLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameBallPlayer::IsLeftHand(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"IsLeftHand", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handIndex);
}
inline int32_t GlobalNamespace::GameBallPlayer::GetHandIndex(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetHandIndex", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, leftHand);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::GameBallPlayer::GetRig(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetRig", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(nullptr, ___internal_method, actorNumber);
}
inline ::UnityW<::GlobalNamespace::GameBallPlayer> GlobalNamespace::GameBallPlayer::GetGamePlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameBallPlayer>>(nullptr, ___internal_method, actorNumber);
}
inline ::UnityW<::GlobalNamespace::GameBallPlayer> GlobalNamespace::GameBallPlayer::GetGamePlayer(::UnityEngine::Collider*  collider, bool  bodyOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {"GetGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameBallPlayer>>(nullptr, ___internal_method, collider, bodyOnly);
}
inline void GlobalNamespace::GameBallPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameBallPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameBallPlayer* GlobalNamespace::GameBallPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameBallPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameBallPlayer::GameBallPlayer()   {
}
