#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneInfoChangeSource.hpp"
#include "Fusion/zzzz__NetworkSceneInfoChangeSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkSceneInfoChangeSource::NetworkSceneInfoChangeSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneInfoChangeSource::NetworkSceneInfoChangeSource()   {
}
constexpr ::Fusion::NetworkSceneInfoChangeSource  Fusion::NetworkSceneInfoChangeSource::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::NetworkSceneInfoChangeSource  Fusion::NetworkSceneInfoChangeSource::Initial{static_cast<int32_t>(0x1)};
constexpr ::Fusion::NetworkSceneInfoChangeSource  Fusion::NetworkSceneInfoChangeSource::Remote{static_cast<int32_t>(0x2)};
