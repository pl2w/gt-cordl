#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BlittableArrayWrapper_UpdateFlags.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_UpdateFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags::BlittableArrayWrapper_UpdateFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags::BlittableArrayWrapper_UpdateFlags()   {
}
constexpr ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  GlobalNamespace::BlittableArrayWrapper_UpdateFlags::NoUpdateNeeded{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  GlobalNamespace::BlittableArrayWrapper_UpdateFlags::SizeChanged{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  GlobalNamespace::BlittableArrayWrapper_UpdateFlags::DataIsNativePointer{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  GlobalNamespace::BlittableArrayWrapper_UpdateFlags::DataIsNativeOwnedMemory{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  GlobalNamespace::BlittableArrayWrapper_UpdateFlags::DataIsEmpty{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  GlobalNamespace::BlittableArrayWrapper_UpdateFlags::DataIsNull{static_cast<int32_t>(0x5)};
