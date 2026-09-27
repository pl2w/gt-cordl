#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneInfoDefaultFlags.hpp"
#include "Fusion/zzzz__NetworkSceneInfoDefaultFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkSceneInfoDefaultFlags::NetworkSceneInfoDefaultFlags(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkSceneInfoDefaultFlags::NetworkSceneInfoDefaultFlags()   {
}
constexpr ::Fusion::NetworkSceneInfoDefaultFlags  Fusion::NetworkSceneInfoDefaultFlags::SceneCountMask{static_cast<uint32_t>(0xfu)};
constexpr ::Fusion::NetworkSceneInfoDefaultFlags  Fusion::NetworkSceneInfoDefaultFlags::ConterMask{static_cast<uint32_t>(0xffff0u)};
