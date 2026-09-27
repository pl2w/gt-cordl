#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MapParameters.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticMapFlags_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__SceneIRCallbacks_impl.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__MapParameters_def.hpp"
// Ctor Parameters [CppParam { name: "thisSize", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callbacks", ty: "::Meta::XR::Acoustics::SceneIRCallbacks", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "threadCount", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reflectionCount", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "::Meta::XR::Acoustics::AcousticMapFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minResolution", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxResolution", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "headHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gravityVectorX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gravityVectorY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gravityVectorZ", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::MapParameters::MapParameters(::System::UIntPtr  thisSize, ::Meta::XR::Acoustics::SceneIRCallbacks  callbacks, ::System::UIntPtr  threadCount, ::System::UIntPtr  reflectionCount, ::Meta::XR::Acoustics::AcousticMapFlags  flags, float_t  minResolution, float_t  maxResolution, float_t  headHeight, float_t  maxHeight, float_t  gravityVectorX, float_t  gravityVectorY, float_t  gravityVectorZ) noexcept  {
this->thisSize = thisSize;
this->callbacks = callbacks;
this->threadCount = threadCount;
this->reflectionCount = reflectionCount;
this->flags = flags;
this->minResolution = minResolution;
this->maxResolution = maxResolution;
this->headHeight = headHeight;
this->maxHeight = maxHeight;
this->gravityVectorX = gravityVectorX;
this->gravityVectorY = gravityVectorY;
this->gravityVectorZ = gravityVectorZ;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::MapParameters::MapParameters()   {
}
