#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ColliderContainsHandJointActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ColliderContainsHandJointActiveState)
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
class Collider;
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
class ColliderContainsHandJointActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*, "Oculus.Interaction.PoseDetection", "ColliderContainsHandJointActiveState");
// Dependencies Oculus.Interaction.Input.HandJointId, UnityEngine.Collider, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.ColliderContainsHandJointActiveState
class CORDL_TYPE ColliderContainsHandJointActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

/// @brief Field Hand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field <Active>k__BackingField, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field _active, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _entryColliders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__entryColliders, put=__cordl_internal_set__entryColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _entryColliders;

/// @brief Field _exitColliders, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__exitColliders, put=__cordl_internal_set__exitColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _exitColliders;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _jointToTest, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__jointToTest, put=__cordl_internal_set__jointToTest)) ::Oculus::Interaction::Input::HandJointId  _jointToTest;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa498d84, size 0x70, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllColliderContainsHandJointActiveState, addr 0xa498fd8, size 0x54, virtual false, abstract: false, final false
inline void InjectAllColliderContainsHandJointActiveState(::Oculus::Interaction::Input::IHand*  hand, ::ArrayW<::UnityEngine::Collider*>  entryColliders, ::ArrayW<::UnityEngine::Collider*>  exitColliders, ::Oculus::Interaction::Input::HandJointId  jointToTest) ;

/// @brief Method InjectEntryColliders, addr 0xa4990fc, size 0x8, virtual false, abstract: false, final false
inline void InjectEntryColliders(::ArrayW<::UnityEngine::Collider*>  entryColliders) ;

/// @brief Method InjectExitColliders, addr 0xa499104, size 0x8, virtual false, abstract: false, final false
inline void InjectExitColliders(::ArrayW<::UnityEngine::Collider*>  exitColliders) ;

/// @brief Method InjectHand, addr 0xa49902c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectJointToTest, addr 0xa49910c, size 0x8, virtual false, abstract: false, final false
inline void InjectJointToTest(::Oculus::Interaction::Input::HandJointId  jointToTest) ;

/// @brief Method IsPointWithinColliders, addr 0xa498f38, size 0xa0, virtual false, abstract: false, final false
inline bool IsPointWithinColliders(::UnityEngine::Vector3  point, ::ArrayW<::UnityEngine::Collider*>  colliders) ;

/// @brief Method JointPassesTests, addr 0xa498efc, size 0x3c, virtual false, abstract: false, final false
inline bool JointPassesTests(::UnityEngine::Pose  jointPose) ;

static inline ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa498df4, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa498df8, size 0x104, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__entryColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__entryColliders() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__exitColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__exitColliders() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get__jointToTest() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get__jointToTest() ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__entryColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__exitColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__jointToTest(::Oculus::Interaction::Input::HandJointId  value) ;

/// @brief Method .ctor, addr 0xa499114, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Active, addr 0xa498d74, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Active, addr 0xa498d7c, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderContainsHandJointActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderContainsHandJointActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderContainsHandJointActiveState(ColliderContainsHandJointActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderContainsHandJointActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderContainsHandJointActiveState(ColliderContainsHandJointActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16085};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// @brief Field Hand, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// [SerializeField]
/// @brief Field _entryColliders, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____entryColliders;

/// [SerializeField]
/// @brief Field _exitColliders, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____exitColliders;

/// [SerializeField]
/// @brief Field _jointToTest, offset: 0x40, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ____jointToTest;

/// [CompilerGenerated]
/// @brief Field <Active>k__BackingField, offset: 0x44, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

/// @brief Field _active, offset: 0x45, size: 0x1, def value: None
 bool  ____active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState, ___Hand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState, ____entryColliders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState, ____exitColliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState, ____jointToTest) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState, ____Active_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState, ____active) == 0x45, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
