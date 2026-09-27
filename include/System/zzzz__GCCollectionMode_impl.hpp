#pragma once
// IWYU pragma private; include "System/GCCollectionMode.hpp"
#include "System/zzzz__GCCollectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::GCCollectionMode::GCCollectionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::GCCollectionMode::GCCollectionMode()   {
}
constexpr ::System::GCCollectionMode  System::GCCollectionMode::Default{static_cast<int32_t>(0x0)};
constexpr ::System::GCCollectionMode  System::GCCollectionMode::Forced{static_cast<int32_t>(0x1)};
constexpr ::System::GCCollectionMode  System::GCCollectionMode::Optimized{static_cast<int32_t>(0x2)};
