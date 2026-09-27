#pragma once
// IWYU pragma private; include "System/Data/Common/ObjectStorage_Families.hpp"
#include "System/Data/Common/zzzz__ObjectStorage_Families_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ObjectStorage_Families::ObjectStorage_Families(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectStorage_Families::ObjectStorage_Families()   {
}
constexpr ::GlobalNamespace::ObjectStorage_Families  GlobalNamespace::ObjectStorage_Families::DATETIME{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ObjectStorage_Families  GlobalNamespace::ObjectStorage_Families::NUMBER{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ObjectStorage_Families  GlobalNamespace::ObjectStorage_Families::STRING{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ObjectStorage_Families  GlobalNamespace::ObjectStorage_Families::BOOLEAN{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ObjectStorage_Families  GlobalNamespace::ObjectStorage_Families::ARRAY{static_cast<int32_t>(0x4)};
