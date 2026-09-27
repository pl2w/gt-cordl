#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingSet_ProbeLayerMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProbeVolumeBakingSet_ProbeLayerMask)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeVolumeBakingSet_ProbeLayerMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeVolumeBakingSet_ProbeLayerMask);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeVolumeBakingSet_ProbeLayerMask, "UnityEngine.Rendering", "ProbeVolumeBakingSet/ProbeLayerMask");
// Dependencies UnityEngine.RenderingLayerMask
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingSet/ProbeLayerMask
struct CORDL_TYPE ProbeVolumeBakingSet_ProbeLayerMask {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeVolumeBakingSet_ProbeLayerMask() ;

// Ctor Parameters [CppParam { name: "mask", ty: "::UnityEngine::RenderingLayerMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ProbeVolumeBakingSet_ProbeLayerMask(::UnityEngine::RenderingLayerMask  mask, ::StringW  name) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16857};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field mask, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::RenderingLayerMask  mask;

/// @brief Field name, offset: 0x8, size: 0x8, def value: None
 ::StringW  name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeVolumeBakingSet_ProbeLayerMask, mask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeVolumeBakingSet_ProbeLayerMask, name) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeVolumeBakingSet_ProbeLayerMask) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
