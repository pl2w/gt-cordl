#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_ProgressionLevels.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ProgressionLevels_def.hpp"
// Ctor Parameters [CppParam { name: "tierId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tierName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "grades", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pointsPerGrade", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRPlayer_ProgressionLevels::GRPlayer_ProgressionLevels(int32_t  tierId, ::StringW  tierName, int32_t  grades, int32_t  pointsPerGrade) noexcept  {
this->tierId = tierId;
this->tierName = tierName;
this->grades = grades;
this->pointsPerGrade = pointsPerGrade;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayer_ProgressionLevels::GRPlayer_ProgressionLevels()   {
}
