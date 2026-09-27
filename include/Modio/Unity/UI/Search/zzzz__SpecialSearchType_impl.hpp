#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/SpecialSearchType.hpp"
#include "Modio/Unity/UI/Search/zzzz__SpecialSearchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Unity::UI::Search::SpecialSearchType::SpecialSearchType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Search::SpecialSearchType::SpecialSearchType()   {
}
constexpr ::Modio::Unity::UI::Search::SpecialSearchType  Modio::Unity::UI::Search::SpecialSearchType::Nothing{static_cast<int32_t>(0x8)};
constexpr ::Modio::Unity::UI::Search::SpecialSearchType  Modio::Unity::UI::Search::SpecialSearchType::Installed{static_cast<int32_t>(0x5)};
constexpr ::Modio::Unity::UI::Search::SpecialSearchType  Modio::Unity::UI::Search::SpecialSearchType::Subscribed{static_cast<int32_t>(0x6)};
constexpr ::Modio::Unity::UI::Search::SpecialSearchType  Modio::Unity::UI::Search::SpecialSearchType::InstalledOrSubscribed{static_cast<int32_t>(0x7)};
constexpr ::Modio::Unity::UI::Search::SpecialSearchType  Modio::Unity::UI::Search::SpecialSearchType::UserCreations{static_cast<int32_t>(0x9)};
constexpr ::Modio::Unity::UI::Search::SpecialSearchType  Modio::Unity::UI::Search::SpecialSearchType::Purchased{static_cast<int32_t>(0xa)};
constexpr ::Modio::Unity::UI::Search::SpecialSearchType  Modio::Unity::UI::Search::SpecialSearchType::SearchForTag{static_cast<int32_t>(0xb)};
constexpr ::Modio::Unity::UI::Search::SpecialSearchType  Modio::Unity::UI::Search::SpecialSearchType::SearchForUser{static_cast<int32_t>(0xc)};
