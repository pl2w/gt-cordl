#pragma once
// IWYU pragma private; include "Modio/API/Filtering.hpp"
#include "Modio/API/zzzz__Filtering_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::Filtering::Filtering(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::API::Filtering::Filtering()   {
}
constexpr ::Modio::API::Filtering  Modio::API::Filtering::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::API::Filtering  Modio::API::Filtering::Like{static_cast<int32_t>(0x1)};
constexpr ::Modio::API::Filtering  Modio::API::Filtering::Not{static_cast<int32_t>(0x2)};
constexpr ::Modio::API::Filtering  Modio::API::Filtering::NotLike{static_cast<int32_t>(0x3)};
constexpr ::Modio::API::Filtering  Modio::API::Filtering::In{static_cast<int32_t>(0x4)};
constexpr ::Modio::API::Filtering  Modio::API::Filtering::NotIn{static_cast<int32_t>(0x5)};
constexpr ::Modio::API::Filtering  Modio::API::Filtering::Max{static_cast<int32_t>(0x6)};
constexpr ::Modio::API::Filtering  Modio::API::Filtering::Min{static_cast<int32_t>(0x7)};
constexpr ::Modio::API::Filtering  Modio::API::Filtering::BitwiseAnd{static_cast<int32_t>(0x8)};
