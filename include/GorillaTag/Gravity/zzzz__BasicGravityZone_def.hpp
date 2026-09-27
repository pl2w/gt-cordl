#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/BasicGravityZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__GravityZoneRule_def.hpp"
#include "GorillaTag/Gravity/zzzz__GravityZoneScaleFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasicGravityZone)
namespace GT_CustomMapSupportRuntime {
class BasicGravityZoneSettings;
}
namespace GlobalNamespace {
class ICallBack;
}
namespace GlobalNamespace {
class ICallbackUnique;
}
namespace GorillaTag::Gravity {
class BasicGravityZone__DelayedTransition_d__47;
}
namespace GorillaTag::Gravity {
struct GravityInfo;
}
namespace GorillaTag::Gravity {
struct GravityZoneRule;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace GorillaTag {
template<typename T>
class ListProcessor_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class BasicGravityZone;
}
namespace GorillaTag::Gravity {
class BasicGravityZone__DelayedTransition_d__47;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::BasicGravityZone*);
MARK_REF_T(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::BasicGravityZone*, "GorillaTag.Gravity", "BasicGravityZone");
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47*, "GorillaTag.Gravity", "BasicGravityZone/<DelayedTransition>d__47");
// Dependencies GorillaTag.Gravity.GravityZoneRule, GorillaTag.Gravity.GravityZoneScaleFilter, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.BasicGravityZone
class CORDL_TYPE BasicGravityZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DelayedTransition_d__47 = ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47;

 __declspec(property(get=get_AuthorityLevel)) int32_t  AuthorityLevel;

 __declspec(property(get=get_GravityRule)) ::GorillaTag::Gravity::GravityZoneRule  GravityRule;

 __declspec(property(get=get_GravityTargets)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  GravityTargets;

 __declspec(property(get=ICallbackUnique_get_Registered, put=ICallbackUnique_set_Registered)) bool  ICallbackUnique_Registered;

 __declspec(property(get=get_RotationSpeed)) float_t  RotationSpeed;

/// @brief Field <ICallbackUnique.Registered>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__ICallbackUnique_Registered_k__BackingField, put=__cordl_internal_set__ICallbackUnique_Registered_k__BackingField)) bool  _ICallbackUnique_Registered_k__BackingField;

/// @brief Field gravityStrength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityStrength, put=__cordl_internal_set_gravityStrength)) float_t  gravityStrength;

/// @brief Field invertRotationDirection, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_invertRotationDirection, put=__cordl_internal_set_invertRotationDirection)) bool  invertRotationDirection;

/// @brief Field m_authorityLevel, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_authorityLevel, put=__cordl_internal_set_m_authorityLevel)) int32_t  m_authorityLevel;

/// @brief Field m_gravityDirection, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_gravityDirection, put=__cordl_internal_set_m_gravityDirection)) ::UnityEngine::Vector3  m_gravityDirection;

/// @brief Field m_gravityRule, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_gravityRule, put=__cordl_internal_set_m_gravityRule)) ::GorillaTag::Gravity::GravityZoneRule  m_gravityRule;

/// @brief Field m_gravityTargets, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gravityTargets, put=__cordl_internal_set_m_gravityTargets)) ::GorillaTag::ListProcessor_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  m_gravityTargets;

/// @brief Field m_pendingTransitions, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pendingTransitions, put=__cordl_internal_set_m_pendingTransitions)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::UnityEngine::Coroutine*>*  m_pendingTransitions;

/// @brief Field m_rotationSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_rotationSpeed, put=__cordl_internal_set_m_rotationSpeed)) float_t  m_rotationSpeed;

/// @brief Field m_rotationSpeedOverride, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_rotationSpeedOverride, put=__cordl_internal_set_m_rotationSpeedOverride)) float_t  m_rotationSpeedOverride;

/// @brief Field m_targetGravityInfos, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_targetGravityInfos, put=__cordl_internal_set_m_targetGravityInfos)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::GorillaTag::Gravity::GravityInfo>*  m_targetGravityInfos;

/// @brief Field m_useRotationSpeedOverride, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_useRotationSpeedOverride, put=__cordl_internal_set_m_useRotationSpeedOverride)) bool  m_useRotationSpeedOverride;

/// @brief Field onLocalPlayerEntered, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLocalPlayerEntered, put=__cordl_internal_set_onLocalPlayerEntered)) ::UnityEngine::Events::UnityEvent*  onLocalPlayerEntered;

/// @brief Field onLocalPlayerExited, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLocalPlayerExited, put=__cordl_internal_set_onLocalPlayerExited)) ::UnityEngine::Events::UnityEvent*  onLocalPlayerExited;

/// @brief Field rotateTarget, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotateTarget, put=__cordl_internal_set_rotateTarget)) bool  rotateTarget;

/// @brief Field scaleFilter, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleFilter, put=__cordl_internal_set_scaleFilter)) ::GorillaTag::Gravity::GravityZoneScaleFilter  scaleFilter;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ICallbackUnique"
constexpr operator  ::GlobalNamespace::ICallbackUnique*() noexcept;

/// @brief Method AddTarget, addr 0x5d37340, size 0x28, virtual false, abstract: false, final false
inline void AddTarget(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method AddTarget, addr 0x5d379e4, size 0x110, virtual false, abstract: false, final false
inline void AddTarget(::GorillaTag::Gravity::MonkeGravityController*  target, float_t  delay) ;

/// @brief Method AddTargetImmediate, addr 0x5d376a8, size 0x188, virtual false, abstract: false, final false
inline void AddTargetImmediate(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method AddTargetLocalPlayer, addr 0x5d372a0, size 0xa0, virtual false, abstract: false, final false
inline void AddTargetLocalPlayer() ;

/// @brief Method Awake, addr 0x5d36a34, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateDependentVars, addr 0x5d36a38, size 0x110, virtual false, abstract: false, final false
inline void CalculateDependentVars() ;

/// @brief Method CallBack, addr 0x5d36ec8, size 0x1c, virtual true, abstract: false, final false
inline void CallBack() ;

/// @brief Method CancelPending, addr 0x5d37430, size 0xac, virtual false, abstract: false, final false
inline void CancelPending(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method CopyProperties, addr 0x5d37d78, size 0x8c, virtual false, abstract: false, final false
inline void CopyProperties(::GT_CustomMapSupportRuntime::BasicGravityZoneSettings*  settings) ;

/// [IteratorStateMachine(typeof(GorillaTag.Gravity.BasicGravityZone::<DelayedTransition>d__47))]
/// @brief Method DelayedTransition, addr 0x5d37940, size 0xa4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedTransition(::GorillaTag::Gravity::MonkeGravityController*  target, float_t  delay, bool  add) ;

/// @brief Method GetGravityInfo, addr 0x5d37238, size 0x68, virtual false, abstract: false, final false
inline bool GetGravityInfo(::GorillaTag::Gravity::MonkeGravityController*  target, ::by_ref<::GorillaTag::Gravity::GravityInfo>  info) ;

/// @brief Method GetGravityStrength, addr 0x5d371f4, size 0x8, virtual true, abstract: false, final false
inline float_t GetGravityStrength(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity) ;

/// @brief Method GetGravityVectorAtPoint, addr 0x5d371e8, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller) ;

/// @brief Method GetRotationDirection, addr 0x5d37204, size 0x2c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetRotationDirection(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  gravityDirection) ;

/// @brief Method GetRotationIntent, addr 0x5d371fc, size 0x8, virtual true, abstract: false, final false
inline bool GetRotationIntent(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity) ;

/// @brief Method GetRotationSpeed, addr 0x5d37230, size 0x8, virtual true, abstract: false, final false
inline float_t GetRotationSpeed(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  offsetFromGravity) ;

/// [CompilerGenerated]
/// @brief Method ICallbackUnique.get_Registered, addr 0x5d36a24, size 0x8, virtual true, abstract: false, final true
inline bool ICallbackUnique_get_Registered() ;

/// [CompilerGenerated]
/// @brief Method ICallbackUnique.set_Registered, addr 0x5d36a2c, size 0x8, virtual true, abstract: false, final true
inline void ICallbackUnique_set_Registered(bool  value) ;

static inline ::GorillaTag::Gravity::BasicGravityZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d36be4, size 0x270, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d36b48, size 0x9c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetExited, addr 0x5d37b90, size 0x4, virtual true, abstract: false, final false
inline void OnTargetExited(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method OnTargetFilteredOut, addr 0x5d37b94, size 0x4, virtual true, abstract: false, final false
inline void OnTargetFilteredOut(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method OnTriggerEnter, addr 0x5d37b98, size 0x8c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5d37cec, size 0x8c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method PassesScaleFilter, addr 0x5d37190, size 0x58, virtual false, abstract: false, final false
inline bool PassesScaleFilter(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method ProcessGravityTargets, addr 0x5d36f0c, size 0x284, virtual false, abstract: false, final false
inline void ProcessGravityTargets(/* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  targetController) ;

/// @brief Method ProcessRemoveTargets, addr 0x5d36ee4, size 0x28, virtual false, abstract: false, final false
inline void ProcessRemoveTargets(/* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  target) ;

/// @brief Method RemoveTarget, addr 0x5d37408, size 0x28, virtual false, abstract: false, final false
inline void RemoveTarget(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method RemoveTarget, addr 0x5d37830, size 0x110, virtual false, abstract: false, final false
inline void RemoveTarget(::GorillaTag::Gravity::MonkeGravityController*  target, float_t  delay) ;

/// @brief Method RemoveTargetImmediate, addr 0x5d374dc, size 0x1cc, virtual false, abstract: false, final false
inline void RemoveTargetImmediate(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method RemoveTargetLocalPlayer, addr 0x5d37368, size 0xa0, virtual false, abstract: false, final false
inline void RemoveTargetLocalPlayer() ;

constexpr bool const& __cordl_internal_get__ICallbackUnique_Registered_k__BackingField() const;

constexpr bool& __cordl_internal_get__ICallbackUnique_Registered_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_gravityStrength() const;

constexpr float_t& __cordl_internal_get_gravityStrength() ;

constexpr bool const& __cordl_internal_get_invertRotationDirection() const;

constexpr bool& __cordl_internal_get_invertRotationDirection() ;

constexpr int32_t const& __cordl_internal_get_m_authorityLevel() const;

constexpr int32_t& __cordl_internal_get_m_authorityLevel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_gravityDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_gravityDirection() ;

constexpr ::GorillaTag::Gravity::GravityZoneRule const& __cordl_internal_get_m_gravityRule() const;

constexpr ::GorillaTag::Gravity::GravityZoneRule& __cordl_internal_get_m_gravityRule() ;

constexpr ::GorillaTag::ListProcessor_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* const& __cordl_internal_get_m_gravityTargets() const;

constexpr ::GorillaTag::ListProcessor_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*& __cordl_internal_get_m_gravityTargets() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::UnityEngine::Coroutine*>* const& __cordl_internal_get_m_pendingTransitions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::UnityEngine::Coroutine*>*& __cordl_internal_get_m_pendingTransitions() ;

constexpr float_t const& __cordl_internal_get_m_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_m_rotationSpeed() ;

constexpr float_t const& __cordl_internal_get_m_rotationSpeedOverride() const;

constexpr float_t& __cordl_internal_get_m_rotationSpeedOverride() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::GorillaTag::Gravity::GravityInfo>* const& __cordl_internal_get_m_targetGravityInfos() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::GorillaTag::Gravity::GravityInfo>*& __cordl_internal_get_m_targetGravityInfos() ;

constexpr bool const& __cordl_internal_get_m_useRotationSpeedOverride() const;

constexpr bool& __cordl_internal_get_m_useRotationSpeedOverride() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onLocalPlayerEntered() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onLocalPlayerEntered() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onLocalPlayerExited() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onLocalPlayerExited() ;

constexpr bool const& __cordl_internal_get_rotateTarget() const;

constexpr bool& __cordl_internal_get_rotateTarget() ;

constexpr ::GorillaTag::Gravity::GravityZoneScaleFilter const& __cordl_internal_get_scaleFilter() const;

constexpr ::GorillaTag::Gravity::GravityZoneScaleFilter& __cordl_internal_get_scaleFilter() ;

constexpr void __cordl_internal_set__ICallbackUnique_Registered_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_gravityStrength(float_t  value) ;

constexpr void __cordl_internal_set_invertRotationDirection(bool  value) ;

constexpr void __cordl_internal_set_m_authorityLevel(int32_t  value) ;

constexpr void __cordl_internal_set_m_gravityDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_gravityRule(::GorillaTag::Gravity::GravityZoneRule  value) ;

constexpr void __cordl_internal_set_m_gravityTargets(::GorillaTag::ListProcessor_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  value) ;

constexpr void __cordl_internal_set_m_pendingTransitions(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::UnityEngine::Coroutine*>*  value) ;

constexpr void __cordl_internal_set_m_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_rotationSpeedOverride(float_t  value) ;

constexpr void __cordl_internal_set_m_targetGravityInfos(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::GorillaTag::Gravity::GravityInfo>*  value) ;

constexpr void __cordl_internal_set_m_useRotationSpeedOverride(bool  value) ;

constexpr void __cordl_internal_set_onLocalPlayerEntered(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onLocalPlayerExited(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_rotateTarget(bool  value) ;

constexpr void __cordl_internal_set_scaleFilter(::GorillaTag::Gravity::GravityZoneScaleFilter  value) ;

/// @brief Method .ctor, addr 0x5d37e04, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AuthorityLevel, addr 0x5d369cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AuthorityLevel() ;

/// @brief Method get_GravityRule, addr 0x5d369c4, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTag::Gravity::GravityZoneRule get_GravityRule() ;

/// @brief Method get_GravityTargets, addr 0x5d369dc, size 0x48, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* get_GravityTargets() ;

/// @brief Method get_RotationSpeed, addr 0x5d369d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationSpeed() ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

/// @brief Convert to "::GlobalNamespace::ICallbackUnique"
constexpr ::GlobalNamespace::ICallbackUnique* i___GlobalNamespace__ICallbackUnique() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicGravityZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicGravityZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicGravityZone(BasicGravityZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicGravityZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicGravityZone(BasicGravityZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4676};

/// [Header("Gravity Settings")]
/// [Tooltip("negative number pulls, positive number expels")]
/// @brief Field gravityStrength, offset: 0x20, size: 0x4, def value: None
 float_t  ___gravityStrength;

/// [Tooltip("Filter which players are affected based on scale. Small = scale < 1")]
/// [SerializeField]
/// @brief Field scaleFilter, offset: 0x24, size: 0x4, def value: None
 ::GorillaTag::Gravity::GravityZoneScaleFilter  ___scaleFilter;

/// [Tooltip("- Newest: Only in effect when this is the newest zone entered by the physics object. \n\n- Closest: if this gravity zone is the closest, then it will have effect. \n\n- Additive:  always in effect when a physics object is inside.")]
/// [SerializeField]
/// @brief Field m_gravityRule, offset: 0x28, size: 0x4, def value: None
 ::GorillaTag::Gravity::GravityZoneRule  ___m_gravityRule;

/// [Tooltip("The gravity zone with the highest authority will cause gravity zones with a lower authority level to be ignored. Gravity zones with the same authority level will follow the Gravity Rule setting.")]
/// [SerializeField]
/// @brief Field m_authorityLevel, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___m_authorityLevel;

/// [Header("Rotation Settings")]
/// [Tooltip("If enabled, rotates the target away from gravity direction to be upside down")]
/// [SerializeField]
/// @brief Field invertRotationDirection, offset: 0x30, size: 0x1, def value: None
 bool  ___invertRotationDirection;

/// [SerializeField]
/// @brief Field rotateTarget, offset: 0x31, size: 0x1, def value: None
 bool  ___rotateTarget;

/// [SerializeField]
/// @brief Field m_useRotationSpeedOverride, offset: 0x32, size: 0x1, def value: None
 bool  ___m_useRotationSpeedOverride;

/// [SerializeField]
/// [FormerlySerializedAs("rotationSpeed")]
/// @brief Field m_rotationSpeedOverride, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_rotationSpeedOverride;

/// @brief Field m_rotationSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_rotationSpeed;

/// [Header("Events")]
/// @brief Field onLocalPlayerEntered, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onLocalPlayerEntered;

/// @brief Field onLocalPlayerExited, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onLocalPlayerExited;

/// @brief Field m_gravityDirection, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_gravityDirection;

/// @brief Field m_gravityTargets, offset: 0x60, size: 0x8, def value: None
 ::GorillaTag::ListProcessor_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  ___m_gravityTargets;

/// @brief Field m_targetGravityInfos, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::GorillaTag::Gravity::GravityInfo>*  ___m_targetGravityInfos;

/// @brief Field m_pendingTransitions, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::Gravity::MonkeGravityController>,::UnityEngine::Coroutine*>*  ___m_pendingTransitions;

/// [CompilerGenerated]
/// @brief Field <ICallbackUnique.Registered>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____ICallbackUnique_Registered_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___gravityStrength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___scaleFilter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_gravityRule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_authorityLevel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___invertRotationDirection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___rotateTarget) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_useRotationSpeedOverride) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_rotationSpeedOverride) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_rotationSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___onLocalPlayerEntered) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___onLocalPlayerExited) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_gravityDirection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_gravityTargets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_targetGravityInfos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ___m_pendingTransitions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone, ____ICallbackUnique_Registered_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::BasicGravityZone) == 0x80, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.BasicGravityZone/<DelayedTransition>d__47
class CORDL_TYPE BasicGravityZone__DelayedTransition_d__47 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::Gravity::BasicGravityZone>  __4__this;

/// @brief Field add, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_add, put=__cordl_internal_set_add)) bool  add;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field target, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::GorillaTag::Gravity::MonkeGravityController>  target;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d37f68, size 0xf8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d38060, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d38068, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d380a0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d37f64, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::Gravity::BasicGravityZone>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_add() const;

constexpr bool& __cordl_internal_get_add() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::Gravity::BasicGravityZone>  value) ;

constexpr void __cordl_internal_set_add(bool  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::GorillaTag::Gravity::MonkeGravityController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d37af4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicGravityZone__DelayedTransition_d__47() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicGravityZone__DelayedTransition_d__47", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicGravityZone__DelayedTransition_d__47(BasicGravityZone__DelayedTransition_d__47 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicGravityZone__DelayedTransition_d__47", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicGravityZone__DelayedTransition_d__47(BasicGravityZone__DelayedTransition_d__47 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4675};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::BasicGravityZone>  _____4__this;

/// @brief Field target, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::MonkeGravityController>  ___target;

/// @brief Field add, offset: 0x38, size: 0x1, def value: None
 bool  ___add;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47, ___target) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47, ___add) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::BasicGravityZone__DelayedTransition_d__47) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
