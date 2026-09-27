#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableNetworking_SharedTableEventTypes.hpp"
#include "GorillaTagScripts/zzzz__BuilderTableNetworking_SharedTableEventTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes::BuilderTableNetworking_SharedTableEventTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes::BuilderTableNetworking_SharedTableEventTypes()   {
}
constexpr ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes  GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes::LOAD_STARTED{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes  GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes::LOAD_FAILED{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes  GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes::OUT_OF_BOUNDS{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes  GlobalNamespace::BuilderTableNetworking_SharedTableEventTypes::COUNT{static_cast<int32_t>(0x3)};
