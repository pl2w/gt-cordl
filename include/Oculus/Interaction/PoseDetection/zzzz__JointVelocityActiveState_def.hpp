#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointVelocityActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureConfigBase_1_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_HandAxis_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_HeadAxis_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_RelativeTo_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_WorldAxis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JointVelocityActiveState)
namespace GlobalNamespace {
struct JointVelocityActiveState_HandAxis;
}
namespace GlobalNamespace {
struct JointVelocityActiveState_HeadAxis;
}
namespace GlobalNamespace {
struct JointVelocityActiveState_JointVelocityFeatureState;
}
namespace GlobalNamespace {
struct JointVelocityActiveState_RelativeTo;
}
namespace GlobalNamespace {
struct JointVelocityActiveState_WorldAxis;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace Oculus::Interaction::PoseDetection {
class IJointDeltaProvider;
}
namespace Oculus::Interaction::PoseDetection {
class JointDeltaConfig;
}
namespace Oculus::Interaction::PoseDetection {
class JointVelocityActiveState_JointVelocityFeatureConfigList;
}
namespace Oculus::Interaction::PoseDetection {
class JointVelocityActiveState_JointVelocityFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
class JointVelocityActiveState___c;
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
class JointVelocityActiveState;
}
namespace Oculus::Interaction::PoseDetection {
class JointVelocityActiveState_JointVelocityFeatureConfig;
}
namespace Oculus::Interaction::PoseDetection {
class JointVelocityActiveState_JointVelocityFeatureConfigList;
}
namespace Oculus::Interaction::PoseDetection {
class JointVelocityActiveState___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointVelocityActiveState*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*);
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointVelocityActiveState*, "Oculus.Interaction.PoseDetection", "JointVelocityActiveState");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*, "Oculus.Interaction.PoseDetection", "JointVelocityActiveState/JointVelocityFeatureConfig");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*, "Oculus.Interaction.PoseDetection", "JointVelocityActiveState/JointVelocityFeatureConfigList");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*, "Oculus.Interaction.PoseDetection", "JointVelocityActiveState/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointVelocityActiveState
class CORDL_TYPE JointVelocityActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandAxis = ::GlobalNamespace::JointVelocityActiveState_HandAxis;

using HeadAxis = ::GlobalNamespace::JointVelocityActiveState_HeadAxis;

using JointVelocityFeatureState = ::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState;

using RelativeTo = ::GlobalNamespace::JointVelocityActiveState_RelativeTo;

using WorldAxis = ::GlobalNamespace::JointVelocityActiveState_WorldAxis;

using JointVelocityFeatureConfig = ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig;

using JointVelocityFeatureConfigList = ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList;

using __c = ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_FeatureConfigs)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*  FeatureConfigs;

 __declspec(property(get=get_FeatureStates)) ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>*  FeatureStates;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_Hmd, put=set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

 __declspec(property(get=get_JointDeltaProvider, put=set_JointDeltaProvider)) ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  JointDeltaProvider;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <Hmd>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hmd_k__BackingField, put=__cordl_internal_set__Hmd_k__BackingField)) ::Oculus::Interaction::Input::IHmd*  _Hmd_k__BackingField;

/// @brief Field <JointDeltaProvider>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__JointDeltaProvider_k__BackingField, put=__cordl_internal_set__JointDeltaProvider_k__BackingField)) ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  _JointDeltaProvider_k__BackingField;

/// @brief Field _activeState, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) bool  _activeState;

/// @brief Field _featureConfigs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureConfigs, put=__cordl_internal_set__featureConfigs)) ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  _featureConfigs;

/// @brief Field _featureConfigurations, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureConfigurations, put=__cordl_internal_set__featureConfigurations)) ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  _featureConfigurations;

/// @brief Field _featureStates, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureStates, put=__cordl_internal_set__featureStates)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>*  _featureStates;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _hmd, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Field _internalState, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalState, put=__cordl_internal_set__internalState)) bool  _internalState;

/// @brief Field _jointDeltaConfig, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointDeltaConfig, put=__cordl_internal_set__jointDeltaConfig)) ::Oculus::Interaction::PoseDetection::JointDeltaConfig*  _jointDeltaConfig;

/// @brief Field _jointDeltaProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointDeltaProvider, put=__cordl_internal_set__jointDeltaProvider)) ::UnityW<::UnityEngine::Object>  _jointDeltaProvider;

/// @brief Field _lastStateChangeTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStateChangeTime, put=__cordl_internal_set__lastStateChangeTime)) float_t  _lastStateChangeTime;

/// @brief Field _lastStateUpdateFrame, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStateUpdateFrame, put=__cordl_internal_set__lastStateUpdateFrame)) int32_t  _lastStateUpdateFrame;

/// @brief Field _lastUpdateTime, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateTime, put=__cordl_internal_set__lastUpdateTime)) float_t  _lastUpdateTime;

/// @brief Field _minTimeInState, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__minTimeInState, put=__cordl_internal_set__minTimeInState)) float_t  _minTimeInState;

/// @brief Field _minVelocity, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__minVelocity, put=__cordl_internal_set__minVelocity)) float_t  _minVelocity;

/// @brief Field _started, offset 0x96, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _thresholdWidth, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__thresholdWidth, put=__cordl_internal_set__thresholdWidth)) float_t  _thresholdWidth;

/// @brief Field _timeProvider, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa4a1e5c, size 0x110, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckAllJointVelocities, addr 0xa4a23e4, size 0x5b8, virtual false, abstract: false, final false
inline bool CheckAllJointVelocities() ;

/// @brief Method GetHandAxisVector, addr 0xa4a2b98, size 0x5b0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHandAxisVector(::GlobalNamespace::JointVelocityActiveState_HandAxis  axis, ::UnityEngine::Pose  wristPose) ;

/// @brief Method GetHeadAxisVector, addr 0xa4a330c, size 0x234, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHeadAxisVector(::GlobalNamespace::JointVelocityActiveState_HeadAxis  axis) ;

/// @brief Method GetWorldAxisVector, addr 0xa4a3148, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldAxisVector(::GlobalNamespace::JointVelocityActiveState_WorldAxis  axis) ;

/// @brief Method GetWorldTargetVector, addr 0xa4a299c, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldTargetVector(::UnityEngine::Pose  wristPose, ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*  config) ;

/// @brief Method InjectAllJointVelocityActiveState, addr 0xa4a3540, size 0x3c, virtual false, abstract: false, final false
inline void InjectAllJointVelocityActiveState(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  featureConfigs, ::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider) ;

/// @brief Method InjectFeatureConfigList, addr 0xa4a3718, size 0x8, virtual false, abstract: false, final false
inline void InjectFeatureConfigList(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  featureConfigs) ;

/// @brief Method InjectHand, addr 0xa4a357c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectJointDeltaProvider, addr 0xa4a364c, size 0xcc, virtual false, abstract: false, final false
inline void InjectJointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  jointDeltaProvider) ;

/// @brief Method InjectOptionalHmd, addr 0xa4a3728, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalHmd(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// [Obsolete("Use SetTimeProvider()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa4a3720, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

static inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4a2ad8, size 0xc0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4a2a18, size 0xc0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetTimeProvider, addr 0xa4a1e34, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4a1f6c, size 0x478, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4a2a14, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActiveState, addr 0xa4a1d78, size 0xbc, virtual false, abstract: false, final false
inline void UpdateActiveState() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get__Hmd_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get__Hmd_k__BackingField() ;

constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* const& __cordl_internal_get__JointDeltaProvider_k__BackingField() const;

constexpr ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*& __cordl_internal_get__JointDeltaProvider_k__BackingField() ;

constexpr bool const& __cordl_internal_get__activeState() const;

constexpr bool& __cordl_internal_get__activeState() ;

constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList* const& __cordl_internal_get__featureConfigs() const;

constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*& __cordl_internal_get__featureConfigs() ;

constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList* const& __cordl_internal_get__featureConfigurations() const;

constexpr ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*& __cordl_internal_get__featureConfigurations() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>* const& __cordl_internal_get__featureStates() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>*& __cordl_internal_get__featureStates() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

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

constexpr float_t const& __cordl_internal_get__minVelocity() const;

constexpr float_t& __cordl_internal_get__minVelocity() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr float_t const& __cordl_internal_get__thresholdWidth() const;

constexpr float_t& __cordl_internal_get__thresholdWidth() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__JointDeltaProvider_k__BackingField(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value) ;

constexpr void __cordl_internal_set__activeState(bool  value) ;

constexpr void __cordl_internal_set__featureConfigs(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__featureConfigurations(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  value) ;

constexpr void __cordl_internal_set__featureStates(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__internalState(bool  value) ;

constexpr void __cordl_internal_set__jointDeltaConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  value) ;

constexpr void __cordl_internal_set__jointDeltaProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__lastStateChangeTime(float_t  value) ;

constexpr void __cordl_internal_set__lastStateUpdateFrame(int32_t  value) ;

constexpr void __cordl_internal_set__lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__minTimeInState(float_t  value) ;

constexpr void __cordl_internal_set__minVelocity(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__thresholdWidth(float_t  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa4a37f8, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4a1d40, size 0x38, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_FeatureConfigs, addr 0xa4a1e3c, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>* get_FeatureConfigs() ;

/// @brief Method get_FeatureStates, addr 0xa4a1e54, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>* get_FeatureStates() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4a1d10, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method get_Hmd, addr 0xa4a1d30, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHmd* get_Hmd() ;

/// [CompilerGenerated]
/// @brief Method get_JointDeltaProvider, addr 0xa4a1d20, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseDetection::IJointDeltaProvider* get_JointDeltaProvider() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4a1d18, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hmd, addr 0xa4a1d38, size 0x8, virtual false, abstract: false, final false
inline void set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

/// [CompilerGenerated]
/// @brief Method set_JointDeltaProvider, addr 0xa4a1d28, size 0x8, virtual false, abstract: false, final false
inline void set_JointDeltaProvider(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointVelocityActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointVelocityActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointVelocityActiveState(JointVelocityActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointVelocityActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointVelocityActiveState(JointVelocityActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16141};

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

/// [CompilerGenerated]
/// @brief Field <JointDeltaProvider>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::IJointDeltaProvider*  ____JointDeltaProvider_k__BackingField;

/// [Tooltip("Reference to the Hmd providing the HeadAxis pose.")]
/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// @brief Field _hmd, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// [CompilerGenerated]
/// @brief Field <Hmd>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ____Hmd_k__BackingField;

/// [SerializeField]
/// @brief Field _featureConfigs, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  ____featureConfigs;

/// [SerializeField]
/// @brief Field _featureConfigurations, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList*  ____featureConfigurations;

/// [Tooltip("The velocity used for the detection threshold, in units per second.")]
/// [SerializeField]
/// [Min(0)]
/// @brief Field _minVelocity, offset: 0x60, size: 0x4, def value: None
 float_t  ____minVelocity;

/// [Tooltip("The min velocity value will be modified by this width to create differing enter/exit thresholds. Used to prevent chattering at the threshold edge.")]
/// [SerializeField]
/// [Min(0)]
/// @brief Field _thresholdWidth, offset: 0x64, size: 0x4, def value: None
 float_t  ____thresholdWidth;

/// [Tooltip("A new state must be maintaned for at least this many seconds before the Active property changes.")]
/// [SerializeField]
/// [Min(0)]
/// @brief Field _minTimeInState, offset: 0x68, size: 0x4, def value: None
 float_t  ____minTimeInState;

/// @brief Field _timeProvider, offset: 0x70, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _featureStates, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*,::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>*  ____featureStates;

/// @brief Field _jointDeltaConfig, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::JointDeltaConfig*  ____jointDeltaConfig;

/// @brief Field _lastStateUpdateFrame, offset: 0x88, size: 0x4, def value: None
 int32_t  ____lastStateUpdateFrame;

/// @brief Field _lastStateChangeTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ____lastStateChangeTime;

/// @brief Field _lastUpdateTime, offset: 0x90, size: 0x4, def value: None
 float_t  ____lastUpdateTime;

/// @brief Field _internalState, offset: 0x94, size: 0x1, def value: None
 bool  ____internalState;

/// @brief Field _activeState, offset: 0x95, size: 0x1, def value: None
 bool  ____activeState;

/// @brief Field _started, offset: 0x96, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____jointDeltaProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____JointDeltaProvider_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____hmd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____Hmd_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____featureConfigs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____featureConfigurations) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____minVelocity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____thresholdWidth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____minTimeInState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____timeProvider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____featureStates) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____jointDeltaConfig) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____lastStateUpdateFrame) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____lastStateChangeTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____lastUpdateTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____internalState) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____activeState) == 0x95, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState, ____started) == 0x96, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointVelocityActiveState/<>c
class CORDL_TYPE JointVelocityActiveState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*  __9;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Func_1<float_t>*  __9__60_0;

static inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c* New_ctor() ;

/// @brief Method <.ctor>b__60_0, addr 0xa4a3a64, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__60_0() ;

/// @brief Method .ctor, addr 0xa4a3a5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__60_0() ;

static inline void setStaticF___9(::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c*  value) ;

static inline void setStaticF___9__60_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointVelocityActiveState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointVelocityActiveState___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointVelocityActiveState___c(JointVelocityActiveState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointVelocityActiveState___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointVelocityActiveState___c(JointVelocityActiveState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies Oculus.Interaction.Input.HandJointId, Oculus.Interaction.PoseDetection.FeatureConfigBase`1<TFeature>, Oculus.Interaction.PoseDetection.JointVelocityActiveState::HandAxis, Oculus.Interaction.PoseDetection.JointVelocityActiveState::HeadAxis, Oculus.Interaction.PoseDetection.JointVelocityActiveState::RelativeTo, Oculus.Interaction.PoseDetection.JointVelocityActiveState::WorldAxis
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfig
class CORDL_TYPE JointVelocityActiveState_JointVelocityFeatureConfig : public ::Oculus::Interaction::PoseDetection::FeatureConfigBase_1<::Oculus::Interaction::Input::HandJointId> {
public:
// Declarations
 __declspec(property(get=get_HandAxis, put=set_HandAxis)) ::GlobalNamespace::JointVelocityActiveState_HandAxis  HandAxis;

 __declspec(property(get=get_HeadAxis, put=set_HeadAxis)) ::GlobalNamespace::JointVelocityActiveState_HeadAxis  HeadAxis;

 __declspec(property(get=get_RelativeTo, put=set_RelativeTo)) ::GlobalNamespace::JointVelocityActiveState_RelativeTo  RelativeTo;

 __declspec(property(get=get_WorldAxis, put=set_WorldAxis)) ::GlobalNamespace::JointVelocityActiveState_WorldAxis  WorldAxis;

/// @brief Field _handAxis, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__handAxis, put=__cordl_internal_set__handAxis)) ::GlobalNamespace::JointVelocityActiveState_HandAxis  _handAxis;

/// @brief Field _headAxis, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__headAxis, put=__cordl_internal_set__headAxis)) ::GlobalNamespace::JointVelocityActiveState_HeadAxis  _headAxis;

/// @brief Field _relativeTo, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::GlobalNamespace::JointVelocityActiveState_RelativeTo  _relativeTo;

/// @brief Field _worldAxis, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__worldAxis, put=__cordl_internal_set__worldAxis)) ::GlobalNamespace::JointVelocityActiveState_WorldAxis  _worldAxis;

static inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig* New_ctor() ;

constexpr ::GlobalNamespace::JointVelocityActiveState_HandAxis const& __cordl_internal_get__handAxis() const;

constexpr ::GlobalNamespace::JointVelocityActiveState_HandAxis& __cordl_internal_get__handAxis() ;

constexpr ::GlobalNamespace::JointVelocityActiveState_HeadAxis const& __cordl_internal_get__headAxis() const;

constexpr ::GlobalNamespace::JointVelocityActiveState_HeadAxis& __cordl_internal_get__headAxis() ;

constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo const& __cordl_internal_get__relativeTo() const;

constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo& __cordl_internal_get__relativeTo() ;

constexpr ::GlobalNamespace::JointVelocityActiveState_WorldAxis const& __cordl_internal_get__worldAxis() const;

constexpr ::GlobalNamespace::JointVelocityActiveState_WorldAxis& __cordl_internal_get__worldAxis() ;

constexpr void __cordl_internal_set__handAxis(::GlobalNamespace::JointVelocityActiveState_HandAxis  value) ;

constexpr void __cordl_internal_set__headAxis(::GlobalNamespace::JointVelocityActiveState_HeadAxis  value) ;

constexpr void __cordl_internal_set__relativeTo(::GlobalNamespace::JointVelocityActiveState_RelativeTo  value) ;

constexpr void __cordl_internal_set__worldAxis(::GlobalNamespace::JointVelocityActiveState_WorldAxis  value) ;

/// @brief Method .ctor, addr 0xa4a39a4, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HandAxis, addr 0xa4a3984, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JointVelocityActiveState_HandAxis get_HandAxis() ;

/// @brief Method get_HeadAxis, addr 0xa4a3994, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JointVelocityActiveState_HeadAxis get_HeadAxis() ;

/// @brief Method get_RelativeTo, addr 0xa4a3964, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JointVelocityActiveState_RelativeTo get_RelativeTo() ;

/// @brief Method get_WorldAxis, addr 0xa4a3974, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::JointVelocityActiveState_WorldAxis get_WorldAxis() ;

/// @brief Method set_HandAxis, addr 0xa4a398c, size 0x8, virtual false, abstract: false, final false
inline void set_HandAxis(::GlobalNamespace::JointVelocityActiveState_HandAxis  value) ;

/// @brief Method set_HeadAxis, addr 0xa4a399c, size 0x8, virtual false, abstract: false, final false
inline void set_HeadAxis(::GlobalNamespace::JointVelocityActiveState_HeadAxis  value) ;

/// @brief Method set_RelativeTo, addr 0xa4a396c, size 0x8, virtual false, abstract: false, final false
inline void set_RelativeTo(::GlobalNamespace::JointVelocityActiveState_RelativeTo  value) ;

/// @brief Method set_WorldAxis, addr 0xa4a397c, size 0x8, virtual false, abstract: false, final false
inline void set_WorldAxis(::GlobalNamespace::JointVelocityActiveState_WorldAxis  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointVelocityActiveState_JointVelocityFeatureConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointVelocityActiveState_JointVelocityFeatureConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointVelocityActiveState_JointVelocityFeatureConfig(JointVelocityActiveState_JointVelocityFeatureConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointVelocityActiveState_JointVelocityFeatureConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointVelocityActiveState_JointVelocityFeatureConfig(JointVelocityActiveState_JointVelocityFeatureConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16139};

/// [Tooltip("The detection axis will be in this coordinate space.")]
/// [SerializeField]
/// @brief Field _relativeTo, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::JointVelocityActiveState_RelativeTo  ____relativeTo;

/// [Tooltip("The world axis used for detection.")]
/// [SerializeField]
/// @brief Field _worldAxis, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::JointVelocityActiveState_WorldAxis  ____worldAxis;

/// [Tooltip("The axis of the hand root pose used for detection.")]
/// [SerializeField]
/// @brief Field _handAxis, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::JointVelocityActiveState_HandAxis  ____handAxis;

/// [Tooltip("The axis of the head pose used for detection.")]
/// [SerializeField]
/// @brief Field _headAxis, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::JointVelocityActiveState_HeadAxis  ____headAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig, ____relativeTo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig, ____worldAxis) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig, ____handAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig, ____headAxis) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointVelocityActiveState/JointVelocityFeatureConfigList
class CORDL_TYPE JointVelocityActiveState_JointVelocityFeatureConfigList : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Values)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*  Values;

/// @brief Field _values, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*  _values;

static inline ::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>* const& __cordl_internal_get__values() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*  value) ;

/// @brief Method .ctor, addr 0xa4a395c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Values, addr 0xa4a3954, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>* get_Values() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointVelocityActiveState_JointVelocityFeatureConfigList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointVelocityActiveState_JointVelocityFeatureConfigList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointVelocityActiveState_JointVelocityFeatureConfigList(JointVelocityActiveState_JointVelocityFeatureConfigList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointVelocityActiveState_JointVelocityFeatureConfigList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointVelocityActiveState_JointVelocityFeatureConfigList(JointVelocityActiveState_JointVelocityFeatureConfigList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16138};

/// [SerializeField]
/// @brief Field _values, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfig*>*  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList, ____values) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState_JointVelocityFeatureConfigList) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
