#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVRButtonAxis1D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Button_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRButtonAxis1D)
namespace GlobalNamespace {
struct OVRInput_Button;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction {
class ProgressCurve;
}
// Forward declare root types
namespace Oculus::Interaction {
class OVRButtonAxis1D;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OVRButtonAxis1D*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OVRButtonAxis1D*, "Oculus.Interaction", "OVRButtonAxis1D");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Button, OVRInput::Controller, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OVRButtonAxis1D
class CORDL_TYPE OVRButtonAxis1D : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ButtonValue, put=set_ButtonValue)) float_t  ButtonValue;

 __declspec(property(get=get_NearValue, put=set_NearValue)) float_t  NearValue;

 __declspec(property(get=get_Target)) float_t  Target;

 __declspec(property(get=get_TouchValue, put=set_TouchValue)) float_t  TouchValue;

/// @brief Field _baseValue, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseValue, put=__cordl_internal_set__baseValue)) float_t  _baseValue;

/// @brief Field _button, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::GlobalNamespace::OVRInput_Button  _button;

/// @brief Field _buttonValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__buttonValue, put=__cordl_internal_set__buttonValue)) float_t  _buttonValue;

/// @brief Field _controller, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller  _controller;

/// @brief Field _currentTarget, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTarget, put=__cordl_internal_set__currentTarget)) float_t  _currentTarget;

/// @brief Field _curve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::Oculus::Interaction::ProgressCurve*  _curve;

/// @brief Field _near, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__near, put=__cordl_internal_set__near)) ::GlobalNamespace::OVRInput_Button  _near;

/// @brief Field _nearValue, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__nearValue, put=__cordl_internal_set__nearValue)) float_t  _nearValue;

/// @brief Field _touch, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__touch, put=__cordl_internal_set__touch)) ::GlobalNamespace::OVRInput_Button  _touch;

/// @brief Field _touchValue, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__touchValue, put=__cordl_internal_set__touchValue)) float_t  _touchValue;

/// @brief Field _value, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) float_t  _value;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr operator  ::Oculus::Interaction::Input::IAxis1D*() noexcept;

/// @brief Method InjectAllOVRButtonAxis1D, addr 0xa41a004, size 0xc, virtual false, abstract: false, final false
inline void InjectAllOVRButtonAxis1D(::GlobalNamespace::OVRInput_Controller  controller, ::GlobalNamespace::OVRInput_Button  near, ::GlobalNamespace::OVRInput_Button  touch, ::GlobalNamespace::OVRInput_Button  button) ;

/// @brief Method InjectOptionalCurve, addr 0xa41a010, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalCurve(::Oculus::Interaction::ProgressCurve*  progressCurve) ;

static inline ::Oculus::Interaction::OVRButtonAxis1D* New_ctor() ;

/// @brief Method Update, addr 0xa419fa0, size 0x64, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method Value, addr 0xa419eb8, size 0x8, virtual true, abstract: false, final true
inline float_t Value() ;

constexpr float_t const& __cordl_internal_get__baseValue() const;

constexpr float_t& __cordl_internal_get__baseValue() ;

constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get__button() const;

constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get__button() ;

constexpr float_t const& __cordl_internal_get__buttonValue() const;

constexpr float_t& __cordl_internal_get__buttonValue() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller() ;

constexpr float_t const& __cordl_internal_get__currentTarget() const;

constexpr float_t& __cordl_internal_get__currentTarget() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__curve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__curve() ;

constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get__near() const;

constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get__near() ;

constexpr float_t const& __cordl_internal_get__nearValue() const;

constexpr float_t& __cordl_internal_get__nearValue() ;

constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get__touch() const;

constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get__touch() ;

constexpr float_t const& __cordl_internal_get__touchValue() const;

constexpr float_t& __cordl_internal_get__touchValue() ;

constexpr float_t const& __cordl_internal_get__value() const;

constexpr float_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__baseValue(float_t  value) ;

constexpr void __cordl_internal_set__button(::GlobalNamespace::OVRInput_Button  value) ;

constexpr void __cordl_internal_set__buttonValue(float_t  value) ;

constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__currentTarget(float_t  value) ;

constexpr void __cordl_internal_set__curve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__near(::GlobalNamespace::OVRInput_Button  value) ;

constexpr void __cordl_internal_set__nearValue(float_t  value) ;

constexpr void __cordl_internal_set__touch(::GlobalNamespace::OVRInput_Button  value) ;

constexpr void __cordl_internal_set__touchValue(float_t  value) ;

constexpr void __cordl_internal_set__value(float_t  value) ;

/// @brief Method .ctor, addr 0xa41a018, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ButtonValue, addr 0xa419ea8, size 0x8, virtual false, abstract: false, final false
inline float_t get_ButtonValue() ;

/// @brief Method get_NearValue, addr 0xa419e88, size 0x8, virtual false, abstract: false, final false
inline float_t get_NearValue() ;

/// @brief Method get_Target, addr 0xa419ec0, size 0xe0, virtual false, abstract: false, final false
inline float_t get_Target() ;

/// @brief Method get_TouchValue, addr 0xa419e98, size 0x8, virtual false, abstract: false, final false
inline float_t get_TouchValue() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* i___Oculus__Interaction__Input__IAxis1D() noexcept;

/// @brief Method set_ButtonValue, addr 0xa419eb0, size 0x8, virtual false, abstract: false, final false
inline void set_ButtonValue(float_t  value) ;

/// @brief Method set_NearValue, addr 0xa419e90, size 0x8, virtual false, abstract: false, final false
inline void set_NearValue(float_t  value) ;

/// @brief Method set_TouchValue, addr 0xa419ea0, size 0x8, virtual false, abstract: false, final false
inline void set_TouchValue(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRButtonAxis1D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRButtonAxis1D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRButtonAxis1D(OVRButtonAxis1D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRButtonAxis1D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRButtonAxis1D(OVRButtonAxis1D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31121};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____controller;

/// [SerializeField]
/// @brief Field _near, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Button  ____near;

/// [SerializeField]
/// @brief Field _touch, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Button  ____touch;

/// [SerializeField]
/// @brief Field _button, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Button  ____button;

/// [SerializeField]
/// @brief Field _nearValue, offset: 0x30, size: 0x4, def value: None
 float_t  ____nearValue;

/// [SerializeField]
/// @brief Field _touchValue, offset: 0x34, size: 0x4, def value: None
 float_t  ____touchValue;

/// [SerializeField]
/// @brief Field _buttonValue, offset: 0x38, size: 0x4, def value: None
 float_t  ____buttonValue;

/// [SerializeField]
/// @brief Field _curve, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____curve;

/// @brief Field _baseValue, offset: 0x48, size: 0x4, def value: None
 float_t  ____baseValue;

/// @brief Field _value, offset: 0x4c, size: 0x4, def value: None
 float_t  ____value;

/// @brief Field _currentTarget, offset: 0x50, size: 0x4, def value: None
 float_t  ____currentTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____near) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____touch) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____button) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____nearValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____touchValue) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____buttonValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____curve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____baseValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____value) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVRButtonAxis1D, ____currentTarget) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OVRButtonAxis1D) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction
