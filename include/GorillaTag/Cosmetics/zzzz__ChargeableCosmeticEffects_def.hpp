#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ChargeableCosmeticEffects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ChargeableCosmeticEffects)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ChargeableCosmeticEffects;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ChargeableCosmeticEffects*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ChargeableCosmeticEffects*, "GorillaTag.Cosmetics", "ChargeableCosmeticEffects");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ChargeableCosmeticEffects
class CORDL_TYPE ChargeableCosmeticEffects : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field chargeGainSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeGainSpeed, put=__cordl_internal_set_chargeGainSpeed)) float_t  chargeGainSpeed;

/// @brief Field chargeLossSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeLossSpeed, put=__cordl_internal_set_chargeLossSpeed)) float_t  chargeLossSpeed;

/// @brief Field chargeTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeTime, put=__cordl_internal_set_chargeTime)) float_t  chargeTime;

/// @brief Field continuousProperties, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field hasFractionalsCached, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFractionalsCached, put=__cordl_internal_set_hasFractionalsCached)) bool  hasFractionalsCached;

/// @brief Field inverseMaxChargeSeconds, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_inverseMaxChargeSeconds, put=__cordl_internal_set_inverseMaxChargeSeconds)) float_t  inverseMaxChargeSeconds;

/// @brief Field isCharging, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCharging, put=__cordl_internal_set_isCharging)) bool  isCharging;

/// @brief Field masterChargeRemapCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_masterChargeRemapCurve, put=__cordl_internal_set_masterChargeRemapCurve)) ::UnityEngine::AnimationCurve*  masterChargeRemapCurve;

/// @brief Field maxChargeSeconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxChargeSeconds, put=__cordl_internal_set_maxChargeSeconds)) float_t  maxChargeSeconds;

/// @brief Field onMaxCharge, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaxCharge, put=__cordl_internal_set_onMaxCharge)) ::UnityEngine::Events::UnityEvent*  onMaxCharge;

/// @brief Field onNoCharge, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onNoCharge, put=__cordl_internal_set_onNoCharge)) ::UnityEngine::Events::UnityEvent*  onNoCharge;

/// @brief Field whileCharging, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_whileCharging, put=__cordl_internal_set_whileCharging)) ::UnityEngine::Events::UnityEvent_1<float_t>*  whileCharging;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5d7f1c4, size 0x2c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EmptyAndStart, addr 0x5d7f654, size 0x20, virtual false, abstract: false, final false
inline void EmptyAndStart() ;

/// @brief Method EmptyAndStop, addr 0x5d7f628, size 0xc, virtual false, abstract: false, final false
inline void EmptyAndStop() ;

/// @brief Method EmptyCharge, addr 0x5d7f618, size 0x8, virtual false, abstract: false, final false
inline void EmptyCharge() ;

/// @brief Method FillAndStart, addr 0x5d7f674, size 0x10, virtual false, abstract: false, final false
inline void FillAndStart() ;

/// @brief Method FillAndStop, addr 0x5d7f634, size 0x20, virtual false, abstract: false, final false
inline void FillAndStop() ;

/// @brief Method FillCharge, addr 0x5d7f620, size 0x8, virtual false, abstract: false, final false
inline void FillCharge() ;

/// @brief Method HasFractionals, addr 0x5d7f160, size 0x4c, virtual false, abstract: false, final false
inline bool HasFractionals() ;

static inline ::GorillaTag::Cosmetics::ChargeableCosmeticEffects* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d7f734, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d7f684, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RunChargeFrac, addr 0x5d7f584, size 0x88, virtual false, abstract: false, final false
inline void RunChargeFrac() ;

/// @brief Method RunMaxCharge, addr 0x5d7f3a0, size 0xf4, virtual false, abstract: false, final false
inline void RunMaxCharge() ;

/// @brief Method RunNoCharge, addr 0x5d7f494, size 0xf0, virtual false, abstract: false, final false
inline void RunNoCharge() ;

/// @brief Method SetChargeFrac, addr 0x5d7f60c, size 0xc, virtual false, abstract: false, final false
inline void SetChargeFrac(float_t  f) ;

/// @brief Method SetChargeState, addr 0x5d7f2fc, size 0x84, virtual false, abstract: false, final false
inline void SetChargeState(bool  state) ;

/// @brief Method SetChargeTime, addr 0x5d7f20c, size 0xf0, virtual false, abstract: false, final false
inline void SetChargeTime(float_t  t) ;

/// @brief Method SetMaxChargeSeconds, addr 0x5d7f1f0, size 0x1c, virtual false, abstract: false, final false
inline void SetMaxChargeSeconds(float_t  s) ;

/// @brief Method StartCharging, addr 0x5d7f380, size 0x8, virtual false, abstract: false, final false
inline void StartCharging() ;

/// @brief Method StopCharging, addr 0x5d7f388, size 0x8, virtual false, abstract: false, final false
inline void StopCharging() ;

/// @brief Method Tick, addr 0x5d7fab0, size 0xb0, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method ToggleCharging, addr 0x5d7f390, size 0x10, virtual false, abstract: false, final false
inline void ToggleCharging() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_chargeGainSpeed() const;

constexpr float_t& __cordl_internal_get_chargeGainSpeed() ;

constexpr float_t const& __cordl_internal_get_chargeLossSpeed() const;

constexpr float_t& __cordl_internal_get_chargeLossSpeed() ;

constexpr float_t const& __cordl_internal_get_chargeTime() const;

constexpr float_t& __cordl_internal_get_chargeTime() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr bool const& __cordl_internal_get_hasFractionalsCached() const;

constexpr bool& __cordl_internal_get_hasFractionalsCached() ;

constexpr float_t const& __cordl_internal_get_inverseMaxChargeSeconds() const;

constexpr float_t& __cordl_internal_get_inverseMaxChargeSeconds() ;

constexpr bool const& __cordl_internal_get_isCharging() const;

constexpr bool& __cordl_internal_get_isCharging() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_masterChargeRemapCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_masterChargeRemapCurve() ;

constexpr float_t const& __cordl_internal_get_maxChargeSeconds() const;

constexpr float_t& __cordl_internal_get_maxChargeSeconds() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onMaxCharge() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onMaxCharge() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onNoCharge() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onNoCharge() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_whileCharging() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_whileCharging() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_chargeGainSpeed(float_t  value) ;

constexpr void __cordl_internal_set_chargeLossSpeed(float_t  value) ;

constexpr void __cordl_internal_set_chargeTime(float_t  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_hasFractionalsCached(bool  value) ;

constexpr void __cordl_internal_set_inverseMaxChargeSeconds(float_t  value) ;

constexpr void __cordl_internal_set_isCharging(bool  value) ;

constexpr void __cordl_internal_set_masterChargeRemapCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_maxChargeSeconds(float_t  value) ;

constexpr void __cordl_internal_set_onMaxCharge(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onNoCharge(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_whileCharging(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x5d7fb60, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d7faa0, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d7faa8, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChargeableCosmeticEffects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChargeableCosmeticEffects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChargeableCosmeticEffects(ChargeableCosmeticEffects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChargeableCosmeticEffects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChargeableCosmeticEffects(ChargeableCosmeticEffects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4875};

/// [SerializeField]
/// @brief Field maxChargeSeconds, offset: 0x20, size: 0x4, def value: None
 float_t  ___maxChargeSeconds;

/// [SerializeField]
/// @brief Field chargeGainSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___chargeGainSpeed;

/// [SerializeField]
/// @brief Field chargeLossSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___chargeLossSpeed;

/// [Tooltip("This will remap the internal charge output to whatever you set. The remapped value will be output by \'whileCharging\' and the \'continuousProperties\' (keep in mind that the remapped value will then be used as an INPUT for the curves on each ContinuousProperty).\n\nIt should start at (0,0) and end at (1,1).\n\nDisabled if there are no ContinuousProperties and no whileCharging event callbacks.")]
/// [SerializeField]
/// @brief Field masterChargeRemapCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___masterChargeRemapCurve;

/// [SerializeField]
/// @brief Field isCharging, offset: 0x38, size: 0x1, def value: None
 bool  ___isCharging;

/// [SerializeField]
/// @brief Field continuousProperties, offset: 0x40, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [SerializeField]
/// @brief Field whileCharging, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___whileCharging;

/// [SerializeField]
/// @brief Field onMaxCharge, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onMaxCharge;

/// [SerializeField]
/// @brief Field onNoCharge, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onNoCharge;

/// @brief Field chargeTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___chargeTime;

/// @brief Field inverseMaxChargeSeconds, offset: 0x64, size: 0x4, def value: None
 float_t  ___inverseMaxChargeSeconds;

/// @brief Field hasFractionalsCached, offset: 0x68, size: 0x1, def value: None
 bool  ___hasFractionalsCached;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x69, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___maxChargeSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___chargeGainSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___chargeLossSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___masterChargeRemapCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___isCharging) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___continuousProperties) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___whileCharging) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___onMaxCharge) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___onNoCharge) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___chargeTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___inverseMaxChargeSeconds) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ___hasFractionalsCached) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects, ____TickRunning_k__BackingField) == 0x69, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ChargeableCosmeticEffects) == 0x70, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
