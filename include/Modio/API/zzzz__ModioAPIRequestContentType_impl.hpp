#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIRequestContentType.hpp"
#include "Modio/API/zzzz__ModioAPIRequestContentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::ModioAPIRequestContentType::ModioAPIRequestContentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::API::ModioAPIRequestContentType::ModioAPIRequestContentType()   {
}
constexpr ::Modio::API::ModioAPIRequestContentType  Modio::API::ModioAPIRequestContentType::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::API::ModioAPIRequestContentType  Modio::API::ModioAPIRequestContentType::Multipart{static_cast<int32_t>(0x1)};
constexpr ::Modio::API::ModioAPIRequestContentType  Modio::API::ModioAPIRequestContentType::Stream{static_cast<int32_t>(0x2)};
constexpr ::Modio::API::ModioAPIRequestContentType  Modio::API::ModioAPIRequestContentType::String{static_cast<int32_t>(0x3)};
constexpr ::Modio::API::ModioAPIRequestContentType  Modio::API::ModioAPIRequestContentType::FormUrlEncoded{static_cast<int32_t>(0x4)};
constexpr ::Modio::API::ModioAPIRequestContentType  Modio::API::ModioAPIRequestContentType::ByteArray{static_cast<int32_t>(0x5)};
constexpr ::Modio::API::ModioAPIRequestContentType  Modio::API::ModioAPIRequestContentType::MultipartFormData{static_cast<int32_t>(0x6)};
