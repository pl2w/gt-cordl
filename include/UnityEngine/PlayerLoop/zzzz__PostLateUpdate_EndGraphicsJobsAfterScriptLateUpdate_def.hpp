#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate)
// Forward declare root types
namespace GlobalNamespace {
struct PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate");
// [RequiredByNativeCode]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15337};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
