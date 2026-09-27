#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InlineStyleAccess_InlineRule.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_InlineRule_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rule", ty: "::UnityEngine::UIElements::StyleRule*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "propertyIds", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InlineStyleAccess_InlineRule::InlineStyleAccess_InlineRule(::UnityW<::UnityEngine::UIElements::StyleSheet>  sheet, ::UnityEngine::UIElements::StyleRule*  rule, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>  propertyIds) noexcept  {
this->sheet = sheet;
this->rule = rule;
this->propertyIds = propertyIds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InlineStyleAccess_InlineRule::InlineStyleAccess_InlineRule()   {
}
