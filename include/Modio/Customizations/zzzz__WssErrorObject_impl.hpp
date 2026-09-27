#pragma once
// IWYU pragma private; include "Modio/Customizations/WssErrorObject.hpp"
#include "Modio/Customizations/zzzz__WssError_impl.hpp"
#include "Modio/Customizations/zzzz__WssErrorObject_def.hpp"
// Ctor Parameters [CppParam { name: "error", ty: "::Modio::Customizations::WssError", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "operation", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Customizations::WssErrorObject::WssErrorObject(::Modio::Customizations::WssError  error, ::StringW  operation) noexcept  {
this->error = error;
this->operation = operation;
}
// Ctor Parameters []
constexpr ::Modio::Customizations::WssErrorObject::WssErrorObject()   {
}
