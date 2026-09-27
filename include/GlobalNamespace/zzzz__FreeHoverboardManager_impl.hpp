#pragma once
// IWYU pragma private; include "GlobalNamespace/FreeHoverboardManager.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_impl.hpp"
#include "GlobalNamespace/zzzz__FreeHoverboardManager_def.hpp"
#include "GlobalNamespace/zzzz__FreeHoverboardInstance_def.hpp"
#include "GlobalNamespace/zzzz__FreeHoverboardManager_DataPerPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FreeHoverboardManager> (*)()>(&::GlobalNamespace::FreeHoverboardManager::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5954320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FreeHoverboardManager*)>(&::GlobalNamespace::FreeHoverboardManager::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5954368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::FreeHoverboardManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.GetOrCreatePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer (::GlobalNamespace::FreeHoverboardManager::*)(int32_t)>(&::GlobalNamespace::FreeHoverboardManager::GetOrCreatePlayerData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59543c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"GetOrCreatePlayerData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)()>(&::GlobalNamespace::FreeHoverboardManager::Awake)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5954594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::FreeHoverboardManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x59547fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)()>(&::GlobalNamespace::FreeHoverboardManager::OnLeftRoom)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5954978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.SpawnBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::GlobalNamespace::FreeHoverboardManager::SpawnBoard)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5954b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"SpawnBoard", {}, {::i2c::type_of<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.SendDropBoardRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::GlobalNamespace::FreeHoverboardManager::SendDropBoardRPC)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x5954d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"SendDropBoardRPC", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.DropBoard_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)(bool, int64_t, int32_t, int64_t, int64_t, int16_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FreeHoverboardManager::DropBoard_RPC)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x59551e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"DropBoard_RPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.SendGrabBoardRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)(::GlobalNamespace::FreeHoverboardInstance*)>(&::GlobalNamespace::FreeHoverboardManager::SendGrabBoardRPC)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x595393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"SendGrabBoardRPC", {}, {::i2c::type_of<::GlobalNamespace::FreeHoverboardInstance*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.GrabBoard_RPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)(int32_t, bool, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::FreeHoverboardManager::GrabBoard_RPC)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x59554e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"GrabBoard_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager.PreserveMaxHoverboardsConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)(int32_t)>(&::GlobalNamespace::FreeHoverboardManager::PreserveMaxHoverboardsConstraint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5955790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"PreserveMaxHoverboardsConstraint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FreeHoverboardManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FreeHoverboardManager::*)()>(&::GlobalNamespace::FreeHoverboardManager::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5955864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FreeHoverboardInstance>& GlobalNamespace::FreeHoverboardManager::__cordl_internal_get_freeHoverboardPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeHoverboardPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FreeHoverboardInstance> const& GlobalNamespace::FreeHoverboardManager::__cordl_internal_get_freeHoverboardPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeHoverboardPrefab;
}
constexpr void GlobalNamespace::FreeHoverboardManager::__cordl_internal_set_freeHoverboardPrefab(::UnityW<::GlobalNamespace::FreeHoverboardInstance>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freeHoverboardPrefab = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*& GlobalNamespace::FreeHoverboardManager::__cordl_internal_get_freeBoardPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeBoardPool;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>* const& GlobalNamespace::FreeHoverboardManager::__cordl_internal_get_freeBoardPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freeBoardPool;
}
constexpr void GlobalNamespace::FreeHoverboardManager::__cordl_internal_set_freeBoardPool(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freeBoardPool = value;
}
constexpr int32_t& GlobalNamespace::FreeHoverboardManager::__cordl_internal_get_localPlayerLastSpawnedBoardIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerLastSpawnedBoardIndex;
}
constexpr int32_t const& GlobalNamespace::FreeHoverboardManager::__cordl_internal_get_localPlayerLastSpawnedBoardIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerLastSpawnedBoardIndex;
}
constexpr void GlobalNamespace::FreeHoverboardManager::__cordl_internal_set_localPlayerLastSpawnedBoardIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerLastSpawnedBoardIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>*& GlobalNamespace::FreeHoverboardManager::__cordl_internal_get_perPlayerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perPlayerData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>* const& GlobalNamespace::FreeHoverboardManager::__cordl_internal_get_perPlayerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perPlayerData;
}
constexpr void GlobalNamespace::FreeHoverboardManager::__cordl_internal_set_perPlayerData(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perPlayerData = value;
}
inline void GlobalNamespace::FreeHoverboardManager::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::FreeHoverboardManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::FreeHoverboardManager>, "<instance>k__BackingField", ::GlobalNamespace::FreeHoverboardManager*>(std::forward<::UnityW<::GlobalNamespace::FreeHoverboardManager>>(value));
}
inline ::UnityW<::GlobalNamespace::FreeHoverboardManager> GlobalNamespace::FreeHoverboardManager::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::FreeHoverboardManager>, "<instance>k__BackingField", ::GlobalNamespace::FreeHoverboardManager*>();
}
inline ::UnityW<::GlobalNamespace::FreeHoverboardManager> GlobalNamespace::FreeHoverboardManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FreeHoverboardManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FreeHoverboardManager::set_instance(::GlobalNamespace::FreeHoverboardManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::FreeHoverboardManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer GlobalNamespace::FreeHoverboardManager::GetOrCreatePlayerData(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"GetOrCreatePlayerData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::FreeHoverboardManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FreeHoverboardManager::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::FreeHoverboardManager::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FreeHoverboardManager::SpawnBoard(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer  playerData, int32_t  boardIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  avelocity, ::UnityEngine::Color  boardColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"SpawnBoard", {}, {::i2c::type_of<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerData, boardIndex, position, rotation, velocity, avelocity, boardColor);
}
inline void GlobalNamespace::FreeHoverboardManager::SendDropBoardRPC(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  avelocity, ::UnityEngine::Color  boardColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"SendDropBoardRPC", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation, velocity, avelocity, boardColor);
}
inline void GlobalNamespace::FreeHoverboardManager::DropBoard_RPC(bool  boardIndex1, int64_t  positionPacked, int32_t  rotationPacked, int64_t  velocityPacked, int64_t  avelocityPacked, int16_t  colorPacked, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"DropBoard_RPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boardIndex1, positionPacked, rotationPacked, velocityPacked, avelocityPacked, colorPacked, info);
}
inline void GlobalNamespace::FreeHoverboardManager::SendGrabBoardRPC(::GlobalNamespace::FreeHoverboardInstance*  board)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"SendGrabBoardRPC", {}, {::i2c::type_of<::GlobalNamespace::FreeHoverboardInstance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, board);
}
inline void GlobalNamespace::FreeHoverboardManager::GrabBoard_RPC(int32_t  ownerActorNumber, bool  boardIndex1, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"GrabBoard_RPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ownerActorNumber, boardIndex1, info);
}
inline void GlobalNamespace::FreeHoverboardManager::PreserveMaxHoverboardsConstraint(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {"PreserveMaxHoverboardsConstraint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::FreeHoverboardManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FreeHoverboardManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FreeHoverboardManager* GlobalNamespace::FreeHoverboardManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FreeHoverboardManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FreeHoverboardManager::FreeHoverboardManager()   {
}
