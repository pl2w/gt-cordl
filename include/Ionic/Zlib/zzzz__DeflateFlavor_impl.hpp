#pragma once
// IWYU pragma private; include "Ionic/Zlib/DeflateFlavor.hpp"
#include "Ionic/Zlib/zzzz__DeflateFlavor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Ionic::Zlib::DeflateFlavor::DeflateFlavor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::DeflateFlavor::DeflateFlavor()   {
}
constexpr ::Ionic::Zlib::DeflateFlavor  Ionic::Zlib::DeflateFlavor::Store{static_cast<int32_t>(0x0)};
constexpr ::Ionic::Zlib::DeflateFlavor  Ionic::Zlib::DeflateFlavor::Fast{static_cast<int32_t>(0x1)};
constexpr ::Ionic::Zlib::DeflateFlavor  Ionic::Zlib::DeflateFlavor::Slow{static_cast<int32_t>(0x2)};
