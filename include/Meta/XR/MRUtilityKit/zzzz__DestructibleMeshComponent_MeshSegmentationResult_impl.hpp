#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleMeshComponent_MeshSegmentationResult.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_MeshSegment_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_MeshSegmentationResult_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_MeshSegment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "segments", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegment>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reservedSegment", ty: "::GlobalNamespace::DestructibleMeshComponent_MeshSegment", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult::DestructibleMeshComponent_MeshSegmentationResult(::System::Collections::Generic::List_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegment>*  segments, ::GlobalNamespace::DestructibleMeshComponent_MeshSegment  reservedSegment) noexcept  {
this->segments = segments;
this->reservedSegment = reservedSegment;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult::DestructibleMeshComponent_MeshSegmentationResult()   {
}
