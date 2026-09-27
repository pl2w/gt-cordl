#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlIgnoreAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "VYaml/Annotations/zzzz__YamlIgnoreAttribute_def.hpp"
//  Writing Method size for method: ::VYaml::Annotations::YamlIgnoreAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Annotations::YamlIgnoreAttribute::*)()>(&::VYaml::Annotations::YamlIgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb973110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlIgnoreAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Annotations::YamlIgnoreAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlIgnoreAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Annotations::YamlIgnoreAttribute* VYaml::Annotations::YamlIgnoreAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Annotations::YamlIgnoreAttribute*>());
}
// Ctor Parameters []
constexpr ::VYaml::Annotations::YamlIgnoreAttribute::YamlIgnoreAttribute()   {
}
