#pragma once
// IWYU pragma private; include "Modio/Customizations/WssError.hpp"
#include "Modio/Customizations/zzzz__WssError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "code", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "error_ref", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "errors", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Customizations::WssError::WssError(int64_t  code, int64_t  error_ref, ::StringW  message, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  errors) noexcept  {
this->code = code;
this->error_ref = error_ref;
this->message = message;
this->errors = errors;
}
// Ctor Parameters []
constexpr ::Modio::Customizations::WssError::WssError()   {
}
