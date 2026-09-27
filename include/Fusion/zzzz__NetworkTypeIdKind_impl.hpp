#pragma once
// IWYU pragma private; include "Fusion/NetworkTypeIdKind.hpp"
#include "Fusion/zzzz__NetworkTypeIdKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkTypeIdKind::NetworkTypeIdKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkTypeIdKind::NetworkTypeIdKind()   {
}
constexpr ::Fusion::NetworkTypeIdKind  Fusion::NetworkTypeIdKind::Prefab{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkTypeIdKind  Fusion::NetworkTypeIdKind::Custom{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkTypeIdKind  Fusion::NetworkTypeIdKind::InternalStruct{static_cast<int32_t>(0x2)};
constexpr ::Fusion::NetworkTypeIdKind  Fusion::NetworkTypeIdKind::SceneObject{static_cast<int32_t>(0x3)};
constexpr ::Fusion::NetworkTypeIdKind  Fusion::NetworkTypeIdKind::Invalid{static_cast<int32_t>(0x4)};
