#pragma once
// IWYU pragma private; include "GlobalNamespace/ftLightmapsStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ftLightmapsStorage)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class ftLightmapsStorage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ftLightmapsStorage*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ftLightmapsStorage*, "", "ftLightmapsStorage");
// [ExecuteInEditMode]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ftLightmapsStorage
class CORDL_TYPE ftLightmapsStorage : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field anyVolumes, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyVolumes, put=__cordl_internal_set_anyVolumes)) bool  anyVolumes;

/// @brief Field assetList, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_assetList, put=__cordl_internal_set_assetList)) ::System::Collections::Generic::List_1<::StringW>*  assetList;

/// @brief Field bakedIDs, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedIDs, put=__cordl_internal_set_bakedIDs)) ::System::Collections::Generic::List_1<int32_t>*  bakedIDs;

/// @brief Field bakedIDsTerrain, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedIDsTerrain, put=__cordl_internal_set_bakedIDsTerrain)) ::System::Collections::Generic::List_1<int32_t>*  bakedIDsTerrain;

/// @brief Field bakedLightChannels, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedLightChannels, put=__cordl_internal_set_bakedLightChannels)) ::System::Collections::Generic::List_1<int32_t>*  bakedLightChannels;

/// @brief Field bakedLights, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedLights, put=__cordl_internal_set_bakedLights)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Light>>*  bakedLights;

/// @brief Field bakedRenderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedRenderers, put=__cordl_internal_set_bakedRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  bakedRenderers;

/// @brief Field bakedRenderersTerrain, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedRenderersTerrain, put=__cordl_internal_set_bakedRenderersTerrain)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  bakedRenderersTerrain;

/// @brief Field bakedScaleOffset, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedScaleOffset, put=__cordl_internal_set_bakedScaleOffset)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  bakedScaleOffset;

/// @brief Field bakedScaleOffsetTerrain, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedScaleOffsetTerrain, put=__cordl_internal_set_bakedScaleOffsetTerrain)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  bakedScaleOffsetTerrain;

/// @brief Field bakedVertexColorMesh, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedVertexColorMesh, put=__cordl_internal_set_bakedVertexColorMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  bakedVertexColorMesh;

/// @brief Field compressedVolumes, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_compressedVolumes, put=__cordl_internal_set_compressedVolumes)) bool  compressedVolumes;

/// @brief Field dirMaps, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirMaps, put=__cordl_internal_set_dirMaps)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  dirMaps;

/// @brief Field emptyDirectionTex, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyDirectionTex, put=__cordl_internal_set_emptyDirectionTex)) ::UnityW<::UnityEngine::Texture2D>  emptyDirectionTex;

/// @brief Field idremap, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_idremap, put=__cordl_internal_set_idremap)) ::ArrayW<int32_t>  idremap;

/// @brief Field maps, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_maps, put=__cordl_internal_set_maps)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  maps;

/// @brief Field mapsMode, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapsMode, put=__cordl_internal_set_mapsMode)) ::System::Collections::Generic::List_1<int32_t>*  mapsMode;

/// @brief Field masks, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_masks, put=__cordl_internal_set_masks)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  masks;

/// @brief Field nonBakedRenderers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonBakedRenderers, put=__cordl_internal_set_nonBakedRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  nonBakedRenderers;

/// @brief Field rnmMaps0, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnmMaps0, put=__cordl_internal_set_rnmMaps0)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  rnmMaps0;

/// @brief Field rnmMaps1, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnmMaps1, put=__cordl_internal_set_rnmMaps1)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  rnmMaps1;

/// @brief Field rnmMaps2, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnmMaps2, put=__cordl_internal_set_rnmMaps2)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  rnmMaps2;

/// @brief Field usesRealtimeGI, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_usesRealtimeGI, put=__cordl_internal_set_usesRealtimeGI)) bool  usesRealtimeGI;

/// @brief Field uvOverlapAssetList, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_uvOverlapAssetList, put=__cordl_internal_set_uvOverlapAssetList)) ::System::Collections::Generic::List_1<int32_t>*  uvOverlapAssetList;

/// @brief Method Awake, addr 0x5f2b008, size 0x84, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ftLightmapsStorage* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5f2b130, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5f2b08c, size 0xa4, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_anyVolumes() const;

constexpr bool& __cordl_internal_get_anyVolumes() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_assetList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_assetList() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_bakedIDs() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_bakedIDs() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_bakedIDsTerrain() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_bakedIDsTerrain() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_bakedLightChannels() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_bakedLightChannels() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Light>>* const& __cordl_internal_get_bakedLights() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Light>>*& __cordl_internal_get_bakedLights() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_bakedRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_bakedRenderers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& __cordl_internal_get_bakedRenderersTerrain() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& __cordl_internal_get_bakedRenderersTerrain() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_bakedScaleOffset() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_bakedScaleOffset() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_bakedScaleOffsetTerrain() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_bakedScaleOffsetTerrain() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_bakedVertexColorMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_bakedVertexColorMesh() ;

constexpr bool const& __cordl_internal_get_compressedVolumes() const;

constexpr bool& __cordl_internal_get_compressedVolumes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_dirMaps() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_dirMaps() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_emptyDirectionTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_emptyDirectionTex() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_idremap() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_idremap() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_maps() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_maps() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_mapsMode() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_mapsMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_masks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_masks() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_nonBakedRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_nonBakedRenderers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_rnmMaps0() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_rnmMaps0() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_rnmMaps1() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_rnmMaps1() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_rnmMaps2() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_rnmMaps2() ;

constexpr bool const& __cordl_internal_get_usesRealtimeGI() const;

constexpr bool& __cordl_internal_get_usesRealtimeGI() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_uvOverlapAssetList() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_uvOverlapAssetList() ;

constexpr void __cordl_internal_set_anyVolumes(bool  value) ;

constexpr void __cordl_internal_set_assetList(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_bakedIDs(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_bakedIDsTerrain(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_bakedLightChannels(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_bakedLights(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Light>>*  value) ;

constexpr void __cordl_internal_set_bakedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_bakedRenderersTerrain(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value) ;

constexpr void __cordl_internal_set_bakedScaleOffset(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_bakedScaleOffsetTerrain(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_bakedVertexColorMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_compressedVolumes(bool  value) ;

constexpr void __cordl_internal_set_dirMaps(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_emptyDirectionTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_idremap(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_maps(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_mapsMode(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_masks(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_nonBakedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_rnmMaps0(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_rnmMaps1(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_rnmMaps2(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_usesRealtimeGI(bool  value) ;

constexpr void __cordl_internal_set_uvOverlapAssetList(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5f2b184, size 0x440, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ftLightmapsStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ftLightmapsStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ftLightmapsStorage(ftLightmapsStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ftLightmapsStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ftLightmapsStorage(ftLightmapsStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32456};

/// @brief Field externalStorage offset 0xffffffff size 0x1
static constexpr bool  externalStorage{false};

/// @brief Field bakedRenderers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___bakedRenderers;

/// @brief Field nonBakedRenderers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___nonBakedRenderers;

/// @brief Field bakedLights, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Light>>*  ___bakedLights;

/// @brief Field bakedRenderersTerrain, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  ___bakedRenderersTerrain;

/// @brief Field maps, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___maps;

/// @brief Field masks, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___masks;

/// @brief Field dirMaps, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___dirMaps;

/// @brief Field rnmMaps0, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___rnmMaps0;

/// @brief Field rnmMaps1, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___rnmMaps1;

/// @brief Field rnmMaps2, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___rnmMaps2;

/// @brief Field mapsMode, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___mapsMode;

/// @brief Field bakedIDs, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___bakedIDs;

/// @brief Field bakedScaleOffset, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___bakedScaleOffset;

/// @brief Field bakedVertexColorMesh, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___bakedVertexColorMesh;

/// @brief Field bakedLightChannels, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___bakedLightChannels;

/// @brief Field bakedIDsTerrain, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___bakedIDsTerrain;

/// @brief Field bakedScaleOffsetTerrain, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___bakedScaleOffsetTerrain;

/// @brief Field assetList, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___assetList;

/// @brief Field uvOverlapAssetList, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___uvOverlapAssetList;

/// @brief Field idremap, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___idremap;

/// @brief Field usesRealtimeGI, offset: 0xc0, size: 0x1, def value: None
 bool  ___usesRealtimeGI;

/// @brief Field emptyDirectionTex, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___emptyDirectionTex;

/// @brief Field anyVolumes, offset: 0xd0, size: 0x1, def value: None
 bool  ___anyVolumes;

/// @brief Field compressedVolumes, offset: 0xd1, size: 0x1, def value: None
 bool  ___compressedVolumes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedRenderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___nonBakedRenderers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedLights) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedRenderersTerrain) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___maps) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___masks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___dirMaps) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___rnmMaps0) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___rnmMaps1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___rnmMaps2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___mapsMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedIDs) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedScaleOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedVertexColorMesh) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedLightChannels) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedIDsTerrain) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___bakedScaleOffsetTerrain) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___assetList) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___uvOverlapAssetList) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___idremap) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___usesRealtimeGI) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___emptyDirectionTex) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___anyVolumes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftLightmapsStorage, ___compressedVolumes) == 0xd1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ftLightmapsStorage) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
