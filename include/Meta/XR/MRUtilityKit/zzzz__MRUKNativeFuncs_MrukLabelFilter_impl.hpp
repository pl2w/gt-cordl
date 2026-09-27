#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukLabelFilter.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukLabelFilter_def.hpp"
// Ctor Parameters [CppParam { name: "surfaceType", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "includedLabels", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "includedLabelsSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter::MRUKNativeFuncs_MrukLabelFilter(uint32_t  surfaceType, uint32_t  includedLabels, bool  includedLabelsSet) noexcept  {
this->surfaceType = surfaceType;
this->includedLabels = includedLabels;
this->includedLabelsSet = includedLabelsSet;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter::MRUKNativeFuncs_MrukLabelFilter()   {
}
