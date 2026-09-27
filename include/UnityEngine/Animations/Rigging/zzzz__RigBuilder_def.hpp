#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigLayer_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RigBuilder)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Animations::Rigging {
class RigBuilder_OnAddRigBuilderCallback;
}
namespace UnityEngine::Animations::Rigging {
class RigBuilder_OnRemoveRigBuilderCallback;
}
namespace UnityEngine::Animations::Rigging {
class RigEffectorData;
}
namespace UnityEngine::Animations::Rigging {
class RigLayer;
}
namespace UnityEngine::Animations::Rigging {
class SyncSceneToStreamLayer;
}
namespace UnityEngine::Animations {
class IAnimationWindowPreview;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class RigBuilder;
}
namespace UnityEngine::Animations::Rigging {
class RigBuilder_OnAddRigBuilderCallback;
}
namespace UnityEngine::Animations::Rigging {
class RigBuilder_OnRemoveRigBuilderCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::RigBuilder*);
MARK_REF_T(::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*);
MARK_REF_T(::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigBuilder*, "UnityEngine.Animations.Rigging", "RigBuilder");
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*, "UnityEngine.Animations.Rigging", "RigBuilder/OnAddRigBuilderCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*, "UnityEngine.Animations.Rigging", "RigBuilder/OnRemoveRigBuilderCallback");
// [RequireComponent(typeof(UnityEngine.Animator))]
// [DisallowMultipleComponent]
// [ExecuteInEditMode]
// [AddComponentMenu("Animation Rigging/Setup/Rig Builder")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.animation.rigging@1.3/manual/RiggingWorkflow.html#rig-builder-component")]
// Dependencies UnityEngine.Animations.Rigging.IRigLayer, UnityEngine.MonoBehaviour, UnityEngine.Playables.PlayableGraph
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigBuilder
class CORDL_TYPE RigBuilder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnAddRigBuilderCallback = ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback;

using OnRemoveRigBuilderCallback = ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback;

/// @brief Field <graph>k__BackingField, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__graph_k__BackingField, put=__cordl_internal_set__graph_k__BackingField)) ::UnityEngine::Playables::PlayableGraph  _graph_k__BackingField;

 __declspec(property(get=get_graph, put=set_graph)) ::UnityEngine::Playables::PlayableGraph  graph;

 __declspec(property(get=get_layers, put=set_layers)) ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*  layers;

/// @brief Field m_Effectors, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Effectors, put=__cordl_internal_set_m_Effectors)) ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*  m_Effectors;

/// @brief Field m_IsInPreview, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsInPreview, put=__cordl_internal_set_m_IsInPreview)) bool  m_IsInPreview;

/// @brief Field m_RigLayers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RigLayers, put=__cordl_internal_set_m_RigLayers)) ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*  m_RigLayers;

/// @brief Field m_RuntimeRigLayers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RuntimeRigLayers, put=__cordl_internal_set_m_RuntimeRigLayers)) ::ArrayW<::UnityEngine::Animations::Rigging::IRigLayer*>  m_RuntimeRigLayers;

/// @brief Field m_SyncSceneToStreamLayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SyncSceneToStreamLayer, put=__cordl_internal_set_m_SyncSceneToStreamLayer)) ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  m_SyncSceneToStreamLayer;

/// @brief Field onAddRigBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onAddRigBuilder, put=setStaticF_onAddRigBuilder)) ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*  onAddRigBuilder;

/// @brief Field onRemoveRigBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onRemoveRigBuilder, put=setStaticF_onRemoveRigBuilder)) ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*  onRemoveRigBuilder;

 __declspec(property(get=get_syncSceneToStreamLayer, put=set_syncSceneToStreamLayer)) ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  syncSceneToStreamLayer;

/// @brief Convert operator to "::UnityEngine::Animations::IAnimationWindowPreview"
constexpr operator  ::UnityEngine::Animations::IAnimationWindowPreview*() noexcept;

/// @brief Method Build, addr 0xae77b08, size 0x190, virtual false, abstract: false, final false
inline bool Build() ;

/// @brief Method Build, addr 0xae78704, size 0x168, virtual false, abstract: false, final false
inline bool Build(::UnityEngine::Playables::PlayableGraph  graph) ;

/// @brief Method BuildPreviewGraph, addr 0xae79224, size 0x400, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::Playable BuildPreviewGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::Playable  inputPlayable) ;

/// @brief Method Clear, addr 0xae77d3c, size 0x154, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Evaluate, addr 0xae77e94, size 0x60, virtual false, abstract: false, final false
inline void Evaluate(float_t  deltaTime) ;

static inline ::UnityEngine::Animations::Rigging::RigBuilder* New_ctor() ;

/// @brief Method OnDestroy, addr 0xae77e90, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xae77c98, size 0xa4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xae77a64, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StartPreview, addr 0xae78e0c, size 0x1a8, virtual true, abstract: false, final true
inline void StartPreview() ;

/// @brief Method StopPreview, addr 0xae78fb4, size 0x80, virtual true, abstract: false, final true
inline void StopPreview() ;

/// @brief Method SyncLayers, addr 0xae77ef4, size 0x20c, virtual false, abstract: false, final false
inline void SyncLayers() ;

/// @brief Method Update, addr 0xae78100, size 0x3c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePreviewGraph, addr 0xae79034, size 0x1f0, virtual true, abstract: false, final true
inline void UpdatePreviewGraph(::UnityEngine::Playables::PlayableGraph  graph) ;

constexpr ::UnityEngine::Playables::PlayableGraph const& __cordl_internal_get__graph_k__BackingField() const;

constexpr ::UnityEngine::Playables::PlayableGraph& __cordl_internal_get__graph_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>* const& __cordl_internal_get_m_Effectors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*& __cordl_internal_get_m_Effectors() ;

constexpr bool const& __cordl_internal_get_m_IsInPreview() const;

constexpr bool& __cordl_internal_get_m_IsInPreview() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>* const& __cordl_internal_get_m_RigLayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*& __cordl_internal_get_m_RigLayers() ;

constexpr ::ArrayW<::UnityEngine::Animations::Rigging::IRigLayer*> const& __cordl_internal_get_m_RuntimeRigLayers() const;

constexpr ::ArrayW<::UnityEngine::Animations::Rigging::IRigLayer*>& __cordl_internal_get_m_RuntimeRigLayers() ;

constexpr ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* const& __cordl_internal_get_m_SyncSceneToStreamLayer() const;

constexpr ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*& __cordl_internal_get_m_SyncSceneToStreamLayer() ;

constexpr void __cordl_internal_set__graph_k__BackingField(::UnityEngine::Playables::PlayableGraph  value) ;

constexpr void __cordl_internal_set_m_Effectors(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*  value) ;

constexpr void __cordl_internal_set_m_IsInPreview(bool  value) ;

constexpr void __cordl_internal_set_m_RigLayers(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*  value) ;

constexpr void __cordl_internal_set_m_RuntimeRigLayers(::ArrayW<::UnityEngine::Animations::Rigging::IRigLayer*>  value) ;

constexpr void __cordl_internal_set_m_SyncSceneToStreamLayer(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  value) ;

/// @brief Method .ctor, addr 0xae79d34, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback* getStaticF_onAddRigBuilder() ;

static inline ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback* getStaticF_onRemoveRigBuilder() ;

/// [CompilerGenerated]
/// @brief Method get_graph, addr 0xae79d20, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph get_graph() ;

/// @brief Method get_layers, addr 0xae7858c, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>* get_layers() ;

/// @brief Method get_syncSceneToStreamLayer, addr 0xae7813c, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer* get_syncSceneToStreamLayer() ;

/// @brief Convert to "::UnityEngine::Animations::IAnimationWindowPreview"
constexpr ::UnityEngine::Animations::IAnimationWindowPreview* i___UnityEngine__Animations__IAnimationWindowPreview() noexcept;

static inline void setStaticF_onAddRigBuilder(::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback*  value) ;

static inline void setStaticF_onRemoveRigBuilder(::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method set_graph, addr 0xae79d2c, size 0x8, virtual false, abstract: false, final false
inline void set_graph(::UnityEngine::Playables::PlayableGraph  value) ;

/// @brief Method set_layers, addr 0xae79d08, size 0x8, virtual false, abstract: false, final false
inline void set_layers(::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*  value) ;

/// @brief Method set_syncSceneToStreamLayer, addr 0xae79d18, size 0x8, virtual false, abstract: false, final false
inline void set_syncSceneToStreamLayer(::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigBuilder(RigBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigBuilder(RigBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32304};

/// [SerializeField]
/// @brief Field m_RigLayers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigLayer*>*  ___m_RigLayers;

/// @brief Field m_RuntimeRigLayers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Animations::Rigging::IRigLayer*>  ___m_RuntimeRigLayers;

/// @brief Field m_SyncSceneToStreamLayer, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Animations::Rigging::SyncSceneToStreamLayer*  ___m_SyncSceneToStreamLayer;

/// [SerializeField]
/// @brief Field m_Effectors, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::RigEffectorData*>*  ___m_Effectors;

/// @brief Field m_IsInPreview, offset: 0x40, size: 0x1, def value: None
 bool  ___m_IsInPreview;

/// [CompilerGenerated]
/// @brief Field <graph>k__BackingField, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableGraph  ____graph_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::RigBuilder, ___m_RigLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigBuilder, ___m_RuntimeRigLayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigBuilder, ___m_SyncSceneToStreamLayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigBuilder, ___m_Effectors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigBuilder, ___m_IsInPreview) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::RigBuilder, ____graph_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::RigBuilder) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
// Dependencies System.MulticastDelegate
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigBuilder/OnRemoveRigBuilderCallback
class CORDL_TYPE RigBuilder_OnRemoveRigBuilderCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xae79fe0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Animations::Rigging::RigBuilder*  rigBuilder) ;

static inline ::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xae79ed8, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigBuilder_OnRemoveRigBuilderCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigBuilder_OnRemoveRigBuilderCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigBuilder_OnRemoveRigBuilderCallback(RigBuilder_OnRemoveRigBuilderCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigBuilder_OnRemoveRigBuilderCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigBuilder_OnRemoveRigBuilderCallback(RigBuilder_OnRemoveRigBuilderCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32303};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::Rigging::RigBuilder_OnRemoveRigBuilderCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
// Dependencies System.MulticastDelegate
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.RigBuilder/OnAddRigBuilderCallback
class CORDL_TYPE RigBuilder_OnAddRigBuilderCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xae79ec4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Animations::Rigging::RigBuilder*  rigBuilder) ;

static inline ::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xae79dbc, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigBuilder_OnAddRigBuilderCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigBuilder_OnAddRigBuilderCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigBuilder_OnAddRigBuilderCallback(RigBuilder_OnAddRigBuilderCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigBuilder_OnAddRigBuilderCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigBuilder_OnAddRigBuilderCallback(RigBuilder_OnAddRigBuilderCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32302};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::Rigging::RigBuilder_OnAddRigBuilderCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
