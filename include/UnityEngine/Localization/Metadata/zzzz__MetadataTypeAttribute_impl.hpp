#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/MetadataTypeAttribute.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataType_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataTypeAttribute_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataTypeAttribute.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::MetadataType (::UnityEngine::Localization::Metadata::MetadataTypeAttribute::*)()>(&::UnityEngine::Localization::Metadata::MetadataTypeAttribute::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataTypeAttribute*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataTypeAttribute.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::MetadataTypeAttribute::*)(::UnityEngine::Localization::Metadata::MetadataType)>(&::UnityEngine::Localization::Metadata::MetadataTypeAttribute::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataTypeAttribute*>(),
                        {"set_Type", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataTypeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::MetadataTypeAttribute::*)(::UnityEngine::Localization::Metadata::MetadataType)>(&::UnityEngine::Localization::Metadata::MetadataTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb04f5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::Metadata::MetadataType& UnityEngine::Localization::Metadata::MetadataTypeAttribute::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataType const& UnityEngine::Localization::Metadata::MetadataTypeAttribute::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void UnityEngine::Localization::Metadata::MetadataTypeAttribute::__cordl_internal_set__Type_k__BackingField(::UnityEngine::Localization::Metadata::MetadataType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
inline ::UnityEngine::Localization::Metadata::MetadataType UnityEngine::Localization::Metadata::MetadataTypeAttribute::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataTypeAttribute*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::MetadataType>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::MetadataTypeAttribute::set_Type(::UnityEngine::Localization::Metadata::MetadataType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataTypeAttribute*>(),
                        {"set_Type", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Metadata::MetadataTypeAttribute::_ctor(::UnityEngine::Localization::Metadata::MetadataType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::MetadataType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::UnityEngine::Localization::Metadata::MetadataTypeAttribute* UnityEngine::Localization::Metadata::MetadataTypeAttribute::New_ctor(::UnityEngine::Localization::Metadata::MetadataType  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::MetadataTypeAttribute*>(type));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::MetadataTypeAttribute::MetadataTypeAttribute()   {
}
