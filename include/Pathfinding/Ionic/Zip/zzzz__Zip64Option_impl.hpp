#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/Zip64Option.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::Zip64Option::Zip64Option(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::Zip64Option::Zip64Option()   {
}
constexpr ::Pathfinding::Ionic::Zip::Zip64Option  Pathfinding::Ionic::Zip::Zip64Option::Default{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::Zip64Option  Pathfinding::Ionic::Zip::Zip64Option::Never{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::Zip64Option  Pathfinding::Ionic::Zip::Zip64Option::AsNecessary{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zip::Zip64Option  Pathfinding::Ionic::Zip::Zip64Option::Always{static_cast<int32_t>(0x2)};
