#pragma once
// IWYU pragma private; include "GlobalNamespace/ProximityEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProximityEffect)
namespace GlobalNamespace {
class IProximityEffectReceiver;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class ProximityEffectScoreCurvesSO;
}
namespace GlobalNamespace {
class ProximityEffect_ProximityEvent;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ProximityEffect;
}
namespace GlobalNamespace {
class ProximityEffect_ProximityEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProximityEffect*);
MARK_REF_T(::GlobalNamespace::ProximityEffect_ProximityEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProximityEffect*, "", "ProximityEffect");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProximityEffect_ProximityEvent*, "", "ProximityEffect/ProximityEvent");
// Dependencies ProximityEffect::ProximityEvent, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProximityEffect
class CORDL_TYPE ProximityEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ProximityEvent = ::GlobalNamespace::ProximityEffect_ProximityEvent;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field anyAboveThreshold, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyAboveThreshold, put=__cordl_internal_set_anyAboveThreshold)) bool  anyAboveThreshold;

/// @brief Field centerTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_centerTransform, put=__cordl_internal_set_centerTransform)) ::UnityW<::UnityEngine::Transform>  centerTransform;

/// @brief Field continuousProperties, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field defaultLeftHandLocalEuler, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_defaultLeftHandLocalEuler, put=__cordl_internal_set_defaultLeftHandLocalEuler)) ::UnityEngine::Vector3  defaultLeftHandLocalEuler;

/// @brief Field defaultLeftHandLocalPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_defaultLeftHandLocalPosition, put=__cordl_internal_set_defaultLeftHandLocalPosition)) ::UnityEngine::Vector3  defaultLeftHandLocalPosition;

/// @brief Field enableVisualization, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableVisualization, put=__cordl_internal_set_enableVisualization)) bool  enableVisualization;

/// @brief Field events, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::ArrayW<::GlobalNamespace::ProximityEffect_ProximityEvent*>  events;

/// @brief Field leftTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftTransform, put=__cordl_internal_set_leftTransform)) ::UnityW<::UnityEngine::Transform>  leftTransform;

/// @brief Field numTriggers, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_numTriggers, put=__cordl_internal_set_numTriggers)) int32_t  numTriggers;

/// @brief Field onScoreCalculated, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onScoreCalculated, put=__cordl_internal_set_onScoreCalculated)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onScoreCalculated;

/// @brief Field positionCTLerpSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionCTLerpSpeed, put=__cordl_internal_set_positionCTLerpSpeed)) float_t  positionCTLerpSpeed;

/// @brief Field receivers, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_receivers, put=__cordl_internal_set_receivers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IProximityEffectReceiver*>*  receivers;

/// @brief Field rig, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field rightTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightTransform, put=__cordl_internal_set_rightTransform)) ::UnityW<::UnityEngine::Transform>  rightTransform;

/// @brief Field rotateCT, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotateCT, put=__cordl_internal_set_rotateCT)) bool  rotateCT;

/// @brief Field rotationCTLerpSpeed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationCTLerpSpeed, put=__cordl_internal_set_rotationCTLerpSpeed)) float_t  rotationCTLerpSpeed;

/// @brief Field scaleCT, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleCT, put=__cordl_internal_set_scaleCT)) bool  scaleCT;

/// @brief Field scaleCTLerpSpeed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleCTLerpSpeed, put=__cordl_internal_set_scaleCTLerpSpeed)) float_t  scaleCTLerpSpeed;

/// @brief Field scaleCTMult, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleCTMult, put=__cordl_internal_set_scaleCTMult)) float_t  scaleCTMult;

/// @brief Field scoreCurves, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreCurves, put=__cordl_internal_set_scoreCurves)) ::UnityW<::GlobalNamespace::ProximityEffectScoreCurvesSO>  scoreCurves;

/// @brief Field triggersToActivate, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggersToActivate, put=__cordl_internal_set_triggersToActivate)) int32_t  triggersToActivate;

/// @brief Field visualizationLineThickness, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_visualizationLineThickness, put=__cordl_internal_set_visualizationLineThickness)) float_t  visualizationLineThickness;

/// @brief Field visualizationMaterial, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_visualizationMaterial, put=__cordl_internal_set_visualizationMaterial)) ::UnityW<::UnityEngine::Material>  visualizationMaterial;

/// @brief Field visualizer, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_visualizer, put=__cordl_internal_set_visualizer)) ::UnityW<::UnityEngine::LineRenderer>  visualizer;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddReceiver, addr 0x56596a0, size 0x198, virtual false, abstract: false, final false
inline void AddReceiver(::GlobalNamespace::IProximityEffectReceiver*  receiver) ;

/// @brief Method AddTrigger, addr 0x5659a94, size 0x28, virtual false, abstract: false, final false
inline void AddTrigger() ;

/// @brief Method Awake, addr 0x56595d0, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateProximityScores, addr 0x5659af8, size 0x30, virtual false, abstract: false, final false
inline void CalculateProximityScores() ;

/// @brief Method CalculateProximityScores, addr 0x5659db4, size 0x18, virtual false, abstract: false, final false
inline void CalculateProximityScores(::by_ref<float_t>  distance, ::by_ref<float_t>  alignment, ::by_ref<float_t>  parallel, ::by_ref<::UnityEngine::Vector3>  midpoint) ;

/// @brief Method CalculateProximityScores, addr 0x5659b28, size 0x28c, virtual false, abstract: false, final false
inline void CalculateProximityScores(bool  drawGizmos, ::by_ref<float_t>  distance, ::by_ref<float_t>  alignment, ::by_ref<float_t>  parallel, ::by_ref<::UnityEngine::Vector3>  midpoint) ;

/// @brief Method MoveTransform, addr 0x5659dcc, size 0x3c4, virtual false, abstract: false, final false
inline void MoveTransform(::UnityEngine::Transform*  target, float_t  score, ::UnityEngine::Vector3  midpoint) ;

static inline ::GlobalNamespace::ProximityEffect* New_ctor() ;

/// @brief Method OnDisable, addr 0x5659a84, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5659a74, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveReceiver, addr 0x5659838, size 0x58, virtual false, abstract: false, final false
inline void RemoveReceiver(::GlobalNamespace::IProximityEffectReceiver*  receiver) ;

/// @brief Method RemoveTrigger, addr 0x5659abc, size 0x3c, virtual false, abstract: false, final false
inline void RemoveTrigger() ;

/// @brief Method StartCalculating, addr 0x5659890, size 0xe4, virtual false, abstract: false, final false
inline void StartCalculating() ;

/// @brief Method StopCalculating, addr 0x5659974, size 0xf4, virtual false, abstract: false, final false
inline void StopCalculating() ;

/// @brief Method Tick, addr 0x565a1d0, size 0x24c, virtual true, abstract: false, final true
inline void Tick() ;

/// [CompilerGenerated]
/// @brief Method <MoveTransform>g__ExpT|40_0, addr 0x565a190, size 0x30, virtual false, abstract: false, final false
static inline float_t _MoveTransform_g__ExpT_40_0(float_t  speed) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get_anyAboveThreshold() const;

constexpr bool& __cordl_internal_get_anyAboveThreshold() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_centerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_centerTransform() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultLeftHandLocalEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultLeftHandLocalEuler() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultLeftHandLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultLeftHandLocalPosition() ;

constexpr bool const& __cordl_internal_get_enableVisualization() const;

constexpr bool& __cordl_internal_get_enableVisualization() ;

constexpr ::ArrayW<::GlobalNamespace::ProximityEffect_ProximityEvent*> const& __cordl_internal_get_events() const;

constexpr ::ArrayW<::GlobalNamespace::ProximityEffect_ProximityEvent*>& __cordl_internal_get_events() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftTransform() ;

constexpr int32_t const& __cordl_internal_get_numTriggers() const;

constexpr int32_t& __cordl_internal_get_numTriggers() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onScoreCalculated() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onScoreCalculated() ;

constexpr float_t const& __cordl_internal_get_positionCTLerpSpeed() const;

constexpr float_t& __cordl_internal_get_positionCTLerpSpeed() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IProximityEffectReceiver*>* const& __cordl_internal_get_receivers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IProximityEffectReceiver*>*& __cordl_internal_get_receivers() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightTransform() ;

constexpr bool const& __cordl_internal_get_rotateCT() const;

constexpr bool& __cordl_internal_get_rotateCT() ;

constexpr float_t const& __cordl_internal_get_rotationCTLerpSpeed() const;

constexpr float_t& __cordl_internal_get_rotationCTLerpSpeed() ;

constexpr bool const& __cordl_internal_get_scaleCT() const;

constexpr bool& __cordl_internal_get_scaleCT() ;

constexpr float_t const& __cordl_internal_get_scaleCTLerpSpeed() const;

constexpr float_t& __cordl_internal_get_scaleCTLerpSpeed() ;

constexpr float_t const& __cordl_internal_get_scaleCTMult() const;

constexpr float_t& __cordl_internal_get_scaleCTMult() ;

constexpr ::UnityW<::GlobalNamespace::ProximityEffectScoreCurvesSO> const& __cordl_internal_get_scoreCurves() const;

constexpr ::UnityW<::GlobalNamespace::ProximityEffectScoreCurvesSO>& __cordl_internal_get_scoreCurves() ;

constexpr int32_t const& __cordl_internal_get_triggersToActivate() const;

constexpr int32_t& __cordl_internal_get_triggersToActivate() ;

constexpr float_t const& __cordl_internal_get_visualizationLineThickness() const;

constexpr float_t& __cordl_internal_get_visualizationLineThickness() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_visualizationMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_visualizationMaterial() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_visualizer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_visualizer() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_anyAboveThreshold(bool  value) ;

constexpr void __cordl_internal_set_centerTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_defaultLeftHandLocalEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_defaultLeftHandLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_enableVisualization(bool  value) ;

constexpr void __cordl_internal_set_events(::ArrayW<::GlobalNamespace::ProximityEffect_ProximityEvent*>  value) ;

constexpr void __cordl_internal_set_leftTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_numTriggers(int32_t  value) ;

constexpr void __cordl_internal_set_onScoreCalculated(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_positionCTLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_receivers(::System::Collections::Generic::List_1<::GlobalNamespace::IProximityEffectReceiver*>*  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rightTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rotateCT(bool  value) ;

constexpr void __cordl_internal_set_rotationCTLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_scaleCT(bool  value) ;

constexpr void __cordl_internal_set_scaleCTLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_scaleCTMult(float_t  value) ;

constexpr void __cordl_internal_set_scoreCurves(::UnityW<::GlobalNamespace::ProximityEffectScoreCurvesSO>  value) ;

constexpr void __cordl_internal_set_triggersToActivate(int32_t  value) ;

constexpr void __cordl_internal_set_visualizationLineThickness(float_t  value) ;

constexpr void __cordl_internal_set_visualizationMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_visualizer(::UnityW<::UnityEngine::LineRenderer>  value) ;

/// @brief Method .ctor, addr 0x565a4f4, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x565a1c0, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x565a1c8, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProximityEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProximityEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProximityEffect(ProximityEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProximityEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProximityEffect(ProximityEffect const& ) = delete;

/// @brief Field SHOW_CONDITION offset 0xffffffff size 0x8
static constexpr ::ConstString  SHOW_CONDITION{u"@centerTransform != null"};

/// @brief Field SHOW_ROTATE_CONDITION offset 0xffffffff size 0x8
static constexpr ::ConstString  SHOW_ROTATE_CONDITION{u"@centerTransform != null && rotateCT"};

/// @brief Field SHOW_SCALE_CONDITION offset 0xffffffff size 0x8
static constexpr ::ConstString  SHOW_SCALE_CONDITION{u"@centerTransform != null && scaleCT"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{759};

/// [SerializeField]
/// @brief Field leftTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftTransform;

/// [SerializeField]
/// @brief Field rightTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightTransform;

/// [SerializeField]
/// [Tooltip("How many times AddTrigger() needs to be called before the events are allowed to be invoked. Used for pausing events until certain actions are performed (like squeezing the triggers of both controllers).")]
/// @brief Field triggersToActivate, offset: 0x30, size: 0x4, def value: None
 int32_t  ___triggersToActivate;

/// [Space]
/// [SerializeField]
/// [Tooltip("The transform that moves to follow the midpoint of the left and right transforms.")]
/// @brief Field centerTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___centerTransform;

/// [SerializeField]
/// @brief Field positionCTLerpSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___positionCTLerpSpeed;

/// [SerializeField]
/// @brief Field rotateCT, offset: 0x44, size: 0x1, def value: None
 bool  ___rotateCT;

/// [SerializeField]
/// @brief Field rotationCTLerpSpeed, offset: 0x48, size: 0x4, def value: None
 float_t  ___rotationCTLerpSpeed;

/// [SerializeField]
/// @brief Field scaleCT, offset: 0x4c, size: 0x1, def value: None
 bool  ___scaleCT;

/// [SerializeField]
/// @brief Field scaleCTLerpSpeed, offset: 0x50, size: 0x4, def value: None
 float_t  ___scaleCTLerpSpeed;

/// [SerializeField]
/// @brief Field scaleCTMult, offset: 0x54, size: 0x4, def value: None
 float_t  ___scaleCTMult;

/// [Space]
/// [SerializeField]
/// [Tooltip("The curves that get evaluated to determine the alignment score. They get multiplied together, so their Y values should all range from 0-1. The result is compared against the thresholds of the ProximityEvents.")]
/// @brief Field scoreCurves, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProximityEffectScoreCurvesSO>  ___scoreCurves;

/// [Space]
/// [SerializeField]
/// @brief Field continuousProperties, offset: 0x60, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [SerializeField]
/// @brief Field onScoreCalculated, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onScoreCalculated;

/// [SerializeField]
/// @brief Field events, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ProximityEffect_ProximityEvent*>  ___events;

/// [Header("Editor Only")]
/// [SerializeField]
/// @brief Field defaultLeftHandLocalPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___defaultLeftHandLocalPosition;

/// [SerializeField]
/// @brief Field defaultLeftHandLocalEuler, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___defaultLeftHandLocalEuler;

/// [Header("Visualization is currently NOT WORKING IN PLAY MODE due to tick optimization")]
/// [SerializeField]
/// @brief Field enableVisualization, offset: 0x90, size: 0x1, def value: None
 bool  ___enableVisualization;

/// [SerializeField]
/// @brief Field visualizationMaterial, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___visualizationMaterial;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field visualizationLineThickness, offset: 0xa0, size: 0x4, def value: None
 float_t  ___visualizationLineThickness;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field visualizer, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___visualizer;

/// @brief Field receivers, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IProximityEffectReceiver*>*  ___receivers;

/// @brief Field rig, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field anyAboveThreshold, offset: 0xc0, size: 0x1, def value: None
 bool  ___anyAboveThreshold;

/// @brief Field numTriggers, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___numTriggers;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xc8, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___leftTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___rightTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___triggersToActivate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___centerTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___positionCTLerpSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___rotateCT) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___rotationCTLerpSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___scaleCT) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___scaleCTLerpSpeed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___scaleCTMult) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___scoreCurves) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___continuousProperties) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___onScoreCalculated) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___events) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___defaultLeftHandLocalPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___defaultLeftHandLocalEuler) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___enableVisualization) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___visualizationMaterial) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___visualizationLineThickness) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___visualizer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___receivers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___rig) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___anyAboveThreshold) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ___numTriggers) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect, ____TickRunning_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProximityEffect) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProximityEffect/ProximityEvent
class CORDL_TYPE ProximityEffect_ProximityEvent : public ::System::Object {
public:
// Declarations
/// @brief Field highThreshold, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_highThreshold, put=__cordl_internal_set_highThreshold)) float_t  highThreshold;

/// @brief Field highThresholdBufferTime, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_highThresholdBufferTime, put=__cordl_internal_set_highThresholdBufferTime)) float_t  highThresholdBufferTime;

/// @brief Field lastThresholdTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastThresholdTime, put=__cordl_internal_set_lastThresholdTime)) float_t  lastThresholdTime;

/// @brief Field lowThreshold, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowThreshold, put=__cordl_internal_set_lowThreshold)) float_t  lowThreshold;

/// @brief Field lowThresholdBufferTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowThresholdBufferTime, put=__cordl_internal_set_lowThresholdBufferTime)) float_t  lowThresholdBufferTime;

/// @brief Field onThresholdHigh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onThresholdHigh, put=__cordl_internal_set_onThresholdHigh)) ::UnityEngine::Events::UnityEvent*  onThresholdHigh;

/// @brief Field onThresholdLow, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onThresholdLow, put=__cordl_internal_set_onThresholdLow)) ::UnityEngine::Events::UnityEvent*  onThresholdLow;

/// @brief Field wasAboveThreshold, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasAboveThreshold, put=__cordl_internal_set_wasAboveThreshold)) bool  wasAboveThreshold;

/// @brief Field wasBelowThreshold, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasBelowThreshold, put=__cordl_internal_set_wasBelowThreshold)) bool  wasBelowThreshold;

/// @brief Method Evaluate, addr 0x565a41c, size 0xd8, virtual false, abstract: false, final false
inline bool Evaluate(float_t  score) ;

static inline ::GlobalNamespace::ProximityEffect_ProximityEvent* New_ctor() ;

/// @brief Method ResetAllEvents, addr 0x5659a68, size 0xc, virtual false, abstract: false, final false
inline void ResetAllEvents() ;

constexpr float_t const& __cordl_internal_get_highThreshold() const;

constexpr float_t& __cordl_internal_get_highThreshold() ;

constexpr float_t const& __cordl_internal_get_highThresholdBufferTime() const;

constexpr float_t& __cordl_internal_get_highThresholdBufferTime() ;

constexpr float_t const& __cordl_internal_get_lastThresholdTime() const;

constexpr float_t& __cordl_internal_get_lastThresholdTime() ;

constexpr float_t const& __cordl_internal_get_lowThreshold() const;

constexpr float_t& __cordl_internal_get_lowThreshold() ;

constexpr float_t const& __cordl_internal_get_lowThresholdBufferTime() const;

constexpr float_t& __cordl_internal_get_lowThresholdBufferTime() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onThresholdHigh() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onThresholdHigh() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onThresholdLow() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onThresholdLow() ;

constexpr bool const& __cordl_internal_get_wasAboveThreshold() const;

constexpr bool& __cordl_internal_get_wasAboveThreshold() ;

constexpr bool const& __cordl_internal_get_wasBelowThreshold() const;

constexpr bool& __cordl_internal_get_wasBelowThreshold() ;

constexpr void __cordl_internal_set_highThreshold(float_t  value) ;

constexpr void __cordl_internal_set_highThresholdBufferTime(float_t  value) ;

constexpr void __cordl_internal_set_lastThresholdTime(float_t  value) ;

constexpr void __cordl_internal_set_lowThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lowThresholdBufferTime(float_t  value) ;

constexpr void __cordl_internal_set_onThresholdHigh(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onThresholdLow(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_wasAboveThreshold(bool  value) ;

constexpr void __cordl_internal_set_wasBelowThreshold(bool  value) ;

/// @brief Method .ctor, addr 0x565a540, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProximityEffect_ProximityEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProximityEffect_ProximityEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProximityEffect_ProximityEvent(ProximityEffect_ProximityEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProximityEffect_ProximityEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProximityEffect_ProximityEvent(ProximityEffect_ProximityEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{758};

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("High-threshold events will only fire if the alignment score is above this value.")]
/// @brief Field highThreshold, offset: 0x10, size: 0x4, def value: None
 float_t  ___highThreshold;

/// [SerializeField]
/// [Tooltip("Wait this many seconds before activating the high-threshold events.")]
/// @brief Field highThresholdBufferTime, offset: 0x14, size: 0x4, def value: None
 float_t  ___highThresholdBufferTime;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Low-threshold events will only fire if the alignment score is below this value.")]
/// @brief Field lowThreshold, offset: 0x18, size: 0x4, def value: None
 float_t  ___lowThreshold;

/// [SerializeField]
/// [Tooltip("Wait this many seconds before activating the low-threshold events.")]
/// @brief Field lowThresholdBufferTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___lowThresholdBufferTime;

/// @brief Field onThresholdHigh, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onThresholdHigh;

/// @brief Field onThresholdLow, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onThresholdLow;

/// @brief Field wasAboveThreshold, offset: 0x30, size: 0x1, def value: None
 bool  ___wasAboveThreshold;

/// @brief Field wasBelowThreshold, offset: 0x31, size: 0x1, def value: None
 bool  ___wasBelowThreshold;

/// @brief Field lastThresholdTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___lastThresholdTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___highThreshold) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___highThresholdBufferTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___lowThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___lowThresholdBufferTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___onThresholdHigh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___onThresholdLow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___wasAboveThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___wasBelowThreshold) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProximityEffect_ProximityEvent, ___lastThresholdTime) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProximityEffect_ProximityEvent) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
