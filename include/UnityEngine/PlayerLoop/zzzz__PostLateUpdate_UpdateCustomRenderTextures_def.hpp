#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PostLateUpdate_UpdateCustomRenderTextures.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostLateUpdate_UpdateCustomRenderTextures)
// Forward declare root types
namespace GlobalNamespace {
struct PostLateUpdate_UpdateCustomRenderTextures;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PostLateUpdate_UpdateCustomRenderTextures);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostLateUpdate_UpdateCustomRenderTextures, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCustomRenderTextures");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateCustomRenderTextures {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PostLateUpdate_UpdateCustomRenderTextures() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PostLateUpdate_UpdateCustomRenderTextures) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
