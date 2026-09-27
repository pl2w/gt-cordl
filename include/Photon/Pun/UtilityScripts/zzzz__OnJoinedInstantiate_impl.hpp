#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnJoinedInstantiate.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnJoinedInstantiate_SpawnSequence_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnJoinedInstantiate_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__OnJoinedInstantiate_SpawnSequence_def.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa73ac54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa73acac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa73ad04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.SpawnObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::SpawnObjects)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa73ad90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.DespawnObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(bool)>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::DespawnObjects)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa73b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73b128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnCreatedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73b12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(int16_t, ::StringW)>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73b130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(int16_t, ::StringW)>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73b134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(int16_t, ::StringW)>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73b138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73b13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.OnPreLeavingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnPreLeavingRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.GetSpawnPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetSpawnPoint)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa73b144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.GetSpawnPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetSpawnPoint)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa73b294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate.GetRandomOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetRandomOffset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa73b3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::OnJoinedInstantiate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::OnJoinedInstantiate::*)()>(&::Photon::Pun::UtilityScripts::OnJoinedInstantiate::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xa73b4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnPosition;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_SpawnPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnPosition = value;
}
constexpr ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_Sequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sequence;
}
constexpr ::GlobalNamespace::OnJoinedInstantiate_SpawnSequence const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_Sequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sequence;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_Sequence(::GlobalNamespace::OnJoinedInstantiate_SpawnSequence  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sequence = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnPoints;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_SpawnPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnPoints = value;
}
constexpr bool& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_UseRandomOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseRandomOffset;
}
constexpr bool const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_UseRandomOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseRandomOffset;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_UseRandomOffset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseRandomOffset = value;
}
constexpr float_t& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_RandomOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomOffset;
}
constexpr float_t const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_RandomOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RandomOffset;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_RandomOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RandomOffset = value;
}
constexpr bool& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_ClampY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClampY;
}
constexpr bool const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_ClampY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClampY;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_ClampY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClampY = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_PrefabsToInstantiate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabsToInstantiate;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_PrefabsToInstantiate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrefabsToInstantiate;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_PrefabsToInstantiate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrefabsToInstantiate = value;
}
constexpr bool& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_AutoSpawnObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSpawnObjects;
}
constexpr bool const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_AutoSpawnObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSpawnObjects;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_AutoSpawnObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoSpawnObjects = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnedObjects;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_SpawnedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnedObjects;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_SpawnedObjects(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnedObjects = value;
}
constexpr int32_t& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_spawnedAsActorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedAsActorId;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_spawnedAsActorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnedAsActorId;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_spawnedAsActorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnedAsActorId = value;
}
constexpr int32_t& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_lastUsedSpawnPointIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUsedSpawnPointIndex;
}
constexpr int32_t const& Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_get_lastUsedSpawnPointIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUsedSpawnPointIndex;
}
constexpr void Photon::Pun::UtilityScripts::OnJoinedInstantiate::__cordl_internal_set_lastUsedSpawnPointIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUsedSpawnPointIndex = value;
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::SpawnObjects()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::DespawnObjects(bool  localOnly)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localOnly);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnCreatedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnLeftRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnPreLeavingRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetSpawnPoint(::by_ref<::UnityEngine::Vector3>  spawnPos, ::by_ref<::UnityEngine::Quaternion>  spawnRot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawnPos, spawnRot);
}
inline ::UnityW<::UnityEngine::Transform> Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetSpawnPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Photon::Pun::UtilityScripts::OnJoinedInstantiate::GetRandomOffset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::OnJoinedInstantiate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::OnJoinedInstantiate* Photon::Pun::UtilityScripts::OnJoinedInstantiate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::OnJoinedInstantiate*>());
}
/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Photon::Pun::UtilityScripts::OnJoinedInstantiate::operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* Photon::Pun::UtilityScripts::OnJoinedInstantiate::i___Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::OnJoinedInstantiate::OnJoinedInstantiate()   {
}
