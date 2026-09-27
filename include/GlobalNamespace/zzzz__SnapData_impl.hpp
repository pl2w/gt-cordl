#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapData.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_impl.hpp"
#include "GlobalNamespace/zzzz__SnapData_def.hpp"
// Ctor Parameters [CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "snapBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SnapData::SnapData(int32_t  attachIndex, ::GlobalNamespace::SnapBounds  snapBounds) noexcept  {
this->attachIndex = attachIndex;
this->snapBounds = snapBounds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnapData::SnapData()   {
}
