#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneResults_FortuneCategory.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategoryType_impl.hpp"
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategory_def.hpp"
// Ctor Parameters [CppParam { name: "fortuneType", ty: "::GlobalNamespace::FortuneResults_FortuneCategoryType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "weightedChance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textResults", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FortuneResults_FortuneCategory::FortuneResults_FortuneCategory(::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType, float_t  weightedChance, ::ArrayW<::StringW>  textResults) noexcept  {
this->fortuneType = fortuneType;
this->weightedChance = weightedChance;
this->textResults = textResults;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FortuneResults_FortuneCategory::FortuneResults_FortuneCategory()   {
}
