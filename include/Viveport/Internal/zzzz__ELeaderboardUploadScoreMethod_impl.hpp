#pragma once
// IWYU pragma private; include "Viveport/Internal/ELeaderboardUploadScoreMethod.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardUploadScoreMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Internal::ELeaderboardUploadScoreMethod::ELeaderboardUploadScoreMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Viveport::Internal::ELeaderboardUploadScoreMethod::ELeaderboardUploadScoreMethod()   {
}
constexpr ::Viveport::Internal::ELeaderboardUploadScoreMethod  Viveport::Internal::ELeaderboardUploadScoreMethod::k_ELeaderboardUploadScoreMethodNone{static_cast<int32_t>(0x0)};
constexpr ::Viveport::Internal::ELeaderboardUploadScoreMethod  Viveport::Internal::ELeaderboardUploadScoreMethod::k_ELeaderboardUploadScoreMethodKeepBest{static_cast<int32_t>(0x1)};
constexpr ::Viveport::Internal::ELeaderboardUploadScoreMethod  Viveport::Internal::ELeaderboardUploadScoreMethod::k_ELeaderboardUploadScoreMethodForceUpdate{static_cast<int32_t>(0x2)};
