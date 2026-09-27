#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEnemyAI.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPun_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaEnemyAI_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)()>(&::GlobalNamespace::GorillaEnemyAI::Start)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59a3608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.Photon_Pun_IPunObservable_OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaEnemyAI::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x59a3708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)()>(&::GlobalNamespace::GorillaEnemyAI::Update)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x59a3a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.FindClosestPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)()>(&::GlobalNamespace::GorillaEnemyAI::FindClosestPlayer)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x59a3d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"FindClosestPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::GorillaEnemyAI::OnCollisionEnter)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59a3f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59a3fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a4038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a403c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)(::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a4040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI.Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a4044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaEnemyAI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaEnemyAI::*)()>(&::GlobalNamespace::GorillaEnemyAI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a4048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_playerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_playerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTransform;
}
constexpr void GlobalNamespace::GorillaEnemyAI::__cordl_internal_set_playerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTransform = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::GorillaEnemyAI::__cordl_internal_set_agent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_r()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_r() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr void GlobalNamespace::GorillaEnemyAI::__cordl_internal_set_r(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___r = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr void GlobalNamespace::GorillaEnemyAI::__cordl_internal_set_targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_targetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_targetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotation;
}
constexpr void GlobalNamespace::GorillaEnemyAI::__cordl_internal_set_targetRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRotation = value;
}
constexpr float_t& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_lerpValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr float_t const& GlobalNamespace::GorillaEnemyAI::__cordl_internal_get_lerpValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr void GlobalNamespace::GorillaEnemyAI::__cordl_internal_set_lerpValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpValue = value;
}
inline void GlobalNamespace::GorillaEnemyAI::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEnemyAI::Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Pun.IPunObservable.OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaEnemyAI::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEnemyAI::FindClosestPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"FindClosestPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaEnemyAI::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void GlobalNamespace::GorillaEnemyAI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaEnemyAI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaEnemyAI* GlobalNamespace::GorillaEnemyAI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaEnemyAI*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::GorillaEnemyAI::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::GorillaEnemyAI::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  GlobalNamespace::GorillaEnemyAI::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* GlobalNamespace::GorillaEnemyAI::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaEnemyAI::GorillaEnemyAI()   {
}
