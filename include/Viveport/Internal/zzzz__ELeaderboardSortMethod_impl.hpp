#pragma once
// IWYU pragma private; include "Viveport/Internal/ELeaderboardSortMethod.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardSortMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Internal::ELeaderboardSortMethod::ELeaderboardSortMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Viveport::Internal::ELeaderboardSortMethod::ELeaderboardSortMethod()   {
}
constexpr ::Viveport::Internal::ELeaderboardSortMethod  Viveport::Internal::ELeaderboardSortMethod::k_ELeaderboardSortMethodNone{static_cast<int32_t>(0x0)};
constexpr ::Viveport::Internal::ELeaderboardSortMethod  Viveport::Internal::ELeaderboardSortMethod::k_ELeaderboardSortMethodAscending{static_cast<int32_t>(0x1)};
constexpr ::Viveport::Internal::ELeaderboardSortMethod  Viveport::Internal::ELeaderboardSortMethod::k_ELeaderboardSortMethodDescending{static_cast<int32_t>(0x2)};
