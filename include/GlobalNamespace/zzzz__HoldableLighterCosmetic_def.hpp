#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableLighterCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableLighterCosmetic_LighterResult_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HoldableLighterCosmetic)
namespace GlobalNamespace {
struct HoldableLighterCosmetic_LighterResult;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class HoldableLighterCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoldableLighterCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoldableLighterCosmetic*, "", "HoldableLighterCosmetic");
// Dependencies HoldableLighterCosmetic::LighterResult, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoldableLighterCosmetic
class CORDL_TYPE HoldableLighterCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LighterResult = ::GlobalNamespace::HoldableLighterCosmetic_LighterResult;

/// @brief Field OnExplode, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnExplode, put=__cordl_internal_set_OnExplode)) ::UnityEngine::Events::UnityEvent*  OnExplode;

/// @brief Field OnFlicker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFlicker, put=__cordl_internal_set_OnFlicker)) ::UnityEngine::Events::UnityEvent*  OnFlicker;

/// @brief Field OnLight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLight, put=__cordl_internal_set_OnLight)) ::UnityEngine::Events::UnityEvent*  OnLight;

/// @brief Field OnTriggerRelease, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTriggerRelease, put=__cordl_internal_set_OnTriggerRelease)) ::UnityEngine::Events::UnityEvent*  OnTriggerRelease;

/// @brief Field OwnerID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_OwnerID, put=__cordl_internal_set_OwnerID)) int32_t  OwnerID;

/// @brief Field explodeWeight, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_explodeWeight, put=__cordl_internal_set_explodeWeight)) float_t  explodeWeight;

/// @brief Field flickerWeight, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_flickerWeight, put=__cordl_internal_set_flickerWeight)) float_t  flickerWeight;

/// @brief Field lastCheckTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCheckTime, put=__cordl_internal_set_lastCheckTime)) float_t  lastCheckTime;

/// @brief Field lightWeight, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightWeight, put=__cordl_internal_set_lightWeight)) float_t  lightWeight;

/// @brief Field parentTransferable, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTransferable, put=__cordl_internal_set_parentTransferable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentTransferable;

/// @brief Field resultTimeline, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultTimeline, put=__cordl_internal_set_resultTimeline)) ::ArrayW<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>  resultTimeline;

/// @brief Field rig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field triggerHeld, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerHeld, put=__cordl_internal_set_triggerHeld)) bool  triggerHeld;

/// @brief Method Awake, addr 0x57f1e80, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DebugPull, addr 0x57f1f98, size 0x4, virtual false, abstract: false, final false
inline void DebugPull() ;

/// @brief Method DebugRelease, addr 0x57f21b0, size 0x1c, virtual false, abstract: false, final false
inline void DebugRelease() ;

/// @brief Method GetResultAtTime, addr 0x57f2334, size 0xf0, virtual false, abstract: false, final false
inline ::GlobalNamespace::HoldableLighterCosmetic_LighterResult GetResultAtTime(double_t  photonTime, int32_t  seed) ;

/// @brief Method IsMyItem, addr 0x57f1f10, size 0x88, virtual false, abstract: false, final false
inline bool IsMyItem() ;

static inline ::GlobalNamespace::HoldableLighterCosmetic* New_ctor() ;

/// @brief Method OnEnable, addr 0x57f1e7c, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TriggerPulled, addr 0x57f1f9c, size 0x214, virtual false, abstract: false, final false
inline void TriggerPulled() ;

/// @brief Method TriggerReleased, addr 0x57f21cc, size 0x1c, virtual false, abstract: false, final false
inline void TriggerReleased() ;

/// @brief Method TrySetID, addr 0x57f21e8, size 0x14c, virtual false, abstract: false, final false
inline void TrySetID() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnExplode() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnExplode() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnFlicker() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnFlicker() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLight() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLight() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTriggerRelease() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTriggerRelease() ;

constexpr int32_t const& __cordl_internal_get_OwnerID() const;

constexpr int32_t& __cordl_internal_get_OwnerID() ;

constexpr float_t const& __cordl_internal_get_explodeWeight() const;

constexpr float_t& __cordl_internal_get_explodeWeight() ;

constexpr float_t const& __cordl_internal_get_flickerWeight() const;

constexpr float_t& __cordl_internal_get_flickerWeight() ;

constexpr float_t const& __cordl_internal_get_lastCheckTime() const;

constexpr float_t& __cordl_internal_get_lastCheckTime() ;

constexpr float_t const& __cordl_internal_get_lightWeight() const;

constexpr float_t& __cordl_internal_get_lightWeight() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentTransferable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentTransferable() ;

constexpr ::ArrayW<::GlobalNamespace::HoldableLighterCosmetic_LighterResult> const& __cordl_internal_get_resultTimeline() const;

constexpr ::ArrayW<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>& __cordl_internal_get_resultTimeline() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr bool const& __cordl_internal_get_triggerHeld() const;

constexpr bool& __cordl_internal_get_triggerHeld() ;

constexpr void __cordl_internal_set_OnExplode(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnFlicker(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnLight(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnTriggerRelease(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OwnerID(int32_t  value) ;

constexpr void __cordl_internal_set_explodeWeight(float_t  value) ;

constexpr void __cordl_internal_set_flickerWeight(float_t  value) ;

constexpr void __cordl_internal_set_lastCheckTime(float_t  value) ;

constexpr void __cordl_internal_set_lightWeight(float_t  value) ;

constexpr void __cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_resultTimeline(::ArrayW<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_triggerHeld(bool  value) ;

/// @brief Method .ctor, addr 0x57f2424, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoldableLighterCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoldableLighterCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoldableLighterCosmetic(HoldableLighterCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoldableLighterCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoldableLighterCosmetic(HoldableLighterCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{196};

/// @brief Field OwnerID, offset: 0x20, size: 0x4, def value: None
 int32_t  ___OwnerID;

/// [Header("Weights (0 to 1 total)")]
/// [Range(0, 1)]
/// @brief Field flickerWeight, offset: 0x24, size: 0x4, def value: None
 float_t  ___flickerWeight;

/// [Range(0, 1)]
/// @brief Field lightWeight, offset: 0x28, size: 0x4, def value: None
 float_t  ___lightWeight;

/// [Range(0, 1)]
/// @brief Field explodeWeight, offset: 0x2c, size: 0x4, def value: None
 float_t  ___explodeWeight;

/// [Header("Unity Events")]
/// @brief Field OnFlicker, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnFlicker;

/// @brief Field OnLight, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLight;

/// @brief Field OnExplode, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnExplode;

/// @brief Field OnTriggerRelease, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTriggerRelease;

/// @brief Field resultTimeline, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::HoldableLighterCosmetic_LighterResult>  ___resultTimeline;

/// @brief Field triggerHeld, offset: 0x58, size: 0x1, def value: None
 bool  ___triggerHeld;

/// @brief Field lastCheckTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___lastCheckTime;

/// @brief Field rig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field parentTransferable, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentTransferable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___OwnerID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___flickerWeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___lightWeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___explodeWeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___OnFlicker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___OnLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___OnExplode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___OnTriggerRelease) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___resultTimeline) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___triggerHeld) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___lastCheckTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___rig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoldableLighterCosmetic, ___parentTransferable) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoldableLighterCosmetic) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
