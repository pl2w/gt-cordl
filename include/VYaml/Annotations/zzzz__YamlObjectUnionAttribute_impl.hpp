#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlObjectUnionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "VYaml/Annotations/zzzz__YamlObjectUnionAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::VYaml::Annotations::YamlObjectUnionAttribute.get_Tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Annotations::YamlObjectUnionAttribute::*)()>(&::VYaml::Annotations::YamlObjectUnionAttribute::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb973120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectUnionAttribute*>(),
                        {"get_Tag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Annotations::YamlObjectUnionAttribute.get_SubType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::VYaml::Annotations::YamlObjectUnionAttribute::*)()>(&::VYaml::Annotations::YamlObjectUnionAttribute::get_SubType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb973128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectUnionAttribute*>(),
                        {"get_SubType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Annotations::YamlObjectUnionAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Annotations::YamlObjectUnionAttribute::*)(::StringW, ::System::Type*)>(&::VYaml::Annotations::YamlObjectUnionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb973130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectUnionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VYaml::Annotations::YamlObjectUnionAttribute::__cordl_internal_get__Tag_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tag_k__BackingField;
}
constexpr ::StringW const& VYaml::Annotations::YamlObjectUnionAttribute::__cordl_internal_get__Tag_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tag_k__BackingField;
}
constexpr void VYaml::Annotations::YamlObjectUnionAttribute::__cordl_internal_set__Tag_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Tag_k__BackingField = value;
}
constexpr ::System::Type*& VYaml::Annotations::YamlObjectUnionAttribute::__cordl_internal_get__SubType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SubType_k__BackingField;
}
constexpr ::System::Type* const& VYaml::Annotations::YamlObjectUnionAttribute::__cordl_internal_get__SubType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SubType_k__BackingField;
}
constexpr void VYaml::Annotations::YamlObjectUnionAttribute::__cordl_internal_set__SubType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SubType_k__BackingField = value;
}
inline ::StringW VYaml::Annotations::YamlObjectUnionAttribute::get_Tag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectUnionAttribute*>(),
                        {"get_Tag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* VYaml::Annotations::YamlObjectUnionAttribute::get_SubType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectUnionAttribute*>(),
                        {"get_SubType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void VYaml::Annotations::YamlObjectUnionAttribute::_ctor(::StringW  tagString, ::System::Type*  subType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectUnionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagString, subType);
}
inline ::VYaml::Annotations::YamlObjectUnionAttribute* VYaml::Annotations::YamlObjectUnionAttribute::New_ctor(::StringW  tagString, ::System::Type*  subType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Annotations::YamlObjectUnionAttribute*>(tagString, subType));
}
// Ctor Parameters []
constexpr ::VYaml::Annotations::YamlObjectUnionAttribute::YamlObjectUnionAttribute()   {
}
