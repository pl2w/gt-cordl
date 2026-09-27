#pragma once
// IWYU pragma private; include "KID/Model/GetDefaultPermissionsResponse.hpp"
#include "KID/Model/zzzz__AgeCategoryV2_impl.hpp"
#include "KID/Model/zzzz__AgeStatusType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__GetDefaultPermissionsResponse_def.hpp"
#include "KID/Model/zzzz__AgeCategoryV2_def.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.get_AgeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeStatusType (::KID::Model::GetDefaultPermissionsResponse::*)()>(&::KID::Model::GetDefaultPermissionsResponse::get_AgeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"get_AgeStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.set_AgeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetDefaultPermissionsResponse::*)(::KID::Model::AgeStatusType)>(&::KID::Model::GetDefaultPermissionsResponse::set_AgeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"set_AgeStatus", {}, {::i2c::type_of<::KID::Model::AgeStatusType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.get_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeCategoryV2 (::KID::Model::GetDefaultPermissionsResponse::*)()>(&::KID::Model::GetDefaultPermissionsResponse::get_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.set_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetDefaultPermissionsResponse::*)(::KID::Model::AgeCategoryV2)>(&::KID::Model::GetDefaultPermissionsResponse::set_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::KID::Model::AgeCategoryV2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetDefaultPermissionsResponse::*)()>(&::KID::Model::GetDefaultPermissionsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetDefaultPermissionsResponse::*)(bool, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*, ::KID::Model::AgeStatusType, ::KID::Model::AgeCategoryV2)>(&::KID::Model::GetDefaultPermissionsResponse::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9cd848c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(), ::i2c::type_of<::KID::Model::AgeStatusType>(), ::i2c::type_of<::KID::Model::AgeCategoryV2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.get_RequiresParentConsentForDataProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::KID::Model::GetDefaultPermissionsResponse::*)()>(&::KID::Model::GetDefaultPermissionsResponse::get_RequiresParentConsentForDataProcessing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"get_RequiresParentConsentForDataProcessing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.set_RequiresParentConsentForDataProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetDefaultPermissionsResponse::*)(bool)>(&::KID::Model::GetDefaultPermissionsResponse::set_RequiresParentConsentForDataProcessing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"set_RequiresParentConsentForDataProcessing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.get_Permissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::KID::Model::Permission*>* (::KID::Model::GetDefaultPermissionsResponse::*)()>(&::KID::Model::GetDefaultPermissionsResponse::get_Permissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"get_Permissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.set_Permissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetDefaultPermissionsResponse::*)(::System::Collections::Generic::List_1<::KID::Model::Permission*>*)>(&::KID::Model::GetDefaultPermissionsResponse::set_Permissions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd8540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"set_Permissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetDefaultPermissionsResponse::*)()>(&::KID::Model::GetDefaultPermissionsResponse::ToString)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9cd8548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                    {::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetDefaultPermissionsResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetDefaultPermissionsResponse::*)()>(&::KID::Model::GetDefaultPermissionsResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd8790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                    {::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::KID::Model::AgeStatusType& KID::Model::GetDefaultPermissionsResponse::__cordl_internal_get__AgeStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeStatus_k__BackingField;
}
constexpr ::KID::Model::AgeStatusType const& KID::Model::GetDefaultPermissionsResponse::__cordl_internal_get__AgeStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeStatus_k__BackingField;
}
constexpr void KID::Model::GetDefaultPermissionsResponse::__cordl_internal_set__AgeStatus_k__BackingField(::KID::Model::AgeStatusType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeStatus_k__BackingField = value;
}
constexpr ::KID::Model::AgeCategoryV2& KID::Model::GetDefaultPermissionsResponse::__cordl_internal_get__AgeCategory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr ::KID::Model::AgeCategoryV2 const& KID::Model::GetDefaultPermissionsResponse::__cordl_internal_get__AgeCategory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr void KID::Model::GetDefaultPermissionsResponse::__cordl_internal_set__AgeCategory_k__BackingField(::KID::Model::AgeCategoryV2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeCategory_k__BackingField = value;
}
constexpr bool& KID::Model::GetDefaultPermissionsResponse::__cordl_internal_get__RequiresParentConsentForDataProcessing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresParentConsentForDataProcessing_k__BackingField;
}
constexpr bool const& KID::Model::GetDefaultPermissionsResponse::__cordl_internal_get__RequiresParentConsentForDataProcessing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresParentConsentForDataProcessing_k__BackingField;
}
constexpr void KID::Model::GetDefaultPermissionsResponse::__cordl_internal_set__RequiresParentConsentForDataProcessing_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiresParentConsentForDataProcessing_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>*& KID::Model::GetDefaultPermissionsResponse::__cordl_internal_get__Permissions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Permissions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>* const& KID::Model::GetDefaultPermissionsResponse::__cordl_internal_get__Permissions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Permissions_k__BackingField;
}
constexpr void KID::Model::GetDefaultPermissionsResponse::__cordl_internal_set__Permissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Permissions_k__BackingField = value;
}
inline ::KID::Model::AgeStatusType KID::Model::GetDefaultPermissionsResponse::get_AgeStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"get_AgeStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeStatusType>(this, ___internal_method);
}
inline void KID::Model::GetDefaultPermissionsResponse::set_AgeStatus(::KID::Model::AgeStatusType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"set_AgeStatus", {}, {::i2c::type_of<::KID::Model::AgeStatusType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeCategoryV2 KID::Model::GetDefaultPermissionsResponse::get_AgeCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeCategoryV2>(this, ___internal_method);
}
inline void KID::Model::GetDefaultPermissionsResponse::set_AgeCategory(::KID::Model::AgeCategoryV2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::KID::Model::AgeCategoryV2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::GetDefaultPermissionsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::GetDefaultPermissionsResponse::_ctor(bool  requiresParentConsentForDataProcessing, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  permissions, ::KID::Model::AgeStatusType  ageStatus, ::KID::Model::AgeCategoryV2  ageCategory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(), ::i2c::type_of<::KID::Model::AgeStatusType>(), ::i2c::type_of<::KID::Model::AgeCategoryV2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requiresParentConsentForDataProcessing, permissions, ageStatus, ageCategory);
}
inline bool KID::Model::GetDefaultPermissionsResponse::get_RequiresParentConsentForDataProcessing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"get_RequiresParentConsentForDataProcessing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void KID::Model::GetDefaultPermissionsResponse::set_RequiresParentConsentForDataProcessing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"set_RequiresParentConsentForDataProcessing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* KID::Model::GetDefaultPermissionsResponse::get_Permissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"get_Permissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>(this, ___internal_method);
}
inline void KID::Model::GetDefaultPermissionsResponse::set_Permissions(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(),
                        {"set_Permissions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::KID::Model::Permission*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GetDefaultPermissionsResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::GetDefaultPermissionsResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetDefaultPermissionsResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::GetDefaultPermissionsResponse* KID::Model::GetDefaultPermissionsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetDefaultPermissionsResponse*>());
}
inline ::KID::Model::GetDefaultPermissionsResponse* KID::Model::GetDefaultPermissionsResponse::New_ctor(bool  requiresParentConsentForDataProcessing, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  permissions, ::KID::Model::AgeStatusType  ageStatus, ::KID::Model::AgeCategoryV2  ageCategory)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetDefaultPermissionsResponse*>(requiresParentConsentForDataProcessing, permissions, ageStatus, ageCategory));
}
// Ctor Parameters []
constexpr ::KID::Model::GetDefaultPermissionsResponse::GetDefaultPermissionsResponse()   {
}
