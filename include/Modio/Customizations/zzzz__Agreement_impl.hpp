#pragma once
// IWYU pragma private; include "Modio/Customizations/Agreement.hpp"
#include "Modio/Customizations/zzzz__AgreementType_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Customizations/zzzz__Agreement_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AgreementVersionObject_def.hpp"
#include "Modio/Customizations/zzzz__AgreementType_def.hpp"
#include "Modio/Customizations/zzzz__Agreement__GetAgreement_d__43_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(int64_t)>(&::Modio::Customizations::Agreement::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Id", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(bool)>(&::Modio::Customizations::Agreement::set_IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_IsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_IsLatest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_IsLatest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_IsLatest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_IsLatest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(bool)>(&::Modio::Customizations::Agreement::set_IsLatest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_IsLatest", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Customizations::AgreementType (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(::Modio::Customizations::AgreementType)>(&::Modio::Customizations::Agreement::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Type", {}, {::i2c::type_of<::Modio::Customizations::AgreementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_DateAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_DateAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_DateAdded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_DateAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(::System::DateTime)>(&::Modio::Customizations::Agreement::set_DateAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_DateAdded", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_DateUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_DateUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_DateUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_DateUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(::System::DateTime)>(&::Modio::Customizations::Agreement::set_DateUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_DateUpdated", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_DateLive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_DateLive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_DateLive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_DateLive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(::System::DateTime)>(&::Modio::Customizations::Agreement::set_DateLive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_DateLive", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(::StringW)>(&::Modio::Customizations::Agreement::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_Changelog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_Changelog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Changelog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_Changelog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(::StringW)>(&::Modio::Customizations::Agreement::set_Changelog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Changelog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.get_Content
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Customizations::Agreement::*)()>(&::Modio::Customizations::Agreement::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Content", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.set_Content
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(::StringW)>(&::Modio::Customizations::Agreement::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa057098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Content", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Customizations::Agreement::*)(::Modio::API::SchemaDefinitions::AgreementVersionObject)>(&::Modio::Customizations::Agreement::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa0570a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::AgreementVersionObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.ApplyDetailsFromAgreementObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Customizations::Agreement* (::Modio::Customizations::Agreement::*)(::Modio::API::SchemaDefinitions::AgreementVersionObject)>(&::Modio::Customizations::Agreement::ApplyDetailsFromAgreementObject)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa0570f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"ApplyDetailsFromAgreementObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::AgreementVersionObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::Agreement.GetAgreement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::Agreement*>>* (*)(::Modio::Customizations::AgreementType, bool)>(&::Modio::Customizations::Agreement::GetAgreement)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa057224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"GetAgreement", {}, {::i2c::type_of<::Modio::Customizations::AgreementType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Modio::Customizations::Agreement::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr int64_t const& Modio::Customizations::Agreement::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__Id_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr bool& Modio::Customizations::Agreement::__cordl_internal_get__IsActive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsActive_k__BackingField;
}
constexpr bool const& Modio::Customizations::Agreement::__cordl_internal_get__IsActive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsActive_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__IsActive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsActive_k__BackingField = value;
}
constexpr bool& Modio::Customizations::Agreement::__cordl_internal_get__IsLatest_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLatest_k__BackingField;
}
constexpr bool const& Modio::Customizations::Agreement::__cordl_internal_get__IsLatest_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsLatest_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__IsLatest_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsLatest_k__BackingField = value;
}
constexpr ::Modio::Customizations::AgreementType& Modio::Customizations::Agreement::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::Modio::Customizations::AgreementType const& Modio::Customizations::Agreement::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__Type_k__BackingField(::Modio::Customizations::AgreementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
constexpr ::System::DateTime& Modio::Customizations::Agreement::__cordl_internal_get__DateAdded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateAdded_k__BackingField;
}
constexpr ::System::DateTime const& Modio::Customizations::Agreement::__cordl_internal_get__DateAdded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateAdded_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__DateAdded_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateAdded_k__BackingField = value;
}
constexpr ::System::DateTime& Modio::Customizations::Agreement::__cordl_internal_get__DateUpdated_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateUpdated_k__BackingField;
}
constexpr ::System::DateTime const& Modio::Customizations::Agreement::__cordl_internal_get__DateUpdated_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateUpdated_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__DateUpdated_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateUpdated_k__BackingField = value;
}
constexpr ::System::DateTime& Modio::Customizations::Agreement::__cordl_internal_get__DateLive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateLive_k__BackingField;
}
constexpr ::System::DateTime const& Modio::Customizations::Agreement::__cordl_internal_get__DateLive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DateLive_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__DateLive_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DateLive_k__BackingField = value;
}
constexpr ::StringW& Modio::Customizations::Agreement::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Modio::Customizations::Agreement::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::StringW& Modio::Customizations::Agreement::__cordl_internal_get__Changelog_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Changelog_k__BackingField;
}
constexpr ::StringW const& Modio::Customizations::Agreement::__cordl_internal_get__Changelog_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Changelog_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__Changelog_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Changelog_k__BackingField = value;
}
constexpr ::StringW& Modio::Customizations::Agreement::__cordl_internal_get__Content_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Content_k__BackingField;
}
constexpr ::StringW const& Modio::Customizations::Agreement::__cordl_internal_get__Content_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Content_k__BackingField;
}
constexpr void Modio::Customizations::Agreement::__cordl_internal_set__Content_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Content_k__BackingField = value;
}
inline void Modio::Customizations::Agreement::setStaticF__agreementCache(::System::Collections::Generic::Dictionary_2<::Modio::Customizations::AgreementType,::Modio::Customizations::Agreement*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Customizations::AgreementType,::Modio::Customizations::Agreement*>*, "_agreementCache", ::Modio::Customizations::Agreement*>(std::forward<::System::Collections::Generic::Dictionary_2<::Modio::Customizations::AgreementType,::Modio::Customizations::Agreement*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Modio::Customizations::AgreementType,::Modio::Customizations::Agreement*>* Modio::Customizations::Agreement::getStaticF__agreementCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Customizations::AgreementType,::Modio::Customizations::Agreement*>*, "_agreementCache", ::Modio::Customizations::Agreement*>();
}
inline int64_t Modio::Customizations::Agreement::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_Id(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Id", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Customizations::Agreement::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_IsActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_IsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Customizations::Agreement::get_IsLatest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_IsLatest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_IsLatest(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_IsLatest", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Customizations::AgreementType Modio::Customizations::Agreement::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Customizations::AgreementType>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_Type(::Modio::Customizations::AgreementType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Type", {}, {::i2c::type_of<::Modio::Customizations::AgreementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime Modio::Customizations::Agreement::get_DateAdded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_DateAdded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_DateAdded(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_DateAdded", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime Modio::Customizations::Agreement::get_DateUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_DateUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_DateUpdated(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_DateUpdated", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime Modio::Customizations::Agreement::get_DateLive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_DateLive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_DateLive(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_DateLive", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Customizations::Agreement::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Customizations::Agreement::get_Changelog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Changelog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_Changelog(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Changelog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Customizations::Agreement::get_Content()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"get_Content", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Customizations::Agreement::set_Content(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"set_Content", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Customizations::Agreement::_ctor(::Modio::API::SchemaDefinitions::AgreementVersionObject  agreementObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::AgreementVersionObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agreementObject);
}
inline ::Modio::Customizations::Agreement* Modio::Customizations::Agreement::ApplyDetailsFromAgreementObject(::Modio::API::SchemaDefinitions::AgreementVersionObject  agreementObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"ApplyDetailsFromAgreementObject", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::AgreementVersionObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Customizations::Agreement*>(this, ___internal_method, agreementObject);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::Agreement*>>* Modio::Customizations::Agreement::GetAgreement(::Modio::Customizations::AgreementType  type, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::Agreement*>(),
                        {"GetAgreement", {}, {::i2c::type_of<::Modio::Customizations::AgreementType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::Agreement*>>*>(nullptr, ___internal_method, type, forceUpdate);
}
inline ::Modio::Customizations::Agreement* Modio::Customizations::Agreement::New_ctor(::Modio::API::SchemaDefinitions::AgreementVersionObject  agreementObject)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Customizations::Agreement*>(agreementObject));
}
// Ctor Parameters []
constexpr ::Modio::Customizations::Agreement::Agreement()   {
}
