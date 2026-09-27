#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/PropertyType.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__PropertyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::Rigging::PropertyType::PropertyType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::PropertyType::PropertyType()   {
}
constexpr ::UnityEngine::Animations::Rigging::PropertyType  UnityEngine::Animations::Rigging::PropertyType::Bool{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Animations::Rigging::PropertyType  UnityEngine::Animations::Rigging::PropertyType::Int{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Animations::Rigging::PropertyType  UnityEngine::Animations::Rigging::PropertyType::Float{static_cast<uint8_t>(0x2u)};
