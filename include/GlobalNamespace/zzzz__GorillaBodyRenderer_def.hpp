#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaBodyRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaBodyType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaBodyRenderer)
namespace GlobalNamespace {
class GorillaBodyRenderer___c__DisplayClass33_0;
}
namespace GlobalNamespace {
struct GorillaBodyType;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
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
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaBodyRenderer;
}
namespace GlobalNamespace {
class GorillaBodyRenderer___c__DisplayClass33_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaBodyRenderer*);
MARK_REF_T(::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaBodyRenderer*, "", "GorillaBodyRenderer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0*, "", "GorillaBodyRenderer/<>c__DisplayClass33_0");
// Dependencies GorillaBodyType, UnityEngine.Material, UnityEngine.MonoBehaviour, UnityEngine.SkinnedMeshRenderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaBodyRenderer
class CORDL_TYPE GorillaBodyRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass33_0 = ::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0;

 __declspec(property(get=get_ActiveBody)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ActiveBody;

/// @brief Field _applySkinToHeadlessMesh, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__applySkinToHeadlessMesh, put=__cordl_internal_set__applySkinToHeadlessMesh)) bool  _applySkinToHeadlessMesh;

/// @brief Field _bodyType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__bodyType, put=__cordl_internal_set__bodyType)) ::GlobalNamespace::GorillaBodyType  _bodyType;

/// @brief Field _cachedSkinMaterials, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedSkinMaterials, put=__cordl_internal_set__cachedSkinMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _cachedSkinMaterials;

/// @brief Field _defaultSkinMaterials, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultSkinMaterials, put=__cordl_internal_set__defaultSkinMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  _defaultSkinMaterials;

/// @brief Field <gameModeBodyType>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__gameModeBodyType_k__BackingField, put=__cordl_internal_set__gameModeBodyType_k__BackingField)) ::GlobalNamespace::GorillaBodyType  _gameModeBodyType_k__BackingField;

/// @brief Field _lastMatIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastMatIndex, put=__cordl_internal_set__lastMatIndex)) int32_t  _lastMatIndex;

/// @brief Field <myDefaultSkinMaterialInstance>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__myDefaultSkinMaterialInstance_k__BackingField, put=__cordl_internal_set__myDefaultSkinMaterialInstance_k__BackingField)) ::UnityW<::UnityEngine::Material>  _myDefaultSkinMaterialInstance_k__BackingField;

/// @brief Field _renderFace, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__renderFace, put=__cordl_internal_set__renderFace)) bool  _renderFace;

/// @brief Field _renderersCache, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderersCache, put=__cordl_internal_set__renderersCache)) ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  _renderersCache;

/// @brief Field bodyDefault, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyDefault, put=__cordl_internal_set_bodyDefault)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  bodyDefault;

/// @brief Field bodyNoHead, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyNoHead, put=__cordl_internal_set_bodyNoHead)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  bodyNoHead;

/// @brief Field bodySkeleton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodySkeleton, put=__cordl_internal_set_bodySkeleton)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  bodySkeleton;

 __declspec(property(get=get_bodyType, put=set_bodyType)) ::GlobalNamespace::GorillaBodyType  bodyType;

/// @brief Field cosmeticBodyType, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cosmeticBodyType, put=__cordl_internal_set_cosmeticBodyType)) ::GlobalNamespace::GorillaBodyType  cosmeticBodyType;

/// @brief Field defaultBodyMesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultBodyMesh, put=__cordl_internal_set_defaultBodyMesh)) ::UnityW<::UnityEngine::Mesh>  defaultBodyMesh;

/// @brief Field faceRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceRenderer, put=__cordl_internal_set_faceRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  faceRenderer;

/// @brief Field gEmptyDefaultMats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gEmptyDefaultMats, put=setStaticF_gEmptyDefaultMats)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  gEmptyDefaultMats;

 __declspec(property(get=get_gameModeBodyType, put=set_gameModeBodyType)) ::GlobalNamespace::GorillaBodyType  gameModeBodyType;

 __declspec(property(get=get_myDefaultSkinMaterialInstance, put=set_myDefaultSkinMaterialInstance)) ::UnityW<::UnityEngine::Material>  myDefaultSkinMaterialInstance;

/// @brief Field oopsAllSkeletons, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_oopsAllSkeletons, put=setStaticF_oopsAllSkeletons)) bool  oopsAllSkeletons;

 __declspec(property(get=get_renderFace)) bool  renderFace;

/// @brief Field rig, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Method Awake, addr 0x5903354, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearCosmeticBodyMesh, addr 0x59032cc, size 0x88, virtual false, abstract: false, final false
inline void ClearCosmeticBodyMesh() ;

/// @brief Method DisableSkeletonOverlays, addr 0x590284c, size 0x138, virtual false, abstract: false, final false
static inline void DisableSkeletonOverlays() ;

/// @brief Method EnableSkeletonOverlays, addr 0x5902644, size 0x168, virtual false, abstract: false, final false
static inline void EnableSkeletonOverlays(::UnityEngine::Material*  bodyMaterial, ::UnityEngine::Material*  skeletonMaterial) ;

/// @brief Method EnsureInstantiatedMaterial, addr 0x5902e40, size 0x204, virtual false, abstract: false, final false
inline void EnsureInstantiatedMaterial() ;

/// @brief Method GetActiveBodyType, addr 0x5902a58, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaBodyType GetActiveBodyType() ;

/// @brief Method GetBody, addr 0x59021a0, size 0x34, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> GetBody(::GlobalNamespace::GorillaBodyType  type) ;

/// @brief Method HideSkeletonOverlay, addr 0x5902984, size 0x54, virtual false, abstract: false, final false
static inline void HideSkeletonOverlay(::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::GorillaBodyRenderer* New_ctor() ;

/// @brief Method Refresh, addr 0x59025f8, size 0x1c, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method ResetBodyMaterial, addr 0x5903780, size 0x80, virtual false, abstract: false, final false
inline void ResetBodyMaterial() ;

/// @brief Method SetAllSkeletons, addr 0x590220c, size 0x3ec, virtual false, abstract: false, final false
static inline void SetAllSkeletons(bool  allSkeletons) ;

/// @brief Method SetBodyEnabled, addr 0x5903044, size 0x118, virtual false, abstract: false, final false
inline void SetBodyEnabled(::GlobalNamespace::GorillaBodyType  bodyType, bool  enabled) ;

/// @brief Method SetBodyType, addr 0x5901efc, size 0x224, virtual false, abstract: false, final false
inline void SetBodyType(::GlobalNamespace::GorillaBodyType  type) ;

/// @brief Method SetCosmeticBodyMesh, addr 0x5903220, size 0xac, virtual false, abstract: false, final false
inline void SetCosmeticBodyMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method SetCosmeticBodyType, addr 0x5902a08, size 0x30, virtual false, abstract: false, final false
inline void SetCosmeticBodyType(::GlobalNamespace::GorillaBodyType  bodyType) ;

/// @brief Method SetDefaults, addr 0x5902a38, size 0x20, virtual false, abstract: false, final false
inline void SetDefaults() ;

/// @brief Method SetGameModeBodyType, addr 0x59029d8, size 0x30, virtual false, abstract: false, final false
inline void SetGameModeBodyType(::GlobalNamespace::GorillaBodyType  bodyType) ;

/// @brief Method SetMaterialIndex, addr 0x5902acc, size 0xcc, virtual false, abstract: false, final false
inline void SetMaterialIndex(int32_t  materialIndex) ;

/// @brief Method SetSkeletonBodyActive, addr 0x5902614, size 0x30, virtual false, abstract: false, final false
inline void SetSkeletonBodyActive(bool  active) ;

/// @brief Method SetSkinMaterials, addr 0x5902b98, size 0x2a8, virtual false, abstract: false, final false
inline void SetSkinMaterials(::UnityEngine::Material*  bodyMat, ::UnityEngine::Material*  chestMat, bool  allowHeadless) ;

/// @brief Method Setup, addr 0x5903358, size 0x30c, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method SetupAsLocalPlayerBody, addr 0x58fafd4, size 0x2c, virtual false, abstract: false, final false
inline void SetupAsLocalPlayerBody() ;

/// @brief Method SharedStart, addr 0x5903664, size 0xa0, virtual false, abstract: false, final false
inline void SharedStart() ;

/// @brief Method UpdateBodyMaterialColor, addr 0x590315c, size 0xc4, virtual false, abstract: false, final false
inline void UpdateBodyMaterialColor(::UnityEngine::Color  color) ;

/// @brief Method UpdateColor, addr 0x5903704, size 0x7c, virtual false, abstract: false, final false
inline void UpdateColor(::UnityEngine::Color  color) ;

constexpr bool const& __cordl_internal_get__applySkinToHeadlessMesh() const;

constexpr bool& __cordl_internal_get__applySkinToHeadlessMesh() ;

constexpr ::GlobalNamespace::GorillaBodyType const& __cordl_internal_get__bodyType() const;

constexpr ::GlobalNamespace::GorillaBodyType& __cordl_internal_get__bodyType() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__cachedSkinMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__cachedSkinMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__defaultSkinMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__defaultSkinMaterials() ;

constexpr ::GlobalNamespace::GorillaBodyType const& __cordl_internal_get__gameModeBodyType_k__BackingField() const;

constexpr ::GlobalNamespace::GorillaBodyType& __cordl_internal_get__gameModeBodyType_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__lastMatIndex() const;

constexpr int32_t& __cordl_internal_get__lastMatIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__myDefaultSkinMaterialInstance_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__myDefaultSkinMaterialInstance_k__BackingField() ;

constexpr bool const& __cordl_internal_get__renderFace() const;

constexpr bool& __cordl_internal_get__renderFace() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>> const& __cordl_internal_get__renderersCache() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>& __cordl_internal_get__renderersCache() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_bodyDefault() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_bodyDefault() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_bodyNoHead() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_bodyNoHead() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_bodySkeleton() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_bodySkeleton() ;

constexpr ::GlobalNamespace::GorillaBodyType const& __cordl_internal_get_cosmeticBodyType() const;

constexpr ::GlobalNamespace::GorillaBodyType& __cordl_internal_get_cosmeticBodyType() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_defaultBodyMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_defaultBodyMesh() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_faceRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_faceRenderer() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr void __cordl_internal_set__applySkinToHeadlessMesh(bool  value) ;

constexpr void __cordl_internal_set__bodyType(::GlobalNamespace::GorillaBodyType  value) ;

constexpr void __cordl_internal_set__cachedSkinMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__defaultSkinMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set__gameModeBodyType_k__BackingField(::GlobalNamespace::GorillaBodyType  value) ;

constexpr void __cordl_internal_set__lastMatIndex(int32_t  value) ;

constexpr void __cordl_internal_set__myDefaultSkinMaterialInstance_k__BackingField(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__renderFace(bool  value) ;

constexpr void __cordl_internal_set__renderersCache(::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  value) ;

constexpr void __cordl_internal_set_bodyDefault(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_bodyNoHead(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_bodySkeleton(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_cosmeticBodyType(::GlobalNamespace::GorillaBodyType  value) ;

constexpr void __cordl_internal_set_defaultBodyMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_faceRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5903800, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* getStaticF_gEmptyDefaultMats() ;

static inline bool getStaticF_oopsAllSkeletons() ;

/// @brief Method get_ActiveBody, addr 0x59021d4, size 0x38, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> get_ActiveBody() ;

/// @brief Method get_ForceSkeleton, addr 0x5902128, size 0x58, virtual false, abstract: false, final false
static inline bool get_ForceSkeleton() ;

/// @brief Method get_bodyType, addr 0x5901ef0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaBodyType get_bodyType() ;

/// [CompilerGenerated]
/// @brief Method get_gameModeBodyType, addr 0x5902180, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GorillaBodyType get_gameModeBodyType() ;

/// [CompilerGenerated]
/// @brief Method get_myDefaultSkinMaterialInstance, addr 0x5902190, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_myDefaultSkinMaterialInstance() ;

/// @brief Method get_renderFace, addr 0x5902120, size 0x8, virtual false, abstract: false, final false
inline bool get_renderFace() ;

static inline void setStaticF_gEmptyDefaultMats(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

static inline void setStaticF_oopsAllSkeletons(bool  value) ;

/// @brief Method set_bodyType, addr 0x5901ef8, size 0x4, virtual false, abstract: false, final false
inline void set_bodyType(::GlobalNamespace::GorillaBodyType  value) ;

/// [CompilerGenerated]
/// @brief Method set_gameModeBodyType, addr 0x5902188, size 0x8, virtual false, abstract: false, final false
inline void set_gameModeBodyType(::GlobalNamespace::GorillaBodyType  value) ;

/// [CompilerGenerated]
/// @brief Method set_myDefaultSkinMaterialInstance, addr 0x5902198, size 0x8, virtual false, abstract: false, final false
inline void set_myDefaultSkinMaterialInstance(::UnityEngine::Material*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaBodyRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaBodyRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaBodyRenderer(GorillaBodyRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaBodyRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaBodyRenderer(GorillaBodyRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2147};

/// [SerializeField]
/// @brief Field _bodyType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GorillaBodyType  ____bodyType;

/// [SerializeField]
/// @brief Field _renderFace, offset: 0x24, size: 0x1, def value: None
 bool  ____renderFace;

/// @brief Field faceRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___faceRenderer;

/// [SerializeField]
/// @brief Field bodyDefault, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___bodyDefault;

/// [SerializeField]
/// @brief Field bodyNoHead, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___bodyNoHead;

/// [SerializeField]
/// @brief Field bodySkeleton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___bodySkeleton;

/// @brief Field _lastMatIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ____lastMatIndex;

/// @brief Field defaultBodyMesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___defaultBodyMesh;

/// [CompilerGenerated]
/// @brief Field <gameModeBodyType>k__BackingField, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::GorillaBodyType  ____gameModeBodyType_k__BackingField;

/// @brief Field cosmeticBodyType, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::GorillaBodyType  ___cosmeticBodyType;

/// [CompilerGenerated]
/// @brief Field <myDefaultSkinMaterialInstance>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____myDefaultSkinMaterialInstance_k__BackingField;

/// [SerializeField]
/// @brief Field _cachedSkinMaterials, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____cachedSkinMaterials;

/// [SerializeField]
/// @brief Field _defaultSkinMaterials, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ____defaultSkinMaterials;

/// @brief Field _applySkinToHeadlessMesh, offset: 0x78, size: 0x1, def value: None
 bool  ____applySkinToHeadlessMesh;

/// [Space]
/// @brief Field _renderersCache, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  ____renderersCache;

/// [Space]
/// @brief Field rig, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____bodyType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____renderFace) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ___faceRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ___bodyDefault) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ___bodyNoHead) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ___bodySkeleton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____lastMatIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ___defaultBodyMesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____gameModeBodyType_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ___cosmeticBodyType) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____myDefaultSkinMaterialInstance_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____cachedSkinMaterials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____defaultSkinMaterials) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____applySkinToHeadlessMesh) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ____renderersCache) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer, ___rig) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaBodyRenderer) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaBodyRenderer/<>c__DisplayClass33_0
class CORDL_TYPE GorillaBodyRenderer___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field bodyMaterial, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyMaterial, put=__cordl_internal_set_bodyMaterial)) ::UnityW<::UnityEngine::Material>  bodyMaterial;

/// @brief Field skeletonMaterial, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_skeletonMaterial, put=__cordl_internal_set_skeletonMaterial)) ::UnityW<::UnityEngine::Material>  skeletonMaterial;

static inline ::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0* New_ctor() ;

/// @brief Method <EnableSkeletonOverlays>g__ShowSkeletonOverlay|0, addr 0x59027b4, size 0x98, virtual false, abstract: false, final false
inline void _EnableSkeletonOverlays_g__ShowSkeletonOverlay_0(::GlobalNamespace::VRRig*  rig) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bodyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bodyMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_skeletonMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_skeletonMaterial() ;

constexpr void __cordl_internal_set_bodyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_skeletonMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x59027ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaBodyRenderer___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaBodyRenderer___c__DisplayClass33_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaBodyRenderer___c__DisplayClass33_0(GorillaBodyRenderer___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaBodyRenderer___c__DisplayClass33_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaBodyRenderer___c__DisplayClass33_0(GorillaBodyRenderer___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2146};

/// @brief Field bodyMaterial, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___bodyMaterial;

/// @brief Field skeletonMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___skeletonMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0, ___bodyMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0, ___skeletonMaterial) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
