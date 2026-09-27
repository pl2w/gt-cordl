#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntityZoneComponent.hpp"
#include "GlobalNamespace/zzzz__IGameEntityZoneComponent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.OnZoneCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)()>(&::GlobalNamespace::IGameEntityZoneComponent::OnZoneCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.OnZoneInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)()>(&::GlobalNamespace::IGameEntityZoneComponent::OnZoneInit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.OnZoneClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)(::GlobalNamespace::ZoneClearReason)>(&::GlobalNamespace::IGameEntityZoneComponent::OnZoneClear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.OnCreateGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::IGameEntityZoneComponent::OnCreateGameEntity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.SerializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::IGameEntityZoneComponent::SerializeZoneData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.DeserializeZoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::IGameEntityZoneComponent::DeserializeZoneData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.SerializeZoneEntityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)(::System::IO::BinaryWriter*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::IGameEntityZoneComponent::SerializeZoneEntityData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.DeserializeZoneEntityData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)(::System::IO::BinaryReader*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::IGameEntityZoneComponent::DeserializeZoneEntityData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.SerializeZonePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)(::System::IO::BinaryWriter*, int32_t)>(&::GlobalNamespace::IGameEntityZoneComponent::SerializeZonePlayerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.DeserializeZonePlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameEntityZoneComponent::*)(::System::IO::BinaryReader*, int32_t)>(&::GlobalNamespace::IGameEntityZoneComponent::DeserializeZonePlayerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.IsZoneReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameEntityZoneComponent::*)()>(&::GlobalNamespace::IGameEntityZoneComponent::IsZoneReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.ShouldClearZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameEntityZoneComponent::*)()>(&::GlobalNamespace::IGameEntityZoneComponent::ShouldClearZone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.ProcessMigratedGameEntityCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::IGameEntityZoneComponent::*)(::GlobalNamespace::GameEntity*, int64_t)>(&::GlobalNamespace::IGameEntityZoneComponent::ProcessMigratedGameEntityCreateData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.ValidateMigratedGameEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameEntityZoneComponent::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::IGameEntityZoneComponent::ValidateMigratedGameEntity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.ValidateCreateMultipleItems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameEntityZoneComponent::*)(int32_t, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::IGameEntityZoneComponent::ValidateCreateMultipleItems)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.ValidateCreateItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameEntityZoneComponent::*)(int32_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int64_t, int32_t)>(&::GlobalNamespace::IGameEntityZoneComponent::ValidateCreateItem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameEntityZoneComponent.ValidateCreateItemBatchSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameEntityZoneComponent::*)(int32_t)>(&::GlobalNamespace::IGameEntityZoneComponent::ValidateCreateItemBatchSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(),
                    {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 16}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGameEntityZoneComponent::OnZoneCreate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGameEntityZoneComponent::OnZoneInit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGameEntityZoneComponent::OnZoneClear(::GlobalNamespace::ZoneClearReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::IGameEntityZoneComponent::OnCreateGameEntity(::GlobalNamespace::GameEntity*  entity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::IGameEntityZoneComponent::SerializeZoneData(::System::IO::BinaryWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::IGameEntityZoneComponent::DeserializeZoneData(::System::IO::BinaryReader*  reader)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::IGameEntityZoneComponent::SerializeZoneEntityData(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::GameEntity*  entity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, entity);
}
inline void GlobalNamespace::IGameEntityZoneComponent::DeserializeZoneEntityData(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GameEntity*  entity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, entity);
}
inline void GlobalNamespace::IGameEntityZoneComponent::SerializeZonePlayerData(::System::IO::BinaryWriter*  writer, int32_t  actorNumber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, actorNumber);
}
inline void GlobalNamespace::IGameEntityZoneComponent::DeserializeZonePlayerData(::System::IO::BinaryReader*  reader, int32_t  actorNumber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, actorNumber);
}
inline bool GlobalNamespace::IGameEntityZoneComponent::IsZoneReady()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::IGameEntityZoneComponent::ShouldClearZone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t GlobalNamespace::IGameEntityZoneComponent::ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity*  entity, int64_t  createData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, entity, createData);
}
inline bool GlobalNamespace::IGameEntityZoneComponent::ValidateMigratedGameEntity(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  actorNr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, netId, entityTypeId, position, rotation, createData, actorNr);
}
inline bool GlobalNamespace::IGameEntityZoneComponent::ValidateCreateMultipleItems(int32_t  zoneId, ::ArrayW<uint8_t>  compressedStateData, int32_t  EntityCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneId, compressedStateData, EntityCount);
}
inline bool GlobalNamespace::IGameEntityZoneComponent::ValidateCreateItem(int32_t  nedId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nedId, entityTypeId, position, rotation, createData, createdByEntityNetId);
}
inline bool GlobalNamespace::IGameEntityZoneComponent::ValidateCreateItemBatchSize(int32_t  size)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGameEntityZoneComponent*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, size);
}
