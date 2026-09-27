#pragma once
// IWYU pragma private; include "VYaml/Parser/Token.hpp"
#include "VYaml/Parser/zzzz__TokenType_impl.hpp"
#include "VYaml/Parser/zzzz__Token_def.hpp"
#include "VYaml/Parser/zzzz__ITokenContent_def.hpp"
#include "VYaml/Parser/zzzz__TokenType_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::Token._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Token::*)(::VYaml::Parser::TokenType, ::VYaml::Parser::ITokenContent*)>(&::VYaml::Parser::Token::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb95be88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Token>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Parser::TokenType>(), ::i2c::type_of<::VYaml::Parser::ITokenContent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Token.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::Token::*)()>(&::VYaml::Parser::Token::ToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb95be98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::VYaml::Parser::Token>(),
                    {::i2c::class_of<::VYaml::Parser::Token>(), 3}
                ));
    return ___internal_method;
  }
};
inline void VYaml::Parser::Token::_ctor(::VYaml::Parser::TokenType  type, ::VYaml::Parser::ITokenContent*  content)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Token>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Parser::TokenType>(), ::i2c::type_of<::VYaml::Parser::ITokenContent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, content);
}
inline ::StringW VYaml::Parser::Token::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::VYaml::Parser::Token>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::VYaml::Parser::TokenType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Content", ty: "::VYaml::Parser::ITokenContent*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::Token::Token(::VYaml::Parser::TokenType  Type, ::VYaml::Parser::ITokenContent*  Content) noexcept  {
this->Type = Type;
this->Content = Content;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::Token::Token()   {
}
