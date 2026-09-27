#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/EffectMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__EffectMesh_AnchorTextureCoordinateMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__EffectMesh_WallTextureCoordinateModeU_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__EffectMesh_WallTextureCoordinateModeV_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneTrackingSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EffectMesh)
namespace GlobalNamespace {
struct EffectMesh_AnchorTextureCoordinateMode;
}
namespace GlobalNamespace {
struct EffectMesh_WallTextureCoordinateModeU;
}
namespace GlobalNamespace {
struct EffectMesh_WallTextureCoordinateModeV;
}
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
namespace Meta::XR::MRUtilityKit {
class EffectMesh_EffectMeshObject;
}
namespace Meta::XR::MRUtilityKit {
class EffectMesh_TextureCoordinateModes;
}
namespace Meta::XR::MRUtilityKit {
struct LabelFilter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class EffectMesh;
}
namespace Meta::XR::MRUtilityKit {
class EffectMesh_EffectMeshObject;
}
namespace Meta::XR::MRUtilityKit {
class EffectMesh_TextureCoordinateModes;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::EffectMesh*);
MARK_REF_T(::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*);
MARK_REF_T(::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::EffectMesh*, "Meta.XR.MRUtilityKit", "EffectMesh");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*, "Meta.XR.MRUtilityKit", "EffectMesh/EffectMeshObject");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*, "Meta.XR.MRUtilityKit", "EffectMesh/TextureCoordinateModes");
// [Feature((Meta.XR.Util.Feature)8)]
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_effect_mesh")]
// Dependencies Meta.XR.MRUtilityKit.EffectMesh::TextureCoordinateModes, Meta.XR.MRUtilityKit.MRUK::RoomFilter, Meta.XR.MRUtilityKit.MRUK::SceneTrackingSettings, Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.EffectMesh
class CORDL_TYPE EffectMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnchorTextureCoordinateMode = ::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode;

using WallTextureCoordinateModeU = ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU;

using WallTextureCoordinateModeV = ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeV;

using EffectMeshObject = ::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject;

using TextureCoordinateModes = ::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes;

/// @brief Field BorderSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_BorderSize, put=__cordl_internal_set_BorderSize)) float_t  BorderSize;

 __declspec(property(get=get_CastShadow, put=set_CastShadow)) bool  CastShadow;

/// @brief Field Colliders, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_Colliders, put=__cordl_internal_set_Colliders)) bool  Colliders;

/// @brief Field CutHoles, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_CutHoles, put=__cordl_internal_set_CutHoles)) ::GlobalNamespace::MRUKAnchor_SceneLabels  CutHoles;

 __declspec(property(get=get_EffectMeshObjects)) ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*>*  EffectMeshObjects;

 __declspec(property(get=get_HideMesh, put=set_HideMesh)) bool  HideMesh;

/// @brief Field Labels, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_Labels, put=__cordl_internal_set_Labels)) ::GlobalNamespace::MRUKAnchor_SceneLabels  Labels;

/// @brief Field Layer, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_Layer, put=__cordl_internal_set_Layer)) int32_t  Layer;

/// @brief Field MeshMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MeshMaterial, put=__cordl_internal_set_MeshMaterial)) ::UnityW<::UnityEngine::Material>  MeshMaterial;

/// @brief Field SceneTrackingSettings, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_SceneTrackingSettings, put=__cordl_internal_set_SceneTrackingSettings)) ::GlobalNamespace::MRUK_SceneTrackingSettings  SceneTrackingSettings;

/// @brief Field SpawnOnStart, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SpawnOnStart, put=__cordl_internal_set_SpawnOnStart)) ::GlobalNamespace::MRUK_RoomFilter  SpawnOnStart;

/// @brief Field Suffix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Suffix, put=setStaticF_Suffix)) ::StringW  Suffix;

/// @brief [Obsolete("This property is deprecated. Please use \'ToggleEffectMeshColliders\' instead.")]
 __declspec(property(get=get_ToggleColliders, put=set_ToggleColliders)) bool  ToggleColliders;

/// @brief Field TrackUpdates, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_TrackUpdates, put=__cordl_internal_set_TrackUpdates)) bool  TrackUpdates;

/// @brief Field castShadows, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_castShadows, put=__cordl_internal_set_castShadows)) bool  castShadows;

/// @brief Field effectMeshObjects, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectMeshObjects, put=__cordl_internal_set_effectMeshObjects)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*>*  effectMeshObjects;

/// @brief Field hideMesh, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideMesh, put=__cordl_internal_set_hideMesh)) bool  hideMesh;

/// @brief Field textureCoordinateModes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureCoordinateModes, put=__cordl_internal_set_textureCoordinateModes)) ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  textureCoordinateModes;

/// @brief Method AddCollider, addr 0x9f0d32c, size 0x17c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> AddCollider(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*  effectMeshObject) ;

/// @brief Method AddColliders, addr 0x9f0d110, size 0x21c, virtual false, abstract: false, final false
inline void AddColliders(::Meta::XR::MRUtilityKit::LabelFilter  label) ;

/// @brief Method CreateEffectMesh, addr 0x9f0c7ac, size 0x310, virtual false, abstract: false, final false
inline ::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject* CreateEffectMesh(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo) ;

/// @brief Method CreateEffectMeshWall, addr 0x9f0e974, size 0xd74, virtual false, abstract: false, final false
inline void CreateEffectMeshWall(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, float_t  totalWallLength, ::by_ref<float_t>  uSpacing, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  connectedRooms) ;

/// @brief Method CreateGlobalMeshObject, addr 0x9f0e4d4, size 0x490, virtual false, abstract: false, final false
inline void CreateGlobalMeshObject(::Meta::XR::MRUtilityKit::MRUKAnchor*  globalMeshAnchor) ;

/// @brief Method CreateMesh, addr 0x9f0cb7c, size 0x194, virtual false, abstract: false, final false
inline void CreateMesh() ;

/// @brief Method CreateMesh, addr 0x9f0cb74, size 0x8, virtual false, abstract: false, final false
inline void CreateMesh(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method CreateMesh, addr 0x9f0de08, size 0x6cc, virtual false, abstract: false, final false
inline void CreateMesh(::Meta::XR::MRUtilityKit::MRUKRoom*  room, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  connectedRooms) ;

/// @brief Method DestroyColliders, addr 0x9f0d4a8, size 0x1f0, virtual false, abstract: false, final false
inline void DestroyColliders(::Meta::XR::MRUtilityKit::LabelFilter  label) ;

/// @brief Method DestroyMesh, addr 0x9f0c684, size 0x128, virtual false, abstract: false, final false
inline void DestroyMesh(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method DestroyMesh, addr 0x9f0cd10, size 0x400, virtual false, abstract: false, final false
inline void DestroyMesh(::Meta::XR::MRUtilityKit::LabelFilter  label) ;

/// @brief Method DestroyMesh, addr 0x9f0c1cc, size 0x164, virtual false, abstract: false, final false
inline void DestroyMesh(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method GetSeamlessFactor, addr 0x9f0f6f0, size 0xa0, virtual false, abstract: false, final false
inline float_t GetSeamlessFactor(float_t  totalWallLength, float_t  stepSize) ;

/// @brief Method IncludesLabel, addr 0x9f0e964, size 0x10, virtual false, abstract: false, final false
inline bool IncludesLabel(::GlobalNamespace::MRUKAnchor_SceneLabels  label) ;

static inline ::Meta::XR::MRUtilityKit::EffectMesh* New_ctor() ;

/// @brief Method OrderWalls, addr 0x9f0d8c4, size 0x544, virtual false, abstract: false, final false
static inline void OrderWalls(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  walls) ;

/// @brief Method OverrideEffectMaterial, addr 0x9f0d698, size 0x22c, virtual false, abstract: false, final false
inline void OverrideEffectMaterial(::UnityEngine::Material*  newMaterial, ::Meta::XR::MRUtilityKit::LabelFilter  label) ;

/// @brief Method ReceiveAnchorCreatedEvent, addr 0x9f0cac0, size 0x94, virtual false, abstract: false, final false
inline void ReceiveAnchorCreatedEvent(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveAnchorRemovedCallback, addr 0x9f0cabc, size 0x4, virtual false, abstract: false, final false
inline void ReceiveAnchorRemovedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveAnchorUpdatedCallback, addr 0x9f0c5b8, size 0xcc, virtual false, abstract: false, final false
inline void ReceiveAnchorUpdatedCallback(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// @brief Method ReceiveCreatedRoom, addr 0x9f0cb54, size 0x20, virtual false, abstract: false, final false
inline void ReceiveCreatedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method ReceiveRemovedRoom, addr 0x9f0c1a4, size 0x28, virtual false, abstract: false, final false
inline void ReceiveRemovedRoom(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method RegisterAnchorUpdates, addr 0x9f0c474, size 0x144, virtual false, abstract: false, final false
inline void RegisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// @brief Method SetEffectObjectsParent, addr 0x9f0f790, size 0x178, virtual false, abstract: false, final false
inline void SetEffectObjectsParent(::UnityEngine::Transform*  newParent) ;

/// @brief Method Start, addr 0x9f0be0c, size 0x398, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleEffectMeshColliders, addr 0x9f0bc00, size 0x204, virtual false, abstract: false, final false
inline void ToggleEffectMeshColliders(bool  doEnable, ::Meta::XR::MRUtilityKit::LabelFilter  label) ;

/// @brief Method ToggleEffectMeshVisibility, addr 0x9f0b934, size 0x290, virtual false, abstract: false, final false
inline void ToggleEffectMeshVisibility(bool  shouldShow, ::Meta::XR::MRUtilityKit::LabelFilter  label, ::UnityEngine::Material*  materialOverride) ;

/// @brief Method ToggleShadowCasting, addr 0x9f0b6c8, size 0x22c, virtual false, abstract: false, final false
inline void ToggleShadowCasting(bool  shouldCast, ::Meta::XR::MRUtilityKit::LabelFilter  label) ;

/// @brief Method UnregisterAnchorUpdates, addr 0x9f0c330, size 0x144, virtual false, abstract: false, final false
inline void UnregisterAnchorUpdates(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__30_0, addr 0x9f0fab8, size 0xd8, virtual false, abstract: false, final false
inline void _Start_b__30_0() ;

constexpr float_t const& __cordl_internal_get_BorderSize() const;

constexpr float_t& __cordl_internal_get_BorderSize() ;

constexpr bool const& __cordl_internal_get_Colliders() const;

constexpr bool& __cordl_internal_get_Colliders() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get_CutHoles() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get_CutHoles() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get_Labels() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get_Labels() ;

constexpr int32_t const& __cordl_internal_get_Layer() const;

constexpr int32_t& __cordl_internal_get_Layer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_MeshMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_MeshMaterial() ;

constexpr ::GlobalNamespace::MRUK_SceneTrackingSettings const& __cordl_internal_get_SceneTrackingSettings() const;

constexpr ::GlobalNamespace::MRUK_SceneTrackingSettings& __cordl_internal_get_SceneTrackingSettings() ;

constexpr ::GlobalNamespace::MRUK_RoomFilter const& __cordl_internal_get_SpawnOnStart() const;

constexpr ::GlobalNamespace::MRUK_RoomFilter& __cordl_internal_get_SpawnOnStart() ;

constexpr bool const& __cordl_internal_get_TrackUpdates() const;

constexpr bool& __cordl_internal_get_TrackUpdates() ;

constexpr bool const& __cordl_internal_get_castShadows() const;

constexpr bool& __cordl_internal_get_castShadows() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*>* const& __cordl_internal_get_effectMeshObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*>*& __cordl_internal_get_effectMeshObjects() ;

constexpr bool const& __cordl_internal_get_hideMesh() const;

constexpr bool& __cordl_internal_get_hideMesh() ;

constexpr ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*> const& __cordl_internal_get_textureCoordinateModes() const;

constexpr ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>& __cordl_internal_get_textureCoordinateModes() ;

constexpr void __cordl_internal_set_BorderSize(float_t  value) ;

constexpr void __cordl_internal_set_Colliders(bool  value) ;

constexpr void __cordl_internal_set_CutHoles(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set_Labels(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set_Layer(int32_t  value) ;

constexpr void __cordl_internal_set_MeshMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_SceneTrackingSettings(::GlobalNamespace::MRUK_SceneTrackingSettings  value) ;

constexpr void __cordl_internal_set_SpawnOnStart(::GlobalNamespace::MRUK_RoomFilter  value) ;

constexpr void __cordl_internal_set_TrackUpdates(bool  value) ;

constexpr void __cordl_internal_set_castShadows(bool  value) ;

constexpr void __cordl_internal_set_effectMeshObjects(::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*>*  value) ;

constexpr void __cordl_internal_set_hideMesh(bool  value) ;

constexpr void __cordl_internal_set_textureCoordinateModes(::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  value) ;

/// @brief Method .ctor, addr 0x9f0f908, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_Suffix() ;

/// @brief Method get_CastShadow, addr 0x9f0b690, size 0x8, virtual false, abstract: false, final false
inline bool get_CastShadow() ;

/// @brief Method get_EffectMeshObjects, addr 0x9f0be04, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*>* get_EffectMeshObjects() ;

/// @brief Method get_HideMesh, addr 0x9f0b8f4, size 0x8, virtual false, abstract: false, final false
inline bool get_HideMesh() ;

/// @brief Method get_ToggleColliders, addr 0x9f0bbc4, size 0x8, virtual false, abstract: false, final false
inline bool get_ToggleColliders() ;

static inline void setStaticF_Suffix(::StringW  value) ;

/// @brief Method set_CastShadow, addr 0x9f0b698, size 0x30, virtual false, abstract: false, final false
inline void set_CastShadow(bool  value) ;

/// @brief Method set_HideMesh, addr 0x9f0b8fc, size 0x38, virtual false, abstract: false, final false
inline void set_HideMesh(bool  value) ;

/// @brief Method set_ToggleColliders, addr 0x9f0bbcc, size 0x34, virtual false, abstract: false, final false
inline void set_ToggleColliders(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EffectMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EffectMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EffectMesh(EffectMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EffectMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EffectMesh(EffectMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25778};

/// [Tooltip("When the scene data is loaded, this controls what room(s) the effect mesh is applied to.")]
/// @brief Field SpawnOnStart, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_RoomFilter  ___SpawnOnStart;

/// [Tooltip("If enabled, updates on scene elements such as rooms and anchors will be handled by this class")]
/// @brief Field TrackUpdates, offset: 0x24, size: 0x1, def value: None
 bool  ___TrackUpdates;

/// [Tooltip("The material applied to the generated mesh. If you\'d like a multi-material room, you can use another EffectMesh object with a different Mesh Material.")]
/// [FormerlySerializedAs("_MeshMaterial")]
/// @brief Field MeshMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___MeshMaterial;

/// [Obsolete("BorderSize functionality has been removed.")]
/// [FormerlySerializedAs("_borderSize")]
/// @brief Field BorderSize, offset: 0x30, size: 0x4, def value: None
 float_t  ___BorderSize;

/// [Tooltip("Generate a BoxCollider for each mesh component.")]
/// [FormerlySerializedAs("addColliders")]
/// @brief Field Colliders, offset: 0x34, size: 0x1, def value: None
 bool  ___Colliders;

/// [Tooltip("Cut holes in the mesh for door frames and/or window frames. NOTE: This does not apply if border size is non-zero.")]
/// @brief Field CutHoles, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ___CutHoles;

/// [Tooltip("Whether the effect mesh objects will cast a shadow.")]
/// [SerializeField]
/// @brief Field castShadows, offset: 0x3c, size: 0x1, def value: None
 bool  ___castShadows;

/// [Tooltip("Hide the effect mesh.")]
/// [SerializeField]
/// @brief Field hideMesh, offset: 0x3d, size: 0x1, def value: None
 bool  ___hideMesh;

/// @brief Field SceneTrackingSettings, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::MRUK_SceneTrackingSettings  ___SceneTrackingSettings;

/// [HideInInspector]
/// @brief Field Layer, offset: 0x50, size: 0x4, def value: None
 int32_t  ___Layer;

/// [Tooltip("Can not exceed 8.")]
/// @brief Field textureCoordinateModes, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  ___textureCoordinateModes;

/// [Tooltip("Specifies the scene labels that determine which anchors representations are created by the effect mesh.")]
/// [FormerlySerializedAs("_include")]
/// @brief Field Labels, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ___Labels;

/// @brief Field effectMeshObjects, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>,::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject*>*  ___effectMeshObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___SpawnOnStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___TrackUpdates) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___MeshMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___BorderSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___Colliders) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___CutHoles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___castShadows) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___hideMesh) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___SceneTrackingSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___Layer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___textureCoordinateModes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___Labels) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh, ___effectMeshObjects) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::EffectMesh) == 0x70, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.EffectMesh/EffectMeshObject
class CORDL_TYPE EffectMesh_EffectMeshObject : public ::System::Object {
public:
// Declarations
/// @brief Field collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field effectMeshGO, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectMeshGO, put=__cordl_internal_set_effectMeshGO)) ::UnityW<::UnityEngine::GameObject>  effectMeshGO;

/// @brief Field mesh, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

static inline ::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effectMeshGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effectMeshGO() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_effectMeshGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x9f0f6e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EffectMesh_EffectMeshObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EffectMesh_EffectMeshObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EffectMesh_EffectMeshObject(EffectMesh_EffectMeshObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EffectMesh_EffectMeshObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EffectMesh_EffectMeshObject(EffectMesh_EffectMeshObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25777};

/// @brief Field effectMeshGO, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effectMeshGO;

/// @brief Field mesh, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___collider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject, ___effectMeshGO) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject, ___mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject, ___collider) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::EffectMesh_EffectMeshObject) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies Meta.XR.MRUtilityKit.EffectMesh::AnchorTextureCoordinateMode, Meta.XR.MRUtilityKit.EffectMesh::WallTextureCoordinateModeU, Meta.XR.MRUtilityKit.EffectMesh::WallTextureCoordinateModeV, System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.EffectMesh/TextureCoordinateModes
class CORDL_TYPE EffectMesh_TextureCoordinateModes : public ::System::Object {
public:
// Declarations
/// @brief Field AnchorUV, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_AnchorUV, put=__cordl_internal_set_AnchorUV)) ::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode  AnchorUV;

/// @brief Field WallU, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_WallU, put=__cordl_internal_set_WallU)) ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU  WallU;

/// @brief Field WallV, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_WallV, put=__cordl_internal_set_WallV)) ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeV  WallV;

static inline ::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes* New_ctor() ;

constexpr ::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode const& __cordl_internal_get_AnchorUV() const;

constexpr ::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode& __cordl_internal_get_AnchorUV() ;

constexpr ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU const& __cordl_internal_get_WallU() const;

constexpr ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU& __cordl_internal_get_WallU() ;

constexpr ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeV const& __cordl_internal_get_WallV() const;

constexpr ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeV& __cordl_internal_get_WallV() ;

constexpr void __cordl_internal_set_AnchorUV(::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode  value) ;

constexpr void __cordl_internal_set_WallU(::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU  value) ;

constexpr void __cordl_internal_set_WallV(::GlobalNamespace::EffectMesh_WallTextureCoordinateModeV  value) ;

/// @brief Method .ctor, addr 0x9f0fa48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EffectMesh_TextureCoordinateModes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EffectMesh_TextureCoordinateModes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EffectMesh_TextureCoordinateModes(EffectMesh_TextureCoordinateModes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EffectMesh_TextureCoordinateModes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EffectMesh_TextureCoordinateModes(EffectMesh_TextureCoordinateModes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25776};

/// [FormerlySerializedAs("U")]
/// @brief Field WallU, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeU  ___WallU;

/// [FormerlySerializedAs("V")]
/// @brief Field WallV, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::EffectMesh_WallTextureCoordinateModeV  ___WallV;

/// @brief Field AnchorUV, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::EffectMesh_AnchorTextureCoordinateMode  ___AnchorUV;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes, ___WallU) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes, ___WallV) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes, ___AnchorUV) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
