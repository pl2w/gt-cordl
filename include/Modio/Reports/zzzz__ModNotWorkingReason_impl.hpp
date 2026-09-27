#pragma once
// IWYU pragma private; include "Modio/Reports/ModNotWorkingReason.hpp"
#include "Modio/Reports/zzzz__ModNotWorkingReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Reports::ModNotWorkingReason::ModNotWorkingReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Reports::ModNotWorkingReason::ModNotWorkingReason()   {
}
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::None{static_cast<int32_t>(0x0)};
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::CrashesGame{static_cast<int32_t>(0x1)};
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::DoesNotLoad{static_cast<int32_t>(0x2)};
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::ConflictsWithOtherMods{static_cast<int32_t>(0x3)};
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::MissingDependencies{static_cast<int32_t>(0x4)};
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::InstallationIssues{static_cast<int32_t>(0x5)};
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::BuggyBehaviour{static_cast<int32_t>(0x6)};
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::IncompatibleWithGameVersion{static_cast<int32_t>(0x7)};
constexpr ::Modio::Reports::ModNotWorkingReason  Modio::Reports::ModNotWorkingReason::FileCorruption{static_cast<int32_t>(0x8)};
