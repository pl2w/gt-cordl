#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsOverrideCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandEffectsOverrideCosmetic_HandEffectType_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandEffectsOverrideCosmetic)
namespace GlobalNamespace {
class HandEffectsOverrideCosmetic_EffectsOverride;
}
namespace GlobalNamespace {
struct HandEffectsOverrideCosmetic_HandEffectType;
}
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
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class HandEffectsOverrideCosmetic;
}
namespace GlobalNamespace {
class HandEffectsOverrideCosmetic_EffectsOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandEffectsOverrideCosmetic*);
MARK_REF_T(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandEffectsOverrideCosmetic*, "", "HandEffectsOverrideCosmetic");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*, "", "HandEffectsOverrideCosmetic/EffectsOverride");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, HandEffectsOverrideCosmetic::HandEffectType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandEffectsOverrideCosmetic
class CORDL_TYPE HandEffectsOverrideCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EffectsOverride = ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride;

using HandEffectType = ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field _rig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Field firstPerson, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstPerson, put=__cordl_internal_set_firstPerson)) ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*  firstPerson;

/// @brief Field handEffectType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_handEffectType, put=__cordl_internal_set_handEffectType)) ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType  handEffectType;

/// @brief Field isLeftHand, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field thirdPerson, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_thirdPerson, put=__cordl_internal_set_thirdPerson)) ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*  thirdPerson;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

static inline ::GlobalNamespace::HandEffectsOverrideCosmetic* New_ctor() ;

/// @brief Method OnDespawn, addr 0x56bd7dc, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x56bd8a8, size 0x74, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56bd7e0, size 0xc8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x56bd7d4, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride* const& __cordl_internal_get_firstPerson() const;

constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*& __cordl_internal_get_firstPerson() ;

constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType const& __cordl_internal_get_handEffectType() const;

constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType& __cordl_internal_get_handEffectType() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride* const& __cordl_internal_get_thirdPerson() const;

constexpr ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*& __cordl_internal_get_thirdPerson() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_firstPerson(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*  value) ;

constexpr void __cordl_internal_set_handEffectType(::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_thirdPerson(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*  value) ;

/// @brief Method .ctor, addr 0x56bd91c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x56bd7c4, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x56bd7b4, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x56bd7cc, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x56bd7bc, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandEffectsOverrideCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsOverrideCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandEffectsOverrideCosmetic(HandEffectsOverrideCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsOverrideCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandEffectsOverrideCosmetic(HandEffectsOverrideCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{990};

/// @brief Field handEffectType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType  ___handEffectType;

/// @brief Field isLeftHand, offset: 0x24, size: 0x1, def value: None
 bool  ___isLeftHand;

/// @brief Field firstPerson, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*  ___firstPerson;

/// @brief Field thirdPerson, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride*  ___thirdPerson;

/// @brief Field _rig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x44, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic, ___handEffectType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic, ___isLeftHand) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic, ___firstPerson) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic, ___thirdPerson) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic, ____rig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic, ____IsSpawned_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic, ____CosmeticSelectedSide_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandEffectsOverrideCosmetic) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandEffectsOverrideCosmetic/EffectsOverride
class CORDL_TYPE HandEffectsOverrideCosmetic_EffectsOverride : public ::System::Object {
public:
// Declarations
/// @brief Field effectVFX, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectVFX, put=__cordl_internal_set_effectVFX)) ::UnityW<::UnityEngine::GameObject>  effectVFX;

/// @brief Field hapticDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field parentEffect, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_parentEffect, put=__cordl_internal_set_parentEffect)) bool  parentEffect;

/// @brief Field playHaptics, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_playHaptics, put=__cordl_internal_set_playHaptics)) bool  playHaptics;

static inline ::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effectVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effectVFX() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr bool const& __cordl_internal_get_parentEffect() const;

constexpr bool& __cordl_internal_get_parentEffect() ;

constexpr bool const& __cordl_internal_get_playHaptics() const;

constexpr bool& __cordl_internal_get_playHaptics() ;

constexpr void __cordl_internal_set_effectVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_parentEffect(bool  value) ;

constexpr void __cordl_internal_set_playHaptics(bool  value) ;

/// @brief Method .ctor, addr 0x56bd924, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandEffectsOverrideCosmetic_EffectsOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsOverrideCosmetic_EffectsOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandEffectsOverrideCosmetic_EffectsOverride(HandEffectsOverrideCosmetic_EffectsOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandEffectsOverrideCosmetic_EffectsOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandEffectsOverrideCosmetic_EffectsOverride(HandEffectsOverrideCosmetic_EffectsOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{988};

/// @brief Field effectVFX, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effectVFX;

/// @brief Field playHaptics, offset: 0x18, size: 0x1, def value: None
 bool  ___playHaptics;

/// @brief Field hapticStrength, offset: 0x1c, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// @brief Field hapticDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// @brief Field parentEffect, offset: 0x24, size: 0x1, def value: None
 bool  ___parentEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride, ___effectVFX) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride, ___playHaptics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride, ___hapticStrength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride, ___hapticDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride, ___parentEffect) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandEffectsOverrideCosmetic_EffectsOverride) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
