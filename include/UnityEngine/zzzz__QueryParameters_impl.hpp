#pragma once
// IWYU pragma private; include "UnityEngine/QueryParameters.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
// Ctor Parameters [CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitMultipleFaces", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitTriggers", ty: "::UnityEngine::QueryTriggerInteraction", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitBackfaces", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::QueryParameters::QueryParameters(int32_t  layerMask, bool  hitMultipleFaces, ::UnityEngine::QueryTriggerInteraction  hitTriggers, bool  hitBackfaces) noexcept  {
this->layerMask = layerMask;
this->hitMultipleFaces = hitMultipleFaces;
this->hitTriggers = hitTriggers;
this->hitBackfaces = hitBackfaces;
}
// Ctor Parameters []
constexpr ::UnityEngine::QueryParameters::QueryParameters()   {
}
