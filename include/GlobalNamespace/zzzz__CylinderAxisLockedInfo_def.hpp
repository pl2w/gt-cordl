#pragma once
// IWYU pragma private; include "GlobalNamespace/CylinderAxisLockedInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CylinderAxisLockedInfo)
// Forward declare root types
namespace GlobalNamespace {
struct CylinderAxisLockedInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CylinderAxisLockedInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CylinderAxisLockedInfo, "", "CylinderAxisLockedInfo");
// Dependencies Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: CylinderAxisLockedInfo
struct CORDL_TYPE CylinderAxisLockedInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CylinderAxisLockedInfo() ;

// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CylinderAxisLockedInfo(::Unity::Mathematics::float3  center, float_t  radius, float_t  height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  center;

/// @brief Field radius, offset: 0xc, size: 0x4, def value: None
 float_t  radius;

/// @brief Field height, offset: 0x10, size: 0x4, def value: None
 float_t  height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CylinderAxisLockedInfo, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CylinderAxisLockedInfo, radius) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CylinderAxisLockedInfo, height) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CylinderAxisLockedInfo) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
