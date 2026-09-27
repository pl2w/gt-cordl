#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsDemoRig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticsDemoRig_EdSpawnedCosmetic_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsDemoRig)
namespace GlobalNamespace {
struct CosmeticsDemoRig_EdSpawnedCosmetic;
}
namespace GlobalNamespace {
class GorillaSkin;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsDemoRig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticsDemoRig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsDemoRig*, "", "CosmeticsDemoRig");
// [ExecuteInEditMode]
// Dependencies CosmeticsDemoRig::EdSpawnedCosmetic, UnityEngine.Color, UnityEngine.Material, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticsDemoRig
class CORDL_TYPE CosmeticsDemoRig : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EdSpawnedCosmetic = ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic;

/// @brief Field OnColorChange, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnColorChange, put=__cordl_internal_set_OnColorChange)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>*  OnColorChange;

/// @brief Field _vrRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrRig, put=__cordl_internal_set__vrRig)) ::UnityW<::GlobalNamespace::VRRig>  _vrRig;

/// @brief Field _vrRigBoneXforms, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrRigBoneXforms, put=__cordl_internal_set__vrRigBoneXforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _vrRigBoneXforms;

/// @brief Field _vrRigSlotXforms, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrRigSlotXforms, put=__cordl_internal_set__vrRigSlotXforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _vrRigSlotXforms;

/// @brief Field badgeDefaultPos, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_badgeDefaultPos, put=__cordl_internal_set_badgeDefaultPos)) ::UnityEngine::Vector3  badgeDefaultPos;

/// @brief Field badgeDefaultRot, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_badgeDefaultRot, put=__cordl_internal_set_badgeDefaultRot)) ::UnityEngine::Quaternion  badgeDefaultRot;

/// @brief Field chestOffset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestOffset, put=__cordl_internal_set_chestOffset)) ::UnityW<::UnityEngine::Transform>  chestOffset;

/// @brief Field currentSkin, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSkin, put=__cordl_internal_set_currentSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  currentSkin;

/// @brief Field defaultFaceMaterial, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultFaceMaterial, put=__cordl_internal_set_defaultFaceMaterial)) ::UnityW<::UnityEngine::Material>  defaultFaceMaterial;

/// @brief Field defaultSkin, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultSkin, put=__cordl_internal_set_defaultSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  defaultSkin;

/// @brief Field emptyCosmetic, offset 0x70, size 0x28 
 __declspec(property(get=__cordl_internal_get_emptyCosmetic, put=__cordl_internal_set_emptyCosmetic)) ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic  emptyCosmetic;

/// @brief Field faceMaterialSwaps, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceMaterialSwaps, put=__cordl_internal_set_faceMaterialSwaps)) ::ArrayW<::UnityW<::UnityEngine::Material>>  faceMaterialSwaps;

/// @brief Field isInitialized, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInitialized, put=__cordl_internal_set_isInitialized)) bool  isInitialized;

/// @brief Field leftArmOffset, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArmOffset, put=__cordl_internal_set_leftArmOffset)) ::UnityW<::UnityEngine::Transform>  leftArmOffset;

/// @brief Field materialIndex, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_materialIndex, put=__cordl_internal_set_materialIndex)) int32_t  materialIndex;

/// @brief Field materialToChangeTo0, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialToChangeTo0, put=__cordl_internal_set_materialToChangeTo0)) ::UnityW<::UnityEngine::Material>  materialToChangeTo0;

/// @brief Field monkeColor, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_monkeColor, put=__cordl_internal_set_monkeColor)) ::UnityEngine::Color  monkeColor;

/// @brief Field myDefaultSkinMaterialInstance, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_myDefaultSkinMaterialInstance, put=__cordl_internal_set_myDefaultSkinMaterialInstance)) ::UnityW<::UnityEngine::Material>  myDefaultSkinMaterialInstance;

/// @brief Field rightArmOffset, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArmOffset, put=__cordl_internal_set_rightArmOffset)) ::UnityW<::UnityEngine::Transform>  rightArmOffset;

/// @brief Field selectedMouth, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedMouth, put=__cordl_internal_set_selectedMouth)) int32_t  selectedMouth;

/// @brief Field spawnedCosmetics, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnedCosmetics, put=__cordl_internal_set_spawnedCosmetics)) ::ArrayW<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>  spawnedCosmetics;

static inline ::GlobalNamespace::CosmeticsDemoRig* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>* const& __cordl_internal_get_OnColorChange() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>*& __cordl_internal_get_OnColorChange() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__vrRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__vrRig() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__vrRigBoneXforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__vrRigBoneXforms() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__vrRigSlotXforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__vrRigSlotXforms() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_badgeDefaultPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_badgeDefaultPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_badgeDefaultRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_badgeDefaultRot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chestOffset() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chestOffset() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get_currentSkin() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get_currentSkin() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultFaceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultFaceMaterial() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get_defaultSkin() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get_defaultSkin() ;

constexpr ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic const& __cordl_internal_get_emptyCosmetic() const;

constexpr ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic& __cordl_internal_get_emptyCosmetic() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_faceMaterialSwaps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_faceMaterialSwaps() ;

constexpr bool const& __cordl_internal_get_isInitialized() const;

constexpr bool& __cordl_internal_get_isInitialized() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftArmOffset() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftArmOffset() ;

constexpr int32_t const& __cordl_internal_get_materialIndex() const;

constexpr int32_t& __cordl_internal_get_materialIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_materialToChangeTo0() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_materialToChangeTo0() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_monkeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_monkeColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_myDefaultSkinMaterialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_myDefaultSkinMaterialInstance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightArmOffset() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightArmOffset() ;

constexpr int32_t const& __cordl_internal_get_selectedMouth() const;

constexpr int32_t& __cordl_internal_get_selectedMouth() ;

constexpr ::ArrayW<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic> const& __cordl_internal_get_spawnedCosmetics() const;

constexpr ::ArrayW<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>& __cordl_internal_get_spawnedCosmetics() ;

constexpr void __cordl_internal_set_OnColorChange(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__vrRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__vrRigBoneXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set__vrRigSlotXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_badgeDefaultPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_badgeDefaultRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_chestOffset(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set_defaultFaceMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set_emptyCosmetic(::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic  value) ;

constexpr void __cordl_internal_set_faceMaterialSwaps(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_isInitialized(bool  value) ;

constexpr void __cordl_internal_set_leftArmOffset(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_materialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_materialToChangeTo0(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_monkeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_myDefaultSkinMaterialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_rightArmOffset(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_selectedMouth(int32_t  value) ;

constexpr void __cordl_internal_set_spawnedCosmetics(::ArrayW<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>  value) ;

/// @brief Method .ctor, addr 0x565e5dc, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsDemoRig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsDemoRig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsDemoRig(CosmeticsDemoRig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsDemoRig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsDemoRig(CosmeticsDemoRig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{776};

/// [SerializeField]
/// @brief Field _vrRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____vrRig;

/// @brief Field _vrRigBoneXforms, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____vrRigBoneXforms;

/// @brief Field _vrRigSlotXforms, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____vrRigSlotXforms;

/// [SerializeField]
/// @brief Field chestOffset, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___chestOffset;

/// [SerializeField]
/// @brief Field leftArmOffset, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftArmOffset;

/// [SerializeField]
/// @brief Field rightArmOffset, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightArmOffset;

/// @brief Field badgeDefaultPos, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___badgeDefaultPos;

/// @brief Field badgeDefaultRot, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___badgeDefaultRot;

/// @brief Field isInitialized, offset: 0x6c, size: 0x1, def value: None
 bool  ___isInitialized;

/// @brief Field emptyCosmetic, offset: 0x70, size: 0x28, def value: None
 ::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic  ___emptyCosmetic;

/// @brief Field defaultFaceMaterial, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultFaceMaterial;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field myDefaultSkinMaterialInstance, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___myDefaultSkinMaterialInstance;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field materialToChangeTo0, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___materialToChangeTo0;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field monkeColor, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Color  ___monkeColor;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field currentSkin, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ___currentSkin;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field defaultSkin, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ___defaultSkin;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field faceMaterialSwaps, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___faceMaterialSwaps;

/// [HideInInspector]
/// @brief Field materialIndex, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___materialIndex;

/// @brief Field selectedMouth, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___selectedMouth;

/// [HideInInspector]
/// @brief Field OnColorChange, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Color>*  ___OnColorChange;

/// [SerializeField]
/// @brief Field spawnedCosmetics, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CosmeticsDemoRig_EdSpawnedCosmetic>  ___spawnedCosmetics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ____vrRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ____vrRigBoneXforms) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ____vrRigSlotXforms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___chestOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___leftArmOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___rightArmOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___badgeDefaultPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___badgeDefaultRot) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___isInitialized) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___emptyCosmetic) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___defaultFaceMaterial) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___myDefaultSkinMaterialInstance) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___materialToChangeTo0) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___monkeColor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___currentSkin) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___defaultSkin) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___faceMaterialSwaps) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___materialIndex) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___selectedMouth) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___OnColorChange) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsDemoRig, ___spawnedCosmetics) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsDemoRig) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
