#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipOption.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::ZipOption::ZipOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipOption::ZipOption()   {
}
constexpr ::Pathfinding::Ionic::Zip::ZipOption  Pathfinding::Ionic::Zip::ZipOption::Default{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::ZipOption  Pathfinding::Ionic::Zip::ZipOption::Never{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::ZipOption  Pathfinding::Ionic::Zip::ZipOption::AsNecessary{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zip::ZipOption  Pathfinding::Ionic::Zip::ZipOption::Always{static_cast<int32_t>(0x2)};
