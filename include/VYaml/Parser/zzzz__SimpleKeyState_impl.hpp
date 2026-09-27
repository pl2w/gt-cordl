#pragma once
// IWYU pragma private; include "VYaml/Parser/SimpleKeyState.hpp"
#include "VYaml/Parser/zzzz__Marker_impl.hpp"
#include "VYaml/Parser/zzzz__SimpleKeyState_def.hpp"
// Ctor Parameters [CppParam { name: "Possible", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Required", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Start", ty: "::VYaml::Parser::Marker", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::SimpleKeyState::SimpleKeyState(bool  Possible, bool  Required, int32_t  TokenNumber, ::VYaml::Parser::Marker  Start) noexcept  {
this->Possible = Possible;
this->Required = Required;
this->TokenNumber = TokenNumber;
this->Start = Start;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::SimpleKeyState::SimpleKeyState()   {
}
