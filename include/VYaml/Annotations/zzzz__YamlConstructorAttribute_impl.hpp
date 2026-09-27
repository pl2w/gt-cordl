#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlConstructorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "VYaml/Annotations/zzzz__YamlConstructorAttribute_def.hpp"
//  Writing Method size for method: ::VYaml::Annotations::YamlConstructorAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Annotations::YamlConstructorAttribute::*)()>(&::VYaml::Annotations::YamlConstructorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb973118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlConstructorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Annotations::YamlConstructorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlConstructorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Annotations::YamlConstructorAttribute* VYaml::Annotations::YamlConstructorAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Annotations::YamlConstructorAttribute*>());
}
// Ctor Parameters []
constexpr ::VYaml::Annotations::YamlConstructorAttribute::YamlConstructorAttribute()   {
}
