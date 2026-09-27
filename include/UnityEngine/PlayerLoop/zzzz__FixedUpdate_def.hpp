#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/FixedUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FixedUpdate)
namespace GlobalNamespace {
struct FixedUpdate_AudioFixedUpdate;
}
namespace GlobalNamespace {
struct FixedUpdate_ClearLines;
}
namespace GlobalNamespace {
struct FixedUpdate_DirectorFixedSampleTime;
}
namespace GlobalNamespace {
struct FixedUpdate_DirectorFixedUpdatePostPhysics;
}
namespace GlobalNamespace {
struct FixedUpdate_DirectorFixedUpdate;
}
namespace GlobalNamespace {
struct FixedUpdate_LegacyFixedAnimationUpdate;
}
namespace GlobalNamespace {
struct FixedUpdate_NewInputFixedUpdate;
}
namespace GlobalNamespace {
struct FixedUpdate_Physics2DFixedUpdate;
}
namespace GlobalNamespace {
struct FixedUpdate_PhysicsClothFixedUpdate;
}
namespace GlobalNamespace {
struct FixedUpdate_PhysicsFixedUpdate;
}
namespace GlobalNamespace {
struct FixedUpdate_ScriptRunBehaviourFixedUpdate;
}
namespace GlobalNamespace {
struct FixedUpdate_ScriptRunDelayedFixedFrameRate;
}
namespace GlobalNamespace {
struct FixedUpdate_XRFixedUpdate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct FixedUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::FixedUpdate);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerLoop::FixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate");
// [MovedFrom("UnityEngine.Experimental.PlayerLoop")]
// [RequiredByNativeCode]
// Dependencies 
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.FixedUpdate
#pragma pack(push, 0)
struct CORDL_TYPE FixedUpdate {
public:
// Declarations
using AudioFixedUpdate = ::GlobalNamespace::FixedUpdate_AudioFixedUpdate;

using ClearLines = ::GlobalNamespace::FixedUpdate_ClearLines;

using DirectorFixedSampleTime = ::GlobalNamespace::FixedUpdate_DirectorFixedSampleTime;

using DirectorFixedUpdate = ::GlobalNamespace::FixedUpdate_DirectorFixedUpdate;

using DirectorFixedUpdatePostPhysics = ::GlobalNamespace::FixedUpdate_DirectorFixedUpdatePostPhysics;

using LegacyFixedAnimationUpdate = ::GlobalNamespace::FixedUpdate_LegacyFixedAnimationUpdate;

using NewInputFixedUpdate = ::GlobalNamespace::FixedUpdate_NewInputFixedUpdate;

using Physics2DFixedUpdate = ::GlobalNamespace::FixedUpdate_Physics2DFixedUpdate;

using PhysicsClothFixedUpdate = ::GlobalNamespace::FixedUpdate_PhysicsClothFixedUpdate;

using PhysicsFixedUpdate = ::GlobalNamespace::FixedUpdate_PhysicsFixedUpdate;

using ScriptRunBehaviourFixedUpdate = ::GlobalNamespace::FixedUpdate_ScriptRunBehaviourFixedUpdate;

using ScriptRunDelayedFixedFrameRate = ::GlobalNamespace::FixedUpdate_ScriptRunDelayedFixedFrameRate;

using XRFixedUpdate = ::GlobalNamespace::FixedUpdate_XRFixedUpdate;

// Ctor Parameters []
// @brief default ctor
constexpr FixedUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerLoop::FixedUpdate) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
