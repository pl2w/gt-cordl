#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectConnectionData.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionDataStatus_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueDataChanges_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionData_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderPlayerDataFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueDataChanges_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
#include "Fusion/zzzz__Simulation_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionData.GetPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData,::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges> (::Fusion::NetworkObjectConnectionData::*)()>(&::Fusion::NetworkObjectConnectionData::GetPlayerData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5faa598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"GetPlayerData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionData.SetPlayerDataFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionData::*)(::Fusion::NetworkObjectHeaderPlayerDataFlags, ::Fusion::Simulation*)>(&::Fusion::NetworkObjectConnectionData::SetPlayerDataFlag)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5faa5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"SetPlayerDataFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>(), ::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionData.ClearPlayerDataFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionData::*)(::Fusion::NetworkObjectHeaderPlayerDataFlags, ::Fusion::Simulation*)>(&::Fusion::NetworkObjectConnectionData::ClearPlayerDataFlag)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5faa620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"ClearPlayerDataFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>(), ::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionData.HasPlayerDataFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectConnectionData::*)(::Fusion::NetworkObjectHeaderPlayerDataFlags)>(&::Fusion::NetworkObjectConnectionData::HasPlayerDataFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faa648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"HasPlayerDataFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionData.HasAnyPlayerDataFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectConnectionData::*)(::Fusion::NetworkObjectHeaderPlayerDataFlags)>(&::Fusion::NetworkObjectConnectionData::HasAnyPlayerDataFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faa658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"HasAnyPlayerDataFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectConnectionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectConnectionData::*)()>(&::Fusion::NetworkObjectConnectionData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faa668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkObjectConnectionData*& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr ::Fusion::NetworkObjectConnectionData* const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_Prev(::Fusion::NetworkObjectConnectionData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
constexpr ::Fusion::NetworkObjectConnectionData*& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Fusion::NetworkObjectConnectionData* const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_Next(::Fusion::NetworkObjectConnectionData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
constexpr ::Fusion::NetworkId& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::Fusion::NetworkId const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_Id(::Fusion::NetworkId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr ::Fusion::NetworkObjectMeta*& Fusion::NetworkObjectConnectionData::__cordl_internal_get_MetaCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetaCache;
}
constexpr ::Fusion::NetworkObjectMeta* const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_MetaCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetaCache;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_MetaCache(::Fusion::NetworkObjectMeta*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MetaCache = value;
}
constexpr int32_t& Fusion::NetworkObjectConnectionData::__cordl_internal_get_PriorityLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PriorityLevel;
}
constexpr int32_t const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_PriorityLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PriorityLevel;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_PriorityLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PriorityLevel = value;
}
constexpr ::Fusion::NetworkObjectConnectionDataStatus& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::Fusion::NetworkObjectConnectionDataStatus const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_Status(::Fusion::NetworkObjectConnectionDataStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr bool& Fusion::NetworkObjectConnectionData::__cordl_internal_get_MainTRSP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MainTRSP;
}
constexpr bool const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_MainTRSP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MainTRSP;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_MainTRSP(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MainTRSP = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkObjectConnectionData::__cordl_internal_get_TickSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickSent;
}
constexpr ::Fusion::Tick const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_TickSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickSent;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_TickSent(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TickSent = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkObjectConnectionData::__cordl_internal_get_TickAcknowledged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickAcknowledged;
}
constexpr ::Fusion::Tick const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_TickAcknowledged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickAcknowledged;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_TickAcknowledged(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TickAcknowledged = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkObjectConnectionData::__cordl_internal_get_TickMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickMin;
}
constexpr ::Fusion::Tick const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_TickMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickMin;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_TickMin(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TickMin = value;
}
constexpr uint64_t& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Filter;
}
constexpr uint64_t const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_Filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Filter;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_Filter(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Filter = value;
}
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData& Fusion::NetworkObjectConnectionData::__cordl_internal_get_UniqueData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueData;
}
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_UniqueData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueData;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_UniqueData(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UniqueData = value;
}
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges& Fusion::NetworkObjectConnectionData::__cordl_internal_get_UniqueDataChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueDataChanges;
}
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges const& Fusion::NetworkObjectConnectionData::__cordl_internal_get_UniqueDataChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueDataChanges;
}
constexpr void Fusion::NetworkObjectConnectionData::__cordl_internal_set_UniqueDataChanges(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UniqueDataChanges = value;
}
inline ::System::ValueTuple_2<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData,::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges> Fusion::NetworkObjectConnectionData::GetPlayerData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"GetPlayerData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData,::GlobalNamespace::NetworkObjectHeader_PlayerUniqueDataChanges>>(this, ___internal_method);
}
inline void Fusion::NetworkObjectConnectionData::SetPlayerDataFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flags, ::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"SetPlayerDataFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>(), ::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags, simulation);
}
inline void Fusion::NetworkObjectConnectionData::ClearPlayerDataFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flags, ::Fusion::Simulation*  simulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"ClearPlayerDataFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>(), ::i2c::type_of<::Fusion::Simulation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags, simulation);
}
inline bool Fusion::NetworkObjectConnectionData::HasPlayerDataFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"HasPlayerDataFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline bool Fusion::NetworkObjectConnectionData::HasAnyPlayerDataFlag(::Fusion::NetworkObjectHeaderPlayerDataFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {"HasAnyPlayerDataFlag", {}, {::i2c::type_of<::Fusion::NetworkObjectHeaderPlayerDataFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline void Fusion::NetworkObjectConnectionData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectConnectionData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectConnectionData* Fusion::NetworkObjectConnectionData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectConnectionData*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectConnectionData::NetworkObjectConnectionData()   {
}
