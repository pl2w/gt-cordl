#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MeshSimplification.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshFlags_impl.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshSimplification_def.hpp"
// Ctor Parameters [CppParam { name: "thisSize", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "::Meta::XR::Acoustics::MeshFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unitScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxError", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minDiffractionEdgeAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minDiffractionEdgeLength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flagLength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "threadCount", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::MeshSimplification::MeshSimplification(::System::UIntPtr  thisSize, ::Meta::XR::Acoustics::MeshFlags  flags, float_t  unitScale, float_t  maxError, float_t  minDiffractionEdgeAngle, float_t  minDiffractionEdgeLength, float_t  flagLength, ::System::UIntPtr  threadCount) noexcept  {
this->thisSize = thisSize;
this->flags = flags;
this->unitScale = unitScale;
this->maxError = maxError;
this->minDiffractionEdgeAngle = minDiffractionEdgeAngle;
this->minDiffractionEdgeLength = minDiffractionEdgeLength;
this->flagLength = flagLength;
this->threadCount = threadCount;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::MeshSimplification::MeshSimplification()   {
}
