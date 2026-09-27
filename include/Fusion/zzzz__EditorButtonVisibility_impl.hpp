#pragma once
// IWYU pragma private; include "Fusion/EditorButtonVisibility.hpp"
#include "Fusion/zzzz__EditorButtonVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::EditorButtonVisibility::EditorButtonVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::EditorButtonVisibility::EditorButtonVisibility()   {
}
constexpr ::Fusion::EditorButtonVisibility  Fusion::EditorButtonVisibility::PlayMode{static_cast<int32_t>(0x0)};
constexpr ::Fusion::EditorButtonVisibility  Fusion::EditorButtonVisibility::EditMode{static_cast<int32_t>(0x1)};
constexpr ::Fusion::EditorButtonVisibility  Fusion::EditorButtonVisibility::Always{static_cast<int32_t>(0x2)};
