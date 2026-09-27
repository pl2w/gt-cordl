#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleMeshComponent_MeshSegmentationResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_MeshSegment_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DestructibleMeshComponent_MeshSegmentationResult)
namespace GlobalNamespace {
struct DestructibleMeshComponent_MeshSegment;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct DestructibleMeshComponent_MeshSegmentationResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult, "Meta.XR.MRUtilityKit", "DestructibleMeshComponent/MeshSegmentationResult");
// Dependencies Meta.XR.MRUtilityKit.DestructibleMeshComponent::MeshSegment
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.DestructibleMeshComponent/MeshSegmentationResult
struct CORDL_TYPE DestructibleMeshComponent_MeshSegmentationResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DestructibleMeshComponent_MeshSegmentationResult() ;

// Ctor Parameters [CppParam { name: "segments", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegment>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "reservedSegment", ty: "::GlobalNamespace::DestructibleMeshComponent_MeshSegment", modifiers: "", def_value: None, comment: None }]
constexpr DestructibleMeshComponent_MeshSegmentationResult(::System::Collections::Generic::List_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegment>*  segments, ::GlobalNamespace::DestructibleMeshComponent_MeshSegment  reservedSegment) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25770};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field segments, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DestructibleMeshComponent_MeshSegment>*  segments;

/// @brief Field reservedSegment, offset: 0x8, size: 0x28, def value: None
 ::GlobalNamespace::DestructibleMeshComponent_MeshSegment  reservedSegment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult, segments) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult, reservedSegment) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DestructibleMeshComponent_MeshSegmentationResult) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
