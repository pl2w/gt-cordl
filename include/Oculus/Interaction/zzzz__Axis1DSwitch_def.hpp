#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis1DSwitch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Axis1DSwitch)
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class Axis1DSwitch;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Axis1DSwitch*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Axis1DSwitch*, "Oculus.Interaction", "Axis1DSwitch");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Axis1DSwitch
class CORDL_TYPE Axis1DSwitch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ActiveState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveState, put=__cordl_internal_set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

/// @brief Field AxisWhenActive, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_AxisWhenActive, put=__cordl_internal_set_AxisWhenActive)) ::Oculus::Interaction::Input::IAxis1D*  AxisWhenActive;

/// @brief Field AxisWhenInactive, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_AxisWhenInactive, put=__cordl_internal_set_AxisWhenInactive)) ::Oculus::Interaction::Input::IAxis1D*  AxisWhenInactive;

 __declspec(property(get=get_Current)) ::Oculus::Interaction::Input::IAxis1D*  Current;

/// @brief Field _activeState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _axisWhenActive, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__axisWhenActive, put=__cordl_internal_set__axisWhenActive)) ::UnityW<::UnityEngine::Object>  _axisWhenActive;

/// @brief Field _axisWhenInactive, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__axisWhenInactive, put=__cordl_internal_set__axisWhenInactive)) ::UnityW<::UnityEngine::Object>  _axisWhenInactive;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr operator  ::Oculus::Interaction::Input::IAxis1D*() noexcept;

/// @brief Method Awake, addr 0xa4085b8, size 0xe4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectActiveState, addr 0xa408780, size 0xd0, virtual false, abstract: false, final false
inline void InjectActiveState(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectAllAxis1DSwitch, addr 0xa408748, size 0x38, virtual false, abstract: false, final false
inline void InjectAllAxis1DSwitch(::Oculus::Interaction::IActiveState*  activeState, ::Oculus::Interaction::Input::IAxis1D*  axisWhenActive, ::Oculus::Interaction::Input::IAxis1D*  axisWhenInactive) ;

/// @brief Method InjectAxisWhenActive, addr 0xa408850, size 0xcc, virtual false, abstract: false, final false
inline void InjectAxisWhenActive(::Oculus::Interaction::Input::IAxis1D*  axisWhenActive) ;

/// @brief Method InjectAxisWhenInactive, addr 0xa40891c, size 0xcc, virtual false, abstract: false, final false
inline void InjectAxisWhenInactive(::Oculus::Interaction::Input::IAxis1D*  axisWhenInactive) ;

static inline ::Oculus::Interaction::Axis1DSwitch* New_ctor() ;

/// @brief Method Start, addr 0xa40869c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Value, addr 0xa4086a0, size 0xa8, virtual true, abstract: false, final true
inline float_t Value() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_ActiveState() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_ActiveState() ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get_AxisWhenActive() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get_AxisWhenActive() ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get_AxisWhenInactive() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get_AxisWhenInactive() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axisWhenActive() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axisWhenActive() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axisWhenInactive() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axisWhenInactive() ;

constexpr void __cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set_AxisWhenActive(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set_AxisWhenInactive(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__axisWhenActive(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__axisWhenInactive(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4089e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Current, addr 0xa408500, size 0xb8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis1D* get_Current() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* i___Oculus__Interaction__Input__IAxis1D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis1DSwitch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis1DSwitch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis1DSwitch(Axis1DSwitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis1DSwitch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis1DSwitch(Axis1DSwitch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15722};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// @brief Field ActiveState, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___ActiveState;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// @brief Field _axisWhenActive, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axisWhenActive;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// @brief Field _axisWhenInactive, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axisWhenInactive;

/// @brief Field AxisWhenActive, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ___AxisWhenActive;

/// @brief Field AxisWhenInactive, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ___AxisWhenInactive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Axis1DSwitch, ____activeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DSwitch, ___ActiveState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DSwitch, ____axisWhenActive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DSwitch, ____axisWhenInactive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DSwitch, ___AxisWhenActive) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DSwitch, ___AxisWhenInactive) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Axis1DSwitch) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
