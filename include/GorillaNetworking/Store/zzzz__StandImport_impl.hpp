#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StandImport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/Store/zzzz__StandImport_def.hpp"
#include "GorillaNetworking/Store/zzzz__StandTypeData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::Store::StandImport.DecomposeFromTitleDataString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StandImport::*)(::StringW)>(&::GorillaNetworking::Store::StandImport::DecomposeFromTitleDataString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cb08ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {"DecomposeFromTitleDataString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StandImport.DecomposeStandDataTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StandImport::*)(::StringW)>(&::GorillaNetworking::Store::StandImport::DecomposeStandDataTitleData)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5cb172c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {"DecomposeStandDataTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StandImport.DeserializeFromJSON
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StandImport::*)(::StringW)>(&::GorillaNetworking::Store::StandImport::DeserializeFromJSON)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cb1c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {"DeserializeFromJSON", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StandImport.DecomposeStandData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StandImport::*)(::StringW)>(&::GorillaNetworking::Store::StandImport::DecomposeStandData)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5cb1cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {"DecomposeStandData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::Store::StandImport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::Store::StandImport::*)()>(&::GorillaNetworking::Store::StandImport::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cb0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StandTypeData*>*& GorillaNetworking::Store::StandImport::__cordl_internal_get_standData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standData;
}
constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StandTypeData*>* const& GorillaNetworking::Store::StandImport::__cordl_internal_get_standData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standData;
}
constexpr void GorillaNetworking::Store::StandImport::__cordl_internal_set_standData(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StandTypeData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StandTypeData*>*& GorillaNetworking::Store::StandImport::__cordl_internal_get_standKeyToDataDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standKeyToDataDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StandTypeData*>* const& GorillaNetworking::Store::StandImport::__cordl_internal_get_standKeyToDataDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standKeyToDataDict;
}
constexpr void GorillaNetworking::Store::StandImport::__cordl_internal_set_standKeyToDataDict(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StandTypeData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standKeyToDataDict = value;
}
inline void GorillaNetworking::Store::StandImport::DecomposeFromTitleDataString(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {"DecomposeFromTitleDataString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GorillaNetworking::Store::StandImport::DecomposeStandDataTitleData(::StringW  dataString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {"DecomposeStandDataTitleData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataString);
}
inline void GorillaNetworking::Store::StandImport::DeserializeFromJSON(::StringW  JSONString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {"DeserializeFromJSON", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, JSONString);
}
inline void GorillaNetworking::Store::StandImport::DecomposeStandData(::StringW  dataString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {"DecomposeStandData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataString);
}
inline void GorillaNetworking::Store::StandImport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::Store::StandImport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::Store::StandImport* GorillaNetworking::Store::StandImport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::Store::StandImport*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::Store::StandImport::StandImport()   {
}
