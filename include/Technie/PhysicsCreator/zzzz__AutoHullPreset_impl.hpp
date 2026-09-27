#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/AutoHullPreset.hpp"
#include "Technie/PhysicsCreator/zzzz__AutoHullPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::AutoHullPreset::AutoHullPreset(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::AutoHullPreset::AutoHullPreset()   {
}
constexpr ::Technie::PhysicsCreator::AutoHullPreset  Technie::PhysicsCreator::AutoHullPreset::Low{static_cast<int32_t>(0x0)};
constexpr ::Technie::PhysicsCreator::AutoHullPreset  Technie::PhysicsCreator::AutoHullPreset::Medium{static_cast<int32_t>(0x1)};
constexpr ::Technie::PhysicsCreator::AutoHullPreset  Technie::PhysicsCreator::AutoHullPreset::High{static_cast<int32_t>(0x2)};
constexpr ::Technie::PhysicsCreator::AutoHullPreset  Technie::PhysicsCreator::AutoHullPreset::Placebo{static_cast<int32_t>(0x3)};
constexpr ::Technie::PhysicsCreator::AutoHullPreset  Technie::PhysicsCreator::AutoHullPreset::Custom{static_cast<int32_t>(0x4)};
