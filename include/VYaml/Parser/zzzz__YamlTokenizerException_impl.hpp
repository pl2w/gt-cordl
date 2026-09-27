#pragma once
// IWYU pragma private; include "VYaml/Parser/YamlTokenizerException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "VYaml/Parser/zzzz__YamlTokenizerException_def.hpp"
#include "VYaml/Parser/zzzz__Marker_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::YamlTokenizerException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlTokenizerException::*)(::by_ref<::VYaml::Parser::Marker>, ::StringW)>(&::VYaml::Parser::YamlTokenizerException::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb95bf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlTokenizerException*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Marker>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Parser::YamlTokenizerException::_ctor(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlTokenizerException*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Marker>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, marker, message);
}
/// @brief [NullableContext(1)]
inline ::VYaml::Parser::YamlTokenizerException* VYaml::Parser::YamlTokenizerException::New_ctor(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Parser::YamlTokenizerException*>(marker, message));
}
// Ctor Parameters []
constexpr ::VYaml::Parser::YamlTokenizerException::YamlTokenizerException()   {
}
