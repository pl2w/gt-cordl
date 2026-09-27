#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TurnLocomotionBroadcaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TurnLocomotionBroadcaster)
namespace Oculus::Interaction::Locomotion {
class ILocomotionEventBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
namespace Oculus::Interaction::Locomotion {
class TurnLocomotionBroadcaster___c;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class TurnLocomotionBroadcaster;
}
namespace Oculus::Interaction::Locomotion {
class TurnLocomotionBroadcaster___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*);
MARK_REF_T(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster*, "Oculus.Interaction.Locomotion", "TurnLocomotionBroadcaster");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*, "Oculus.Interaction.Locomotion", "TurnLocomotionBroadcaster/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TurnLocomotionBroadcaster
class CORDL_TYPE TurnLocomotionBroadcaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_SmoothTurnCurve, put=set_SmoothTurnCurve)) ::UnityEngine::AnimationCurve*  SmoothTurnCurve;

 __declspec(property(get=get_SnapTurnDegrees, put=set_SnapTurnDegrees)) float_t  SnapTurnDegrees;

/// @brief Field WhenLocomotionPerformed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenLocomotionPerformed, put=__cordl_internal_set_WhenLocomotionPerformed)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  WhenLocomotionPerformed;

/// @brief Field _identifier, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__identifier, put=__cordl_internal_set__identifier)) ::Oculus::Interaction::UniqueIdentifier*  _identifier;

/// @brief Field _smoothTurnCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__smoothTurnCurve, put=__cordl_internal_set__smoothTurnCurve)) ::UnityEngine::AnimationCurve*  _smoothTurnCurve;

/// @brief Field _snapTurnDegrees, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapTurnDegrees, put=__cordl_internal_set__snapTurnDegrees)) float_t  _snapTurnDegrees;

/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr operator  ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept;

/// @brief Method Awake, addr 0xa4d6e6c, size 0xe4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster* New_ctor() ;

/// @brief Method SmoothTurn, addr 0xa4d6ff8, size 0xb4, virtual false, abstract: false, final false
inline void SmoothTurn(float_t  direction) ;

/// @brief Method SnapTurn, addr 0xa4d6f58, size 0x98, virtual false, abstract: false, final false
inline void SnapTurn(float_t  direction) ;

/// @brief Method SnapTurnLeft, addr 0xa4d6f50, size 0x8, virtual false, abstract: false, final false
inline void SnapTurnLeft() ;

/// @brief Method SnapTurnRight, addr 0xa4d6ff0, size 0x8, virtual false, abstract: false, final false
inline void SnapTurnRight() ;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& __cordl_internal_get_WhenLocomotionPerformed() const;

constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& __cordl_internal_get_WhenLocomotionPerformed() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__identifier() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__smoothTurnCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__smoothTurnCurve() ;

constexpr float_t const& __cordl_internal_get__snapTurnDegrees() const;

constexpr float_t& __cordl_internal_get__snapTurnDegrees() ;

constexpr void __cordl_internal_set_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

constexpr void __cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

constexpr void __cordl_internal_set__smoothTurnCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__snapTurnDegrees(float_t  value) ;

/// @brief Method .ctor, addr 0xa4d70ac, size 0x124, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenLocomotionPerformed, addr 0xa4d6d0c, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method get_Identifier, addr 0xa4d6cf4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// @brief Method get_SmoothTurnCurve, addr 0xa4d6ce4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_SmoothTurnCurve() ;

/// @brief Method get_SnapTurnDegrees, addr 0xa4d6cd4, size 0x8, virtual false, abstract: false, final false
inline float_t get_SnapTurnDegrees() ;

/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenLocomotionPerformed, addr 0xa4d6dbc, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

/// @brief Method set_SmoothTurnCurve, addr 0xa4d6cec, size 0x8, virtual false, abstract: false, final false
inline void set_SmoothTurnCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_SnapTurnDegrees, addr 0xa4d6cdc, size 0x8, virtual false, abstract: false, final false
inline void set_SnapTurnDegrees(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnLocomotionBroadcaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnLocomotionBroadcaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnLocomotionBroadcaster(TurnLocomotionBroadcaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnLocomotionBroadcaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnLocomotionBroadcaster(TurnLocomotionBroadcaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16307};

/// [SerializeField]
/// [Tooltip("Degrees to instantly turn when in Snap turn mode. Note the direction is provided by the axis")]
/// @brief Field _snapTurnDegrees, offset: 0x20, size: 0x4, def value: None
 float_t  ____snapTurnDegrees;

/// [SerializeField]
/// [Tooltip("Degrees to continuously rotate during selection when in Smooth turn mode, it is remapped from the Axis value")]
/// @brief Field _smoothTurnCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____smoothTurnCurve;

/// @brief Field _identifier, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____identifier;

/// [CompilerGenerated]
/// @brief Field WhenLocomotionPerformed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  ___WhenLocomotionPerformed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster, ____snapTurnDegrees) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster, ____smoothTurnCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster, ____identifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster, ___WhenLocomotionPerformed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TurnLocomotionBroadcaster/<>c
class CORDL_TYPE TurnLocomotionBroadcaster___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  __9__19_0;

static inline ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c* New_ctor() ;

/// @brief Method <.ctor>b__19_0, addr 0xa4d7240, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__19_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_) ;

/// @brief Method .ctor, addr 0xa4d7238, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* getStaticF___9__19_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c*  value) ;

static inline void setStaticF___9__19_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnLocomotionBroadcaster___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnLocomotionBroadcaster___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnLocomotionBroadcaster___c(TurnLocomotionBroadcaster___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnLocomotionBroadcaster___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnLocomotionBroadcaster___c(TurnLocomotionBroadcaster___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16306};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Locomotion::TurnLocomotionBroadcaster___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
