#pragma once
// IWYU pragma private; include "Cosmetics/CosmeticsLocalHandReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticsLocalHandReactor)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Cosmetics {
class CosmeticsLocalHandReactor;
}
// Write type traits
MARK_REF_T(::Cosmetics::CosmeticsLocalHandReactor*);
DEFINE_IL2CPP_CLASS(::Cosmetics::CosmeticsLocalHandReactor*, "Cosmetics", "CosmeticsLocalHandReactor");
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.CosmeticsLocalHandReactor
class CORDL_TYPE CosmeticsLocalHandReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field colliders, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliders;

/// @brief Field cooldownTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTime, put=__cordl_internal_set_cooldownTime)) float_t  cooldownTime;

/// @brief Field handLayer, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_handLayer, put=__cordl_internal_set_handLayer)) ::UnityEngine::LayerMask  handLayer;

/// @brief Field hapticDuration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field lastTriggerTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggerTime, put=__cordl_internal_set_lastTriggerTime)) float_t  lastTriggerTime;

/// @brief Field onTrigger, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTrigger, put=__cordl_internal_set_onTrigger)) ::UnityEngine::Events::UnityEvent_1<bool>*  onTrigger;

/// @brief Field ownerIsLocal, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_ownerIsLocal, put=__cordl_internal_set_ownerIsLocal)) bool  ownerIsLocal;

/// @brief Field ownerRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field proximityThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_proximityThreshold, put=__cordl_internal_set_proximityThreshold)) float_t  proximityThreshold;

/// @brief Method Awake, addr 0x5d1b7bc, size 0x1bc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5d1b978, size 0x248, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Cosmetics::CosmeticsLocalHandReactor* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliders() ;

constexpr float_t const& __cordl_internal_get_cooldownTime() const;

constexpr float_t& __cordl_internal_get_cooldownTime() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_handLayer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_handLayer() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr float_t const& __cordl_internal_get_lastTriggerTime() const;

constexpr float_t& __cordl_internal_get_lastTriggerTime() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_onTrigger() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_onTrigger() ;

constexpr bool const& __cordl_internal_get_ownerIsLocal() const;

constexpr bool& __cordl_internal_get_ownerIsLocal() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr float_t const& __cordl_internal_get_proximityThreshold() const;

constexpr float_t& __cordl_internal_get_proximityThreshold() ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_cooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_handLayer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_lastTriggerTime(float_t  value) ;

constexpr void __cordl_internal_set_onTrigger(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_ownerIsLocal(bool  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_proximityThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x5d1bbc0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsLocalHandReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsLocalHandReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsLocalHandReactor(CosmeticsLocalHandReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsLocalHandReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsLocalHandReactor(CosmeticsLocalHandReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4579};

/// [SerializeField]
/// @brief Field hapticStrength, offset: 0x20, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// [SerializeField]
/// @brief Field hapticDuration, offset: 0x24, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// [Tooltip("The distance threshold (in meters) for triggering the interaction.\nIf the hand enters this range, onTrigger is fired.")]
/// @brief Field proximityThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___proximityThreshold;

/// [Tooltip("Minimum time (in seconds) between consecutive triggers.\n")]
/// [SerializeField]
/// @brief Field cooldownTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___cooldownTime;

/// @brief Field onTrigger, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___onTrigger;

/// @brief Field ownerRig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field ownerIsLocal, offset: 0x40, size: 0x1, def value: None
 bool  ___ownerIsLocal;

/// @brief Field lastTriggerTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___lastTriggerTime;

/// @brief Field colliders, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliders;

/// @brief Field handLayer, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___handLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___hapticStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___hapticDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___proximityThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___cooldownTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___onTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___ownerRig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___ownerIsLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___lastTriggerTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___colliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticsLocalHandReactor, ___handLayer) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Cosmetics::CosmeticsLocalHandReactor) == 0x58, "Size mismatch!");

} // namespace end def Cosmetics
