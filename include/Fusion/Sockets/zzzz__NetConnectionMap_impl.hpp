#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionMap.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_def.hpp"
#include "Fusion/Sockets/zzzz__INetPeerGroupCallbacks_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_EntryState_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_Iterator_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_UniqueIdMapping_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::Sockets::NetConnectionMap*>, ::Fusion::Sockets::INetPeerGroupCallbacks*)>(&::Fusion::Sockets::NetConnectionMap::Dispose)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x602a7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetConnectionMap*>>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnectionMap* (*)(int32_t, int16_t, ::by_ref<::Fusion::Sockets::NetConfig*>)>(&::Fusion::Sockets::NetConnectionMap::Allocate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x602a9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetConfig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetConnectionMap::*)()>(&::Fusion::Sockets::NetConnectionMap::get_Count)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x602ab34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.get_CountUsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetConnectionMap::*)()>(&::Fusion::Sockets::NetConnectionMap::get_CountUsed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602ab44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"get_CountUsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.get_ConnectionsBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (::Fusion::Sockets::NetConnectionMap::*)()>(&::Fusion::Sockets::NetConnectionMap::get_ConnectionsBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602ab4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"get_ConnectionsBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.Remap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (::Fusion::Sockets::NetConnectionMap::*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetConnectionMap::Remap)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x602ab54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Remap", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetConnectionMap::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetConnectionMap::Remove)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x602ad7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (::Fusion::Sockets::NetConnectionMap::*)(::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetConnectionMap::Insert)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x602af8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Insert", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.FindByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (::Fusion::Sockets::NetConnectionMap::*)(int32_t)>(&::Fusion::Sockets::NetConnectionMap::FindByIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x602b4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"FindByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.TryFindByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetConnectionMap::*)(int32_t, ::by_ref<::Fusion::Sockets::NetConnection*>)>(&::Fusion::Sockets::NetConnectionMap::TryFindByIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x602b5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"TryFindByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetConnection*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetConnection* (::Fusion::Sockets::NetConnectionMap::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetConnectionMap::Find)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x602b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Find", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.ContainsUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetConnectionMap::*)(int64_t, ::by_ref<int16_t>)>(&::Fusion::Sockets::NetConnectionMap::ContainsUniqueId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x602b458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"ContainsUniqueId", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.StoreUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetConnectionMap::*)(int64_t, int16_t)>(&::Fusion::Sockets::NetConnectionMap::StoreUniqueId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x602b51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"StoreUniqueId", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.RemoveUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetConnectionMap::*)(int64_t)>(&::Fusion::Sockets::NetConnectionMap::RemoveUniqueId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x602aec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"RemoveUniqueId", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionMap.FindInsertionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::NetConnectionMap::*)(int64_t)>(&::Fusion::Sockets::NetConnectionMap::FindInsertionIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x602b62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"FindInsertionIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::NetConnectionMap::Dispose(::by_ref<::Fusion::Sockets::NetConnectionMap*>  map, ::Fusion::Sockets::INetPeerGroupCallbacks*  callbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetConnectionMap*>>(), ::i2c::type_of<::Fusion::Sockets::INetPeerGroupCallbacks*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, map, callbacks);
}
inline ::Fusion::Sockets::NetConnectionMap* Fusion::Sockets::NetConnectionMap::Allocate(int32_t  capacity, int16_t  groupIndex, /* [IsReadOnly] */ ::by_ref<::Fusion::Sockets::NetConfig*>  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetConfig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnectionMap*>(nullptr, ___internal_method, capacity, groupIndex, config);
}
inline int32_t Fusion::Sockets::NetConnectionMap::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::Sockets::NetConnectionMap::get_CountUsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"get_CountUsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetConnection* Fusion::Sockets::NetConnectionMap::get_ConnectionsBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"get_ConnectionsBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetConnection* Fusion::Sockets::NetConnectionMap::Remap(::Fusion::Sockets::NetAddress  oldAddress, ::Fusion::Sockets::NetAddress  newAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Remap", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(*this, ___internal_method, oldAddress, newAddress);
}
inline bool Fusion::Sockets::NetConnectionMap::Remove(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, address);
}
inline ::Fusion::Sockets::NetConnection* Fusion::Sockets::NetConnectionMap::Insert(::Fusion::Sockets::NetAddress  address, ::ArrayW<uint8_t>  uniqueId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Insert", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(*this, ___internal_method, address, uniqueId);
}
inline ::Fusion::Sockets::NetConnection* Fusion::Sockets::NetConnectionMap::FindByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"FindByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(*this, ___internal_method, index);
}
inline bool Fusion::Sockets::NetConnectionMap::TryFindByIndex(int32_t  index, ::by_ref<::Fusion::Sockets::NetConnection*>  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"TryFindByIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::NetConnection*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index, connection);
}
inline ::Fusion::Sockets::NetConnection* Fusion::Sockets::NetConnectionMap::Find(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"Find", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetConnection*>(*this, ___internal_method, address);
}
inline bool Fusion::Sockets::NetConnectionMap::ContainsUniqueId(int64_t  value, ::by_ref<int16_t>  groupIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"ContainsUniqueId", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value, groupIndex);
}
inline void Fusion::Sockets::NetConnectionMap::StoreUniqueId(int64_t  value, int16_t  groupIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"StoreUniqueId", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, groupIndex);
}
inline bool Fusion::Sockets::NetConnectionMap::RemoveUniqueId(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"RemoveUniqueId", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline uint64_t Fusion::Sockets::NetConnectionMap::FindInsertionIndex(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionMap>(),
                        {"FindInsertionIndex", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "Buckets", ty: "::Fusion::Sockets::NetConnection*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FreeHead", ty: "::Fusion::Sockets::NetConnection*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Connections", ty: "::Fusion::Sockets::NetConnection*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UniqueIdHashes", ty: "::GlobalNamespace::NetConnectionMap_UniqueIdMapping*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Group", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UsedCount", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FreeCount", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IdsCount", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CapacityAllocated", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CapacityUsable", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConnectionMap::NetConnectionMap(::Fusion::Sockets::NetConnection*  Buckets, ::Fusion::Sockets::NetConnection*  FreeHead, ::Fusion::Sockets::NetConnection*  Connections, ::GlobalNamespace::NetConnectionMap_UniqueIdMapping*  UniqueIdHashes, int16_t  Group, uint64_t  UsedCount, uint64_t  FreeCount, uint64_t  IdsCount, uint64_t  CapacityAllocated, uint64_t  CapacityUsable) noexcept  {
this->Buckets = Buckets;
this->FreeHead = FreeHead;
this->Connections = Connections;
this->UniqueIdHashes = UniqueIdHashes;
this->Group = Group;
this->UsedCount = UsedCount;
this->FreeCount = FreeCount;
this->IdsCount = IdsCount;
this->CapacityAllocated = CapacityAllocated;
this->CapacityUsable = CapacityUsable;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConnectionMap::NetConnectionMap()   {
}
