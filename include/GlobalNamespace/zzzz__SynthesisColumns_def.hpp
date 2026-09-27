#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisColumns.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthesisColumns)
namespace GlobalNamespace {
class SynthesisArcadeObject;
}
namespace GlobalNamespace {
struct SynthesisColumns_ColumnShape;
}
namespace GlobalNamespace {
class SynthesisColumns_ColumnVisualRuntimeData;
}
namespace GlobalNamespace {
struct SynthesisColumns_RenderPipelineType;
}
namespace GlobalNamespace {
class SynthesisColumns_SynthesisColumnLayoutEntry;
}
namespace GlobalNamespace {
class SynthesisColumns_SynthesisColumnLayoutPayload;
}
namespace GlobalNamespace {
class SynthesisColumns_TextureMapping;
}
namespace GlobalNamespace {
class SynthesisColumns__DestroyAfterPhysicsStep_d__26;
}
namespace GlobalNamespace {
class SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34;
}
namespace GlobalNamespace {
struct SynthesisColumns___c__DisplayClass37_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SynthesisColumns;
}
namespace GlobalNamespace {
class SynthesisColumns_ColumnVisualRuntimeData;
}
namespace GlobalNamespace {
class SynthesisColumns_SynthesisColumnLayoutEntry;
}
namespace GlobalNamespace {
class SynthesisColumns_SynthesisColumnLayoutPayload;
}
namespace GlobalNamespace {
class SynthesisColumns_TextureMapping;
}
namespace GlobalNamespace {
class SynthesisColumns__DestroyAfterPhysicsStep_d__26;
}
namespace GlobalNamespace {
class SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SynthesisColumns*);
MARK_REF_T(::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData*);
MARK_REF_T(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*);
MARK_REF_T(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*);
MARK_REF_T(::GlobalNamespace::SynthesisColumns_TextureMapping*);
MARK_REF_T(::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*);
MARK_REF_T(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns*, "", "SynthesisColumns");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData*, "", "SynthesisColumns/ColumnVisualRuntimeData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*, "", "SynthesisColumns/SynthesisColumnLayoutEntry");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*, "", "SynthesisColumns/SynthesisColumnLayoutPayload");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns_TextureMapping*, "", "SynthesisColumns/TextureMapping");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26*, "", "SynthesisColumns/<DestroyAfterPhysicsStep>d__26");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34*, "", "SynthesisColumns/<DownloadAndCacheTextureCoroutine>d__34");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisColumns
class CORDL_TYPE SynthesisColumns : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColumnShape = ::GlobalNamespace::SynthesisColumns_ColumnShape;

using ColumnVisualRuntimeData = ::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData;

using RenderPipelineType = ::GlobalNamespace::SynthesisColumns_RenderPipelineType;

using SynthesisColumnLayoutEntry = ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry;

using SynthesisColumnLayoutPayload = ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload;

using TextureMapping = ::GlobalNamespace::SynthesisColumns_TextureMapping;

using _DestroyAfterPhysicsStep_d__26 = ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26;

using _DownloadAndCacheTextureCoroutine_d__34 = ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34;

using __c__DisplayClass37_0 = ::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0;

/// @brief Field _currentLayout, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentLayout, put=__cordl_internal_set__currentLayout)) ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*  _currentLayout;

/// @brief Field _dynamicTextureCache, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__dynamicTextureCache, put=__cordl_internal_set__dynamicTextureCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*  _dynamicTextureCache;

/// @brief Field _lastSceneSpawnedFor, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSceneSpawnedFor, put=__cordl_internal_set__lastSceneSpawnedFor)) ::StringW  _lastSceneSpawnedFor;

/// @brief Field _mpb, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__mpb, put=__cordl_internal_set__mpb)) ::UnityEngine::MaterialPropertyBlock*  _mpb;

/// @brief Field _pendingTextureAssignments, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingTextureAssignments, put=__cordl_internal_set__pendingTextureAssignments)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>*  _pendingTextureAssignments;

/// @brief Field _skinsRoot, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__skinsRoot, put=__cordl_internal_set__skinsRoot)) ::StringW  _skinsRoot;

/// @brief Field _spawnedColumns, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnedColumns, put=__cordl_internal_set__spawnedColumns)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _spawnedColumns;

/// @brief Field defaultColumnPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultColumnPrefab, put=__cordl_internal_set_defaultColumnPrefab)) ::UnityW<::UnityEngine::GameObject>  defaultColumnPrefab;

/// @brief Field defaultMaterialBuiltin, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMaterialBuiltin, put=__cordl_internal_set_defaultMaterialBuiltin)) ::UnityW<::UnityEngine::Material>  defaultMaterialBuiltin;

/// @brief Field defaultMaterialURP, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMaterialURP, put=__cordl_internal_set_defaultMaterialURP)) ::UnityW<::UnityEngine::Material>  defaultMaterialURP;

/// @brief Field defaultRectPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultRectPrefab, put=__cordl_internal_set_defaultRectPrefab)) ::UnityW<::UnityEngine::GameObject>  defaultRectPrefab;

/// @brief Field textureLibrary, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureLibrary, put=__cordl_internal_set_textureLibrary)) ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_TextureMapping*>*  textureLibrary;

/// @brief Method ApplyDownloadedTextureToPending, addr 0x5b2c060, size 0x350, virtual false, abstract: false, final false
inline void ApplyDownloadedTextureToPending(::StringW  textureKey, ::UnityEngine::Texture2D*  tex) ;

/// @brief Method ApplyTexture, addr 0x5b2a27c, size 0x698, virtual false, abstract: false, final false
inline void ApplyTexture(::UnityEngine::GameObject*  columnGO, ::StringW  textureKey, float_t  worldDiameterM) ;

/// @brief Method ApplyTextureToRenderer, addr 0x5b2b1b0, size 0x868, virtual false, abstract: false, final false
inline void ApplyTextureToRenderer(::UnityEngine::MeshRenderer*  r, ::UnityEngine::Texture2D*  tex, float_t  worldDiameterM) ;

/// @brief Method AutoAssignFromResources, addr 0x5b25dec, size 0x618, virtual false, abstract: false, final false
inline void AutoAssignFromResources() ;

/// @brief Method BuildStripUVBox, addr 0x5b2a914, size 0x4b4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> BuildStripUVBox(float_t  w, float_t  d, float_t  h, float_t  tileMeters) ;

/// @brief Method ComputeTileY_FromAspect, addr 0x5b2c3b0, size 0x160, virtual false, abstract: false, final false
inline float_t ComputeTileY_FromAspect(::UnityEngine::Texture2D*  tex, float_t  heightMeters, float_t  tileMetersX) ;

/// [IteratorStateMachine(typeof(SynthesisColumns::<DestroyAfterPhysicsStep>d__26))]
/// @brief Method DestroyAfterPhysicsStep, addr 0x5b29b7c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DestroyAfterPhysicsStep(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  toDestroy) ;

/// [IteratorStateMachine(typeof(SynthesisColumns::<DownloadAndCacheTextureCoroutine>d__34))]
/// @brief Method DownloadAndCacheTextureCoroutine, addr 0x5b2bd4c, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DownloadAndCacheTextureCoroutine(::StringW  url) ;

/// @brief Method FindTexture, addr 0x5b2adc8, size 0x3e8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> FindTexture(::StringW  key) ;

/// @brief Method GetActivePipeline, addr 0x5b29770, size 0x98, virtual false, abstract: false, final false
inline ::GlobalNamespace::SynthesisColumns_RenderPipelineType GetActivePipeline() ;

/// @brief Method GetCacheFilePathForUrl, addr 0x5b2bdd4, size 0x264, virtual false, abstract: false, final false
inline ::StringW GetCacheFilePathForUrl(::StringW  url) ;

/// @brief Method GetSkinsRootFolder, addr 0x5b29808, size 0xe8, virtual false, abstract: false, final false
inline ::StringW GetSkinsRootFolder() ;

/// @brief Method HandleSceneLoaded, addr 0x5b298f0, size 0x70, virtual false, abstract: false, final false
inline void HandleSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method IsHttpUrl, addr 0x5b2bcb8, size 0x94, virtual false, abstract: false, final false
inline bool IsHttpUrl(::StringW  s) ;

/// @brief Method LoadLayoutFromJson, addr 0x5b2672c, size 0x2c, virtual false, abstract: false, final false
inline void LoadLayoutFromJson(::StringW  json) ;

static inline ::GlobalNamespace::SynthesisColumns* New_ctor() ;

/// @brief Method ParseColumnsJson, addr 0x5b29374, size 0x48, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload* ParseColumnsJson(::StringW  json) ;

/// @brief Method ParseShape, addr 0x5b29664, size 0x10c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SynthesisColumns_ColumnShape ParseShape(::StringW  s) ;

/// @brief Method SafeClearSpawnedColumns, addr 0x5b29960, size 0x21c, virtual false, abstract: false, final false
inline void SafeClearSpawnedColumns() ;

/// @brief Method SpawnForActiveScene, addr 0x5b293bc, size 0x2a0, virtual false, abstract: false, final false
inline void SpawnForActiveScene() ;

/// @brief Method SpawnSingleColumn, addr 0x5b29c10, size 0x66c, virtual false, abstract: false, final false
inline void SpawnSingleColumn(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*  entry) ;

/// @brief Method TryLoadTextureFromDisk, addr 0x5b2ba18, size 0x2a0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> TryLoadTextureFromDisk(::StringW  keyOrUrl) ;

/// [CompilerGenerated]
/// @brief Method <BuildStripUVBox>g__Face|37_0, addr 0x5b2c510, size 0x248, virtual false, abstract: false, final false
static inline void _BuildStripUVBox_g__Face_37_0(::UnityEngine::Vector3  bl, ::UnityEngine::Vector3  tl, ::UnityEngine::Vector3  tr, ::UnityEngine::Vector3  br, ::UnityEngine::Vector2  uvBL, ::UnityEngine::Vector2  uvTL, ::UnityEngine::Vector2  uvTR, ::UnityEngine::Vector2  uvBR, ::by_ref<::GlobalNamespace::SynthesisColumns___c__DisplayClass37_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload* const& __cordl_internal_get__currentLayout() const;

constexpr ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*& __cordl_internal_get__currentLayout() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get__dynamicTextureCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__dynamicTextureCache() ;

constexpr ::StringW const& __cordl_internal_get__lastSceneSpawnedFor() const;

constexpr ::StringW& __cordl_internal_get__lastSceneSpawnedFor() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__mpb() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__mpb() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>* const& __cordl_internal_get__pendingTextureAssignments() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>*& __cordl_internal_get__pendingTextureAssignments() ;

constexpr ::StringW const& __cordl_internal_get__skinsRoot() const;

constexpr ::StringW& __cordl_internal_get__skinsRoot() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__spawnedColumns() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__spawnedColumns() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_defaultColumnPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_defaultColumnPrefab() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMaterialBuiltin() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMaterialBuiltin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMaterialURP() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMaterialURP() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_defaultRectPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_defaultRectPrefab() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_TextureMapping*>* const& __cordl_internal_get_textureLibrary() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_TextureMapping*>*& __cordl_internal_get_textureLibrary() ;

constexpr void __cordl_internal_set__currentLayout(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*  value) ;

constexpr void __cordl_internal_set__dynamicTextureCache(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set__lastSceneSpawnedFor(::StringW  value) ;

constexpr void __cordl_internal_set__mpb(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__pendingTextureAssignments(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>*  value) ;

constexpr void __cordl_internal_set__skinsRoot(::StringW  value) ;

constexpr void __cordl_internal_set__spawnedColumns(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_defaultColumnPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_defaultMaterialBuiltin(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultMaterialURP(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultRectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_textureLibrary(::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_TextureMapping*>*  value) ;

/// @brief Method .ctor, addr 0x5b2c758, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method readColumnsFromJsonFile, addr 0x5b26404, size 0x328, virtual false, abstract: false, final false
inline ::StringW readColumnsFromJsonFile(::GlobalNamespace::SynthesisArcadeObject*  _instance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisColumns(SynthesisColumns && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisColumns(SynthesisColumns const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3642};

/// [Header("Default column prefab (cylinder mesh + collider)")]
/// @brief Field defaultColumnPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___defaultColumnPrefab;

/// [Header("Default rectangular prefab (box mesh + collider)")]
/// @brief Field defaultRectPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___defaultRectPrefab;

/// [Header("Column materials per pipeline")]
/// @brief Field defaultMaterialURP, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMaterialURP;

/// @brief Field defaultMaterialBuiltin, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMaterialBuiltin;

/// [Header("Optional known textures (can be Resources, Addressables, etc.)")]
/// @brief Field textureLibrary, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_TextureMapping*>*  ___textureLibrary;

/// @brief Field _currentLayout, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload*  ____currentLayout;

/// @brief Field _dynamicTextureCache, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Texture2D>>*  ____dynamicTextureCache;

/// @brief Field _pendingTextureAssignments, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>*  ____pendingTextureAssignments;

/// @brief Field _lastSceneSpawnedFor, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____lastSceneSpawnedFor;

/// @brief Field _skinsRoot, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____skinsRoot;

/// @brief Field _spawnedColumns, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____spawnedColumns;

/// @brief Field _mpb, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____mpb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ___defaultColumnPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ___defaultRectPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ___defaultMaterialURP) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ___defaultMaterialBuiltin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ___textureLibrary) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ____currentLayout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ____dynamicTextureCache) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ____pendingTextureAssignments) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ____lastSceneSpawnedFor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ____skinsRoot) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ____spawnedColumns) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns, ____mpb) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisColumns/<DownloadAndCacheTextureCoroutine>d__34
class CORDL_TYPE SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SynthesisColumns>  __4__this;

/// @brief Field <cachePath>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachePath_5__2, put=__cordl_internal_set__cachePath_5__2)) ::StringW  _cachePath_5__2;

/// @brief Field <req>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__req_5__3, put=__cordl_internal_set__req_5__3)) ::UnityEngine::Networking::UnityWebRequest*  _req_5__3;

/// @brief Field url, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_url, put=__cordl_internal_set_url)) ::StringW  url;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b2ca2c, size 0x5a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b2d07c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b2d084, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b2d0bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b2ca10, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::SynthesisColumns> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SynthesisColumns>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get__cachePath_5__2() const;

constexpr ::StringW& __cordl_internal_get__cachePath_5__2() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__req_5__3() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__req_5__3() ;

constexpr ::StringW const& __cordl_internal_get_url() const;

constexpr ::StringW& __cordl_internal_get_url() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SynthesisColumns>  value) ;

constexpr void __cordl_internal_set__cachePath_5__2(::StringW  value) ;

constexpr void __cordl_internal_set__req_5__3(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_url(::StringW  value) ;

/// @brief Method <>m__Finally1, addr 0x5b2cfcc, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b2c038, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34(SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34(SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3641};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SynthesisColumns>  _____4__this;

/// @brief Field url, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___url;

/// @brief Field <cachePath>5__2, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____cachePath_5__2;

/// @brief Field <req>5__3, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____req_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34, ___url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34, ____cachePath_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34, ____req_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns__DownloadAndCacheTextureCoroutine_d__34) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisColumns/<DestroyAfterPhysicsStep>d__26
class CORDL_TYPE SynthesisColumns__DestroyAfterPhysicsStep_d__26 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field toDestroy, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_toDestroy, put=__cordl_internal_set_toDestroy)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  toDestroy;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b2c850, size 0x178, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b2c9c8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b2c9d0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b2ca08, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b2c84c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_toDestroy() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_toDestroy() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_toDestroy(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b29be8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns__DestroyAfterPhysicsStep_d__26() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns__DestroyAfterPhysicsStep_d__26", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisColumns__DestroyAfterPhysicsStep_d__26(SynthesisColumns__DestroyAfterPhysicsStep_d__26 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns__DestroyAfterPhysicsStep_d__26", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisColumns__DestroyAfterPhysicsStep_d__26(SynthesisColumns__DestroyAfterPhysicsStep_d__26 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3640};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field toDestroy, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___toDestroy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26, ___toDestroy) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns__DestroyAfterPhysicsStep_d__26) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisColumns/ColumnVisualRuntimeData
class CORDL_TYPE SynthesisColumns_ColumnVisualRuntimeData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field worldDiameterM, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_worldDiameterM, put=__cordl_internal_set_worldDiameterM)) float_t  worldDiameterM;

static inline ::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_worldDiameterM() const;

constexpr float_t& __cordl_internal_get_worldDiameterM() ;

constexpr void __cordl_internal_set_worldDiameterM(float_t  value) ;

/// @brief Method .ctor, addr 0x5b2c844, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns_ColumnVisualRuntimeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns_ColumnVisualRuntimeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisColumns_ColumnVisualRuntimeData(SynthesisColumns_ColumnVisualRuntimeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns_ColumnVisualRuntimeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisColumns_ColumnVisualRuntimeData(SynthesisColumns_ColumnVisualRuntimeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3637};

/// @brief Field worldDiameterM, offset: 0x20, size: 0x4, def value: None
 float_t  ___worldDiameterM;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData, ___worldDiameterM) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns_ColumnVisualRuntimeData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisColumns/TextureMapping
class CORDL_TYPE SynthesisColumns_TextureMapping : public ::System::Object {
public:
// Declarations
/// @brief Field key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::StringW  key;

/// @brief Field texture, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture2D>  texture;

static inline ::GlobalNamespace::SynthesisColumns_TextureMapping* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_key() const;

constexpr ::StringW& __cordl_internal_get_key() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_texture() ;

constexpr void __cordl_internal_set_key(::StringW  value) ;

constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x5b2965c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns_TextureMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns_TextureMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisColumns_TextureMapping(SynthesisColumns_TextureMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns_TextureMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisColumns_TextureMapping(SynthesisColumns_TextureMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3636};

/// @brief Field key, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___key;

/// @brief Field texture, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___texture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns_TextureMapping, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_TextureMapping, ___texture) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns_TextureMapping) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisColumns/SynthesisColumnLayoutEntry
class CORDL_TYPE SynthesisColumns_SynthesisColumnLayoutEntry : public ::System::Object {
public:
// Declarations
/// @brief Field depth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) float_t  depth;

/// @brief Field diameter, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_diameter, put=__cordl_internal_set_diameter)) float_t  diameter;

/// @brief Field height, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field rotate, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotate, put=__cordl_internal_set_rotate)) float_t  rotate;

/// @brief Field shape, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::StringW  shape;

/// @brief Field texture, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_texture, put=__cordl_internal_set_texture)) ::StringW  texture;

/// @brief Field width, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) float_t  width;

/// @brief Field x, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) float_t  x;

/// @brief Field y, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_y, put=__cordl_internal_set_y)) float_t  y;

static inline ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry* New_ctor() ;

constexpr float_t const& __cordl_internal_get_depth() const;

constexpr float_t& __cordl_internal_get_depth() ;

constexpr float_t const& __cordl_internal_get_diameter() const;

constexpr float_t& __cordl_internal_get_diameter() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr float_t const& __cordl_internal_get_rotate() const;

constexpr float_t& __cordl_internal_get_rotate() ;

constexpr ::StringW const& __cordl_internal_get_shape() const;

constexpr ::StringW& __cordl_internal_get_shape() ;

constexpr ::StringW const& __cordl_internal_get_texture() const;

constexpr ::StringW& __cordl_internal_get_texture() ;

constexpr float_t const& __cordl_internal_get_width() const;

constexpr float_t& __cordl_internal_get_width() ;

constexpr float_t const& __cordl_internal_get_x() const;

constexpr float_t& __cordl_internal_get_x() ;

constexpr float_t const& __cordl_internal_get_y() const;

constexpr float_t& __cordl_internal_get_y() ;

constexpr void __cordl_internal_set_depth(float_t  value) ;

constexpr void __cordl_internal_set_diameter(float_t  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_rotate(float_t  value) ;

constexpr void __cordl_internal_set_shape(::StringW  value) ;

constexpr void __cordl_internal_set_texture(::StringW  value) ;

constexpr void __cordl_internal_set_width(float_t  value) ;

constexpr void __cordl_internal_set_x(float_t  value) ;

constexpr void __cordl_internal_set_y(float_t  value) ;

/// @brief Method .ctor, addr 0x5b2c83c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns_SynthesisColumnLayoutEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns_SynthesisColumnLayoutEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisColumns_SynthesisColumnLayoutEntry(SynthesisColumns_SynthesisColumnLayoutEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns_SynthesisColumnLayoutEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisColumns_SynthesisColumnLayoutEntry(SynthesisColumns_SynthesisColumnLayoutEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3635};

/// @brief Field shape, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___shape;

/// @brief Field x, offset: 0x18, size: 0x4, def value: None
 float_t  ___x;

/// @brief Field y, offset: 0x1c, size: 0x4, def value: None
 float_t  ___y;

/// @brief Field diameter, offset: 0x20, size: 0x4, def value: None
 float_t  ___diameter;

/// @brief Field width, offset: 0x24, size: 0x4, def value: None
 float_t  ___width;

/// @brief Field depth, offset: 0x28, size: 0x4, def value: None
 float_t  ___depth;

/// @brief Field height, offset: 0x2c, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field texture, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___texture;

/// @brief Field rotate, offset: 0x38, size: 0x4, def value: None
 float_t  ___rotate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___shape) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___x) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___y) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___diameter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___width) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___depth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___texture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry, ___rotate) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisColumns/SynthesisColumnLayoutPayload
class CORDL_TYPE SynthesisColumns_SynthesisColumnLayoutPayload : public ::System::Object {
public:
// Declarations
/// @brief Field columns, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_columns, put=__cordl_internal_set_columns)) ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>*  columns;

static inline ::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>* const& __cordl_internal_get_columns() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>*& __cordl_internal_get_columns() ;

constexpr void __cordl_internal_set_columns(::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>*  value) ;

/// @brief Method .ctor, addr 0x5b2c834, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisColumns_SynthesisColumnLayoutPayload() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns_SynthesisColumnLayoutPayload", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisColumns_SynthesisColumnLayoutPayload(SynthesisColumns_SynthesisColumnLayoutPayload && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisColumns_SynthesisColumnLayoutPayload", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisColumns_SynthesisColumnLayoutPayload(SynthesisColumns_SynthesisColumnLayoutPayload const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3634};

/// @brief Field columns, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutEntry*>*  ___columns;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload, ___columns) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisColumns_SynthesisColumnLayoutPayload) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
