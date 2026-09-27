#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/PlayerLocomotor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerLocomotor)
namespace GlobalNamespace {
struct LocomotionEvent_RotationType;
}
namespace GlobalNamespace {
struct LocomotionEvent_TranslationType;
}
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventHandler;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
class PlayerLocomotor___c;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class PlayerLocomotor;
}
namespace Oculus::Interaction::Locomotion {
class PlayerLocomotor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::PlayerLocomotor*);
MARK_REF_T(::Oculus::Interaction::Locomotion::PlayerLocomotor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::PlayerLocomotor*, "Oculus.Interaction.Locomotion", "PlayerLocomotor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::PlayerLocomotor___c*, "Oculus.Interaction.Locomotion", "PlayerLocomotor/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.PlayerLocomotor
class CORDL_TYPE PlayerLocomotor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::PlayerLocomotor___c;

/// @brief Field _deferredEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__deferredEvent, put=__cordl_internal_set__deferredEvent)) ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  _deferredEvent;

/// @brief Field _playerHead, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerHead, put=__cordl_internal_set__playerHead)) ::UnityW<::UnityEngine::Transform>  _playerHead;

/// @brief Field _playerOrigin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerOrigin, put=__cordl_internal_set__playerOrigin)) ::UnityW<::UnityEngine::Transform>  _playerOrigin;

/// @brief Field _started, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _whenLocomotionEventHandled, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenLocomotionEventHandled, put=__cordl_internal_set__whenLocomotionEventHandled)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  _whenLocomotionEventHandled;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept;

/// @brief Method HandleLocomotionEvent, addr 0xa4c98fc, size 0x74, virtual true, abstract: false, final true
inline void HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent) ;

/// @brief Method InjectAllPlayerLocomotor, addr 0xa4ca214, size 0x30, virtual false, abstract: false, final false
inline void InjectAllPlayerLocomotor(::UnityEngine::Transform*  playerOrigin, ::UnityEngine::Transform*  playerHead) ;

/// @brief Method InjectPlayerHead, addr 0xa4ca24c, size 0x8, virtual false, abstract: false, final false
inline void InjectPlayerHead(::UnityEngine::Transform*  playerHead) ;

/// @brief Method InjectPlayerOrigin, addr 0xa4ca244, size 0x8, virtual false, abstract: false, final false
inline void InjectPlayerOrigin(::UnityEngine::Transform*  playerOrigin) ;

/// @brief Method MovePlayer, addr 0xa4c9970, size 0x1cc, virtual false, abstract: false, final false
inline void MovePlayer() ;

/// @brief Method MovePlayer, addr 0xa4c9b3c, size 0x178, virtual false, abstract: false, final false
inline void MovePlayer(::UnityEngine::Vector3  targetPosition, ::GlobalNamespace::LocomotionEvent_TranslationType  translationMode) ;

static inline ::Oculus::Interaction::Locomotion::PlayerLocomotor* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4c9868, size 0x94, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4c97b4, size 0xb4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RotatePlayer, addr 0xa4c9cb4, size 0x560, virtual false, abstract: false, final false
inline void RotatePlayer(::UnityEngine::Quaternion  targetRotation, ::GlobalNamespace::LocomotionEvent_RotationType  rotationMode) ;

/// @brief Method Start, addr 0xa4c9788, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get__deferredEvent() const;

constexpr ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get__deferredEvent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerHead() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerOrigin() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& __cordl_internal_get__whenLocomotionEventHandled() const;

constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& __cordl_internal_get__whenLocomotionEventHandled() ;

constexpr void __cordl_internal_set__deferredEvent(::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

constexpr void __cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__playerOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__whenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Method .ctor, addr 0xa4ca254, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenLocomotionEventHandled, addr 0xa4c9638, size 0xa8, virtual true, abstract: false, final true
inline void add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept;

/// @brief Method remove_WhenLocomotionEventHandled, addr 0xa4c96e0, size 0xa8, virtual true, abstract: false, final true
inline void remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLocomotor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLocomotor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLocomotor(PlayerLocomotor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLocomotor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLocomotor(PlayerLocomotor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16272};

/// [SerializeField]
/// @brief Field _playerOrigin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerOrigin;

/// [SerializeField]
/// @brief Field _playerHead, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerHead;

/// @brief Field _whenLocomotionEventHandled, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  ____whenLocomotionEventHandled;

/// @brief Field _started, offset: 0x38, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _deferredEvent, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ____deferredEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::PlayerLocomotor, ____playerOrigin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::PlayerLocomotor, ____playerHead) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::PlayerLocomotor, ____whenLocomotionEventHandled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::PlayerLocomotor, ____started) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::PlayerLocomotor, ____deferredEvent) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::PlayerLocomotor) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.PlayerLocomotor/<>c
class CORDL_TYPE PlayerLocomotor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::PlayerLocomotor___c*  __9;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  __9__18_0;

static inline ::Oculus::Interaction::Locomotion::PlayerLocomotor___c* New_ctor() ;

/// @brief Method <.ctor>b__18_0, addr 0xa4ca408, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__18_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_) ;

/// @brief Method .ctor, addr 0xa4ca400, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::PlayerLocomotor___c* getStaticF___9() ;

static inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* getStaticF___9__18_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::PlayerLocomotor___c*  value) ;

static inline void setStaticF___9__18_0(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLocomotor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLocomotor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLocomotor___c(PlayerLocomotor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLocomotor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLocomotor___c(PlayerLocomotor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::PlayerLocomotor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
