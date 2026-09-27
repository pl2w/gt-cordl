#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaDeclBase_Use.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_Use_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SchemaDeclBase_Use::SchemaDeclBase_Use(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SchemaDeclBase_Use::SchemaDeclBase_Use()   {
}
constexpr ::GlobalNamespace::SchemaDeclBase_Use  GlobalNamespace::SchemaDeclBase_Use::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SchemaDeclBase_Use  GlobalNamespace::SchemaDeclBase_Use::Required{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SchemaDeclBase_Use  GlobalNamespace::SchemaDeclBase_Use::Implied{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SchemaDeclBase_Use  GlobalNamespace::SchemaDeclBase_Use::Fixed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SchemaDeclBase_Use  GlobalNamespace::SchemaDeclBase_Use::RequiredFixed{static_cast<int32_t>(0x4)};
