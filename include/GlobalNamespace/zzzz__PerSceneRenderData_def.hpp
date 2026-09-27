#pragma once
// IWYU pragma private; include "GlobalNamespace/PerSceneRenderData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PerSceneRenderData)
namespace GlobalNamespace {
class PerSceneRenderData___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class PerSceneRenderData___c__DisplayClass27_0;
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
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LightmapData;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class ResourceRequest;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class PerSceneRenderData;
}
namespace GlobalNamespace {
class PerSceneRenderData___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class PerSceneRenderData___c__DisplayClass27_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerSceneRenderData*);
MARK_REF_T(::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0*);
MARK_REF_T(::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerSceneRenderData*, "", "PerSceneRenderData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0*, "", "PerSceneRenderData/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0*, "", "PerSceneRenderData/<>c__DisplayClass27_0");
// Dependencies UnityEngine.GameObject, UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerSceneRenderData
class CORDL_TYPE PerSceneRenderData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass23_0 = ::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0;

using __c__DisplayClass27_0 = ::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0;

 __declspec(property(get=get_IsLoadingLightmaps)) bool  IsLoadingLightmaps;

 __declspec(property(get=get_LoadingLightmapsCount)) int32_t  LoadingLightmapsCount;

/// @brief Field OnPopulateToAndFromLightmapsCompleted, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPopulateToAndFromLightmapsCompleted, put=__cordl_internal_set_OnPopulateToAndFromLightmapsCompleted)) ::System::Action_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  OnPopulateToAndFromLightmapsCompleted;

/// @brief Field _g_allScenesPopulateLightmaps_renderDatasHashSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_allScenesPopulateLightmaps_renderDatasHashSet, put=setStaticF__g_allScenesPopulateLightmaps_renderDatasHashSet)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  _g_allScenesPopulateLightmaps_renderDatasHashSet;

/// @brief Field _momentName_to_callbacks, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__momentName_to_callbacks, put=__cordl_internal_set__momentName_to_callbacks)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*>*  _momentName_to_callbacks;

/// @brief Field _populateLightmaps_fromMomentLightmap, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__populateLightmaps_fromMomentLightmap, put=__cordl_internal_set__populateLightmaps_fromMomentLightmap)) ::UnityW<::UnityEngine::Texture2D>  _populateLightmaps_fromMomentLightmap;

/// @brief Field _populateLightmaps_fromMomentName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__populateLightmaps_fromMomentName, put=__cordl_internal_set__populateLightmaps_fromMomentName)) ::StringW  _populateLightmaps_fromMomentName;

/// @brief Field _populateLightmaps_toMomentLightmap, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__populateLightmaps_toMomentLightmap, put=__cordl_internal_set__populateLightmaps_toMomentLightmap)) ::UnityW<::UnityEngine::Texture2D>  _populateLightmaps_toMomentLightmap;

/// @brief Field _populateLightmaps_toMomentName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__populateLightmaps_toMomentName, put=__cordl_internal_set__populateLightmaps_toMomentName)) ::StringW  _populateLightmaps_toMomentName;

/// @brief Field gO, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_gO, put=__cordl_internal_set_gO)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gO;

/// @brief Field g_OnAllScenesPopulateLightmapsCompleted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_g_OnAllScenesPopulateLightmapsCompleted, put=setStaticF_g_OnAllScenesPopulateLightmapsCompleted)) ::System::Action*  g_OnAllScenesPopulateLightmapsCompleted;

/// @brief Field lastLightmapIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastLightmapIndex, put=__cordl_internal_set_lastLightmapIndex)) int32_t  lastLightmapIndex;

/// @brief Field lightmapsCache, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightmapsCache, put=__cordl_internal_set_lightmapsCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*  lightmapsCache;

/// @brief Field lightmapsResourcePath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightmapsResourcePath, put=__cordl_internal_set_lightmapsResourcePath)) ::StringW  lightmapsResourcePath;

/// @brief Field mRendererIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_mRendererIndex, put=__cordl_internal_set_mRendererIndex)) int32_t  mRendererIndex;

/// @brief Field mRenderers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mRenderers, put=__cordl_internal_set_mRenderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  mRenderers;

/// @brief Field representativeRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_representativeRenderer, put=__cordl_internal_set_representativeRenderer)) ::UnityW<::UnityEngine::Renderer>  representativeRenderer;

/// @brief Field resourceRequests, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceRequests, put=__cordl_internal_set_resourceRequests)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ResourceRequest*>*  resourceRequests;

 __declspec(property(get=get_sceneIndex)) int32_t  sceneIndex;

 __declspec(property(get=get_sceneName)) ::StringW  sceneName;

/// @brief Field singleLightmap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_singleLightmap, put=__cordl_internal_set_singleLightmap)) ::UnityW<::UnityEngine::Texture2D>  singleLightmap;

/// @brief Method AddMeshToList, addr 0x567d5ec, size 0x118, virtual false, abstract: false, final false
inline void AddMeshToList(::UnityEngine::GameObject*  _gO, ::UnityEngine::MeshRenderer*  mR) ;

/// @brief Method Awake, addr 0x567d44c, size 0xf0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckShouldRepopulate, addr 0x567d704, size 0x30, virtual false, abstract: false, final false
inline bool CheckShouldRepopulate() ;

/// @brief Method GetFromAndToLightmapNames, addr 0x567e308, size 0x1e0, virtual false, abstract: false, final false
inline void GetFromAndToLightmapNames(::by_ref<::StringW>  fromLightmapName, ::by_ref<::StringW>  toLightmapName) ;

/// @brief Method GetLightmap, addr 0x567d7e0, size 0x234, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetLightmap(::StringW  timeOfDay) ;

/// @brief Method IsLightmapWithNameLoaded, addr 0x567e20c, size 0xfc, virtual false, abstract: false, final false
inline bool IsLightmapWithNameLoaded(::StringW  lightmapName) ;

/// @brief Method IsLightmapsWithNamesLoaded, addr 0x567e4e8, size 0x10c, virtual false, abstract: false, final false
inline bool IsLightmapsWithNamesLoaded(::StringW  fromLightmapName, ::StringW  toLightmapName) ;

static inline ::GlobalNamespace::PerSceneRenderData* New_ctor() ;

/// @brief Method OnDisable, addr 0x567d594, size 0x58, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x567d53c, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PopulateLightmaps, addr 0x567da1c, size 0x3c8, virtual false, abstract: false, final false
inline void PopulateLightmaps(::StringW  fromTimeOfDay, ::StringW  toTimeOfDay, ::ArrayW<::UnityEngine::LightmapData*>  lightmaps) ;

/// @brief Method RefreshRenderer, addr 0x567d288, size 0x154, virtual false, abstract: false, final false
inline void RefreshRenderer() ;

/// @brief Method ReleaseLightmap, addr 0x567dde4, size 0x7c, virtual false, abstract: false, final false
inline void ReleaseLightmap(::StringW  oldTimeOfDay) ;

/// @brief Method StartPopulateLightmaps, addr 0x567e804, size 0x154, virtual false, abstract: false, final false
inline void StartPopulateLightmaps(::StringW  fromMomentName, ::StringW  toMomentName) ;

/// @brief Method TryGetLightmapOrAsyncLoad, addr 0x567de60, size 0x3a4, virtual false, abstract: false, final false
inline void TryGetLightmapOrAsyncLoad(::StringW  momentName, ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*  callback) ;

/// @brief Method _PopulateLightmaps_OnLoadLightmap, addr 0x567eaac, size 0x2f8, virtual false, abstract: false, final false
inline void _PopulateLightmaps_OnLoadLightmap(::UnityEngine::Texture2D*  lightmapTex) ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>* const& __cordl_internal_get_OnPopulateToAndFromLightmapsCompleted() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*& __cordl_internal_get_OnPopulateToAndFromLightmapsCompleted() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*>* const& __cordl_internal_get__momentName_to_callbacks() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*>*& __cordl_internal_get__momentName_to_callbacks() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__populateLightmaps_fromMomentLightmap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__populateLightmaps_fromMomentLightmap() ;

constexpr ::StringW const& __cordl_internal_get__populateLightmaps_fromMomentName() const;

constexpr ::StringW& __cordl_internal_get__populateLightmaps_fromMomentName() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__populateLightmaps_toMomentLightmap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__populateLightmaps_toMomentLightmap() ;

constexpr ::StringW const& __cordl_internal_get__populateLightmaps_toMomentName() const;

constexpr ::StringW& __cordl_internal_get__populateLightmaps_toMomentName() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gO() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gO() ;

constexpr int32_t const& __cordl_internal_get_lastLightmapIndex() const;

constexpr int32_t& __cordl_internal_get_lastLightmapIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_lightmapsCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_lightmapsCache() ;

constexpr ::StringW const& __cordl_internal_get_lightmapsResourcePath() const;

constexpr ::StringW& __cordl_internal_get_lightmapsResourcePath() ;

constexpr int32_t const& __cordl_internal_get_mRendererIndex() const;

constexpr int32_t& __cordl_internal_get_mRendererIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_mRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_mRenderers() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_representativeRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_representativeRenderer() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ResourceRequest*>* const& __cordl_internal_get_resourceRequests() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ResourceRequest*>*& __cordl_internal_get_resourceRequests() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_singleLightmap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_singleLightmap() ;

constexpr void __cordl_internal_set_OnPopulateToAndFromLightmapsCompleted(::System::Action_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  value) ;

constexpr void __cordl_internal_set__momentName_to_callbacks(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*>*  value) ;

constexpr void __cordl_internal_set__populateLightmaps_fromMomentLightmap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__populateLightmaps_fromMomentName(::StringW  value) ;

constexpr void __cordl_internal_set__populateLightmaps_toMomentLightmap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__populateLightmaps_toMomentName(::StringW  value) ;

constexpr void __cordl_internal_set_gO(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_lastLightmapIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lightmapsCache(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_lightmapsResourcePath(::StringW  value) ;

constexpr void __cordl_internal_set_mRendererIndex(int32_t  value) ;

constexpr void __cordl_internal_set_mRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_representativeRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_resourceRequests(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ResourceRequest*>*  value) ;

constexpr void __cordl_internal_set_singleLightmap(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x567eda4, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _g_AllScenesPopulateLightmaps_OnOneCompleted, addr 0x567e958, size 0xe4, virtual false, abstract: false, final false
static inline void _g_AllScenesPopulateLightmaps_OnOneCompleted(::GlobalNamespace::PerSceneRenderData*  perSceneRenderData) ;

/// @brief Method g_StartAllScenesPopulateLightmaps, addr 0x567e5f4, size 0x210, virtual false, abstract: false, final false
static inline void g_StartAllScenesPopulateLightmaps(::StringW  fromLightmapName, ::StringW  toLightmapName) ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>* getStaticF__g_allScenesPopulateLightmaps_renderDatasHashSet() ;

static inline ::System::Action* getStaticF_g_OnAllScenesPopulateLightmapsCompleted() ;

/// @brief Method get_IsLoadingLightmaps, addr 0x567d734, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsLoadingLightmaps() ;

/// @brief Method get_LoadingLightmapsCount, addr 0x567d790, size 0x50, virtual false, abstract: false, final false
inline int32_t get_LoadingLightmapsCount() ;

/// @brief Method get_g_AllScenesPopulatingLightmapsLoadCount, addr 0x567ea3c, size 0x70, virtual false, abstract: false, final false
static inline int32_t get_g_AllScenesPopulatingLightmapsLoadCount() ;

/// @brief Method get_sceneIndex, addr 0x567d3dc, size 0x38, virtual false, abstract: false, final false
inline int32_t get_sceneIndex() ;

/// @brief Method get_sceneName, addr 0x567d414, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_sceneName() ;

static inline void setStaticF__g_allScenesPopulateLightmaps_renderDatasHashSet(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  value) ;

static inline void setStaticF_g_OnAllScenesPopulateLightmapsCompleted(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerSceneRenderData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerSceneRenderData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerSceneRenderData(PerSceneRenderData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerSceneRenderData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerSceneRenderData(PerSceneRenderData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{870};

/// @brief Field representativeRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___representativeRenderer;

/// @brief Field lightmapsResourcePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___lightmapsResourcePath;

/// @brief Field singleLightmap, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___singleLightmap;

/// @brief Field lastLightmapIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___lastLightmapIndex;

/// @brief Field gO, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gO;

/// @brief Field mRenderers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___mRenderers;

/// @brief Field mRendererIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___mRendererIndex;

/// @brief Field resourceRequests, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ResourceRequest*>*  ___resourceRequests;

/// @brief Field lightmapsCache, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*  ___lightmapsCache;

/// @brief Field _momentName_to_callbacks, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*>*  ____momentName_to_callbacks;

/// @brief Field _populateLightmaps_fromMomentName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____populateLightmaps_fromMomentName;

/// @brief Field _populateLightmaps_toMomentName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____populateLightmaps_toMomentName;

/// @brief Field _populateLightmaps_fromMomentLightmap, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____populateLightmaps_fromMomentLightmap;

/// @brief Field _populateLightmaps_toMomentLightmap, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____populateLightmaps_toMomentLightmap;

/// @brief Field OnPopulateToAndFromLightmapsCompleted, offset: 0x90, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  ___OnPopulateToAndFromLightmapsCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___representativeRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___lightmapsResourcePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___singleLightmap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___lastLightmapIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___gO) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___mRenderers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___mRendererIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___resourceRequests) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___lightmapsCache) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ____momentName_to_callbacks) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ____populateLightmaps_fromMomentName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ____populateLightmaps_toMomentName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ____populateLightmaps_fromMomentLightmap) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ____populateLightmaps_toMomentLightmap) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData, ___OnPopulateToAndFromLightmapsCompleted) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerSceneRenderData) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerSceneRenderData/<>c__DisplayClass27_0
class CORDL_TYPE PerSceneRenderData___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PerSceneRenderData>  __4__this;

/// @brief Field callbacks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacks, put=__cordl_internal_set_callbacks)) ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*  callbacks;

/// @brief Field momentName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_momentName, put=__cordl_internal_set_momentName)) ::StringW  momentName;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::ResourceRequest*  request;

static inline ::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0* New_ctor() ;

/// @brief Method <TryGetLightmapOrAsyncLoad>b__0, addr 0x567f1a0, size 0x298, virtual false, abstract: false, final false
inline void _TryGetLightmapOrAsyncLoad_b__0(::UnityEngine::AsyncOperation*  ao) ;

constexpr ::UnityW<::GlobalNamespace::PerSceneRenderData> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PerSceneRenderData>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>* const& __cordl_internal_get_callbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*& __cordl_internal_get_callbacks() ;

constexpr ::StringW const& __cordl_internal_get_momentName() const;

constexpr ::StringW& __cordl_internal_get_momentName() ;

constexpr ::UnityEngine::ResourceRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::ResourceRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PerSceneRenderData>  value) ;

constexpr void __cordl_internal_set_callbacks(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*  value) ;

constexpr void __cordl_internal_set_momentName(::StringW  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::ResourceRequest*  value) ;

/// @brief Method .ctor, addr 0x567e204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerSceneRenderData___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerSceneRenderData___c__DisplayClass27_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerSceneRenderData___c__DisplayClass27_0(PerSceneRenderData___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerSceneRenderData___c__DisplayClass27_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerSceneRenderData___c__DisplayClass27_0(PerSceneRenderData___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{869};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PerSceneRenderData>  _____4__this;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::ResourceRequest*  ___request;

/// @brief Field momentName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___momentName;

/// @brief Field callbacks, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*>*  ___callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0, ___request) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0, ___momentName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0, ___callbacks) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass27_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerSceneRenderData/<>c__DisplayClass23_0
class CORDL_TYPE PerSceneRenderData___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PerSceneRenderData>  __4__this;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::ResourceRequest*  request;

/// @brief Field timeOfDay, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeOfDay, put=__cordl_internal_set_timeOfDay)) ::StringW  timeOfDay;

static inline ::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <GetLightmap>b__0, addr 0x567efec, size 0x1b4, virtual false, abstract: false, final false
inline void _GetLightmap_b__0(::UnityEngine::AsyncOperation*  ao) ;

constexpr ::UnityW<::GlobalNamespace::PerSceneRenderData> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PerSceneRenderData>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::ResourceRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::ResourceRequest*& __cordl_internal_get_request() ;

constexpr ::StringW const& __cordl_internal_get_timeOfDay() const;

constexpr ::StringW& __cordl_internal_get_timeOfDay() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PerSceneRenderData>  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::ResourceRequest*  value) ;

constexpr void __cordl_internal_set_timeOfDay(::StringW  value) ;

/// @brief Method .ctor, addr 0x567da14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PerSceneRenderData___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PerSceneRenderData___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PerSceneRenderData___c__DisplayClass23_0(PerSceneRenderData___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PerSceneRenderData___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PerSceneRenderData___c__DisplayClass23_0(PerSceneRenderData___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{868};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PerSceneRenderData>  _____4__this;

/// @brief Field timeOfDay, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___timeOfDay;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::ResourceRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0, ___timeOfDay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0, ___request) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerSceneRenderData___c__DisplayClass23_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
