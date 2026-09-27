#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFaceTextureReplacement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GorillaFaceTextureReplacement)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaFaceTextureReplacement;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaFaceTextureReplacement*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaFaceTextureReplacement*, "", "GorillaFaceTextureReplacement");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaFaceTextureReplacement
class CORDL_TYPE GorillaFaceTextureReplacement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field alsoApplyFaceTo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_alsoApplyFaceTo, put=__cordl_internal_set_alsoApplyFaceTo)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  alsoApplyFaceTo;

/// @brief Field myRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field newFaceMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_newFaceMaterial, put=__cordl_internal_set_newFaceMaterial)) ::UnityW<::UnityEngine::Material>  newFaceMaterial;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

static inline ::GlobalNamespace::GorillaFaceTextureReplacement* New_ctor() ;

/// @brief Method OnDespawn, addr 0x564eb64, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x564ec2c, size 0x5c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x564eb70, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x564eb68, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_alsoApplyFaceTo() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_alsoApplyFaceTo() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_newFaceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_newFaceMaterial() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_alsoApplyFaceTo(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_newFaceMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x564ec88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x564eb54, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x564eb44, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x564eb5c, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x564eb4c, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaFaceTextureReplacement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaFaceTextureReplacement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaFaceTextureReplacement(GorillaFaceTextureReplacement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaFaceTextureReplacement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaFaceTextureReplacement(GorillaFaceTextureReplacement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{716};

/// [SerializeField]
/// @brief Field newFaceMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___newFaceMaterial;

/// @brief Field myRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [SerializeField]
/// @brief Field alsoApplyFaceTo, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___alsoApplyFaceTo;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaFaceTextureReplacement, ___newFaceMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFaceTextureReplacement, ___myRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFaceTextureReplacement, ___alsoApplyFaceTo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFaceTextureReplacement, ____IsSpawned_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaFaceTextureReplacement, ____CosmeticSelectedSide_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaFaceTextureReplacement) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
