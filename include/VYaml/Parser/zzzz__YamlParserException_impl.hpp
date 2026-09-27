#pragma once
// IWYU pragma private; include "VYaml/Parser/YamlParserException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "VYaml/Parser/zzzz__YamlParserException_def.hpp"
#include "VYaml/Parser/zzzz__Marker_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::YamlParserException.Throw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::VYaml::Parser::Marker>, ::StringW)>(&::VYaml::Parser::YamlParserException::Throw)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb963e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParserException*>(),
                        {"Throw", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Marker>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParserException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParserException::*)(::by_ref<::VYaml::Parser::Marker>, ::StringW)>(&::VYaml::Parser::YamlParserException::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb963e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParserException*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Marker>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Parser::YamlParserException::Throw(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParserException*>(),
                        {"Throw", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Marker>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, message);
}
inline void VYaml::Parser::YamlParserException::_ctor(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParserException*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Marker>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, marker, message);
}
inline ::VYaml::Parser::YamlParserException* VYaml::Parser::YamlParserException::New_ctor(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Parser::YamlParserException*>(marker, message));
}
// Ctor Parameters []
constexpr ::VYaml::Parser::YamlParserException::YamlParserException()   {
}
