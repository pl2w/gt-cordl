#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointRotationActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBase_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_HandAxis_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_RelativeTo_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_WorldAxis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JointRotationActiveState)
namespace GlobalNamespace {
struct JointRotationActiveState_HandAxis;
}
namespace GlobalNamespace {
struct JointRotationActiveState_JointRotationFeatureState;
}
namespace GlobalNamespace {
struct JointRotationActiveState_RelativeTo;
}
namespace GlobalNamespace {
struct JointRotationActiveState_WorldAxis;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::PoseDetection {
class IJointDeltaProvider;
}
namespace Oculus::Interaction::PoseDetection {
class JointDeltaConfig;
}
namespace Oculus::Interaction::PoseDetection {
class JointRotationActiveState_JointRotationFeatureConfigList;
}
namespace Oculus::Interaction::PoseDetection {
class JointRotationActiveState_JointRotationFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
class JointRotationActiveState___c;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class JointRotationActiveState;
}
namespace Oculus::Interaction::PoseDetection {
class JointRotationActiveState_JointRotationFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
class JointRotationActiveState_JointRotationFeatureConfigList;
}
namespace Oculus::Interaction::PoseDetection {
class JointRotationActiveState___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointRotationActiveState*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointRotationActiveState*, "Oculus.Interaction.PoseDetection", "JointRotationActiveState");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/JointRotationFeatureConfig");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/JointRotationFeatureConfigList");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointRotationActiveState
class CORDL_TYPE JointRotationActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandAxis = ::GlobalNamespace::JointRotationActiveState_HandAxis;

using JointRotationFeatureState = ::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState;

using RelativeTo = ::GlobalNamespace::JointRotationActiveState_RelativeTo;

using WorldAxis = ::GlobalNamespace::JointRotationActiveState_WorldAxis;

using JointRotationFeatureConfig = ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig;

using JointRotationFeatureConfigList = ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList;

using __c = ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_FeatureConfigs)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*  FeatureConfigs;

 __declspec(property(get=get_FeatureStates)) ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>*  FeatureStates;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field JointDeltaProvider, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_JointDeltaProvider, put=__cordl_internal_set_JointDeltaProvider)) ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  JointDeltaProvider;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _activeState, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) bool  _activeState;

/// @brief Field _degreesPerSecond, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__degreesPerSecond, put=__cordl_internal_set__degreesPerSecond)) float_t  _degreesPerSecond;

/// @brief Field _featureConfigs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureConfigs, put=__cordl_internal_set__featureConfigs)) ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  _featureConfigs;

/// @brief Field _featureConfigurations, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureConfigurations, put=__cordl_internal_set__featureConfigurations)) ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  _featureConfigurations;

/// @brief Field _featureStates, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureStates, put=__cordl_internal_set__featureStates)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>*  _featureStates;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _internalState, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalState, put=__cordl_internal_set__internalState)) bool  _internalState;

/// @brief Field _jointDeltaConfig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointDeltaConfig, put=__cordl_internal_set__jointDeltaConfig)) ::Oculus::Interaction::PoseDetection::JointDeltaConfig*  _jointDeltaConfig;

/// @brief Field _jointDeltaProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointDeltaProvider, put=__cordl_internal_set__jointDeltaProvider)) ::UnityW<::UnityEngine::Object>  _jointDeltaProvider;

/// @brief Field _lastStateChangeTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStateChangeTime, put=__cordl_internal_set__lastStateChangeTime)) float_t  _lastStateChangeTime;

/// @brief Field _lastStateUpdateFrame, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStateUpdateFrame, put=__cordl_internal_set__lastStateUpdateFrame)) int32_t  _lastStateUpdateFrame;

/// @brief Field _lastUpdateTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateTime, put=__cordl_internal_set__lastUpdateTime)) float_t  _lastUpdateTime;

/// @brief Field _minTimeInState, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__minTimeInState, put=__cordl_internal_set__minTimeInState)) float_t  _minTimeInState;

/// @brief Field _started, offset 0x86, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _thresholdWidth, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__thresholdWidth, put=__cordl_internal_set__thresholdWidth)) float_t  _thresholdWidth;

/// @brief Field _timeProvider, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa4a0434, size 0xa0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckAllJointRotations, addr 0xa4a094c, size 0x61c, virtual false, abstract: false, final false
inline bool CheckAllJointRotations() ;

/// @brief Method GetHandAxisVector, addr 0xa4a114c, size 0x5b0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHandAxisVector(::GlobalNamespace::JointRotationActiveState_HandAxis  axis, ::UnityEngine::Pose  wristPose) ;

/// @brief Method GetWorldAxisVector, addr 0xa4a16fc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldAxisVector(::GlobalNamespace::JointRotationActiveState_WorldAxis  axis) ;

/// @brief Method GetWorldTargetAxis, addr 0xa4a0f68, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldTargetAxis(::UnityEngine::Pose  wristPose, ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*  config) ;

/// @brief Method InjectAllJointRotationActiveState, addr 0xa4a18c0, size 0x3c, virtual false, abstract: false, final false
inline void InjectAllJointRotationActiveState(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  featureConfigs, ::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider) ;

/// @brief Method InjectFeatureConfigList, addr 0xa4a1a98, size 0x8, virtual false, abstract: false, final false
inline void InjectFeatureConfigList(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  featureConfigs) ;

/// @brief Method InjectHand, addr 0xa4a18fc, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectJointDeltaProvider, addr 0xa4a19cc, size 0xcc, virtual false, abstract: false, final false
inline void InjectJointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider) ;

/// [Obsolete("Use SetTimeProvider()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa4a1aa0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

static inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4a108c, size 0xc0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4a0fcc, size 0xc0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetTimeProvider, addr 0xa4a040c, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4a04d4, size 0x478, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4a0fc8, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActiveState, addr 0xa4a0350, size 0xbc, virtual false, abstract: false, final false
inline void UpdateActiveState() ;

constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* const& __cordl_internal_get_JointDeltaProvider() const;

constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*& __cordl_internal_get_JointDeltaProvider() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr bool const& __cordl_internal_get__activeState() const;

constexpr bool& __cordl_internal_get__activeState() ;

constexpr float_t const& __cordl_internal_get__degreesPerSecond() const;

constexpr float_t& __cordl_internal_get__degreesPerSecond() ;

constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList* const& __cordl_internal_get__featureConfigs() const;

constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*& __cordl_internal_get__featureConfigs() ;

constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList* const& __cordl_internal_get__featureConfigurations() const;

constexpr ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*& __cordl_internal_get__featureConfigurations() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>* const& __cordl_internal_get__featureStates() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>*& __cordl_internal_get__featureStates() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__internalState() const;

constexpr bool& __cordl_internal_get__internalState() ;

constexpr ::Oculus::Interaction::PoseDetection::JointDeltaConfig* const& __cordl_internal_get__jointDeltaConfig() const;

constexpr ::Oculus::Interaction::PoseDetection::JointDeltaConfig*& __cordl_internal_get__jointDeltaConfig() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__jointDeltaProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__jointDeltaProvider() ;

constexpr float_t const& __cordl_internal_get__lastStateChangeTime() const;

constexpr float_t& __cordl_internal_get__lastStateChangeTime() ;

constexpr int32_t const& __cordl_internal_get__lastStateUpdateFrame() const;

constexpr int32_t& __cordl_internal_get__lastStateUpdateFrame() ;

constexpr float_t const& __cordl_internal_get__lastUpdateTime() const;

constexpr float_t& __cordl_internal_get__lastUpdateTime() ;

constexpr float_t const& __cordl_internal_get__minTimeInState() const;

constexpr float_t& __cordl_internal_get__minTimeInState() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__thresholdWidth() const;

constexpr float_t& __cordl_internal_get__thresholdWidth() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr void __cordl_internal_set_JointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__activeState(bool  value) ;

constexpr void __cordl_internal_set__degreesPerSecond(float_t  value) ;

constexpr void __cordl_internal_set__featureConfigs(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__featureConfigurations(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__featureStates(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__internalState(bool  value) ;

constexpr void __cordl_internal_set__jointDeltaConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  value) ;

constexpr void __cordl_internal_set__jointDeltaProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__lastStateChangeTime(float_t  value) ;

constexpr void __cordl_internal_set__lastStateUpdateFrame(int32_t  value) ;

constexpr void __cordl_internal_set__lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__minTimeInState(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__thresholdWidth(float_t  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa4a1aa8, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4a0318, size 0x38, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_FeatureConfigs, addr 0xa4a0414, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>* get_FeatureConfigs() ;

/// @brief Method get_FeatureStates, addr 0xa4a042c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>* get_FeatureStates() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4a0308, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4a0310, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointRotationActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointRotationActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointRotationActiveState(JointRotationActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointRotationActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointRotationActiveState(JointRotationActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16132};

/// [Tooltip("Provided joints will be sourced from this IHand.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [Tooltip("JointDeltaProvider caches joint deltas to avoid unnecessary recomputing of deltas.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.PoseDetection.IJointDeltaProvider), new[] {  })]
/// @brief Field _jointDeltaProvider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____jointDeltaProvider;

/// [SerializeField]
/// @brief Field _featureConfigs, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  ____featureConfigs;

/// [SerializeField]
/// @brief Field _featureConfigurations, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList*  ____featureConfigurations;

/// [Tooltip("The angular velocity used for the detection threshold, in degrees per second.")]
/// [SerializeField]
/// [Min(0)]
/// @brief Field _degreesPerSecond, offset: 0x48, size: 0x4, def value: None
 float_t  ____degreesPerSecond;

/// [Tooltip("The degrees per second value will be modified by this width to create differing enter/exit thresholds. Used to prevent chattering at the threshold edge.")]
/// [SerializeField]
/// [Min(0)]
/// @brief Field _thresholdWidth, offset: 0x4c, size: 0x4, def value: None
 float_t  ____thresholdWidth;

/// [Tooltip("A new state must be maintaned for at least this many seconds before the Active property changes.")]
/// [SerializeField]
/// [Min(0)]
/// @brief Field _minTimeInState, offset: 0x50, size: 0x4, def value: None
 float_t  ____minTimeInState;

/// @brief Field _timeProvider, offset: 0x58, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _featureStates, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*,::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>*  ____featureStates;

/// @brief Field _jointDeltaConfig, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::JointDeltaConfig*  ____jointDeltaConfig;

/// @brief Field JointDeltaProvider, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  ___JointDeltaProvider;

/// @brief Field _lastStateUpdateFrame, offset: 0x78, size: 0x4, def value: None
 int32_t  ____lastStateUpdateFrame;

/// @brief Field _lastStateChangeTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ____lastStateChangeTime;

/// @brief Field _lastUpdateTime, offset: 0x80, size: 0x4, def value: None
 float_t  ____lastUpdateTime;

/// @brief Field _internalState, offset: 0x84, size: 0x1, def value: None
 bool  ____internalState;

/// @brief Field _activeState, offset: 0x85, size: 0x1, def value: None
 bool  ____activeState;

/// @brief Field _started, offset: 0x86, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____jointDeltaProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____featureConfigs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____featureConfigurations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____degreesPerSecond) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____thresholdWidth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____minTimeInState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____timeProvider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____featureStates) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____jointDeltaConfig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ___JointDeltaProvider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____lastStateUpdateFrame) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____lastStateChangeTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____lastUpdateTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____internalState) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____activeState) == 0x85, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState, ____started) == 0x86, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointRotationActiveState) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c
class CORDL_TYPE JointRotationActiveState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*  __9;

/// @brief Field <>9__49_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__49_0, put=setStaticF___9__49_0)) ::System::Func_1<float_t>*  __9__49_0;

static inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c* New_ctor() ;

/// @brief Method <.ctor>b__49_0, addr 0xa4a1d08, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__49_0() ;

/// @brief Method .ctor, addr 0xa4a1d00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__49_0() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::JointRotationActiveState___c*  value) ;

static inline void setStaticF___9__49_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointRotationActiveState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointRotationActiveState___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointRotationActiveState___c(JointRotationActiveState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointRotationActiveState___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointRotationActiveState___c(JointRotationActiveState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointRotationActiveState___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.Input.HandJointId, Oculus.Interaction.PoseDetection.FeatureConfigBase`1<TFeature>, Oculus.Interaction.PoseDetection.JointRotationActiveState::HandAxis, Oculus.Interaction.PoseDetection.JointRotationActiveState::RelativeTo, Oculus.Interaction.PoseDetection.JointRotationActiveState::WorldAxis
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig
class CORDL_TYPE JointRotationActiveState_JointRotationFeatureConfig : public ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<::Oculus::Interaction::Input::HandJointId> {
public:
// Declarations
 __declspec(property(get=get_HandAxis, put=set_HandAxis)) ::GlobalNamespace::JointRotationActiveState_HandAxis  HandAxis;

 __declspec(property(get=get_RelativeTo, put=set_RelativeTo)) ::GlobalNamespace::JointRotationActiveState_RelativeTo  RelativeTo;

 __declspec(property(get=get_WorldAxis, put=set_WorldAxis)) ::GlobalNamespace::JointRotationActiveState_WorldAxis  WorldAxis;

/// @brief Field _handAxis, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__handAxis, put=__cordl_internal_set__handAxis)) ::GlobalNamespace::JointRotationActiveState_HandAxis  _handAxis;

/// @brief Field _relativeTo, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::GlobalNamespace::JointRotationActiveState_RelativeTo  _relativeTo;

/// @brief Field _worldAxis, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__worldAxis, put=__cordl_internal_set__worldAxis)) ::GlobalNamespace::JointRotationActiveState_WorldAxis  _worldAxis;

static inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig* New_ctor() ;

constexpr ::GlobalNamespace::JointRotationActiveState_HandAxis const& __cordl_internal_get__handAxis() const;

constexpr ::GlobalNamespace::JointRotationActiveState_HandAxis& __cordl_internal_get__handAxis() ;

constexpr ::GlobalNamespace::JointRotationActiveState_RelativeTo const& __cordl_internal_get__relativeTo() const;

constexpr ::GlobalNamespace::JointRotationActiveState_RelativeTo& __cordl_internal_get__relativeTo() ;

constexpr ::GlobalNamespace::JointRotationActiveState_WorldAxis const& __cordl_internal_get__worldAxis() const;

constexpr ::GlobalNamespace::JointRotationActiveState_WorldAxis& __cordl_internal_get__worldAxis() ;

constexpr void __cordl_internal_set__handAxis(::GlobalNamespace::JointRotationActiveState_HandAxis  value) ;

constexpr void __cordl_internal_set__relativeTo(::GlobalNamespace::JointRotationActiveState_RelativeTo  value) ;

constexpr void __cordl_internal_set__worldAxis(::GlobalNamespace::JointRotationActiveState_WorldAxis  value) ;

/// @brief Method .ctor, addr 0xa4a1c44, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HandAxis, addr 0xa4a1c34, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JointRotationActiveState_HandAxis get_HandAxis() ;

/// @brief Method get_RelativeTo, addr 0xa4a1c14, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JointRotationActiveState_RelativeTo get_RelativeTo() ;

/// @brief Method get_WorldAxis, addr 0xa4a1c24, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JointRotationActiveState_WorldAxis get_WorldAxis() ;

/// @brief Method set_HandAxis, addr 0xa4a1c3c, size 0x8, virtual false, abstract: false, final false
inline void set_HandAxis(::GlobalNamespace::JointRotationActiveState_HandAxis  value) ;

/// @brief Method set_RelativeTo, addr 0xa4a1c1c, size 0x8, virtual false, abstract: false, final false
inline void set_RelativeTo(::GlobalNamespace::JointRotationActiveState_RelativeTo  value) ;

/// @brief Method set_WorldAxis, addr 0xa4a1c2c, size 0x8, virtual false, abstract: false, final false
inline void set_WorldAxis(::GlobalNamespace::JointRotationActiveState_WorldAxis  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointRotationActiveState_JointRotationFeatureConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointRotationActiveState_JointRotationFeatureConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointRotationActiveState_JointRotationFeatureConfig(JointRotationActiveState_JointRotationFeatureConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointRotationActiveState_JointRotationFeatureConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointRotationActiveState_JointRotationFeatureConfig(JointRotationActiveState_JointRotationFeatureConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16130};

/// [Tooltip("The detection axis will be in this coordinate space.")]
/// [SerializeField]
/// @brief Field _relativeTo, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::JointRotationActiveState_RelativeTo  ____relativeTo;

/// [Tooltip("The world axis used for detection.")]
/// [SerializeField]
/// @brief Field _worldAxis, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::JointRotationActiveState_WorldAxis  ____worldAxis;

/// [Tooltip("The axis of the hand root pose used for detection.")]
/// [SerializeField]
/// @brief Field _handAxis, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::JointRotationActiveState_HandAxis  ____handAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig, ____relativeTo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig, ____worldAxis) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig, ____handAxis) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfigList
class CORDL_TYPE JointRotationActiveState_JointRotationFeatureConfigList : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Values)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*  Values;

/// @brief Field _values, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*  _values;

static inline ::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>* const& __cordl_internal_get__values() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*  value) ;

/// @brief Method .ctor, addr 0xa4a1c0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Values, addr 0xa4a1c04, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>* get_Values() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointRotationActiveState_JointRotationFeatureConfigList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointRotationActiveState_JointRotationFeatureConfigList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointRotationActiveState_JointRotationFeatureConfigList(JointRotationActiveState_JointRotationFeatureConfigList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointRotationActiveState_JointRotationFeatureConfigList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointRotationActiveState_JointRotationFeatureConfigList(JointRotationActiveState_JointRotationFeatureConfigList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16129};

/// [SerializeField]
/// @brief Field _values, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfig*>*  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList, ____values) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointRotationActiveState_JointRotationFeatureConfigList) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
