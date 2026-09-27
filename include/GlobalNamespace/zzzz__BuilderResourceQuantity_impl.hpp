#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderResourceQuantity.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceType_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderResourceQuantity_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::BuilderResourceType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderResourceQuantity::BuilderResourceQuantity(::GlobalNamespace::BuilderResourceType  type, int32_t  count) noexcept  {
this->type = type;
this->count = count;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderResourceQuantity::BuilderResourceQuantity()   {
}
