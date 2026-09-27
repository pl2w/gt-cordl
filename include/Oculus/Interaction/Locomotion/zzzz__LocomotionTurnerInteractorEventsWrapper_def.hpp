#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTurnerInteractorEventsWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionTurnerInteractorEventsWrapper)
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractor;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionTurnerInteractorEventsWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorEventsWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorEventsWrapper*, "Oculus.Interaction.Locomotion", "LocomotionTurnerInteractorEventsWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionTurnerInteractorEventsWrapper
class CORDL_TYPE LocomotionTurnerInteractorEventsWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_WhenTurnDirectionLeft)) ::UnityEngine::Events::UnityEvent*  WhenTurnDirectionLeft;

 __declspec(property(get=get_WhenTurnDirectionRight)) ::UnityEngine::Events::UnityEvent*  WhenTurnDirectionRight;

/// @brief Field _started, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _turner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__turner, put=__cordl_internal_set__turner)) ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>  _turner;

/// @brief Field _whenTurnDirectionLeft, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenTurnDirectionLeft, put=__cordl_internal_set__whenTurnDirectionLeft)) ::UnityEngine::Events::UnityEvent*  _whenTurnDirectionLeft;

/// @brief Field _whenTurnDirectionRight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenTurnDirectionRight, put=__cordl_internal_set__whenTurnDirectionRight)) ::UnityEngine::Events::UnityEvent*  _whenTurnDirectionRight;

/// @brief Method HandleTurnDirectionChanged, addr 0xa4d4530, size 0x38, virtual false, abstract: false, final false
inline void HandleTurnDirectionChanged(float_t  dir) ;

/// @brief Method InjectAllLocomotionTurnerInteractorEventsWrapper, addr 0xa4d4568, size 0x8, virtual false, abstract: false, final false
inline void InjectAllLocomotionTurnerInteractorEventsWrapper(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*  turner) ;

/// @brief Method InjectTurner, addr 0xa4d4570, size 0x8, virtual false, abstract: false, final false
inline void InjectTurner(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*  turner) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorEventsWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4d4498, size 0x98, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4d4400, size 0x98, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4d43d4, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor> const& __cordl_internal_get__turner() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>& __cordl_internal_get__turner() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenTurnDirectionLeft() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenTurnDirectionLeft() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenTurnDirectionRight() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenTurnDirectionRight() ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__turner(::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>  value) ;

constexpr void __cordl_internal_set__whenTurnDirectionLeft(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenTurnDirectionRight(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa4d4578, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WhenTurnDirectionLeft, addr 0xa4d43c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenTurnDirectionLeft() ;

/// @brief Method get_WhenTurnDirectionRight, addr 0xa4d43cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenTurnDirectionRight() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionTurnerInteractorEventsWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractorEventsWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionTurnerInteractorEventsWrapper(LocomotionTurnerInteractorEventsWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionTurnerInteractorEventsWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionTurnerInteractorEventsWrapper(LocomotionTurnerInteractorEventsWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16300};

/// [SerializeField]
/// @brief Field _turner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor>  ____turner;

/// [SerializeField]
/// @brief Field _whenTurnDirectionLeft, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenTurnDirectionLeft;

/// [SerializeField]
/// @brief Field _whenTurnDirectionRight, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenTurnDirectionRight;

/// @brief Field _started, offset: 0x38, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorEventsWrapper, ____turner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorEventsWrapper, ____whenTurnDirectionLeft) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorEventsWrapper, ____whenTurnDirectionRight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorEventsWrapper, ____started) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractorEventsWrapper) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
