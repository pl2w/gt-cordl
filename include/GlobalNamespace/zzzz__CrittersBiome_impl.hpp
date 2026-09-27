#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersBiome.hpp"
#include "GlobalNamespace/zzzz__CrittersBiome_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CrittersBiome::CrittersBiome(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersBiome::CrittersBiome()   {
}
constexpr ::GlobalNamespace::CrittersBiome  GlobalNamespace::CrittersBiome::Forest{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CrittersBiome  GlobalNamespace::CrittersBiome::Mountain{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CrittersBiome  GlobalNamespace::CrittersBiome::Desert{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CrittersBiome  GlobalNamespace::CrittersBiome::Grassland{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::CrittersBiome  GlobalNamespace::CrittersBiome::Cave{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::CrittersBiome  GlobalNamespace::CrittersBiome::IntroArea{static_cast<int32_t>(0x40000000)};
constexpr ::GlobalNamespace::CrittersBiome  GlobalNamespace::CrittersBiome::Any{static_cast<int32_t>(0xffffffff)};
