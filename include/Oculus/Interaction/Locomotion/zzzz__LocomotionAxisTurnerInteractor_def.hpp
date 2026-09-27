#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionAxisTurnerInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Interactor_2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocomotionAxisTurnerInteractor)
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::Input {
class IAxis2D;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionAxisTurnerInteractable;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionAxisTurnerInteractor;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor*, "Oculus.Interaction.Locomotion", "LocomotionAxisTurnerInteractor");
// Dependencies Oculus.Interaction.Interactor`2<TInteractor, TInteractable>
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionAxisTurnerInteractor
class CORDL_TYPE LocomotionAxisTurnerInteractor : public ::Oculus::Interaction::Interactor_2<::UnityW<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor>,::UnityW<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable>> {
public:
// Declarations
/// @brief Field Axis2D, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_Axis2D, put=__cordl_internal_set_Axis2D)) ::Oculus::Interaction::Input::IAxis2D*  Axis2D;

 __declspec(property(get=get_DeadZone, put=set_DeadZone)) float_t  DeadZone;

 __declspec(property(get=get_ShouldHover)) bool  ShouldHover;

 __declspec(property(get=get_ShouldUnhover)) bool  ShouldUnhover;

/// @brief Field _axis2D, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis2D, put=__cordl_internal_set__axis2D)) ::UnityW<::UnityEngine::Object>  _axis2D;

/// @brief Field _deadZone, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__deadZone, put=__cordl_internal_set__deadZone)) float_t  _deadZone;

/// @brief Field _horizontalAxisValue, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get__horizontalAxisValue, put=__cordl_internal_set__horizontalAxisValue)) float_t  _horizontalAxisValue;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr operator  ::Oculus::Interaction::Input::IAxis1D*() noexcept;

/// @brief Method Awake, addr 0xa4d280c, size 0x90, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeCandidate, addr 0xa4d2a50, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable> ComputeCandidate() ;

/// @brief Method ComputeShouldSelect, addr 0xa4d27ec, size 0x10, virtual true, abstract: false, final false
inline bool ComputeShouldSelect() ;

/// @brief Method ComputeShouldUnselect, addr 0xa4d27fc, size 0x10, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method DoPreprocess, addr 0xa4d2988, size 0xc8, virtual true, abstract: false, final false
inline void DoPreprocess() ;

/// @brief Method InjectAllLocomotionAxisTurner, addr 0xa4d2a60, size 0x4, virtual false, abstract: false, final false
inline void InjectAllLocomotionAxisTurner(::Oculus::Interaction::Input::IAxis2D*  axis2D) ;

/// @brief Method InjectAxis2D, addr 0xa4d2a64, size 0xd0, virtual false, abstract: false, final false
inline void InjectAxis2D(::Oculus::Interaction::Input::IAxis2D*  axis2D) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4d289c, size 0x54, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Start, addr 0xa4d28f0, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Value, addr 0xa4d2a58, size 0x8, virtual true, abstract: false, final true
inline float_t Value() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__15_0, addr 0xa4d2b84, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__15_0() ;

constexpr ::Oculus::Interaction::Input::IAxis2D* const& __cordl_internal_get_Axis2D() const;

constexpr ::Oculus::Interaction::Input::IAxis2D*& __cordl_internal_get_Axis2D() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axis2D() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axis2D() ;

constexpr float_t const& __cordl_internal_get__deadZone() const;

constexpr float_t& __cordl_internal_get__deadZone() ;

constexpr float_t const& __cordl_internal_get__horizontalAxisValue() const;

constexpr float_t& __cordl_internal_get__horizontalAxisValue() ;

constexpr void __cordl_internal_set_Axis2D(::Oculus::Interaction::Input::IAxis2D*  value) ;

constexpr void __cordl_internal_set__axis2D(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__deadZone(float_t  value) ;

constexpr void __cordl_internal_set__horizontalAxisValue(float_t  value) ;

/// @brief Method .ctor, addr 0xa4d2b34, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DeadZone, addr 0xa4d27a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_DeadZone() ;

/// @brief Method get_ShouldHover, addr 0xa4d27b0, size 0x18, virtual true, abstract: false, final false
inline bool get_ShouldHover() ;

/// @brief Method get_ShouldUnhover, addr 0xa4d27c8, size 0x24, virtual true, abstract: false, final false
inline bool get_ShouldUnhover() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* i___Oculus__Interaction__Input__IAxis1D() noexcept;

/// @brief Method set_DeadZone, addr 0xa4d27a8, size 0x8, virtual false, abstract: false, final false
inline void set_DeadZone(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionAxisTurnerInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionAxisTurnerInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionAxisTurnerInteractor(LocomotionAxisTurnerInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionAxisTurnerInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionAxisTurnerInteractor(LocomotionAxisTurnerInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16295};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis2D), new[] {  })]
/// [Tooltip("Input 2D Axis from which the Horizontal axis will be extracted")]
/// @brief Field _axis2D, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axis2D;

/// @brief Field Axis2D, offset: 0x120, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis2D*  ___Axis2D;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("The Axis.x absolute value must be bigger than this to go into Hover and Select states")]
/// @brief Field _deadZone, offset: 0x128, size: 0x4, def value: None
 float_t  ____deadZone;

/// @brief Field _horizontalAxisValue, offset: 0x12c, size: 0x4, def value: None
 float_t  ____horizontalAxisValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor, ____axis2D) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor, ___Axis2D) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor, ____deadZone) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor, ____horizontalAxisValue) == 0x12c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractor) == 0x130, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
