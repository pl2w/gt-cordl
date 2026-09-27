#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MeshGroup.hpp"
#include "Meta/XR/Acoustics/zzzz__FaceType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshGroup_def.hpp"
// Ctor Parameters [CppParam { name: "indexOffset", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "faceCount", ty: "::System::UIntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "faceType", ty: "::Meta::XR::Acoustics::FaceType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::XR::Acoustics::MeshGroup::MeshGroup(::System::UIntPtr  indexOffset, ::System::UIntPtr  faceCount, ::Meta::XR::Acoustics::FaceType  faceType, ::System::IntPtr  material) noexcept  {
this->indexOffset = indexOffset;
this->faceCount = faceCount;
this->faceType = faceType;
this->material = material;
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::MeshGroup::MeshGroup()   {
}
