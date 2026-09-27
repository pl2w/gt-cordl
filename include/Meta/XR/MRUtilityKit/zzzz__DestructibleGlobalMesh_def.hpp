#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleGlobalMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DestructibleGlobalMesh)
namespace Meta::XR::MRUtilityKit {
class DestructibleMeshComponent;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
struct DestructibleGlobalMesh;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh, "Meta.XR.MRUtilityKit", "DestructibleGlobalMesh");
// Dependencies 
namespace Meta::XR::MRUtilityKit {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.DestructibleGlobalMesh
struct CORDL_TYPE DestructibleGlobalMesh {
public:
// Declarations
/// @brief Method Equals, addr 0x9f09a88, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9f09914, size 0x174, virtual false, abstract: false, final false
inline bool Equals(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  other) ;

/// @brief Method GetHashCode, addr 0x9f09b18, size 0x94, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality, addr 0x9f09bac, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  left, ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  right) ;

/// @brief Method op_Inequality, addr 0x9f08fc0, size 0x34, virtual false, abstract: false, final false
static inline bool op_Inequality(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  left, ::Meta::XR::MRUtilityKit::DestructibleGlobalMesh  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr DestructibleGlobalMesh() ;

// Ctor Parameters [CppParam { name: "DestructibleMeshComponent", ty: "::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxPointsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointsPerUnitX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointsPerUnitY", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr DestructibleGlobalMesh(::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>  DestructibleMeshComponent, int32_t  MaxPointsCount, float_t  PointsPerUnitX, float_t  PointsPerUnitY) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25768};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field DestructibleMeshComponent, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::DestructibleMeshComponent>  DestructibleMeshComponent;

/// @brief Field MaxPointsCount, offset: 0x8, size: 0x4, def value: None
 int32_t  MaxPointsCount;

/// @brief Field PointsPerUnitX, offset: 0xc, size: 0x4, def value: None
 float_t  PointsPerUnitX;

/// @brief Field PointsPerUnitY, offset: 0x10, size: 0x4, def value: None
 float_t  PointsPerUnitY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh, DestructibleMeshComponent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh, MaxPointsCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh, PointsPerUnitX) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh, PointsPerUnitY) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::DestructibleGlobalMesh) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
