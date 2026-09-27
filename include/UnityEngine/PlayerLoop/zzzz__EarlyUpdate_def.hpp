#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/EarlyUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EarlyUpdate)
namespace GlobalNamespace {
struct EarlyUpdate_ARCoreUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_AnalyticsCoreStatsUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_ClearIntermediateRenderers;
}
namespace GlobalNamespace {
struct EarlyUpdate_ClearLines;
}
namespace GlobalNamespace {
struct EarlyUpdate_DeliverIosPlatformEvents;
}
namespace GlobalNamespace {
struct EarlyUpdate_DispatchEventQueueEvents;
}
namespace GlobalNamespace {
struct EarlyUpdate_ExecuteMainThreadJobs;
}
namespace GlobalNamespace {
struct EarlyUpdate_GpuTimestamp;
}
namespace GlobalNamespace {
struct EarlyUpdate_InsightsUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_PerformanceAnalyticsUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_Physics2DEarlyUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_PhysicsResetInterpolatedTransformPosition;
}
namespace GlobalNamespace {
struct EarlyUpdate_PlayerCleanupCachedData;
}
namespace GlobalNamespace {
struct EarlyUpdate_PollHtcsPlayerConnection;
}
namespace GlobalNamespace {
struct EarlyUpdate_PollPlayerConnection;
}
namespace GlobalNamespace {
struct EarlyUpdate_PresentBeforeUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_ProcessMouseInWindow;
}
namespace GlobalNamespace {
struct EarlyUpdate_ProcessRemoteInput;
}
namespace GlobalNamespace {
struct EarlyUpdate_RendererNotifyInvisible;
}
namespace GlobalNamespace {
struct EarlyUpdate_ResetFrameStatsAfterPresent;
}
namespace GlobalNamespace {
struct EarlyUpdate_ScriptRunDelayedStartupFrame;
}
namespace GlobalNamespace {
struct EarlyUpdate_SpriteAtlasManagerUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_TangoUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_UnityWebRequestUpdate;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateAsyncInstantiate;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateAsyncReadbackManager;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateCanvasRectTransform;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateContentLoading;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateInputManager;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateKinect;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateMainGameViewRect;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdatePreloading;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateStreamingManager;
}
namespace GlobalNamespace {
struct EarlyUpdate_UpdateTextureStreamingManager;
}
namespace GlobalNamespace {
struct EarlyUpdate_XRUpdate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerLoop::EarlyUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate");
// [MovedFrom("UnityEngine.Experimental.PlayerLoop")]
// [RequiredByNativeCode]
// Dependencies 
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate {
public:
// Declarations
using ARCoreUpdate = ::GlobalNamespace::EarlyUpdate_ARCoreUpdate;

using AnalyticsCoreStatsUpdate = ::GlobalNamespace::EarlyUpdate_AnalyticsCoreStatsUpdate;

using ClearIntermediateRenderers = ::GlobalNamespace::EarlyUpdate_ClearIntermediateRenderers;

using ClearLines = ::GlobalNamespace::EarlyUpdate_ClearLines;

using DeliverIosPlatformEvents = ::GlobalNamespace::EarlyUpdate_DeliverIosPlatformEvents;

using DispatchEventQueueEvents = ::GlobalNamespace::EarlyUpdate_DispatchEventQueueEvents;

using ExecuteMainThreadJobs = ::GlobalNamespace::EarlyUpdate_ExecuteMainThreadJobs;

using GpuTimestamp = ::GlobalNamespace::EarlyUpdate_GpuTimestamp;

using InsightsUpdate = ::GlobalNamespace::EarlyUpdate_InsightsUpdate;

using PerformanceAnalyticsUpdate = ::GlobalNamespace::EarlyUpdate_PerformanceAnalyticsUpdate;

using Physics2DEarlyUpdate = ::GlobalNamespace::EarlyUpdate_Physics2DEarlyUpdate;

using PhysicsResetInterpolatedTransformPosition = ::GlobalNamespace::EarlyUpdate_PhysicsResetInterpolatedTransformPosition;

using PlayerCleanupCachedData = ::GlobalNamespace::EarlyUpdate_PlayerCleanupCachedData;

using PollHtcsPlayerConnection = ::GlobalNamespace::EarlyUpdate_PollHtcsPlayerConnection;

using PollPlayerConnection = ::GlobalNamespace::EarlyUpdate_PollPlayerConnection;

using PresentBeforeUpdate = ::GlobalNamespace::EarlyUpdate_PresentBeforeUpdate;

using ProcessMouseInWindow = ::GlobalNamespace::EarlyUpdate_ProcessMouseInWindow;

using ProcessRemoteInput = ::GlobalNamespace::EarlyUpdate_ProcessRemoteInput;

using RendererNotifyInvisible = ::GlobalNamespace::EarlyUpdate_RendererNotifyInvisible;

using ResetFrameStatsAfterPresent = ::GlobalNamespace::EarlyUpdate_ResetFrameStatsAfterPresent;

using ScriptRunDelayedStartupFrame = ::GlobalNamespace::EarlyUpdate_ScriptRunDelayedStartupFrame;

using SpriteAtlasManagerUpdate = ::GlobalNamespace::EarlyUpdate_SpriteAtlasManagerUpdate;

using TangoUpdate = ::GlobalNamespace::EarlyUpdate_TangoUpdate;

using UnityWebRequestUpdate = ::GlobalNamespace::EarlyUpdate_UnityWebRequestUpdate;

using UpdateAsyncInstantiate = ::GlobalNamespace::EarlyUpdate_UpdateAsyncInstantiate;

using UpdateAsyncReadbackManager = ::GlobalNamespace::EarlyUpdate_UpdateAsyncReadbackManager;

using UpdateCanvasRectTransform = ::GlobalNamespace::EarlyUpdate_UpdateCanvasRectTransform;

using UpdateContentLoading = ::GlobalNamespace::EarlyUpdate_UpdateContentLoading;

using UpdateInputManager = ::GlobalNamespace::EarlyUpdate_UpdateInputManager;

using UpdateKinect = ::GlobalNamespace::EarlyUpdate_UpdateKinect;

using UpdateMainGameViewRect = ::GlobalNamespace::EarlyUpdate_UpdateMainGameViewRect;

using UpdatePreloading = ::GlobalNamespace::EarlyUpdate_UpdatePreloading;

using UpdateStreamingManager = ::GlobalNamespace::EarlyUpdate_UpdateStreamingManager;

using UpdateTextureStreamingManager = ::GlobalNamespace::EarlyUpdate_UpdateTextureStreamingManager;

using XRUpdate = ::GlobalNamespace::EarlyUpdate_XRUpdate;

// Ctor Parameters []
// @brief default ctor
constexpr EarlyUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15278};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerLoop::EarlyUpdate) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
