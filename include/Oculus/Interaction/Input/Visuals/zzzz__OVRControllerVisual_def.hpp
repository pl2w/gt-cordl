#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Visuals/OVRControllerVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRControllerVisual)
namespace GlobalNamespace {
class OVRControllerHelper;
}
namespace Oculus::Interaction::Input {
class IController;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Input::Visuals {
class OVRControllerVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Visuals::OVRControllerVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Visuals::OVRControllerVisual*, "Oculus.Interaction.Input.Visuals", "OVRControllerVisual");
// [Obsolete("Use ControllerVisual instead.")]
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input::Visuals {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Visuals.OVRControllerVisual
class CORDL_TYPE OVRControllerVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Controller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Controller, put=__cordl_internal_set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

 __declspec(property(get=get_ForceOffVisibility, put=set_ForceOffVisibility)) bool  ForceOffVisibility;

/// @brief Field <ForceOffVisibility>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceOffVisibility_k__BackingField, put=__cordl_internal_set__ForceOffVisibility_k__BackingField)) bool  _ForceOffVisibility_k__BackingField;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _ovrControllerHelper, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ovrControllerHelper, put=__cordl_internal_set__ovrControllerHelper)) ::UnityW<::GlobalNamespace::OVRControllerHelper>  _ovrControllerHelper;

/// @brief Field _started, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa421930, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleUpdated, addr 0xa421cc4, size 0x314, virtual false, abstract: false, final false
inline void HandleUpdated() ;

/// @brief Method InjectAllOVRControllerHelper, addr 0xa4220d4, size 0x8, virtual false, abstract: false, final false
inline void InjectAllOVRControllerHelper(::GlobalNamespace::OVRControllerHelper*  ovrControllerHelper) ;

/// @brief Method InjectAllOVRControllerVisual, addr 0xa421fd8, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllOVRControllerVisual(::Oculus::Interaction::Input::IController*  controller, ::GlobalNamespace::OVRControllerHelper*  ovrControllerHelper) ;

/// @brief Method InjectController, addr 0xa422004, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

static inline ::Oculus::Interaction::Input::Visuals::OVRControllerVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa421b88, size 0x13c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa421a88, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa421998, size 0xf0, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get_Controller() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get_Controller() ;

constexpr bool const& __cordl_internal_get__ForceOffVisibility_k__BackingField() const;

constexpr bool& __cordl_internal_get__ForceOffVisibility_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr ::UnityW<::GlobalNamespace::OVRControllerHelper> const& __cordl_internal_get__ovrControllerHelper() const;

constexpr ::UnityW<::GlobalNamespace::OVRControllerHelper>& __cordl_internal_get__ovrControllerHelper() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Controller(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__ForceOffVisibility_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__ovrControllerHelper(::UnityW<::GlobalNamespace::OVRControllerHelper>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4220dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ForceOffVisibility, addr 0xa421920, size 0x8, virtual false, abstract: false, final false
inline bool get_ForceOffVisibility() ;

/// [CompilerGenerated]
/// @brief Method set_ForceOffVisibility, addr 0xa421928, size 0x8, virtual false, abstract: false, final false
inline void set_ForceOffVisibility(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerVisual(OVRControllerVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerVisual(OVRControllerVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31157};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// @brief Field Controller, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ___Controller;

/// [SerializeField]
/// @brief Field _ovrControllerHelper, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRControllerHelper>  ____ovrControllerHelper;

/// [CompilerGenerated]
/// @brief Field <ForceOffVisibility>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____ForceOffVisibility_k__BackingField;

/// @brief Field _started, offset: 0x39, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Visuals::OVRControllerVisual, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Visuals::OVRControllerVisual, ___Controller) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Visuals::OVRControllerVisual, ____ovrControllerHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Visuals::OVRControllerVisual, ____ForceOffVisibility_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Visuals::OVRControllerVisual, ____started) == 0x39, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Visuals::OVRControllerVisual) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Visuals
