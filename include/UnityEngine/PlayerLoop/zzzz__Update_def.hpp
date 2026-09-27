#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/Update.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Update)
namespace GlobalNamespace {
struct Update_DirectorUpdate;
}
namespace GlobalNamespace {
struct Update_ScriptRunBehaviourUpdate;
}
namespace GlobalNamespace {
struct Update_ScriptRunDelayedDynamicFrameRate;
}
namespace GlobalNamespace {
struct Update_ScriptRunDelayedTasks;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Update;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::Update);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerLoop::Update, "UnityEngine.PlayerLoop", "Update");
// [RequiredByNativeCode]
// [MovedFrom("UnityEngine.Experimental.PlayerLoop")]
// Dependencies 
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Update
#pragma pack(push, 0)
struct CORDL_TYPE Update {
public:
// Declarations
using DirectorUpdate = ::GlobalNamespace::Update_DirectorUpdate;

using ScriptRunBehaviourUpdate = ::GlobalNamespace::Update_ScriptRunBehaviourUpdate;

using ScriptRunDelayedDynamicFrameRate = ::GlobalNamespace::Update_ScriptRunDelayedDynamicFrameRate;

using ScriptRunDelayedTasks = ::GlobalNamespace::Update_ScriptRunDelayedTasks;

// Ctor Parameters []
// @brief default ctor
constexpr Update() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerLoop::Update) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
