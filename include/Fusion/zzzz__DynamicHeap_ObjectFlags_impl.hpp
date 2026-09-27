#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_ObjectFlags.hpp"
#include "Fusion/zzzz__DynamicHeap_ObjectFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags::DynamicHeap_ObjectFlags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags::DynamicHeap_ObjectFlags()   {
}
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags  GlobalNamespace::DynamicHeap_ObjectFlags::Tracked{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags  GlobalNamespace::DynamicHeap_ObjectFlags::Root{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags  GlobalNamespace::DynamicHeap_ObjectFlags::Pointer{static_cast<uint8_t>(0x4u)};
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags  GlobalNamespace::DynamicHeap_ObjectFlags::Simple{static_cast<uint8_t>(0x8u)};
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags  GlobalNamespace::DynamicHeap_ObjectFlags::ForceAlive{static_cast<uint8_t>(0x10u)};
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags  GlobalNamespace::DynamicHeap_ObjectFlags::Garbage{static_cast<uint8_t>(0x20u)};
