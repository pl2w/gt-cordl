#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeStreamableAsset_StreamableCellDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeStreamableAsset_StreamableCellDesc)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolumeStreamableAsset_StreamableCellDesc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolumeStreamableAsset_StreamableCellDesc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolumeStreamableAsset_StreamableCellDesc, "UnityEngine.Rendering", "ProbeVolumeStreamableAsset/StreamableCellDesc");
// [MovedFrom(false, "UnityEngine.Rendering", "Unity.RenderPipelines.Core.Runtime", "ProbeVolumeBakingSet.StreamableAsset.StreamableCellDesc")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeStreamableAsset/StreamableCellDesc
struct CORDL_TYPE ProbeVolumeStreamableAsset_StreamableCellDesc {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumeStreamableAsset_StreamableCellDesc() ;

// Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "elementCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumeStreamableAsset_StreamableCellDesc(int32_t  offset, int32_t  elementCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16876};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field offset, offset: 0x0, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field elementCount, offset: 0x4, size: 0x4, def value: None
 int32_t  elementCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolumeStreamableAsset_StreamableCellDesc, offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeVolumeStreamableAsset_StreamableCellDesc, elementCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolumeStreamableAsset_StreamableCellDesc) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
