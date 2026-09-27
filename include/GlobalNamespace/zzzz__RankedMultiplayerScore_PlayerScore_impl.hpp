#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore_PlayerScore.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_PlayerScore_def.hpp"
// Ctor Parameters [CppParam { name: "PlayerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameScore", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EloScore", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NumTags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TimeUntagged", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PointsOnDefense", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RankedMultiplayerScore_PlayerScore::RankedMultiplayerScore_PlayerScore(int32_t  PlayerId, float_t  GameScore, float_t  EloScore, int32_t  NumTags, float_t  TimeUntagged, float_t  PointsOnDefense) noexcept  {
this->PlayerId = PlayerId;
this->GameScore = GameScore;
this->EloScore = EloScore;
this->NumTags = NumTags;
this->TimeUntagged = TimeUntagged;
this->PointsOnDefense = PointsOnDefense;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedMultiplayerScore_PlayerScore::RankedMultiplayerScore_PlayerScore()   {
}
