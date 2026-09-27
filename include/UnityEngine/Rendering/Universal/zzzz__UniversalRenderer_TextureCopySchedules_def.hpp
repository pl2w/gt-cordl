#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_TextureCopySchedules.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_ColorCopySchedule_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_DepthCopySchedule_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UniversalRenderer_TextureCopySchedules)
// Forward declare root types
namespace GlobalNamespace {
struct UniversalRenderer_TextureCopySchedules;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalRenderer_TextureCopySchedules);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalRenderer_TextureCopySchedules, "UnityEngine.Rendering.Universal", "UniversalRenderer/TextureCopySchedules");
// Dependencies UnityEngine.Rendering.Universal.UniversalRenderer::ColorCopySchedule, UnityEngine.Rendering.Universal.UniversalRenderer::DepthCopySchedule
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/TextureCopySchedules
struct CORDL_TYPE UniversalRenderer_TextureCopySchedules {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer_TextureCopySchedules() ;

// Ctor Parameters [CppParam { name: "depth", ty: "::GlobalNamespace::UniversalRenderer_DepthCopySchedule", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::GlobalNamespace::UniversalRenderer_ColorCopySchedule", modifiers: "", def_value: None, comment: None }]
constexpr UniversalRenderer_TextureCopySchedules(::GlobalNamespace::UniversalRenderer_DepthCopySchedule  depth, ::GlobalNamespace::UniversalRenderer_ColorCopySchedule  color) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18666};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field depth, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::UniversalRenderer_DepthCopySchedule  depth;

/// @brief Field color, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::UniversalRenderer_ColorCopySchedule  color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalRenderer_TextureCopySchedules, depth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_TextureCopySchedules, color) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalRenderer_TextureCopySchedules) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
