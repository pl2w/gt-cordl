#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PreLateUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PreLateUpdate)
namespace GlobalNamespace {
struct PreLateUpdate_AIUpdatePostScript;
}
namespace GlobalNamespace {
struct PreLateUpdate_AccessibilityUpdate;
}
namespace GlobalNamespace {
struct PreLateUpdate_ConstraintManagerUpdate;
}
namespace GlobalNamespace {
struct PreLateUpdate_DirectorDeferredEvaluate;
}
namespace GlobalNamespace {
struct PreLateUpdate_DirectorUpdateAnimationBegin;
}
namespace GlobalNamespace {
struct PreLateUpdate_DirectorUpdateAnimationEnd;
}
namespace GlobalNamespace {
struct PreLateUpdate_EndGraphicsJobsAfterScriptUpdate;
}
namespace GlobalNamespace {
struct PreLateUpdate_LegacyAnimationUpdate;
}
namespace GlobalNamespace {
struct PreLateUpdate_ParticleSystemBeginUpdateAll;
}
namespace GlobalNamespace {
struct PreLateUpdate_Physics2DLateUpdate;
}
namespace GlobalNamespace {
struct PreLateUpdate_PhysicsLateUpdate;
}
namespace GlobalNamespace {
struct PreLateUpdate_ScriptRunBehaviourLateUpdate;
}
namespace GlobalNamespace {
struct PreLateUpdate_UIElementsUpdatePanels;
}
namespace GlobalNamespace {
struct PreLateUpdate_UpdateMasterServerInterface;
}
namespace GlobalNamespace {
struct PreLateUpdate_UpdateNetworkManager;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PreLateUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PreLateUpdate);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerLoop::PreLateUpdate, "UnityEngine.PlayerLoop", "PreLateUpdate");
// [RequiredByNativeCode]
// [MovedFrom("UnityEngine.Experimental.PlayerLoop")]
// Dependencies 
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PreLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PreLateUpdate {
public:
// Declarations
using AIUpdatePostScript = ::GlobalNamespace::PreLateUpdate_AIUpdatePostScript;

using AccessibilityUpdate = ::GlobalNamespace::PreLateUpdate_AccessibilityUpdate;

using ConstraintManagerUpdate = ::GlobalNamespace::PreLateUpdate_ConstraintManagerUpdate;

using DirectorDeferredEvaluate = ::GlobalNamespace::PreLateUpdate_DirectorDeferredEvaluate;

using DirectorUpdateAnimationBegin = ::GlobalNamespace::PreLateUpdate_DirectorUpdateAnimationBegin;

using DirectorUpdateAnimationEnd = ::GlobalNamespace::PreLateUpdate_DirectorUpdateAnimationEnd;

using EndGraphicsJobsAfterScriptUpdate = ::GlobalNamespace::PreLateUpdate_EndGraphicsJobsAfterScriptUpdate;

using LegacyAnimationUpdate = ::GlobalNamespace::PreLateUpdate_LegacyAnimationUpdate;

using ParticleSystemBeginUpdateAll = ::GlobalNamespace::PreLateUpdate_ParticleSystemBeginUpdateAll;

using Physics2DLateUpdate = ::GlobalNamespace::PreLateUpdate_Physics2DLateUpdate;

using PhysicsLateUpdate = ::GlobalNamespace::PreLateUpdate_PhysicsLateUpdate;

using ScriptRunBehaviourLateUpdate = ::GlobalNamespace::PreLateUpdate_ScriptRunBehaviourLateUpdate;

using UIElementsUpdatePanels = ::GlobalNamespace::PreLateUpdate_UIElementsUpdatePanels;

using UpdateMasterServerInterface = ::GlobalNamespace::PreLateUpdate_UpdateMasterServerInterface;

using UpdateNetworkManager = ::GlobalNamespace::PreLateUpdate_UpdateNetworkManager;

// Ctor Parameters []
// @brief default ctor
constexpr PreLateUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerLoop::PreLateUpdate) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
