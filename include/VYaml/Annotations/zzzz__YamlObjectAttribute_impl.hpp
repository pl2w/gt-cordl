#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlObjectAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "VYaml/Annotations/zzzz__NamingConvention_impl.hpp"
#include "VYaml/Annotations/zzzz__YamlObjectAttribute_def.hpp"
#include "VYaml/Annotations/zzzz__NamingConvention_def.hpp"
//  Writing Method size for method: ::VYaml::Annotations::YamlObjectAttribute.get_NamingConvention
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Annotations::NamingConvention (::VYaml::Annotations::YamlObjectAttribute::*)()>(&::VYaml::Annotations::YamlObjectAttribute::get_NamingConvention)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb973098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectAttribute*>(),
                        {"get_NamingConvention", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Annotations::YamlObjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Annotations::YamlObjectAttribute::*)(::VYaml::Annotations::NamingConvention)>(&::VYaml::Annotations::YamlObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb9730a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Annotations::NamingConvention>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::VYaml::Annotations::NamingConvention& VYaml::Annotations::YamlObjectAttribute::__cordl_internal_get__NamingConvention_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NamingConvention_k__BackingField;
}
constexpr ::VYaml::Annotations::NamingConvention const& VYaml::Annotations::YamlObjectAttribute::__cordl_internal_get__NamingConvention_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NamingConvention_k__BackingField;
}
constexpr void VYaml::Annotations::YamlObjectAttribute::__cordl_internal_set__NamingConvention_k__BackingField(::VYaml::Annotations::NamingConvention  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NamingConvention_k__BackingField = value;
}
inline ::VYaml::Annotations::NamingConvention VYaml::Annotations::YamlObjectAttribute::get_NamingConvention()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectAttribute*>(),
                        {"get_NamingConvention", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Annotations::NamingConvention>(this, ___internal_method);
}
inline void VYaml::Annotations::YamlObjectAttribute::_ctor(::VYaml::Annotations::NamingConvention  namingConvention)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Annotations::NamingConvention>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, namingConvention);
}
inline ::VYaml::Annotations::YamlObjectAttribute* VYaml::Annotations::YamlObjectAttribute::New_ctor(::VYaml::Annotations::NamingConvention  namingConvention)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Annotations::YamlObjectAttribute*>(namingConvention));
}
// Ctor Parameters []
constexpr ::VYaml::Annotations::YamlObjectAttribute::YamlObjectAttribute()   {
}
