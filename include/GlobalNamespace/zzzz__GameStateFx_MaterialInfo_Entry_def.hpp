#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_MaterialInfo_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTRendererMatSlot_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameStateFx_MaterialInfo_Entry)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct MaterialInfo_GameStateFx_Entry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MaterialInfo_GameStateFx_Entry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialInfo_GameStateFx_Entry, "", "GameStateFx/MaterialInfo/Entry");
// Dependencies GTRendererMatSlot
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateFx/MaterialInfo/Entry
struct CORDL_TYPE MaterialInfo_GameStateFx_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MaterialInfo_GameStateFx_Entry() ;

// Ctor Parameters [CppParam { name: "slotInfo", ty: "::GlobalNamespace::GTRendererMatSlot", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }]
constexpr MaterialInfo_GameStateFx_Entry(::GlobalNamespace::GTRendererMatSlot  slotInfo, ::UnityW<::UnityEngine::Material>  material) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{667};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field slotInfo, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::GTRendererMatSlot  slotInfo;

/// @brief Field material, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialInfo_GameStateFx_Entry, slotInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialInfo_GameStateFx_Entry, material) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialInfo_GameStateFx_Entry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
