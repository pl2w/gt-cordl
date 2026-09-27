#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LogCategoryAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Meta/Voice/Logging/zzzz__LogCategoryAttribute_def.hpp"
#include "Meta/Voice/Logging/zzzz__LogCategory_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::LogCategoryAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogCategoryAttribute::*)(::StringW)>(&::Meta::Voice::Logging::LogCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e36c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogCategoryAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogCategoryAttribute::*)(::Meta::Voice::Logging::LogCategory)>(&::Meta::Voice::Logging::LogCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e36c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Logging::LogCategory>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogCategoryAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogCategoryAttribute::*)(::StringW, ::StringW)>(&::Meta::Voice::Logging::LogCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e36cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogCategoryAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogCategoryAttribute::*)(::Meta::Voice::Logging::LogCategory, ::Meta::Voice::Logging::LogCategory)>(&::Meta::Voice::Logging::LogCategoryAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9e36d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Logging::LogCategory>(), ::i2c::type_of<::Meta::Voice::Logging::LogCategory>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Voice::Logging::LogCategoryAttribute::__cordl_internal_get__CategoryName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CategoryName_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Logging::LogCategoryAttribute::__cordl_internal_get__CategoryName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CategoryName_k__BackingField;
}
constexpr void Meta::Voice::Logging::LogCategoryAttribute::__cordl_internal_set__CategoryName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CategoryName_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Logging::LogCategoryAttribute::__cordl_internal_get__ParentCategoryName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentCategoryName_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Logging::LogCategoryAttribute::__cordl_internal_get__ParentCategoryName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ParentCategoryName_k__BackingField;
}
constexpr void Meta::Voice::Logging::LogCategoryAttribute::__cordl_internal_set__ParentCategoryName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ParentCategoryName_k__BackingField = value;
}
inline void Meta::Voice::Logging::LogCategoryAttribute::_ctor(::StringW  categoryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, categoryName);
}
inline void Meta::Voice::Logging::LogCategoryAttribute::_ctor(::Meta::Voice::Logging::LogCategory  categoryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Logging::LogCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, categoryName);
}
inline void Meta::Voice::Logging::LogCategoryAttribute::_ctor(::StringW  parentCategoryName, ::StringW  categoryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentCategoryName, categoryName);
}
inline void Meta::Voice::Logging::LogCategoryAttribute::_ctor(::Meta::Voice::Logging::LogCategory  parentCategoryName, ::Meta::Voice::Logging::LogCategory  categoryName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogCategoryAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Logging::LogCategory>(), ::i2c::type_of<::Meta::Voice::Logging::LogCategory>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentCategoryName, categoryName);
}
inline ::Meta::Voice::Logging::LogCategoryAttribute* Meta::Voice::Logging::LogCategoryAttribute::New_ctor(::StringW  categoryName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogCategoryAttribute*>(categoryName));
}
inline ::Meta::Voice::Logging::LogCategoryAttribute* Meta::Voice::Logging::LogCategoryAttribute::New_ctor(::Meta::Voice::Logging::LogCategory  categoryName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogCategoryAttribute*>(categoryName));
}
inline ::Meta::Voice::Logging::LogCategoryAttribute* Meta::Voice::Logging::LogCategoryAttribute::New_ctor(::StringW  parentCategoryName, ::StringW  categoryName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogCategoryAttribute*>(parentCategoryName, categoryName));
}
inline ::Meta::Voice::Logging::LogCategoryAttribute* Meta::Voice::Logging::LogCategoryAttribute::New_ctor(::Meta::Voice::Logging::LogCategory  parentCategoryName, ::Meta::Voice::Logging::LogCategory  categoryName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogCategoryAttribute*>(parentCategoryName, categoryName));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogCategoryAttribute::LogCategoryAttribute()   {
}
