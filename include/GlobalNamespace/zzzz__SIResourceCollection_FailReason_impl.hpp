#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollection_FailReason.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_FailReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIResourceCollection_FailReason::SIResourceCollection_FailReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceCollection_FailReason::SIResourceCollection_FailReason()   {
}
constexpr ::GlobalNamespace::SIResourceCollection_FailReason  GlobalNamespace::SIResourceCollection_FailReason::NotEnoughRocks{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIResourceCollection_FailReason  GlobalNamespace::SIResourceCollection_FailReason::ResourcesFull{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIResourceCollection_FailReason  GlobalNamespace::SIResourceCollection_FailReason::Unknown{static_cast<int32_t>(0x2)};
