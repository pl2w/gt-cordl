#pragma once
// IWYU pragma private; include "Drawing/DrawingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__DetectedRenderPipeline_def.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingManager)
namespace Drawing {
class AlineURPRenderPassFeature;
}
namespace Drawing {
struct CommandBuilder;
}
namespace Drawing {
class DrawingData;
}
namespace Drawing {
class IDrawGizmos;
}
namespace Drawing {
struct RedrawScope;
}
namespace GlobalNamespace {
struct DrawingData_CommandBufferWrapper;
}
namespace GlobalNamespace {
struct DrawingData_Hasher;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Drawing {
class DrawingManager;
}
// Write type traits
MARK_REF_T(::Drawing::DrawingManager*);
DEFINE_IL2CPP_CLASS(::Drawing::DrawingManager*, "Drawing", "DrawingManager");
// [ExecuteAlways]
// [AddComponentMenu("")]
// Dependencies Drawing.DetectedRenderPipeline, Drawing.RedrawScope, Unity.Profiling.ProfilerMarker, UnityEngine.MonoBehaviour
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingManager
class CORDL_TYPE DrawingManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MarkerALINE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerALINE, put=setStaticF_MarkerALINE)) ::Unity::Profiling::ProfilerMarker  MarkerALINE;

/// @brief Field MarkerCommandBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerCommandBuffer, put=setStaticF_MarkerCommandBuffer)) ::Unity::Profiling::ProfilerMarker  MarkerCommandBuffer;

/// @brief Field MarkerDrawGizmos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerDrawGizmos, put=setStaticF_MarkerDrawGizmos)) ::Unity::Profiling::ProfilerMarker  MarkerDrawGizmos;

/// @brief Field MarkerFilterDestroyedObjects, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerFilterDestroyedObjects, put=setStaticF_MarkerFilterDestroyedObjects)) ::Unity::Profiling::ProfilerMarker  MarkerFilterDestroyedObjects;

/// @brief Field MarkerFrameTick, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerFrameTick, put=setStaticF_MarkerFrameTick)) ::Unity::Profiling::ProfilerMarker  MarkerFrameTick;

/// @brief Field MarkerGizmosAllowed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerGizmosAllowed, put=setStaticF_MarkerGizmosAllowed)) ::Unity::Profiling::ProfilerMarker  MarkerGizmosAllowed;

/// @brief Field MarkerRefreshSelectionCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerRefreshSelectionCache, put=setStaticF_MarkerRefreshSelectionCache)) ::Unity::Profiling::ProfilerMarker  MarkerRefreshSelectionCache;

/// @brief Field MarkerSubmitGizmos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MarkerSubmitGizmos, put=setStaticF_MarkerSubmitGizmos)) ::Unity::Profiling::ProfilerMarker  MarkerSubmitGizmos;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Drawing::DrawingManager>  _instance;

/// @brief Field actuallyEnabled, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_actuallyEnabled, put=__cordl_internal_set_actuallyEnabled)) bool  actuallyEnabled;

/// @brief Field allowRenderToRenderTextures, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_allowRenderToRenderTextures, put=setStaticF_allowRenderToRenderTextures)) bool  allowRenderToRenderTextures;

/// @brief Field commandBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_commandBuffer, put=__cordl_internal_set_commandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  commandBuffer;

/// @brief Field detectedRenderPipeline, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_detectedRenderPipeline, put=__cordl_internal_set_detectedRenderPipeline)) ::Drawing::DetectedRenderPipeline  detectedRenderPipeline;

/// @brief Field drawToAllCameras, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_drawToAllCameras, put=setStaticF_drawToAllCameras)) bool  drawToAllCameras;

/// @brief Field framePassed, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_framePassed, put=__cordl_internal_set_framePassed)) bool  framePassed;

/// @brief Field gizmoDrawerTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gizmoDrawerTypes, put=setStaticF_gizmoDrawerTypes)) ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  gizmoDrawerTypes;

/// @brief Field gizmoDrawers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gizmoDrawers, put=setStaticF_gizmoDrawers)) ::System::Collections::Generic::List_1<::Drawing::IDrawGizmos*>*  gizmoDrawers;

/// @brief Field gizmos, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gizmos, put=__cordl_internal_set_gizmos)) ::Drawing::DrawingData*  gizmos;

/// @brief Field lastFilterFrame, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFilterFrame, put=__cordl_internal_set_lastFilterFrame)) int32_t  lastFilterFrame;

/// @brief Field lastFrameCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFrameCount, put=__cordl_internal_set_lastFrameCount)) int32_t  lastFrameCount;

/// @brief Field lastFrameTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFrameTime, put=__cordl_internal_set_lastFrameTime)) float_t  lastFrameTime;

/// @brief Field lineWidthMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lineWidthMultiplier, put=setStaticF_lineWidthMultiplier)) float_t  lineWidthMultiplier;

/// @brief Field previousFrameRedrawScope, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_previousFrameRedrawScope, put=__cordl_internal_set_previousFrameRedrawScope)) ::Drawing::RedrawScope  previousFrameRedrawScope;

/// @brief Field renderPassFeature, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderPassFeature, put=__cordl_internal_set_renderPassFeature)) ::UnityW<::Drawing::AlineURPRenderPassFeature>  renderPassFeature;

/// @brief Field scriptableRenderersWithPass, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_scriptableRenderersWithPass, put=__cordl_internal_set_scriptableRenderersWithPass)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*  scriptableRenderersWithPass;

/// @brief Field typeToGizmosEnabled, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeToGizmosEnabled, put=__cordl_internal_set_typeToGizmosEnabled)) ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  typeToGizmosEnabled;

/// @brief Method BeginCameraRendering, addr 0x55d2e4c, size 0x114, virtual false, abstract: false, final false
inline void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method BeginContextRendering, addr 0x55d2e44, size 0x4, virtual false, abstract: false, final false
inline void BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras) ;

/// @brief Method BeginFrameRendering, addr 0x55d2e48, size 0x4, virtual false, abstract: false, final false
inline void BeginFrameRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::ArrayW<::UnityEngine::Camera*>  cameras) ;

/// @brief Method CheckFrameTicking, addr 0x55d3430, size 0x1c8, virtual false, abstract: false, final false
inline void CheckFrameTicking() ;

/// @brief Method CleanupIfNoCameraRendered, addr 0x55d3264, size 0x1bc, virtual false, abstract: false, final false
inline void CleanupIfNoCameraRendered() ;

/// @brief Method EndCameraRendering, addr 0x55d3a2c, size 0x10, virtual false, abstract: false, final false
inline void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method ExecuteCustomRenderGraphPass, addr 0x55d39f4, size 0x38, virtual false, abstract: false, final false
inline void ExecuteCustomRenderGraphPass(::GlobalNamespace::DrawingData_CommandBufferWrapper  cmd, ::UnityEngine::Camera*  camera) ;

/// @brief Method ExecuteCustomRenderPass, addr 0x55d37f0, size 0xc8, virtual false, abstract: false, final false
inline void ExecuteCustomRenderPass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method GetBuilder, addr 0x55d408c, size 0xb4, virtual false, abstract: false, final false
static inline ::Drawing::CommandBuilder GetBuilder(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  redrawScope, bool  renderInGame) ;

/// @brief Method GetBuilder, addr 0x55d3fe4, size 0xa8, virtual false, abstract: false, final false
static inline ::Drawing::CommandBuilder GetBuilder(::Drawing::RedrawScope  redrawScope, bool  renderInGame) ;

/// @brief Method GetBuilder, addr 0x55d3f54, size 0x90, virtual false, abstract: false, final false
static inline ::Drawing::CommandBuilder GetBuilder(bool  renderInGame) ;

/// @brief Method GetRedrawScope, addr 0x55cb608, size 0xa8, virtual false, abstract: false, final false
static inline ::Drawing::RedrawScope GetRedrawScope() ;

/// @brief Method Init, addr 0x55cac50, size 0x198, virtual false, abstract: false, final false
static inline void Init() ;

static inline ::Drawing::DrawingManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x55d2f60, size 0x2f8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEditorUpdate, addr 0x55d3258, size 0xc, virtual false, abstract: false, final false
inline void OnEditorUpdate() ;

/// @brief Method OnEnable, addr 0x55d2a5c, size 0x3e8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostRender, addr 0x55d3a3c, size 0xc0, virtual false, abstract: false, final false
inline void PostRender(::UnityEngine::Camera*  camera) ;

/// @brief Method RefreshRenderPipelineMode, addr 0x55d2988, size 0xd4, virtual false, abstract: false, final false
inline void RefreshRenderPipelineMode() ;

/// @brief Method Register, addr 0x55d3c38, size 0x31c, virtual false, abstract: false, final false
static inline void Register(::Drawing::IDrawGizmos*  item) ;

/// @brief Method RemoveDestroyedGizmoDrawers, addr 0x55d35f8, size 0x1f8, virtual false, abstract: false, final false
static inline void RemoveDestroyedGizmoDrawers() ;

/// @brief Method ShouldDrawGizmos, addr 0x55d3c30, size 0x8, virtual false, abstract: false, final false
inline bool ShouldDrawGizmos(::UnityEngine::Object*  obj) ;

/// @brief Method Submit, addr 0x55d3afc, size 0x134, virtual false, abstract: false, final false
inline void Submit(::UnityEngine::Camera*  camera, ::GlobalNamespace::DrawingData_CommandBufferWrapper  cmd, bool  usingRenderPipeline, bool  allowCameraDefault) ;

/// @brief Method SubmitFrame, addr 0x55d38b8, size 0x13c, virtual false, abstract: false, final false
inline void SubmitFrame(::UnityEngine::Camera*  camera, ::GlobalNamespace::DrawingData_CommandBufferWrapper  cmd, bool  usingRenderPipeline) ;

/// @brief Method Update, addr 0x55d3420, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_actuallyEnabled() const;

constexpr bool& __cordl_internal_get_actuallyEnabled() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_commandBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_commandBuffer() ;

constexpr ::Drawing::DetectedRenderPipeline const& __cordl_internal_get_detectedRenderPipeline() const;

constexpr ::Drawing::DetectedRenderPipeline& __cordl_internal_get_detectedRenderPipeline() ;

constexpr bool const& __cordl_internal_get_framePassed() const;

constexpr bool& __cordl_internal_get_framePassed() ;

constexpr ::Drawing::DrawingData* const& __cordl_internal_get_gizmos() const;

constexpr ::Drawing::DrawingData*& __cordl_internal_get_gizmos() ;

constexpr int32_t const& __cordl_internal_get_lastFilterFrame() const;

constexpr int32_t& __cordl_internal_get_lastFilterFrame() ;

constexpr int32_t const& __cordl_internal_get_lastFrameCount() const;

constexpr int32_t& __cordl_internal_get_lastFrameCount() ;

constexpr float_t const& __cordl_internal_get_lastFrameTime() const;

constexpr float_t& __cordl_internal_get_lastFrameTime() ;

constexpr ::Drawing::RedrawScope const& __cordl_internal_get_previousFrameRedrawScope() const;

constexpr ::Drawing::RedrawScope& __cordl_internal_get_previousFrameRedrawScope() ;

constexpr ::UnityW<::Drawing::AlineURPRenderPassFeature> const& __cordl_internal_get_renderPassFeature() const;

constexpr ::UnityW<::Drawing::AlineURPRenderPassFeature>& __cordl_internal_get_renderPassFeature() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*>* const& __cordl_internal_get_scriptableRenderersWithPass() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*& __cordl_internal_get_scriptableRenderersWithPass() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* const& __cordl_internal_get_typeToGizmosEnabled() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*& __cordl_internal_get_typeToGizmosEnabled() ;

constexpr void __cordl_internal_set_actuallyEnabled(bool  value) ;

constexpr void __cordl_internal_set_commandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_detectedRenderPipeline(::Drawing::DetectedRenderPipeline  value) ;

constexpr void __cordl_internal_set_framePassed(bool  value) ;

constexpr void __cordl_internal_set_gizmos(::Drawing::DrawingData*  value) ;

constexpr void __cordl_internal_set_lastFilterFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set_lastFrameTime(float_t  value) ;

constexpr void __cordl_internal_set_previousFrameRedrawScope(::Drawing::RedrawScope  value) ;

constexpr void __cordl_internal_set_renderPassFeature(::UnityW<::Drawing::AlineURPRenderPassFeature>  value) ;

constexpr void __cordl_internal_set_scriptableRenderersWithPass(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*  value) ;

constexpr void __cordl_internal_set_typeToGizmosEnabled(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value) ;

/// @brief Method .ctor, addr 0x55d4140, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerALINE() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerCommandBuffer() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerDrawGizmos() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerFilterDestroyedObjects() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerFrameTick() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerGizmosAllowed() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerRefreshSelectionCache() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MarkerSubmitGizmos() ;

static inline ::UnityW<::Drawing::DrawingManager> getStaticF__instance() ;

static inline bool getStaticF_allowRenderToRenderTextures() ;

static inline bool getStaticF_drawToAllCameras() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* getStaticF_gizmoDrawerTypes() ;

static inline ::System::Collections::Generic::List_1<::Drawing::IDrawGizmos*>* getStaticF_gizmoDrawers() ;

static inline float_t getStaticF_lineWidthMultiplier() ;

/// @brief Method get_instance, addr 0x55d28c4, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityW<::Drawing::DrawingManager> get_instance() ;

static inline void setStaticF_MarkerALINE(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerCommandBuffer(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerDrawGizmos(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerFilterDestroyedObjects(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerFrameTick(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerGizmosAllowed(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerRefreshSelectionCache(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MarkerSubmitGizmos(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF__instance(::UnityW<::Drawing::DrawingManager>  value) ;

static inline void setStaticF_allowRenderToRenderTextures(bool  value) ;

static inline void setStaticF_drawToAllCameras(bool  value) ;

static inline void setStaticF_gizmoDrawerTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value) ;

static inline void setStaticF_gizmoDrawers(::System::Collections::Generic::List_1<::Drawing::IDrawGizmos*>*  value) ;

static inline void setStaticF_lineWidthMultiplier(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawingManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawingManager(DrawingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawingManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawingManager(DrawingManager const& ) = delete;

/// @brief Field NO_DRAWING_TIMEOUT_SECS offset 0xffffffff size 0x4
static constexpr float_t  NO_DRAWING_TIMEOUT_SECS{static_cast<float_t>(10.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27756};

/// @brief Field gizmos, offset: 0x20, size: 0x8, def value: None
 ::Drawing::DrawingData*  ___gizmos;

/// @brief Field framePassed, offset: 0x28, size: 0x1, def value: None
 bool  ___framePassed;

/// @brief Field lastFrameCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___lastFrameCount;

/// @brief Field lastFrameTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___lastFrameTime;

/// @brief Field lastFilterFrame, offset: 0x34, size: 0x4, def value: None
 int32_t  ___lastFilterFrame;

/// [SerializeField]
/// @brief Field actuallyEnabled, offset: 0x38, size: 0x1, def value: None
 bool  ___actuallyEnabled;

/// @brief Field previousFrameRedrawScope, offset: 0x40, size: 0x10, def value: None
 ::Drawing::RedrawScope  ___previousFrameRedrawScope;

/// @brief Field commandBuffer, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___commandBuffer;

/// @brief Field detectedRenderPipeline, offset: 0x58, size: 0x4, def value: None
 ::Drawing::DetectedRenderPipeline  ___detectedRenderPipeline;

/// @brief Field scriptableRenderersWithPass, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*  ___scriptableRenderersWithPass;

/// @brief Field renderPassFeature, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Drawing::AlineURPRenderPassFeature>  ___renderPassFeature;

/// @brief Field typeToGizmosEnabled, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  ___typeToGizmosEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::DrawingManager, ___gizmos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___framePassed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___lastFrameCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___lastFrameTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___lastFilterFrame) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___actuallyEnabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___previousFrameRedrawScope) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___commandBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___detectedRenderPipeline) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___scriptableRenderersWithPass) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___renderPassFeature) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Drawing::DrawingManager, ___typeToGizmosEnabled) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Drawing::DrawingManager) == 0x78, "Size mismatch!");

} // namespace end def Drawing
