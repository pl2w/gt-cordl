#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceType.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderResourceType::BuilderResourceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderResourceType::BuilderResourceType()   {
}
constexpr ::GlobalNamespace::BuilderResourceType  GlobalNamespace::BuilderResourceType::Basic{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderResourceType  GlobalNamespace::BuilderResourceType::Decorative{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderResourceType  GlobalNamespace::BuilderResourceType::Functional{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderResourceType  GlobalNamespace::BuilderResourceType::Count{static_cast<int32_t>(0x3)};
