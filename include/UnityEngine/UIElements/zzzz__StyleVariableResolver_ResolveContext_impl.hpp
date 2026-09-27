#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableResolver_ResolveContext.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleVariableResolver_ResolveContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StyleVariableResolver_ResolveContext::StyleVariableResolver_ResolveContext(::UnityW<::UnityEngine::UIElements::StyleSheet>  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles) noexcept  {
this->sheet = sheet;
this->handles = handles;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StyleVariableResolver_ResolveContext::StyleVariableResolver_ResolveContext()   {
}
