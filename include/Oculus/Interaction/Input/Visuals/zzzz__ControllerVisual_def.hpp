#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Visuals/ControllerVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ControllerVisual)
namespace Oculus::Interaction::Input {
class IController;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Input::Visuals {
class ControllerVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Visuals::ControllerVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Visuals::ControllerVisual*, "Oculus.Interaction.Input.Visuals", "ControllerVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input::Visuals {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Visuals.ControllerVisual
class CORDL_TYPE ControllerVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Controller, put=set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

 __declspec(property(get=get_ForceOffVisibility, put=set_ForceOffVisibility)) bool  ForceOffVisibility;

/// @brief Field <Controller>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller_k__BackingField, put=__cordl_internal_set__Controller_k__BackingField)) ::Oculus::Interaction::Input::IController*  _Controller_k__BackingField;

/// @brief Field <ForceOffVisibility>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceOffVisibility_k__BackingField, put=__cordl_internal_set__ForceOffVisibility_k__BackingField)) bool  _ForceOffVisibility_k__BackingField;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _root, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::UnityW<::UnityEngine::GameObject>  _root;

/// @brief Field _started, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa5186d0, size 0x70, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleUpdated, addr 0xa5189a8, size 0x310, virtual false, abstract: false, final false
inline void HandleUpdated() ;

/// @brief Method InjectAllOVRControllerVisual, addr 0xa518cb8, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllOVRControllerVisual(::Oculus::Interaction::Input::IController*  controller, ::UnityEngine::GameObject*  root) ;

/// @brief Method InjectController, addr 0xa518ce4, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectRoot, addr 0xa518db4, size 0x8, virtual false, abstract: false, final false
inline void InjectRoot(::UnityEngine::GameObject*  root) ;

static inline ::Oculus::Interaction::Input::Visuals::ControllerVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa51886c, size 0x13c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa51876c, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa518740, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__Controller_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__Controller_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ForceOffVisibility_k__BackingField() const;

constexpr bool& __cordl_internal_get__ForceOffVisibility_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__root() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__root() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Controller_k__BackingField(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__ForceOffVisibility_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__root(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa518dbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Controller, addr 0xa5186b0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IController* get_Controller() ;

/// [CompilerGenerated]
/// @brief Method get_ForceOffVisibility, addr 0xa5186c0, size 0x8, virtual false, abstract: false, final false
inline bool get_ForceOffVisibility() ;

/// [CompilerGenerated]
/// @brief Method set_Controller, addr 0xa5186b8, size 0x8, virtual false, abstract: false, final false
inline void set_Controller(::Oculus::Interaction::Input::IController*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ForceOffVisibility, addr 0xa5186c8, size 0x8, virtual false, abstract: false, final false
inline void set_ForceOffVisibility(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerVisual(ControllerVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerVisual(ControllerVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16544};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// [CompilerGenerated]
/// @brief Field <Controller>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____Controller_k__BackingField;

/// [SerializeField]
/// @brief Field _root, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____root;

/// [CompilerGenerated]
/// @brief Field <ForceOffVisibility>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____ForceOffVisibility_k__BackingField;

/// @brief Field _started, offset: 0x39, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Visuals::ControllerVisual, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Visuals::ControllerVisual, ____Controller_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Visuals::ControllerVisual, ____root) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Visuals::ControllerVisual, ____ForceOffVisibility_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::Visuals::ControllerVisual, ____started) == 0x39, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Visuals::ControllerVisual) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Visuals
