#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommon_OccluderContextSlot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionCullingCommon_OccluderContextSlot)
// Forward declare root types
namespace GlobalNamespace {
struct OcclusionCullingCommon_OccluderContextSlot;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OcclusionCullingCommon_OccluderContextSlot);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OcclusionCullingCommon_OccluderContextSlot, "UnityEngine.Rendering", "OcclusionCullingCommon/OccluderContextSlot");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/OccluderContextSlot
struct CORDL_TYPE OcclusionCullingCommon_OccluderContextSlot {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionCullingCommon_OccluderContextSlot() ;

// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OcclusionCullingCommon_OccluderContextSlot(bool  valid, int32_t  lastUsedFrameIndex, int32_t  viewInstanceID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field valid, offset: 0x0, size: 0x1, def value: None
 bool  valid;

/// @brief Field lastUsedFrameIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  lastUsedFrameIndex;

/// @brief Field viewInstanceID, offset: 0x8, size: 0x4, def value: None
 int32_t  viewInstanceID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OcclusionCullingCommon_OccluderContextSlot, valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OcclusionCullingCommon_OccluderContextSlot, lastUsedFrameIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OcclusionCullingCommon_OccluderContextSlot, viewInstanceID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OcclusionCullingCommon_OccluderContextSlot) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
