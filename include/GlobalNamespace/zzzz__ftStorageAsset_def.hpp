#pragma once
// IWYU pragma private; include "GlobalNamespace/ftStorageAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ftStorageAsset)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class ftStorageAsset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ftStorageAsset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ftStorageAsset*, "", "ftStorageAsset");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ftStorageAsset
class CORDL_TYPE ftStorageAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field assetList, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_assetList, put=__cordl_internal_set_assetList)) ::System::Collections::Generic::List_1<::StringW>*  assetList;

/// @brief Field bakedIDs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedIDs, put=__cordl_internal_set_bakedIDs)) ::System::Collections::Generic::List_1<int32_t>*  bakedIDs;

/// @brief Field bakedIDsTerrain, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedIDsTerrain, put=__cordl_internal_set_bakedIDsTerrain)) ::System::Collections::Generic::List_1<int32_t>*  bakedIDsTerrain;

/// @brief Field bakedLightChannels, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedLightChannels, put=__cordl_internal_set_bakedLightChannels)) ::System::Collections::Generic::List_1<int32_t>*  bakedLightChannels;

/// @brief Field bakedScaleOffset, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedScaleOffset, put=__cordl_internal_set_bakedScaleOffset)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  bakedScaleOffset;

/// @brief Field bakedScaleOffsetTerrain, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedScaleOffsetTerrain, put=__cordl_internal_set_bakedScaleOffsetTerrain)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  bakedScaleOffsetTerrain;

/// @brief Field bakedVertexColorMesh, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedVertexColorMesh, put=__cordl_internal_set_bakedVertexColorMesh)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  bakedVertexColorMesh;

/// @brief Field dirMaps, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirMaps, put=__cordl_internal_set_dirMaps)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  dirMaps;

/// @brief Field idremap, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_idremap, put=__cordl_internal_set_idremap)) ::ArrayW<int32_t>  idremap;

/// @brief Field maps, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_maps, put=__cordl_internal_set_maps)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  maps;

/// @brief Field mapsMode, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapsMode, put=__cordl_internal_set_mapsMode)) ::System::Collections::Generic::List_1<int32_t>*  mapsMode;

/// @brief Field masks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_masks, put=__cordl_internal_set_masks)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  masks;

/// @brief Field rnmMaps0, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnmMaps0, put=__cordl_internal_set_rnmMaps0)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  rnmMaps0;

/// @brief Field rnmMaps1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnmMaps1, put=__cordl_internal_set_rnmMaps1)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  rnmMaps1;

/// @brief Field rnmMaps2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rnmMaps2, put=__cordl_internal_set_rnmMaps2)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  rnmMaps2;

/// @brief Field uvOverlapAssetList, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_uvOverlapAssetList, put=__cordl_internal_set_uvOverlapAssetList)) ::System::Collections::Generic::List_1<int32_t>*  uvOverlapAssetList;

static inline ::GlobalNamespace::ftStorageAsset* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_assetList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_assetList() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_bakedIDs() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_bakedIDs() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_bakedIDsTerrain() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_bakedIDsTerrain() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_bakedLightChannels() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_bakedLightChannels() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_bakedScaleOffset() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_bakedScaleOffset() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& __cordl_internal_get_bakedScaleOffsetTerrain() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& __cordl_internal_get_bakedScaleOffsetTerrain() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get_bakedVertexColorMesh() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get_bakedVertexColorMesh() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_dirMaps() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_dirMaps() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_idremap() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_idremap() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_maps() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_maps() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_mapsMode() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_mapsMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_masks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_masks() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_rnmMaps0() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_rnmMaps0() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_rnmMaps1() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_rnmMaps1() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_rnmMaps2() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_rnmMaps2() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_uvOverlapAssetList() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_uvOverlapAssetList() ;

constexpr void __cordl_internal_set_assetList(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_bakedIDs(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_bakedIDsTerrain(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_bakedLightChannels(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_bakedScaleOffset(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_bakedScaleOffsetTerrain(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value) ;

constexpr void __cordl_internal_set_bakedVertexColorMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_dirMaps(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_idremap(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_maps(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_mapsMode(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_masks(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_rnmMaps0(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_rnmMaps1(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_rnmMaps2(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_uvOverlapAssetList(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5f2b6a0, size 0x338, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ftStorageAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ftStorageAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ftStorageAsset(ftStorageAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ftStorageAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ftStorageAsset(ftStorageAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32458};

/// [SerializeField]
/// @brief Field maps, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___maps;

/// [SerializeField]
/// @brief Field masks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___masks;

/// [SerializeField]
/// @brief Field dirMaps, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___dirMaps;

/// [SerializeField]
/// @brief Field rnmMaps0, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___rnmMaps0;

/// [SerializeField]
/// @brief Field rnmMaps1, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___rnmMaps1;

/// [SerializeField]
/// @brief Field rnmMaps2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___rnmMaps2;

/// [SerializeField]
/// @brief Field mapsMode, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___mapsMode;

/// [SerializeField]
/// @brief Field bakedIDs, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___bakedIDs;

/// [SerializeField]
/// @brief Field bakedScaleOffset, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___bakedScaleOffset;

/// [SerializeField]
/// @brief Field bakedVertexColorMesh, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ___bakedVertexColorMesh;

/// [SerializeField]
/// @brief Field bakedLightChannels, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___bakedLightChannels;

/// [SerializeField]
/// @brief Field bakedIDsTerrain, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___bakedIDsTerrain;

/// [SerializeField]
/// @brief Field bakedScaleOffsetTerrain, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  ___bakedScaleOffsetTerrain;

/// [SerializeField]
/// @brief Field assetList, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___assetList;

/// [SerializeField]
/// @brief Field uvOverlapAssetList, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___uvOverlapAssetList;

/// [SerializeField]
/// @brief Field idremap, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___idremap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___maps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___masks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___dirMaps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___rnmMaps0) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___rnmMaps1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___rnmMaps2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___mapsMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___bakedIDs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___bakedScaleOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___bakedVertexColorMesh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___bakedLightChannels) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___bakedIDsTerrain) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___bakedScaleOffsetTerrain) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___assetList) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___uvOverlapAssetList) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ftStorageAsset, ___idremap) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ftStorageAsset) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
