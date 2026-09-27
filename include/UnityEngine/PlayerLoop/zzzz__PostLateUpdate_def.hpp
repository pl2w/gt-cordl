#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PostLateUpdate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostLateUpdate)
namespace GlobalNamespace {
struct PostLateUpdate_BatchModeUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_ClearImmediateRenderers;
}
namespace GlobalNamespace {
struct PostLateUpdate_DirectorLateUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_DirectorRenderImage;
}
namespace GlobalNamespace {
struct PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_EnlightenRuntimeUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_ExecuteGameCenterCallbacks;
}
namespace GlobalNamespace {
struct PostLateUpdate_FinishFrameRendering;
}
namespace GlobalNamespace {
struct PostLateUpdate_GUIClearEvents;
}
namespace GlobalNamespace {
struct PostLateUpdate_GraphicsWarmupPreloadedShaders;
}
namespace GlobalNamespace {
struct PostLateUpdate_InputEndFrame;
}
namespace GlobalNamespace {
struct PostLateUpdate_MemoryFrameMaintenance;
}
namespace GlobalNamespace {
struct PostLateUpdate_ObjectDispatcherPostLateUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_ParticleSystemEndUpdateAll;
}
namespace GlobalNamespace {
struct PostLateUpdate_PhysicsSkinnedClothBeginUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_PhysicsSkinnedClothFinishUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_PlayerEmitCanvasGeometry;
}
namespace GlobalNamespace {
struct PostLateUpdate_PlayerSendFrameComplete;
}
namespace GlobalNamespace {
struct PostLateUpdate_PlayerSendFramePostPresent;
}
namespace GlobalNamespace {
struct PostLateUpdate_PlayerSendFrameStarted;
}
namespace GlobalNamespace {
struct PostLateUpdate_PlayerUpdateCanvases;
}
namespace GlobalNamespace {
struct PostLateUpdate_PresentAfterDraw;
}
namespace GlobalNamespace {
struct PostLateUpdate_ProcessWebSendMessages;
}
namespace GlobalNamespace {
struct PostLateUpdate_ProfilerEndFrame;
}
namespace GlobalNamespace {
struct PostLateUpdate_ProfilerSynchronizeStats;
}
namespace GlobalNamespace {
struct PostLateUpdate_ResetInputAxis;
}
namespace GlobalNamespace {
struct PostLateUpdate_ScriptRunDelayedDynamicFrameRate;
}
namespace GlobalNamespace {
struct PostLateUpdate_ShaderHandleErrors;
}
namespace GlobalNamespace {
struct PostLateUpdate_SortingGroupsUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_ThreadedLoadingDebug;
}
namespace GlobalNamespace {
struct PostLateUpdate_TriggerEndOfFrameCallbacks;
}
namespace GlobalNamespace {
struct PostLateUpdate_UIElementsRenderBatchModeOffscreen;
}
namespace GlobalNamespace {
struct PostLateUpdate_UIElementsRepaintPanels;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateAllRenderers;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateAllSkinnedMeshes;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateAudio;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateCanvasRectTransform;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateCaptureScreenshot;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateCustomRenderTextures;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateLightProbeProxyVolumes;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateRectTransform;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateResolution;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateSubstance;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateVideoTextures;
}
namespace GlobalNamespace {
struct PostLateUpdate_UpdateVideo;
}
namespace GlobalNamespace {
struct PostLateUpdate_VFXUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_XRPostLateUpdate;
}
namespace GlobalNamespace {
struct PostLateUpdate_XRPostPresent;
}
namespace GlobalNamespace {
struct PostLateUpdate_XRPreEndFrame;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate);
DEFINE_IL2CPP_CLASS(::UnityEngine::PlayerLoop::PostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate");
// [RequiredByNativeCode]
// [MovedFrom("UnityEngine.Experimental.PlayerLoop")]
// Dependencies 
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate {
public:
// Declarations
using BatchModeUpdate = ::GlobalNamespace::PostLateUpdate_BatchModeUpdate;

using ClearImmediateRenderers = ::GlobalNamespace::PostLateUpdate_ClearImmediateRenderers;

using DirectorLateUpdate = ::GlobalNamespace::PostLateUpdate_DirectorLateUpdate;

using DirectorRenderImage = ::GlobalNamespace::PostLateUpdate_DirectorRenderImage;

using EndGraphicsJobsAfterScriptLateUpdate = ::GlobalNamespace::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate;

using EnlightenRuntimeUpdate = ::GlobalNamespace::PostLateUpdate_EnlightenRuntimeUpdate;

using ExecuteGameCenterCallbacks = ::GlobalNamespace::PostLateUpdate_ExecuteGameCenterCallbacks;

using FinishFrameRendering = ::GlobalNamespace::PostLateUpdate_FinishFrameRendering;

using GUIClearEvents = ::GlobalNamespace::PostLateUpdate_GUIClearEvents;

using GraphicsWarmupPreloadedShaders = ::GlobalNamespace::PostLateUpdate_GraphicsWarmupPreloadedShaders;

using InputEndFrame = ::GlobalNamespace::PostLateUpdate_InputEndFrame;

using MemoryFrameMaintenance = ::GlobalNamespace::PostLateUpdate_MemoryFrameMaintenance;

using ObjectDispatcherPostLateUpdate = ::GlobalNamespace::PostLateUpdate_ObjectDispatcherPostLateUpdate;

using ParticleSystemEndUpdateAll = ::GlobalNamespace::PostLateUpdate_ParticleSystemEndUpdateAll;

using PhysicsSkinnedClothBeginUpdate = ::GlobalNamespace::PostLateUpdate_PhysicsSkinnedClothBeginUpdate;

using PhysicsSkinnedClothFinishUpdate = ::GlobalNamespace::PostLateUpdate_PhysicsSkinnedClothFinishUpdate;

using PlayerEmitCanvasGeometry = ::GlobalNamespace::PostLateUpdate_PlayerEmitCanvasGeometry;

using PlayerSendFrameComplete = ::GlobalNamespace::PostLateUpdate_PlayerSendFrameComplete;

using PlayerSendFramePostPresent = ::GlobalNamespace::PostLateUpdate_PlayerSendFramePostPresent;

using PlayerSendFrameStarted = ::GlobalNamespace::PostLateUpdate_PlayerSendFrameStarted;

using PlayerUpdateCanvases = ::GlobalNamespace::PostLateUpdate_PlayerUpdateCanvases;

using PresentAfterDraw = ::GlobalNamespace::PostLateUpdate_PresentAfterDraw;

using ProcessWebSendMessages = ::GlobalNamespace::PostLateUpdate_ProcessWebSendMessages;

using ProfilerEndFrame = ::GlobalNamespace::PostLateUpdate_ProfilerEndFrame;

using ProfilerSynchronizeStats = ::GlobalNamespace::PostLateUpdate_ProfilerSynchronizeStats;

using ResetInputAxis = ::GlobalNamespace::PostLateUpdate_ResetInputAxis;

using ScriptRunDelayedDynamicFrameRate = ::GlobalNamespace::PostLateUpdate_ScriptRunDelayedDynamicFrameRate;

using ShaderHandleErrors = ::GlobalNamespace::PostLateUpdate_ShaderHandleErrors;

using SortingGroupsUpdate = ::GlobalNamespace::PostLateUpdate_SortingGroupsUpdate;

using ThreadedLoadingDebug = ::GlobalNamespace::PostLateUpdate_ThreadedLoadingDebug;

using TriggerEndOfFrameCallbacks = ::GlobalNamespace::PostLateUpdate_TriggerEndOfFrameCallbacks;

using UIElementsRenderBatchModeOffscreen = ::GlobalNamespace::PostLateUpdate_UIElementsRenderBatchModeOffscreen;

using UIElementsRepaintPanels = ::GlobalNamespace::PostLateUpdate_UIElementsRepaintPanels;

using UpdateAllRenderers = ::GlobalNamespace::PostLateUpdate_UpdateAllRenderers;

using UpdateAllSkinnedMeshes = ::GlobalNamespace::PostLateUpdate_UpdateAllSkinnedMeshes;

using UpdateAudio = ::GlobalNamespace::PostLateUpdate_UpdateAudio;

using UpdateCanvasRectTransform = ::GlobalNamespace::PostLateUpdate_UpdateCanvasRectTransform;

using UpdateCaptureScreenshot = ::GlobalNamespace::PostLateUpdate_UpdateCaptureScreenshot;

using UpdateCustomRenderTextures = ::GlobalNamespace::PostLateUpdate_UpdateCustomRenderTextures;

using UpdateLightProbeProxyVolumes = ::GlobalNamespace::PostLateUpdate_UpdateLightProbeProxyVolumes;

using UpdateRectTransform = ::GlobalNamespace::PostLateUpdate_UpdateRectTransform;

using UpdateResolution = ::GlobalNamespace::PostLateUpdate_UpdateResolution;

using UpdateSubstance = ::GlobalNamespace::PostLateUpdate_UpdateSubstance;

using UpdateVideo = ::GlobalNamespace::PostLateUpdate_UpdateVideo;

using UpdateVideoTextures = ::GlobalNamespace::PostLateUpdate_UpdateVideoTextures;

using VFXUpdate = ::GlobalNamespace::PostLateUpdate_VFXUpdate;

using XRPostLateUpdate = ::GlobalNamespace::PostLateUpdate_XRPostLateUpdate;

using XRPostPresent = ::GlobalNamespace::PostLateUpdate_XRPostPresent;

using XRPreEndFrame = ::GlobalNamespace::PostLateUpdate_XRPreEndFrame;

// Ctor Parameters []
// @brief default ctor
constexpr PostLateUpdate() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::PlayerLoop::PostLateUpdate) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::PlayerLoop
