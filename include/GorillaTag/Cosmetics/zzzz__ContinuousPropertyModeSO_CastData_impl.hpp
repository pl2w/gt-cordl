#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyModeSO_CastData.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_Cast_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_DataFlags_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyModeSO_CastData_def.hpp"
// Ctor Parameters [CppParam { name: "target", ty: "::GlobalNamespace::ContinuousProperty_Cast", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "additionalFlags", ty: "::GlobalNamespace::ContinuousProperty_DataFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "whatItSets", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContinuousPropertyModeSO_CastData::ContinuousPropertyModeSO_CastData(::GlobalNamespace::ContinuousProperty_Cast  target, ::GlobalNamespace::ContinuousProperty_DataFlags  additionalFlags, ::StringW  whatItSets) noexcept  {
this->target = target;
this->additionalFlags = additionalFlags;
this->whatItSets = whatItSets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContinuousPropertyModeSO_CastData::ContinuousPropertyModeSO_CastData()   {
}
