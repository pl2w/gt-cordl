#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseComparerActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BodyPoseComparerActiveState)
namespace GlobalNamespace {
struct BodyPoseComparerActiveState_BodyPoseComparerFeatureState;
}
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseComparerActiveState_JointComparerConfig;
}
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseComparerActiveState___c;
}
namespace Oculus::Interaction::Body::PoseDetection {
class IBodyPose;
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
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
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
// Forward declare root types
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseComparerActiveState;
}
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseComparerActiveState_JointComparerConfig;
}
namespace Oculus::Interaction::Body::PoseDetection {
class BodyPoseComparerActiveState___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*);
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*);
MARK_REF_T(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseComparerActiveState");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseComparerActiveState/JointComparerConfig");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseComparerActiveState/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState
class CORDL_TYPE BodyPoseComparerActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BodyPoseComparerFeatureState = ::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState;

using JointComparerConfig = ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig;

using __c = ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_FeatureStates)) ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>*  FeatureStates;

 __declspec(property(get=get_MinTimeInState, put=set_MinTimeInState)) float_t  MinTimeInState;

/// @brief Field PoseA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PoseA, put=__cordl_internal_set_PoseA)) ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  PoseA;

/// @brief Field PoseB, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PoseB, put=__cordl_internal_set_PoseB)) ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  PoseB;

/// @brief Field _configs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__configs, put=__cordl_internal_set__configs)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*  _configs;

/// @brief Field _featureStates, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureStates, put=__cordl_internal_set__featureStates)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>*  _featureStates;

/// @brief Field _internalActive, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalActive, put=__cordl_internal_set__internalActive)) bool  _internalActive;

/// @brief Field _isActive, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _lastStateChangeTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStateChangeTime, put=__cordl_internal_set__lastStateChangeTime)) float_t  _lastStateChangeTime;

/// @brief Field _minTimeInState, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__minTimeInState, put=__cordl_internal_set__minTimeInState)) float_t  _minTimeInState;

/// @brief Field _poseA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseA, put=__cordl_internal_set__poseA)) ::UnityW<::UnityEngine::Object>  _poseA;

/// @brief Field _poseB, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__poseB, put=__cordl_internal_set__poseB)) ::UnityW<::UnityEngine::Object>  _poseB;

/// @brief Field _timeProvider, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa4f442c, size 0xa0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetJointDelta, addr 0xa4f4754, size 0x1cc, virtual false, abstract: false, final false
inline bool GetJointDelta(::Oculus::Interaction::Body::Input::BodyJointId  joint, ::by_ref<float_t>  delta) ;

/// @brief Method InjectAllBodyPoseComparerActiveState, addr 0xa4f4928, size 0x38, virtual false, abstract: false, final false
inline void InjectAllBodyPoseComparerActiveState(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  poseA, ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  poseB, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*  configs) ;

/// @brief Method InjectJoints, addr 0xa4f4b00, size 0x84, virtual false, abstract: false, final false
inline void InjectJoints(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*  configs) ;

/// [Obsolete("Use SetTimeProvider()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa4f4b84, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method InjectPoseA, addr 0xa4f4960, size 0xd0, virtual false, abstract: false, final false
inline void InjectPoseA(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  poseA) ;

/// @brief Method InjectPoseB, addr 0xa4f4a30, size 0xd0, virtual false, abstract: false, final false
inline void InjectPoseB(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  poseB) ;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState* New_ctor() ;

/// @brief Method SetTimeProvider, addr 0xa4f441c, size 0x8, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa4f44cc, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& __cordl_internal_get_PoseA() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& __cordl_internal_get_PoseA() ;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose* const& __cordl_internal_get_PoseB() const;

constexpr ::Oculus::Interaction::Body::PoseDetection::IBodyPose*& __cordl_internal_get_PoseB() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>* const& __cordl_internal_get__configs() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*& __cordl_internal_get__configs() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>* const& __cordl_internal_get__featureStates() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>*& __cordl_internal_get__featureStates() ;

constexpr bool const& __cordl_internal_get__internalActive() const;

constexpr bool& __cordl_internal_get__internalActive() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr float_t const& __cordl_internal_get__lastStateChangeTime() const;

constexpr float_t& __cordl_internal_get__lastStateChangeTime() ;

constexpr float_t const& __cordl_internal_get__minTimeInState() const;

constexpr float_t& __cordl_internal_get__minTimeInState() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__poseA() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__poseA() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__poseB() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__poseB() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr void __cordl_internal_set_PoseA(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value) ;

constexpr void __cordl_internal_set_PoseB(::Oculus::Interaction::Body::PoseDetection::IBodyPose*  value) ;

constexpr void __cordl_internal_set__configs(::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*  value) ;

constexpr void __cordl_internal_set__featureStates(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>*  value) ;

constexpr void __cordl_internal_set__internalActive(bool  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__lastStateChangeTime(float_t  value) ;

constexpr void __cordl_internal_set__minTimeInState(float_t  value) ;

constexpr void __cordl_internal_set__poseA(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__poseB(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa4f4b8c, size 0x254, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa4f44d0, size 0x284, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_FeatureStates, addr 0xa4f4424, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>* get_FeatureStates() ;

/// @brief Method get_MinTimeInState, addr 0xa4f440c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinTimeInState() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// @brief Method set_MinTimeInState, addr 0xa4f4414, size 0x8, virtual false, abstract: false, final false
inline void set_MinTimeInState(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseComparerActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseComparerActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseComparerActiveState(BodyPoseComparerActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseComparerActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseComparerActiveState(BodyPoseComparerActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16388};

/// [Tooltip("The first body pose to compare.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.PoseDetection.IBodyPose), new[] {  })]
/// @brief Field _poseA, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____poseA;

/// @brief Field PoseA, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  ___PoseA;

/// [Tooltip("The second body pose to compare.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.PoseDetection.IBodyPose), new[] {  })]
/// @brief Field _poseB, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____poseB;

/// @brief Field PoseB, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Body::PoseDetection::IBodyPose*  ___PoseB;

/// [SerializeField]
/// @brief Field _configs, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*>*  ____configs;

/// [Tooltip("A new state must be maintaned for at least this many seconds before the Active property changes.")]
/// [SerializeField]
/// @brief Field _minTimeInState, offset: 0x48, size: 0x4, def value: None
 float_t  ____minTimeInState;

/// @brief Field _timeProvider, offset: 0x50, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _featureStates, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig*,::GlobalNamespace::BodyPoseComparerActiveState_BodyPoseComparerFeatureState>*  ____featureStates;

/// @brief Field _isActive, offset: 0x60, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _internalActive, offset: 0x61, size: 0x1, def value: None
 bool  ____internalActive;

/// @brief Field _lastStateChangeTime, offset: 0x64, size: 0x4, def value: None
 float_t  ____lastStateChangeTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____poseA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ___PoseA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____poseB) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ___PoseB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____configs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____minTimeInState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____timeProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____featureStates) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____isActive) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____internalActive) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState, ____lastStateChangeTime) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/<>c
class CORDL_TYPE BodyPoseComparerActiveState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*  __9;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::System::Func_1<float_t>*  __9__29_0;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c* New_ctor() ;

/// @brief Method <.ctor>b__29_0, addr 0xa4f4e6c, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__29_0() ;

/// @brief Method .ctor, addr 0xa4f4e64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c* getStaticF___9() ;

static inline ::System::Func_1<float_t>* getStaticF___9__29_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c*  value) ;

static inline void setStaticF___9__29_0(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseComparerActiveState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseComparerActiveState___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseComparerActiveState___c(BodyPoseComparerActiveState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseComparerActiveState___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseComparerActiveState___c(BodyPoseComparerActiveState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
// Dependencies Oculus.Interaction.Body.Input.BodyJointId, System.Object
namespace Oculus::Interaction::Body::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.Body.PoseDetection.BodyPoseComparerActiveState/JointComparerConfig
class CORDL_TYPE BodyPoseComparerActiveState_JointComparerConfig : public ::System::Object {
public:
// Declarations
/// @brief Field Joint, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Joint, put=__cordl_internal_set_Joint)) ::Oculus::Interaction::Body::Input::BodyJointId  Joint;

/// @brief Field MaxDelta, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxDelta, put=__cordl_internal_set_MaxDelta)) float_t  MaxDelta;

/// @brief Field Width, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Width, put=__cordl_internal_set_Width)) float_t  Width;

static inline ::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig* New_ctor() ;

constexpr ::Oculus::Interaction::Body::Input::BodyJointId const& __cordl_internal_get_Joint() const;

constexpr ::Oculus::Interaction::Body::Input::BodyJointId& __cordl_internal_get_Joint() ;

constexpr float_t const& __cordl_internal_get_MaxDelta() const;

constexpr float_t& __cordl_internal_get_MaxDelta() ;

constexpr float_t const& __cordl_internal_get_Width() const;

constexpr float_t& __cordl_internal_get_Width() ;

constexpr void __cordl_internal_set_Joint(::Oculus::Interaction::Body::Input::BodyJointId  value) ;

constexpr void __cordl_internal_set_MaxDelta(float_t  value) ;

constexpr void __cordl_internal_set_Width(float_t  value) ;

/// @brief Method .ctor, addr 0xa4f4de0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyPoseComparerActiveState_JointComparerConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseComparerActiveState_JointComparerConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyPoseComparerActiveState_JointComparerConfig(BodyPoseComparerActiveState_JointComparerConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyPoseComparerActiveState_JointComparerConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyPoseComparerActiveState_JointComparerConfig(BodyPoseComparerActiveState_JointComparerConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16386};

/// [Tooltip("The joint to compare from each Body Pose")]
/// @brief Field Joint, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Body::Input::BodyJointId  ___Joint;

/// [Min(0)]
/// [Tooltip("The maximum angle that two joint rotations can be from each other to be considered equal.")]
/// @brief Field MaxDelta, offset: 0x14, size: 0x4, def value: None
 float_t  ___MaxDelta;

/// [Tooltip("The width of the threshold when transitioning states. Width / 2 is added to MaxDelta when leaving Active state, and subtracted when entering.")]
/// [Min(0)]
/// @brief Field Width, offset: 0x18, size: 0x4, def value: None
 float_t  ___Width;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig, ___Joint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig, ___MaxDelta) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig, ___Width) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseComparerActiveState_JointComparerConfig) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::PoseDetection
