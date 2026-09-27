#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointDistanceActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JointDistanceActiveState)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class JointDistanceActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::JointDistanceActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::JointDistanceActiveState*, "Oculus.Interaction.PoseDetection", "JointDistanceActiveState");
// Dependencies Oculus.Interaction.Input.HandJointId, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.JointDistanceActiveState
class CORDL_TYPE JointDistanceActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field HandA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandA, put=__cordl_internal_set_HandA)) ::Oculus::Interaction::Input::IHand*  HandA;

/// @brief Field HandB, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandB, put=__cordl_internal_set_HandB)) ::Oculus::Interaction::Input::IHand*  HandB;

 __declspec(property(get=get_JointIdA, put=set_JointIdA)) ::Oculus::Interaction::Input::HandJointId  JointIdA;

 __declspec(property(get=get_JointIdB, put=set_JointIdB)) ::Oculus::Interaction::Input::HandJointId  JointIdB;

/// @brief Field _activeState, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) bool  _activeState;

/// @brief Field _distance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__distance, put=__cordl_internal_set__distance)) float_t  _distance;

/// @brief Field _handA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handA, put=__cordl_internal_set__handA)) ::UnityW<::UnityEngine::Object>  _handA;

/// @brief Field _handB, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__handB, put=__cordl_internal_set__handB)) ::UnityW<::UnityEngine::Object>  _handB;

/// @brief Field _internalState, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalState, put=__cordl_internal_set__internalState)) bool  _internalState;

/// @brief Field _jointA, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__jointA, put=__cordl_internal_set__jointA)) ::Oculus::Interaction::Input::HandJointId  _jointA;

/// @brief Field _jointB, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__jointB, put=__cordl_internal_set__jointB)) ::Oculus::Interaction::Input::HandJointId  _jointB;

/// @brief Field _jointIdA, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__jointIdA, put=__cordl_internal_set__jointIdA)) ::Oculus::Interaction::Input::HandJointId  _jointIdA;

/// @brief Field _jointIdB, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__jointIdB, put=__cordl_internal_set__jointIdB)) ::Oculus::Interaction::Input::HandJointId  _jointIdB;

/// @brief Field _lastStateChangeTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStateChangeTime, put=__cordl_internal_set__lastStateChangeTime)) float_t  _lastStateChangeTime;

/// @brief Field _lastStateUpdateFrame, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastStateUpdateFrame, put=__cordl_internal_set__lastStateUpdateFrame)) int32_t  _lastStateUpdateFrame;

/// @brief Field _minTimeInState, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__minTimeInState, put=__cordl_internal_set__minTimeInState)) float_t  _minTimeInState;

/// @brief Field _thresholdWidth, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__thresholdWidth, put=__cordl_internal_set__thresholdWidth)) float_t  _thresholdWidth;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa49fe50, size 0xa0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllJointDistanceActiveState, addr 0xa4a00f8, size 0x28, virtual false, abstract: false, final false
inline void InjectAllJointDistanceActiveState(::Oculus::Interaction::Input::IHand*  handA, ::Oculus::Interaction::Input::IHand*  handB) ;

/// @brief Method InjectHandA, addr 0xa4a0120, size 0xd0, virtual false, abstract: false, final false
inline void InjectHandA(::Oculus::Interaction::Input::IHand*  handA) ;

/// @brief Method InjectHandB, addr 0xa4a01f0, size 0xd0, virtual false, abstract: false, final false
inline void InjectHandB(::Oculus::Interaction::Input::IHand*  handB) ;

/// [Obsolete("Use the JointIdA setter instead")]
/// @brief Method InjectJointIdA, addr 0xa4a02c0, size 0x8, virtual false, abstract: false, final false
inline void InjectJointIdA(::Oculus::Interaction::Input::HandJointId  jointIdA) ;

/// [Obsolete("Use the JointIdB setter instead")]
/// @brief Method InjectJointIdB, addr 0xa4a02c8, size 0x8, virtual false, abstract: false, final false
inline void InjectJointIdB(::Oculus::Interaction::Input::HandJointId  jointIdB) ;

/// @brief Method InjectOptionalDistance, addr 0xa4a02d0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalDistance(float_t  val) ;

/// @brief Method InjectOptionalMinTimeInState, addr 0xa4a02e0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalMinTimeInState(float_t  val) ;

/// @brief Method InjectOptionalThresholdWidth, addr 0xa4a02d8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalThresholdWidth(float_t  val) ;

/// @brief Method JointDistanceWithinThreshold, addr 0xa49fef8, size 0x200, virtual false, abstract: false, final false
inline bool JointDistanceWithinThreshold() ;

static inline ::Oculus::Interaction::PoseDetection::JointDistanceActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa49fef0, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa49fef4, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActiveState, addr 0xa49fdd4, size 0x7c, virtual false, abstract: false, final false
inline void UpdateActiveState() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_HandA() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_HandA() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_HandB() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_HandB() ;

constexpr bool const& __cordl_internal_get__activeState() const;

constexpr bool& __cordl_internal_get__activeState() ;

constexpr float_t const& __cordl_internal_get__distance() const;

constexpr float_t& __cordl_internal_get__distance() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handA() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handA() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handB() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handB() ;

constexpr bool const& __cordl_internal_get__internalState() const;

constexpr bool& __cordl_internal_get__internalState() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__jointA() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__jointA() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__jointB() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__jointB() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__jointIdA() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__jointIdA() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__jointIdB() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__jointIdB() ;

constexpr float_t const& __cordl_internal_get__lastStateChangeTime() const;

constexpr float_t& __cordl_internal_get__lastStateChangeTime() ;

constexpr int32_t const& __cordl_internal_get__lastStateUpdateFrame() const;

constexpr int32_t& __cordl_internal_get__lastStateUpdateFrame() ;

constexpr float_t const& __cordl_internal_get__minTimeInState() const;

constexpr float_t& __cordl_internal_get__minTimeInState() ;

constexpr float_t const& __cordl_internal_get__thresholdWidth() const;

constexpr float_t& __cordl_internal_get__thresholdWidth() ;

constexpr void __cordl_internal_set_HandA(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set_HandB(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__activeState(bool  value) ;

constexpr void __cordl_internal_set__distance(float_t  value) ;

constexpr void __cordl_internal_set__handA(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handB(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__internalState(bool  value) ;

constexpr void __cordl_internal_set__jointA(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set__jointB(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set__jointIdA(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set__jointIdB(::Oculus::Interaction::Input::HandJointId  value) ;

constexpr void __cordl_internal_set__lastStateChangeTime(float_t  value) ;

constexpr void __cordl_internal_set__lastStateUpdateFrame(int32_t  value) ;

constexpr void __cordl_internal_set__minTimeInState(float_t  value) ;

constexpr void __cordl_internal_set__thresholdWidth(float_t  value) ;

/// @brief Method .ctor, addr 0xa4a02e8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa49fd9c, size 0x38, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_JointIdA, addr 0xa49fd7c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandJointId get_JointIdA() ;

/// @brief Method get_JointIdB, addr 0xa49fd8c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandJointId get_JointIdB() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Method set_JointIdA, addr 0xa49fd84, size 0x8, virtual false, abstract: false, final false
inline void set_JointIdA(::Oculus::Interaction::Input::HandJointId  value) ;

/// @brief Method set_JointIdB, addr 0xa49fd94, size 0x8, virtual false, abstract: false, final false
inline void set_JointIdB(::Oculus::Interaction::Input::HandJointId  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointDistanceActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointDistanceActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointDistanceActiveState(JointDistanceActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointDistanceActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointDistanceActiveState(JointDistanceActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16124};

/// [Tooltip("The IHand that JointIdA will be sourced from.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _handA, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handA;

/// @brief Field HandA, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___HandA;

/// [Tooltip("The joint of HandA to use for distance check.")]
/// [SerializeField]
/// @brief Field _jointIdA, offset: 0x30, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____jointIdA;

/// [Tooltip("The joint of HandA to use for distance check.")]
/// [SerializeField]
/// @brief Field _jointA, offset: 0x34, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____jointA;

/// [Tooltip("The IHand that JointIdB will be sourced from.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _handB, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handB;

/// @brief Field HandB, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___HandB;

/// [Tooltip("The joint of HandB to use for distance check.")]
/// [SerializeField]
/// @brief Field _jointIdB, offset: 0x48, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____jointIdB;

/// [Tooltip("The joint of HandB to use for distance check.")]
/// [SerializeField]
/// @brief Field _jointB, offset: 0x4c, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____jointB;

/// [Tooltip("The ActiveState will become Active when joints are within this distance from each other.")]
/// [SerializeField]
/// @brief Field _distance, offset: 0x50, size: 0x4, def value: None
 float_t  ____distance;

/// [Tooltip("The distance value will be modified by this width to create differing enter/exit thresholds. Used to prevent chattering at the threshold edge.")]
/// [SerializeField]
/// @brief Field _thresholdWidth, offset: 0x54, size: 0x4, def value: None
 float_t  ____thresholdWidth;

/// [Tooltip("A new state must be maintaned for at least this many seconds before the Active property changes.")]
/// [SerializeField]
/// @brief Field _minTimeInState, offset: 0x58, size: 0x4, def value: None
 float_t  ____minTimeInState;

/// @brief Field _activeState, offset: 0x5c, size: 0x1, def value: None
 bool  ____activeState;

/// @brief Field _internalState, offset: 0x5d, size: 0x1, def value: None
 bool  ____internalState;

/// @brief Field _lastStateChangeTime, offset: 0x60, size: 0x4, def value: None
 float_t  ____lastStateChangeTime;

/// @brief Field _lastStateUpdateFrame, offset: 0x64, size: 0x4, def value: None
 int32_t  ____lastStateUpdateFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____handA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ___HandA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____jointIdA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____jointA) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____handB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ___HandB) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____jointIdB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____jointB) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____distance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____thresholdWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____minTimeInState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____activeState) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____internalState) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____lastStateChangeTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState, ____lastStateUpdateFrame) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointDistanceActiveState) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
