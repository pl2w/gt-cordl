#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PostLateUpdate_UpdateResolution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostLateUpdate_UpdateResolution)
// Forward declare root types
namespace GlobalNamespace {
struct PostLateUpdate_UpdateResolution;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PostLateUpdate_UpdateResolution);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostLateUpdate_UpdateResolution, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateResolution");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateResolution {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PostLateUpdate_UpdateResolution() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15358};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PostLateUpdate_UpdateResolution) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
