#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/Initialization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Initialization)
namespace GlobalNamespace {
struct Initialization_AsyncUploadTimeSlicedUpdate;
}
namespace GlobalNamespace {
struct Initialization_DirectorSampleTime;
}
namespace GlobalNamespace {
struct Initialization_ProfilerStartFrame;
}
namespace GlobalNamespace {
struct Initialization_SynchronizeInputs;
}
namespace GlobalNamespace {
struct Initialization_SynchronizeState;
}
namespace GlobalNamespace {
struct Initialization_UpdateCameraMotionVectors;
}
namespace GlobalNamespace {
struct Initialization_XREarlyUpdate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Initialization;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::Initialization);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerLoop::Initialization, "UnityEngine.PlayerLoop", "Initialization");
// [MovedFrom("UnityEngine.Experimental.PlayerLoop")]
// [RequiredByNativeCode]
// Dependencies 
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.Initialization
#pragma pack(push, 0)
struct CORDL_TYPE Initialization {
public:
// Declarations
using AsyncUploadTimeSlicedUpdate = ::GlobalNamespace::Initialization_AsyncUploadTimeSlicedUpdate;

using DirectorSampleTime = ::GlobalNamespace::Initialization_DirectorSampleTime;

using ProfilerStartFrame = ::GlobalNamespace::Initialization_ProfilerStartFrame;

using SynchronizeInputs = ::GlobalNamespace::Initialization_SynchronizeInputs;

using SynchronizeState = ::GlobalNamespace::Initialization_SynchronizeState;

using UpdateCameraMotionVectors = ::GlobalNamespace::Initialization_UpdateCameraMotionVectors;

using XREarlyUpdate = ::GlobalNamespace::Initialization_XREarlyUpdate;

// Ctor Parameters []
// @brief default ctor
constexpr Initialization() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15242};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerLoop::Initialization) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
