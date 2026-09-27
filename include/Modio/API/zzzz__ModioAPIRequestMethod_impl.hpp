#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIRequestMethod.hpp"
#include "Modio/API/zzzz__ModioAPIRequestMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::ModioAPIRequestMethod::ModioAPIRequestMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::API::ModioAPIRequestMethod::ModioAPIRequestMethod()   {
}
constexpr ::Modio::API::ModioAPIRequestMethod  Modio::API::ModioAPIRequestMethod::Get{static_cast<int32_t>(0x0)};
constexpr ::Modio::API::ModioAPIRequestMethod  Modio::API::ModioAPIRequestMethod::Delete{static_cast<int32_t>(0x1)};
constexpr ::Modio::API::ModioAPIRequestMethod  Modio::API::ModioAPIRequestMethod::Post{static_cast<int32_t>(0x2)};
constexpr ::Modio::API::ModioAPIRequestMethod  Modio::API::ModioAPIRequestMethod::Put{static_cast<int32_t>(0x3)};
constexpr ::Modio::API::ModioAPIRequestMethod  Modio::API::ModioAPIRequestMethod::Head{static_cast<int32_t>(0x4)};
constexpr ::Modio::API::ModioAPIRequestMethod  Modio::API::ModioAPIRequestMethod::Options{static_cast<int32_t>(0x5)};
constexpr ::Modio::API::ModioAPIRequestMethod  Modio::API::ModioAPIRequestMethod::Trace{static_cast<int32_t>(0x6)};
