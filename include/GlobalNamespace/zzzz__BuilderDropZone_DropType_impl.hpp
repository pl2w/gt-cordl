#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderDropZone_DropType.hpp"
#include "GlobalNamespace/zzzz__BuilderDropZone_DropType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderDropZone_DropType::BuilderDropZone_DropType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderDropZone_DropType::BuilderDropZone_DropType()   {
}
constexpr ::GlobalNamespace::BuilderDropZone_DropType  GlobalNamespace::BuilderDropZone_DropType::Invalid{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::BuilderDropZone_DropType  GlobalNamespace::BuilderDropZone_DropType::Repel{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderDropZone_DropType  GlobalNamespace::BuilderDropZone_DropType::ReturnToShelf{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderDropZone_DropType  GlobalNamespace::BuilderDropZone_DropType::BreakApart{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderDropZone_DropType  GlobalNamespace::BuilderDropZone_DropType::Recycle{static_cast<int32_t>(0x3)};
