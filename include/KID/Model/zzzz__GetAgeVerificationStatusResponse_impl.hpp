#pragma once
// IWYU pragma private; include "KID/Model/GetAgeVerificationStatusResponse.hpp"
#include "KID/Model/zzzz__AgeCategoryV2_impl.hpp"
#include "KID/Model/zzzz__VerificationMethod_impl.hpp"
#include "KID/Model/zzzz__VerificationStatusV2_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__GetAgeVerificationStatusResponse_def.hpp"
#include "KID/Model/zzzz__AgeCategoryV2_def.hpp"
#include "KID/Model/zzzz__AgeRangeV2_def.hpp"
#include "KID/Model/zzzz__VerificationMethod_def.hpp"
#include "KID/Model/zzzz__VerificationStatusV2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::VerificationStatusV2 (::KID::Model::GetAgeVerificationStatusResponse::*)()>(&::KID::Model::GetAgeVerificationStatusResponse::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.set_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeVerificationStatusResponse::*)(::KID::Model::VerificationStatusV2)>(&::KID::Model::GetAgeVerificationStatusResponse::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::KID::Model::VerificationStatusV2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.get_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::KID::Model::AgeCategoryV2> (::KID::Model::GetAgeVerificationStatusResponse::*)()>(&::KID::Model::GetAgeVerificationStatusResponse::get_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.set_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeVerificationStatusResponse::*)(::System::Nullable_1<::KID::Model::AgeCategoryV2>)>(&::KID::Model::GetAgeVerificationStatusResponse::set_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategoryV2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::KID::Model::VerificationMethod> (::KID::Model::GetAgeVerificationStatusResponse::*)()>(&::KID::Model::GetAgeVerificationStatusResponse::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_Method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.set_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeVerificationStatusResponse::*)(::System::Nullable_1<::KID::Model::VerificationMethod>)>(&::KID::Model::GetAgeVerificationStatusResponse::set_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_Method", {}, {::i2c::type_of<::System::Nullable_1<::KID::Model::VerificationMethod>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeVerificationStatusResponse::*)()>(&::KID::Model::GetAgeVerificationStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeVerificationStatusResponse::*)(::System::Guid, ::KID::Model::VerificationStatusV2, ::KID::Model::AgeRangeV2*, ::System::Nullable_1<::KID::Model::AgeCategoryV2>, ::System::Nullable_1<::KID::Model::VerificationMethod>)>(&::KID::Model::GetAgeVerificationStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9cd7d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::VerificationStatusV2>(), ::i2c::type_of<::KID::Model::AgeRangeV2*>(), ::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategoryV2>>(), ::i2c::type_of<::System::Nullable_1<::KID::Model::VerificationMethod>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::KID::Model::GetAgeVerificationStatusResponse::*)()>(&::KID::Model::GetAgeVerificationStatusResponse::get_Id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cd7dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeVerificationStatusResponse::*)(::System::Guid)>(&::KID::Model::GetAgeVerificationStatusResponse::set_Id)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cd7e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.get_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::KID::Model::AgeRangeV2* (::KID::Model::GetAgeVerificationStatusResponse::*)()>(&::KID::Model::GetAgeVerificationStatusResponse::get_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_Age", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.set_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::GetAgeVerificationStatusResponse::*)(::KID::Model::AgeRangeV2*)>(&::KID::Model::GetAgeVerificationStatusResponse::set_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd7e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_Age", {}, {::i2c::type_of<::KID::Model::AgeRangeV2*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetAgeVerificationStatusResponse::*)()>(&::KID::Model::GetAgeVerificationStatusResponse::ToString)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x9cd7e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                    {::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::GetAgeVerificationStatusResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::GetAgeVerificationStatusResponse::*)()>(&::KID::Model::GetAgeVerificationStatusResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd8114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                    {::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::KID::Model::VerificationStatusV2& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr ::KID::Model::VerificationStatusV2 const& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
constexpr void KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_set__Status_k__BackingField(::KID::Model::VerificationStatusV2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
constexpr ::System::Nullable_1<::KID::Model::AgeCategoryV2>& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__AgeCategory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr ::System::Nullable_1<::KID::Model::AgeCategoryV2> const& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__AgeCategory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr void KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_set__AgeCategory_k__BackingField(::System::Nullable_1<::KID::Model::AgeCategoryV2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeCategory_k__BackingField = value;
}
constexpr ::System::Nullable_1<::KID::Model::VerificationMethod>& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__Method_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr ::System::Nullable_1<::KID::Model::VerificationMethod> const& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__Method_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr void KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_set__Method_k__BackingField(::System::Nullable_1<::KID::Model::VerificationMethod>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Method_k__BackingField = value;
}
constexpr ::System::Guid& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr ::System::Guid const& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_set__Id_k__BackingField(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr ::KID::Model::AgeRangeV2*& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__Age_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr ::KID::Model::AgeRangeV2* const& KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_get__Age_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr void KID::Model::GetAgeVerificationStatusResponse::__cordl_internal_set__Age_k__BackingField(::KID::Model::AgeRangeV2*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Age_k__BackingField = value;
}
inline ::KID::Model::VerificationStatusV2 KID::Model::GetAgeVerificationStatusResponse::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::VerificationStatusV2>(this, ___internal_method);
}
inline void KID::Model::GetAgeVerificationStatusResponse::set_Status(::KID::Model::VerificationStatusV2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_Status", {}, {::i2c::type_of<::KID::Model::VerificationStatusV2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::KID::Model::AgeCategoryV2> KID::Model::GetAgeVerificationStatusResponse::get_AgeCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::KID::Model::AgeCategoryV2>>(this, ___internal_method);
}
inline void KID::Model::GetAgeVerificationStatusResponse::set_AgeCategory(::System::Nullable_1<::KID::Model::AgeCategoryV2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategoryV2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::KID::Model::VerificationMethod> KID::Model::GetAgeVerificationStatusResponse::get_Method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_Method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::KID::Model::VerificationMethod>>(this, ___internal_method);
}
inline void KID::Model::GetAgeVerificationStatusResponse::set_Method(::System::Nullable_1<::KID::Model::VerificationMethod>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_Method", {}, {::i2c::type_of<::System::Nullable_1<::KID::Model::VerificationMethod>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::GetAgeVerificationStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::GetAgeVerificationStatusResponse::_ctor(::System::Guid  id, ::KID::Model::VerificationStatusV2  status, ::KID::Model::AgeRangeV2*  age, ::System::Nullable_1<::KID::Model::AgeCategoryV2>  ageCategory, ::System::Nullable_1<::KID::Model::VerificationMethod>  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::KID::Model::VerificationStatusV2>(), ::i2c::type_of<::KID::Model::AgeRangeV2*>(), ::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategoryV2>>(), ::i2c::type_of<::System::Nullable_1<::KID::Model::VerificationMethod>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, status, age, ageCategory, method);
}
inline ::System::Guid KID::Model::GetAgeVerificationStatusResponse::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void KID::Model::GetAgeVerificationStatusResponse::set_Id(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_Id", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::KID::Model::AgeRangeV2* KID::Model::GetAgeVerificationStatusResponse::get_Age()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"get_Age", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::KID::Model::AgeRangeV2*>(this, ___internal_method);
}
inline void KID::Model::GetAgeVerificationStatusResponse::set_Age(::KID::Model::AgeRangeV2*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(),
                        {"set_Age", {}, {::i2c::type_of<::KID::Model::AgeRangeV2*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::GetAgeVerificationStatusResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::GetAgeVerificationStatusResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::GetAgeVerificationStatusResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::GetAgeVerificationStatusResponse* KID::Model::GetAgeVerificationStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetAgeVerificationStatusResponse*>());
}
inline ::KID::Model::GetAgeVerificationStatusResponse* KID::Model::GetAgeVerificationStatusResponse::New_ctor(::System::Guid  id, ::KID::Model::VerificationStatusV2  status, ::KID::Model::AgeRangeV2*  age, ::System::Nullable_1<::KID::Model::AgeCategoryV2>  ageCategory, ::System::Nullable_1<::KID::Model::VerificationMethod>  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::GetAgeVerificationStatusResponse*>(id, status, age, ageCategory, method));
}
// Ctor Parameters []
constexpr ::KID::Model::GetAgeVerificationStatusResponse::GetAgeVerificationStatusResponse()   {
}
