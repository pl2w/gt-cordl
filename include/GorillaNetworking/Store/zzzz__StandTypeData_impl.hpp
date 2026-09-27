#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StandTypeData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StandTypeData_def.hpp"
#include "GorillaNetworking/Store/zzzz__HeadModel_CosmeticStand_BustType_def.hpp"
#include "GorillaNetworking/Store/zzzz__StandTypeData_EStandDataID_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StandTypeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StandTypeData::*)(::ArrayW<::StringW>)>(&::GorillaNetworking::Store::StandTypeData::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5cb1930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandTypeData*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StandTypeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StandTypeData::*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::HeadModel_CosmeticStand_BustType, ::StringW)>(&::GorillaNetworking::Store::StandTypeData::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5cb1ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandTypeData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::HeadModel_CosmeticStand_BustType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_departmentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___departmentID;
}
constexpr ::StringW const& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_departmentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___departmentID;
}
constexpr void GorillaNetworking::Store::StandTypeData::__cordl_internal_set_departmentID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___departmentID = value;
}
constexpr ::StringW& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_displayID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayID;
}
constexpr ::StringW const& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_displayID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayID;
}
constexpr void GorillaNetworking::Store::StandTypeData::__cordl_internal_set_displayID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayID = value;
}
constexpr ::StringW& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_standID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standID;
}
constexpr ::StringW const& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_standID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standID;
}
constexpr void GorillaNetworking::Store::StandTypeData::__cordl_internal_set_standID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standID = value;
}
constexpr ::StringW& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_bustType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bustType;
}
constexpr ::StringW const& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_bustType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bustType;
}
constexpr void GorillaNetworking::Store::StandTypeData::__cordl_internal_set_bustType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bustType = value;
}
constexpr ::StringW& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_playFabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabID;
}
constexpr ::StringW const& GorillaNetworking::Store::StandTypeData::__cordl_internal_get_playFabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabID;
}
constexpr void GorillaNetworking::Store::StandTypeData::__cordl_internal_set_playFabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabID = value;
}
inline void GorillaNetworking::Store::StandTypeData::_ctor(::ArrayW<::StringW>  spawnData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandTypeData*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawnData);
}
inline void GorillaNetworking::Store::StandTypeData::_ctor(::StringW  departmentID, ::StringW  displayID, ::StringW  standID, ::GlobalNamespace::HeadModel_CosmeticStand_BustType  bustType, ::StringW  playFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandTypeData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::HeadModel_CosmeticStand_BustType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, departmentID, displayID, standID, bustType, playFabID);
}
inline ::GorillaNetworking::Store::StandTypeData* GorillaNetworking::Store::StandTypeData::New_ctor(::ArrayW<::StringW>  spawnData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StandTypeData*>(spawnData));
}
inline ::GorillaNetworking::Store::StandTypeData* GorillaNetworking::Store::StandTypeData::New_ctor(::StringW  departmentID, ::StringW  displayID, ::StringW  standID, ::GlobalNamespace::HeadModel_CosmeticStand_BustType  bustType, ::StringW  playFabID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StandTypeData*>(departmentID, displayID, standID, bustType, playFabID));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StandTypeData::StandTypeData()   {
}
