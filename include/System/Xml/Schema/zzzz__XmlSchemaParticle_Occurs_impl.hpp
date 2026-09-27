#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaParticle_Occurs.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_Occurs_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlSchemaParticle_Occurs::XmlSchemaParticle_Occurs(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlSchemaParticle_Occurs::XmlSchemaParticle_Occurs()   {
}
constexpr ::GlobalNamespace::XmlSchemaParticle_Occurs  GlobalNamespace::XmlSchemaParticle_Occurs::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlSchemaParticle_Occurs  GlobalNamespace::XmlSchemaParticle_Occurs::Min{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlSchemaParticle_Occurs  GlobalNamespace::XmlSchemaParticle_Occurs::Max{static_cast<int32_t>(0x2)};
