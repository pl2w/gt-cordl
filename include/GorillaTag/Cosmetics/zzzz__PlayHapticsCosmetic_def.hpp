#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/PlayHapticsCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayHapticsCosmetic)
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GorillaTag::Cosmetics {
class IHeldItem;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class PlayHapticsCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::PlayHapticsCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::PlayHapticsCosmetic*, "GorillaTag.Cosmetics", "PlayHapticsCosmetic");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.PlayHapticsCosmetic
class CORDL_TYPE PlayHapticsCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hapticDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field leftHand, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) bool  leftHand;

/// @brief Field maxHapticStrengthThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHapticStrengthThreshold, put=__cordl_internal_set_maxHapticStrengthThreshold)) float_t  maxHapticStrengthThreshold;

/// @brief Field minHapticStrengthThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHapticStrengthThreshold, put=__cordl_internal_set_minHapticStrengthThreshold)) float_t  minHapticStrengthThreshold;

/// @brief Field myHeldItem, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_myHeldItem, put=__cordl_internal_set_myHeldItem)) ::GorillaTag::Cosmetics::IHeldItem*  myHeldItem;

/// @brief Field parentTransferable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTransferable, put=__cordl_internal_set_parentTransferable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentTransferable;

/// @brief Method Awake, addr 0x5d9da24, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::PlayHapticsCosmetic* New_ctor() ;

/// @brief Method PlayHaptics, addr 0x5d9dab4, size 0xa0, virtual false, abstract: false, final false
inline void PlayHaptics() ;

/// @brief Method PlayHaptics, addr 0x5d9dd90, size 0xac, virtual false, abstract: false, final false
inline void PlayHaptics(bool  isLeftHand) ;

/// @brief Method PlayHaptics, addr 0x5d9df28, size 0xac, virtual false, abstract: false, final false
inline void PlayHaptics(bool  isLeftHand, ::UnityEngine::Collider*  other) ;

/// @brief Method PlayHaptics, addr 0x5d9dff4, size 0xac, virtual false, abstract: false, final false
inline void PlayHaptics(bool  isLeftHand, ::UnityEngine::Collision*  other) ;

/// @brief Method PlayHaptics, addr 0x5d9de5c, size 0xac, virtual false, abstract: false, final false
inline void PlayHaptics(bool  isLeftHand, float_t  value) ;

/// @brief Method PlayHapticsBothHands, addr 0x5d9de3c, size 0x20, virtual false, abstract: false, final false
inline void PlayHapticsBothHands(bool  isLeftHand) ;

/// @brief Method PlayHapticsBothHands, addr 0x5d9dfd4, size 0x20, virtual false, abstract: false, final false
inline void PlayHapticsBothHands(bool  isLeftHand, ::UnityEngine::Collider*  other) ;

/// @brief Method PlayHapticsBothHands, addr 0x5d9e0a0, size 0x20, virtual false, abstract: false, final false
inline void PlayHapticsBothHands(bool  isLeftHand, ::UnityEngine::Collision*  other) ;

/// @brief Method PlayHapticsBothHands, addr 0x5d9df08, size 0x20, virtual false, abstract: false, final false
inline void PlayHapticsBothHands(bool  isLeftHand, float_t  value) ;

/// @brief Method PlayHapticsByButtonValue, addr 0x5d9e0c0, size 0xf4, virtual false, abstract: false, final false
inline void PlayHapticsByButtonValue(bool  isLeftHand, float_t  strength) ;

/// @brief Method PlayHapticsByButtonValueBothHands, addr 0x5d9e1b4, size 0x30, virtual false, abstract: false, final false
inline void PlayHapticsByButtonValueBothHands(bool  isLeftHand, float_t  strength) ;

/// @brief Method PlayHapticsByVelocity, addr 0x5d9e1e4, size 0x1e0, virtual false, abstract: false, final false
inline void PlayHapticsByVelocity(bool  isLeftHand, float_t  velocity) ;

/// @brief Method PlayHapticsByVelocityBothHands, addr 0x5d9e3c4, size 0x20, virtual false, abstract: false, final false
inline void PlayHapticsByVelocityBothHands(bool  isLeftHand, float_t  velocity) ;

/// @brief Method PlayHapticsHeldItem, addr 0x5d9db58, size 0x238, virtual false, abstract: false, final false
inline void PlayHapticsHeldItem() ;

/// @brief Method PlayHapticsTransferableObject, addr 0x5d9db54, size 0x4, virtual false, abstract: false, final false
inline void PlayHapticsTransferableObject() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr bool const& __cordl_internal_get_leftHand() const;

constexpr bool& __cordl_internal_get_leftHand() ;

constexpr float_t const& __cordl_internal_get_maxHapticStrengthThreshold() const;

constexpr float_t& __cordl_internal_get_maxHapticStrengthThreshold() ;

constexpr float_t const& __cordl_internal_get_minHapticStrengthThreshold() const;

constexpr float_t& __cordl_internal_get_minHapticStrengthThreshold() ;

constexpr ::GorillaTag::Cosmetics::IHeldItem* const& __cordl_internal_get_myHeldItem() const;

constexpr ::GorillaTag::Cosmetics::IHeldItem*& __cordl_internal_get_myHeldItem() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentTransferable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentTransferable() ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_leftHand(bool  value) ;

constexpr void __cordl_internal_set_maxHapticStrengthThreshold(float_t  value) ;

constexpr void __cordl_internal_set_minHapticStrengthThreshold(float_t  value) ;

constexpr void __cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value) ;

constexpr void __cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d9e3e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayHapticsCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayHapticsCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayHapticsCosmetic(PlayHapticsCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayHapticsCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayHapticsCosmetic(PlayHapticsCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4962};

/// [SerializeField]
/// @brief Field hapticDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// [SerializeField]
/// @brief Field hapticStrength, offset: 0x24, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// [SerializeField]
/// @brief Field minHapticStrengthThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___minHapticStrengthThreshold;

/// [SerializeField]
/// @brief Field maxHapticStrengthThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxHapticStrengthThreshold;

/// [Tooltip("Only check this box if you are not setting the left/hand right from the subscriber")]
/// [SerializeField]
/// @brief Field leftHand, offset: 0x30, size: 0x1, def value: None
 bool  ___leftHand;

/// @brief Field parentTransferable, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentTransferable;

/// @brief Field myHeldItem, offset: 0x40, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::IHeldItem*  ___myHeldItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::PlayHapticsCosmetic, ___hapticDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PlayHapticsCosmetic, ___hapticStrength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PlayHapticsCosmetic, ___minHapticStrengthThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PlayHapticsCosmetic, ___maxHapticStrengthThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PlayHapticsCosmetic, ___leftHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PlayHapticsCosmetic, ___parentTransferable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PlayHapticsCosmetic, ___myHeldItem) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::PlayHapticsCosmetic) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
