#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_MOnlineError.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_impl.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_impl.hpp"
#include "GlobalNamespace/zzzz__Bindings_MOnlineError_def.hpp"
// Ctor Parameters [CppParam { name: "Name", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Message", ty: "::Unity::Collections::FixedString512Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ErrorCode", ty: "::Unity::Collections::FixedString64Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HttpCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Bindings_MOnlineError::Bindings_MOnlineError(::Unity::Collections::FixedString512Bytes  Name, ::Unity::Collections::FixedString512Bytes  Message, ::Unity::Collections::FixedString64Bytes  ErrorCode, int32_t  HttpCode) noexcept  {
this->Name = Name;
this->Message = Message;
this->ErrorCode = ErrorCode;
this->HttpCode = HttpCode;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_MOnlineError::Bindings_MOnlineError()   {
}
