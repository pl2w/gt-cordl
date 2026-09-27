#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BoundaryGeometry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BoundaryType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_BoundaryGeometry)
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BoundaryGeometry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BoundaryGeometry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BoundaryGeometry, "", "OVRPlugin/BoundaryGeometry");
// Dependencies OVRPlugin::BoundaryType, OVRPlugin::Vector3f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BoundaryGeometry
struct CORDL_TYPE OVRPlugin_BoundaryGeometry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BoundaryGeometry() ;

// Ctor Parameters [CppParam { name: "BoundaryType", ty: "::GlobalNamespace::OVRPlugin_BoundaryType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Points", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BoundaryGeometry(::GlobalNamespace::OVRPlugin_BoundaryType  BoundaryType, ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  Points, int32_t  PointsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12118};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field BoundaryType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BoundaryType  BoundaryType;

/// @brief Field Points, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  Points;

/// @brief Field PointsCount, offset: 0x10, size: 0x4, def value: None
 int32_t  PointsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoundaryGeometry, BoundaryType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoundaryGeometry, Points) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BoundaryGeometry, PointsCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BoundaryGeometry) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
