#pragma once
// IWYU pragma private; include "KID/Model/Session.hpp"
#include "KID/Model/zzzz__AgeCategoryV2_impl.hpp"
#include "KID/Model/zzzz__AgeStatusType_impl.hpp"
#include "KID/Model/zzzz__Session_ManagedByEnum_impl.hpp"
#include "KID/Model/zzzz__Session_StatusEnum_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__Session_def.hpp"
#include "KID/Model/zzzz__AgeCategoryV2_def.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "KID/Model/zzzz__Session_ManagedByEnum_def.hpp"
#include "KID/Model/zzzz__Session_StatusEnum_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::KID::Model::Session.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Session_StatusEnum (::KID::Model::Session::*)()>(&::KID::Model::Session::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::GlobalNamespace::Session_StatusEnum)>(&::KID::Model::Session::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::Session_StatusEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_AgeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeStatusType (::KID::Model::Session::*)()>(&::KID::Model::Session::get_AgeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_AgeStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_AgeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::KID::Model::AgeStatusType)>(&::KID::Model::Session::set_AgeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_AgeStatus", {}, {::i2c::type_of<::KID::Model::AgeStatusType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeCategoryV2 (::KID::Model::Session::*)()>(&::KID::Model::Session::get_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::KID::Model::AgeCategoryV2)>(&::KID::Model::Session::set_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::KID::Model::AgeCategoryV2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_ManagedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Session_ManagedByEnum (::KID::Model::Session::*)()>(&::KID::Model::Session::get_ManagedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_ManagedBy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_ManagedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::GlobalNamespace::Session_ManagedByEnum)>(&::KID::Model::Session::set_ManagedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_ManagedBy", {}, {::i2c::type_of<::GlobalNamespace::Session_ManagedByEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)()>(&::KID::Model::Session::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd93f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::System::Guid, ::StringW, ::StringW, ::GlobalNamespace::Session_StatusEnum, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*, ::KID::Model::AgeStatusType, ::KID::Model::AgeCategoryV2, ::System::DateTime, ::StringW, ::GlobalNamespace::Session_ManagedByEnum)>(&::KID::Model::Session::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9cd9400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Session_StatusEnum>(), ::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(), ::i2c::type_of<::KID::Model::AgeStatusType>(), ::i2c::type_of<::KID::Model::AgeCategoryV2>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Session_ManagedByEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::Session::*)()>(&::KID::Model::Session::get_SessionId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd953c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::System::Guid)>(&::KID::Model::Session::set_SessionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_Kuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Session::*)()>(&::KID::Model::Session::get_Kuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Kuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_Kuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::StringW)>(&::KID::Model::Session::set_Kuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Kuid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_Etag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Session::*)()>(&::KID::Model::Session::get_Etag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Etag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_Etag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::StringW)>(&::KID::Model::Session::set_Etag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Etag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_Permissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::KID::Model::Permission*>* (::KID::Model::Session::*)()>(&::KID::Model::Session::get_Permissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Permissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_Permissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::System::Collections::Generic::List_1<::KID::Model::Permission*>*)>(&::KID::Model::Session::set_Permissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Permissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_DateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::KID::Model::Session::*)()>(&::KID::Model::Session::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_DateOfBirth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_DateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::System::DateTime)>(&::KID::Model::Session::set_DateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_DateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.get_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Session::*)()>(&::KID::Model::Session::get_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.set_Jurisdiction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::Session::*)(::StringW)>(&::KID::Model::Session::set_Jurisdiction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd9598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Session::*)()>(&::KID::Model::Session::ToString)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x9cd95a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::Session*>(),
                    {::i2c::class_of<::KID::Model::Session*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::Session.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::Session::*)()>(&::KID::Model::Session::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd9a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::Session*>(),
                    {::i2c::class_of<::KID::Model::Session*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Session_StatusEnum& KID::Model::Session::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::GlobalNamespace::Session_StatusEnum const& KID::Model::Session::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::Session_StatusEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::KID::Model::AgeStatusType& KID::Model::Session::__cordl_internal_get__AgeStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeStatus_k__BackingField;
}
constexpr ::KID::Model::AgeStatusType const& KID::Model::Session::__cordl_internal_get__AgeStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeStatus_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__AgeStatus_k__BackingField(::KID::Model::AgeStatusType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeStatus_k__BackingField = value;
}
constexpr ::KID::Model::AgeCategoryV2& KID::Model::Session::__cordl_internal_get__AgeCategory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr ::KID::Model::AgeCategoryV2 const& KID::Model::Session::__cordl_internal_get__AgeCategory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__AgeCategory_k__BackingField(::KID::Model::AgeCategoryV2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeCategory_k__BackingField = value;
}
constexpr ::GlobalNamespace::Session_ManagedByEnum& KID::Model::Session::__cordl_internal_get__ManagedBy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManagedBy_k__BackingField;
}
constexpr ::GlobalNamespace::Session_ManagedByEnum const& KID::Model::Session::__cordl_internal_get__ManagedBy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ManagedBy_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__ManagedBy_k__BackingField(::GlobalNamespace::Session_ManagedByEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ManagedBy_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::Session::__cordl_internal_get__SessionId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::Session::__cordl_internal_get__SessionId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SessionId_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__SessionId_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SessionId_k__BackingField = value;
}
constexpr ::StringW& KID::Model::Session::__cordl_internal_get__Kuid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Kuid_k__BackingField;
}
constexpr ::StringW const& KID::Model::Session::__cordl_internal_get__Kuid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Kuid_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__Kuid_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Kuid_k__BackingField = value;
}
constexpr ::StringW& KID::Model::Session::__cordl_internal_get__Etag_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Etag_k__BackingField;
}
constexpr ::StringW const& KID::Model::Session::__cordl_internal_get__Etag_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Etag_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__Etag_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Etag_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>*& KID::Model::Session::__cordl_internal_get__Permissions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Permissions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>* const& KID::Model::Session::__cordl_internal_get__Permissions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Permissions_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__Permissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Permissions_k__BackingField = value;
}
constexpr ::System::DateTime& KID::Model::Session::__cordl_internal_get__DateOfBirth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateOfBirth_k__BackingField;
}
constexpr ::System::DateTime const& KID::Model::Session::__cordl_internal_get__DateOfBirth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateOfBirth_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__DateOfBirth_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateOfBirth_k__BackingField = value;
}
constexpr ::StringW& KID::Model::Session::__cordl_internal_get__Jurisdiction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr ::StringW const& KID::Model::Session::__cordl_internal_get__Jurisdiction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Jurisdiction_k__BackingField;
}
constexpr void KID::Model::Session::__cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Jurisdiction_k__BackingField = value;
}
inline ::GlobalNamespace::Session_StatusEnum KID::Model::Session::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Session_StatusEnum>(this, ___internal_method);
}
inline void KID::Model::Session::set_Status(::GlobalNamespace::Session_StatusEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Status", {}, {::i2c::type_of<::GlobalNamespace::Session_StatusEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeStatusType KID::Model::Session::get_AgeStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_AgeStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeStatusType>(this, ___internal_method);
}
inline void KID::Model::Session::set_AgeStatus(::KID::Model::AgeStatusType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_AgeStatus", {}, {::i2c::type_of<::KID::Model::AgeStatusType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeCategoryV2 KID::Model::Session::get_AgeCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeCategoryV2>(this, ___internal_method);
}
inline void KID::Model::Session::set_AgeCategory(::KID::Model::AgeCategoryV2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::KID::Model::AgeCategoryV2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Session_ManagedByEnum KID::Model::Session::get_ManagedBy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_ManagedBy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Session_ManagedByEnum>(this, ___internal_method);
}
inline void KID::Model::Session::set_ManagedBy(::GlobalNamespace::Session_ManagedByEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_ManagedBy", {}, {::i2c::type_of<::GlobalNamespace::Session_ManagedByEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::Session::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::Session::_ctor(::System::Guid  sessionId, ::StringW  kuid, ::StringW  etag, ::GlobalNamespace::Session_StatusEnum  status, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  permissions, ::KID::Model::AgeStatusType  ageStatus, ::KID::Model::AgeCategoryV2  ageCategory, ::System::DateTime  dateOfBirth, ::StringW  jurisdiction, ::GlobalNamespace::Session_ManagedByEnum  managedBy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Session_StatusEnum>(), ::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(), ::i2c::type_of<::KID::Model::AgeStatusType>(), ::i2c::type_of<::KID::Model::AgeCategoryV2>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::Session_ManagedByEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionId, kuid, etag, status, permissions, ageStatus, ageCategory, dateOfBirth, jurisdiction, managedBy);
}
inline ::System::Guid KID::Model::Session::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::Session::set_SessionId(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_SessionId", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::Session::get_Kuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Kuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::Session::set_Kuid(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Kuid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::Session::get_Etag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Etag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::Session::set_Etag(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Etag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* KID::Model::Session::get_Permissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Permissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(this, ___internal_method);
}
inline void KID::Model::Session::set_Permissions(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Permissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime KID::Model::Session::get_DateOfBirth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_DateOfBirth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void KID::Model::Session::set_DateOfBirth(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_DateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::Session::get_Jurisdiction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"get_Jurisdiction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::Session::set_Jurisdiction(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::Session*>(),
                        {"set_Jurisdiction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::Session::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::Session*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::Session::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::Session*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::Session* KID::Model::Session::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::Session*>());
}
inline ::KID::Model::Session* KID::Model::Session::New_ctor(::System::Guid  sessionId, ::StringW  kuid, ::StringW  etag, ::GlobalNamespace::Session_StatusEnum  status, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  permissions, ::KID::Model::AgeStatusType  ageStatus, ::KID::Model::AgeCategoryV2  ageCategory, ::System::DateTime  dateOfBirth, ::StringW  jurisdiction, ::GlobalNamespace::Session_ManagedByEnum  managedBy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::Session*>(sessionId, kuid, etag, status, permissions, ageStatus, ageCategory, dateOfBirth, jurisdiction, managedBy));
}
// Ctor Parameters []
constexpr ::KID::Model::Session::Session()   {
}
