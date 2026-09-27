#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeerGroupMap.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroupMap_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroupMap_EntryState_def.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroupMap_Entry_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroupMap.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::Sockets::NetPeerGroupMap*>)>(&::Fusion::Sockets::NetPeerGroupMap::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6032ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetPeerGroupMap*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroupMap.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetPeerGroupMap* (*)(int32_t)>(&::Fusion::Sockets::NetPeerGroupMap::Allocate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6032d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroupMap.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetPeerGroupMap::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetPeerGroupMap::Remove)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6032e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroupMap.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetPeerGroupMap::*)(::Fusion::Sockets::NetAddress, int16_t)>(&::Fusion::Sockets::NetPeerGroupMap::Insert)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x6032fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Insert", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetPeerGroupMap.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Fusion::Sockets::NetPeerGroupMap::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetPeerGroupMap::Find)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x60332ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Find", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::NetPeerGroupMap::Dispose(::by_ref<::Fusion::Sockets::NetPeerGroupMap*>  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetPeerGroupMap*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, map);
}
inline ::Fusion::Sockets::NetPeerGroupMap* Fusion::Sockets::NetPeerGroupMap::Allocate(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetPeerGroupMap*>(nullptr, ___internal_method, capacity);
}
inline int32_t Fusion::Sockets::NetPeerGroupMap::Remove(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, address);
}
inline bool Fusion::Sockets::NetPeerGroupMap::Insert(::Fusion::Sockets::NetAddress  address, int16_t  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Insert", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, address, group);
}
inline int16_t Fusion::Sockets::NetPeerGroupMap::Find(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetPeerGroupMap>(),
                        {"Find", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method, address);
}
// Ctor Parameters [CppParam { name: "Buckets", ty: "::GlobalNamespace::NetPeerGroupMap_Entry*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Entries", ty: "::GlobalNamespace::NetPeerGroupMap_Entry*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FreeHead", ty: "::GlobalNamespace::NetPeerGroupMap_Entry*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UsedCount", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FreeCount", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CapacityUsable", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CapacityAllocated", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetPeerGroupMap::NetPeerGroupMap(::GlobalNamespace::NetPeerGroupMap_Entry*  Buckets, ::GlobalNamespace::NetPeerGroupMap_Entry*  Entries, ::GlobalNamespace::NetPeerGroupMap_Entry*  FreeHead, uint64_t  UsedCount, uint64_t  FreeCount, uint64_t  CapacityUsable, uint64_t  CapacityAllocated) noexcept  {
this->Buckets = Buckets;
this->Entries = Entries;
this->FreeHead = FreeHead;
this->UsedCount = UsedCount;
this->FreeCount = FreeCount;
this->CapacityUsable = CapacityUsable;
this->CapacityAllocated = CapacityAllocated;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetPeerGroupMap::NetPeerGroupMap()   {
}
