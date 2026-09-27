#pragma once
// IWYU pragma private; include "KID/Model/AgeCriteria.hpp"
#include "KID/Model/zzzz__AgeCategory_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__AgeCriteria_def.hpp"
#include "KID/Model/zzzz__AgeCategory_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::KID::Model::AgeCriteria.get_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::KID::Model::AgeCategory> (::KID::Model::AgeCriteria::*)()>(&::KID::Model::AgeCriteria::get_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd2e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeCriteria.set_AgeCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeCriteria::*)(::System::Nullable_1<::KID::Model::AgeCategory>)>(&::KID::Model::AgeCriteria::set_AgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd2e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategory>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeCriteria._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeCriteria::*)(int32_t, ::System::Nullable_1<::KID::Model::AgeCategory>)>(&::KID::Model::AgeCriteria::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9cd2e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategory>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeCriteria.get_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::AgeCriteria::*)()>(&::KID::Model::AgeCriteria::get_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd2eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {"get_Age", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeCriteria.set_Age
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::AgeCriteria::*)(int32_t)>(&::KID::Model::AgeCriteria::set_Age)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd2ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeCriteria.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AgeCriteria::*)()>(&::KID::Model::AgeCriteria::ToString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9cd2ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                    {::i2c::class_of<::KID::Model::AgeCriteria*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::AgeCriteria.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::AgeCriteria::*)()>(&::KID::Model::AgeCriteria::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd3058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                    {::i2c::class_of<::KID::Model::AgeCriteria*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::KID::Model::AgeCategory>& KID::Model::AgeCriteria::__cordl_internal_get__AgeCategory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr ::System::Nullable_1<::KID::Model::AgeCategory> const& KID::Model::AgeCriteria::__cordl_internal_get__AgeCategory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgeCategory_k__BackingField;
}
constexpr void KID::Model::AgeCriteria::__cordl_internal_set__AgeCategory_k__BackingField(::System::Nullable_1<::KID::Model::AgeCategory>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgeCategory_k__BackingField = value;
}
constexpr int32_t& KID::Model::AgeCriteria::__cordl_internal_get__Age_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr int32_t const& KID::Model::AgeCriteria::__cordl_internal_get__Age_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Age_k__BackingField;
}
constexpr void KID::Model::AgeCriteria::__cordl_internal_set__Age_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Age_k__BackingField = value;
}
inline ::System::Nullable_1<::KID::Model::AgeCategory> KID::Model::AgeCriteria::get_AgeCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {"get_AgeCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::KID::Model::AgeCategory>>(this, ___internal_method);
}
inline void KID::Model::AgeCriteria::set_AgeCategory(::System::Nullable_1<::KID::Model::AgeCategory>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {"set_AgeCategory", {}, {::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategory>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void KID::Model::AgeCriteria::_ctor(int32_t  age, ::System::Nullable_1<::KID::Model::AgeCategory>  ageCategory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::KID::Model::AgeCategory>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, age, ageCategory);
}
inline int32_t KID::Model::AgeCriteria::get_Age()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {"get_Age", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::AgeCriteria::set_Age(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::AgeCriteria*>(),
                        {"set_Age", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::AgeCriteria::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::AgeCriteria*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::AgeCriteria::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::AgeCriteria*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::KID::Model::AgeCriteria* KID::Model::AgeCriteria::New_ctor(int32_t  age, ::System::Nullable_1<::KID::Model::AgeCategory>  ageCategory)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::AgeCriteria*>(age, ageCategory));
}
// Ctor Parameters []
constexpr ::KID::Model::AgeCriteria::AgeCriteria()   {
}
