#pragma once
// IWYU pragma private; include "Oculus/Interaction/ControllerActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ControllerActiveState)
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ControllerActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ControllerActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ControllerActiveState*, "Oculus.Interaction", "ControllerActiveState");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ControllerActiveState
class CORDL_TYPE ControllerActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field Controller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Controller, put=__cordl_internal_set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa4119d4, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllControllerActiveState, addr 0xa411a40, size 0x4, virtual false, abstract: false, final false
inline void InjectAllControllerActiveState(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectController, addr 0xa411a44, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

static inline ::Oculus::Interaction::ControllerActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa411a3c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get_Controller() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get_Controller() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr void __cordl_internal_set_Controller(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa411b14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa411930, size 0xa4, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerActiveState(ControllerActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerActiveState(ControllerActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15750};

/// [Tooltip("ActiveState will be true while this controller is connected.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// @brief Field Controller, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ___Controller;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ControllerActiveState, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ControllerActiveState, ___Controller) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ControllerActiveState) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
