#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DepthOrderedDirtyTracking_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderTree_AllowedClasses_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
CORDL_MODULE_EXPORT(RenderTree)
namespace GlobalNamespace {
struct RenderTree_AllowedClasses;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
namespace UnityEngine::UIElements::UIR {
struct DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
class RenderData;
}
namespace UnityEngine::UIElements::UIR {
class RenderTreeManager;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderTree;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTree*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTree*, "UnityEngine.UIElements.UIR", "RenderTree");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.RectInt, UnityEngine.UIElements.TextureId, UnityEngine.UIElements.UIR.DepthOrderedDirtyTracking, UnityEngine.UIElements.UIR.RenderTree::AllowedClasses
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTree
class CORDL_TYPE RenderTree : public ::System::Object {
public:
// Declarations
using AllowedClasses = ::GlobalNamespace::RenderTree_AllowedClasses;

 __declspec(property(get=get_dirtyTracker)) ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking  dirtyTracker;

/// @brief Field firstChild, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstChild, put=__cordl_internal_set_firstChild)) ::UnityEngine::UIElements::UIR::RenderTree*  firstChild;

 __declspec(property(get=get_firstCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand*  firstCommand;

 __declspec(property(get=get_isRootRenderTree)) bool  isRootRenderTree;

/// @brief Field k_MarkerClipProcessing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_MarkerClipProcessing, put=setStaticF_k_MarkerClipProcessing)) ::Unity::Profiling::ProfilerMarker  k_MarkerClipProcessing;

/// @brief Field k_MarkerColorsProcessing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_MarkerColorsProcessing, put=setStaticF_k_MarkerColorsProcessing)) ::Unity::Profiling::ProfilerMarker  k_MarkerColorsProcessing;

/// @brief Field k_MarkerOpacityProcessing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_MarkerOpacityProcessing, put=setStaticF_k_MarkerOpacityProcessing)) ::Unity::Profiling::ProfilerMarker  k_MarkerOpacityProcessing;

/// @brief Field k_MarkerTransformProcessing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_MarkerTransformProcessing, put=setStaticF_k_MarkerTransformProcessing)) ::Unity::Profiling::ProfilerMarker  k_MarkerTransformProcessing;

/// @brief Field k_MarkerVisualsProcessing, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_MarkerVisualsProcessing, put=setStaticF_k_MarkerVisualsProcessing)) ::Unity::Profiling::ProfilerMarker  k_MarkerVisualsProcessing;

/// @brief Field m_AllowedDirtyClasses, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AllowedDirtyClasses, put=__cordl_internal_set_m_AllowedDirtyClasses)) ::GlobalNamespace::RenderTree_AllowedClasses  m_AllowedDirtyClasses;

/// @brief Field m_DirtyTracker, offset 0x18, size 0x30 
 __declspec(property(get=__cordl_internal_get_m_DirtyTracker, put=__cordl_internal_set_m_DirtyTracker)) ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking  m_DirtyTracker;

/// @brief Field m_FirstCommand, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FirstCommand, put=__cordl_internal_set_m_FirstCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand*  m_FirstCommand;

/// @brief Field m_RenderTreeManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RenderTreeManager, put=__cordl_internal_set_m_RenderTreeManager)) ::UnityEngine::UIElements::UIR::RenderTreeManager*  m_RenderTreeManager;

/// @brief Field m_RootRenderData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RootRenderData, put=__cordl_internal_set_m_RootRenderData)) ::UnityEngine::UIElements::UIR::RenderData*  m_RootRenderData;

/// @brief Field nextSibling, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSibling, put=__cordl_internal_set_nextSibling)) ::UnityEngine::UIElements::UIR::RenderTree*  nextSibling;

/// @brief Field parent, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityEngine::UIElements::UIR::RenderTree*  parent;

/// @brief Field quadRect, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_quadRect, put=__cordl_internal_set_quadRect)) ::UnityEngine::RectInt  quadRect;

/// @brief Field quadTextureId, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_quadTextureId, put=__cordl_internal_set_quadTextureId)) ::UnityEngine::UIElements::TextureId  quadTextureId;

 __declspec(property(get=get_renderTreeManager)) ::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager;

 __declspec(property(get=get_rootRenderData)) ::UnityEngine::UIElements::UIR::RenderData*  rootRenderData;

/// @brief Method ChildWillBeRemoved, addr 0xb7e76e4, size 0xb8, virtual false, abstract: false, final false
inline void ChildWillBeRemoved(::UnityEngine::UIElements::UIR::RenderData*  renderData) ;

/// @brief Method DepthFirstResetTextures, addr 0xb7e6ac0, size 0x4c, virtual false, abstract: false, final false
inline void DepthFirstResetTextures(::UnityEngine::UIElements::UIR::RenderData*  renderData) ;

/// @brief Method Dispose, addr 0xb7e6ab0, size 0x10, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Init, addr 0xb7e68b8, size 0x1a0, virtual false, abstract: false, final false
inline void Init(::UnityEngine::UIElements::UIR::RenderTreeManager*  renderTreeManager, ::UnityEngine::UIElements::UIR::RenderData*  rootRenderData) ;

static inline ::UnityEngine::UIElements::UIR::RenderTree* New_ctor() ;

/// @brief Method OnRenderCommandAdded, addr 0xb7e7694, size 0x20, virtual false, abstract: false, final false
inline void OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand*  command) ;

/// @brief Method OnRenderCommandsRemoved, addr 0xb7e76b4, size 0x30, virtual false, abstract: false, final false
inline void OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand*  firstCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand*  lastCommand) ;

/// @brief Method OnRenderDataOpacityIdChanged, addr 0xb7e6cbc, size 0x7c, virtual false, abstract: false, final false
inline void OnRenderDataOpacityIdChanged(::UnityEngine::UIElements::UIR::RenderData*  renderData) ;

/// @brief Method OnRenderDataTransformOrSizeChanged, addr 0xb7e6c24, size 0x98, virtual false, abstract: false, final false
inline void OnRenderDataTransformOrSizeChanged(::UnityEngine::UIElements::UIR::RenderData*  renderData, bool  transformChanged, bool  clipRectSizeChanged) ;

/// @brief Method OnRenderDataVisualsChanged, addr 0xb7e6d38, size 0x8c, virtual false, abstract: false, final false
inline void OnRenderDataVisualsChanged(::UnityEngine::UIElements::UIR::RenderData*  renderData, bool  hierarchical) ;

/// @brief Method ProcessChanges, addr 0xb7e6dc4, size 0x5d0, virtual false, abstract: false, final false
inline void ProcessChanges(::by_ref<::UnityEngine::UIElements::UIR::ChainBuilderStats>  stats) ;

/// @brief Method Reset, addr 0xb7e6a58, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_firstChild() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_firstChild() ;

constexpr ::GlobalNamespace::RenderTree_AllowedClasses const& __cordl_internal_get_m_AllowedDirtyClasses() const;

constexpr ::GlobalNamespace::RenderTree_AllowedClasses& __cordl_internal_get_m_AllowedDirtyClasses() ;

constexpr ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking const& __cordl_internal_get_m_DirtyTracker() const;

constexpr ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking& __cordl_internal_get_m_DirtyTracker() ;

constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_m_FirstCommand() const;

constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_m_FirstCommand() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager* const& __cordl_internal_get_m_RenderTreeManager() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTreeManager*& __cordl_internal_get_m_RenderTreeManager() ;

constexpr ::UnityEngine::UIElements::UIR::RenderData* const& __cordl_internal_get_m_RootRenderData() const;

constexpr ::UnityEngine::UIElements::UIR::RenderData*& __cordl_internal_get_m_RootRenderData() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_nextSibling() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_nextSibling() ;

constexpr ::UnityEngine::UIElements::UIR::RenderTree* const& __cordl_internal_get_parent() const;

constexpr ::UnityEngine::UIElements::UIR::RenderTree*& __cordl_internal_get_parent() ;

constexpr ::UnityEngine::RectInt const& __cordl_internal_get_quadRect() const;

constexpr ::UnityEngine::RectInt& __cordl_internal_get_quadRect() ;

constexpr ::UnityEngine::UIElements::TextureId const& __cordl_internal_get_quadTextureId() const;

constexpr ::UnityEngine::UIElements::TextureId& __cordl_internal_get_quadTextureId() ;

constexpr void __cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::RenderTree*  value) ;

constexpr void __cordl_internal_set_m_AllowedDirtyClasses(::GlobalNamespace::RenderTree_AllowedClasses  value) ;

constexpr void __cordl_internal_set_m_DirtyTracker(::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking  value) ;

constexpr void __cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand*  value) ;

constexpr void __cordl_internal_set_m_RenderTreeManager(::UnityEngine::UIElements::UIR::RenderTreeManager*  value) ;

constexpr void __cordl_internal_set_m_RootRenderData(::UnityEngine::UIElements::UIR::RenderData*  value) ;

constexpr void __cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::RenderTree*  value) ;

constexpr void __cordl_internal_set_parent(::UnityEngine::UIElements::UIR::RenderTree*  value) ;

constexpr void __cordl_internal_set_quadRect(::UnityEngine::RectInt  value) ;

constexpr void __cordl_internal_set_quadTextureId(::UnityEngine::UIElements::TextureId  value) ;

/// @brief Method .ctor, addr 0xb7e779c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerClipProcessing() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerColorsProcessing() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerOpacityProcessing() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerTransformProcessing() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_MarkerVisualsProcessing() ;

/// @brief Method get_dirtyTracker, addr 0xb7e685c, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking> get_dirtyTracker() ;

/// @brief Method get_firstCommand, addr 0xb7e6864, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_firstCommand() ;

/// @brief Method get_isRootRenderTree, addr 0xb7e686c, size 0x4c, virtual false, abstract: false, final false
inline bool get_isRootRenderTree() ;

/// @brief Method get_renderTreeManager, addr 0xb7e684c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UIR::RenderTreeManager* get_renderTreeManager() ;

/// @brief Method get_rootRenderData, addr 0xb7e6854, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UIR::RenderData* get_rootRenderData() ;

static inline void setStaticF_k_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTree(RenderTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTree(RenderTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8562};

/// @brief Field m_RenderTreeManager, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTreeManager*  ___m_RenderTreeManager;

/// @brief Field m_DirtyTracker, offset: 0x18, size: 0x30, def value: None
 ::UnityEngine::UIElements::UIR::DepthOrderedDirtyTracking  ___m_DirtyTracker;

/// @brief Field m_FirstCommand, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderChainCommand*  ___m_FirstCommand;

/// @brief Field m_RootRenderData, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderData*  ___m_RootRenderData;

/// @brief Field quadTextureId, offset: 0x58, size: 0x4, def value: None
 ::UnityEngine::UIElements::TextureId  ___quadTextureId;

/// @brief Field quadRect, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::RectInt  ___quadRect;

/// @brief Field parent, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTree*  ___parent;

/// @brief Field firstChild, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTree*  ___firstChild;

/// @brief Field nextSibling, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::RenderTree*  ___nextSibling;

/// @brief Field m_AllowedDirtyClasses, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::RenderTree_AllowedClasses  ___m_AllowedDirtyClasses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_RenderTreeManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_DirtyTracker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_FirstCommand) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_RootRenderData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___quadTextureId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___quadRect) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___parent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___firstChild) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___nextSibling) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTree, ___m_AllowedDirtyClasses) == 0x88, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTree) == 0x90, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
