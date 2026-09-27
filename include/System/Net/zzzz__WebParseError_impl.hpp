#pragma once
// IWYU pragma private; include "System/Net/WebParseError.hpp"
#include "System/Net/zzzz__WebParseErrorCode_impl.hpp"
#include "System/Net/zzzz__WebParseErrorSection_impl.hpp"
#include "System/Net/zzzz__WebParseError_def.hpp"
// Ctor Parameters [CppParam { name: "Section", ty: "::System::Net::WebParseErrorSection", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Code", ty: "::System::Net::WebParseErrorCode", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::WebParseError::WebParseError(::System::Net::WebParseErrorSection  Section, ::System::Net::WebParseErrorCode  Code) noexcept  {
this->Section = Section;
this->Code = Code;
}
// Ctor Parameters []
constexpr ::System::Net::WebParseError::WebParseError()   {
}
