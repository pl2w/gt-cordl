#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceColor.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceColor_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::BuilderResourceType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderResourceColor::BuilderResourceColor(::GlobalNamespace::BuilderResourceType  type, ::UnityEngine::Color  color) noexcept  {
this->type = type;
this->color = color;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderResourceColor::BuilderResourceColor()   {
}
