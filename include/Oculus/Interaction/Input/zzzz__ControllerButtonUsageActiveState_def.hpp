#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerButtonUsageActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ControllerButtonUsageActiveState)
namespace Oculus::Interaction::Input {
struct ControllerButtonUsage;
}
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
namespace Oculus::Interaction::Input {
class ControllerButtonUsageActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ControllerButtonUsageActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerButtonUsageActiveState*, "Oculus.Interaction.Input", "ControllerButtonUsageActiveState");
// Dependencies Oculus.Interaction.Input.ControllerButtonUsage, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ControllerButtonUsageActiveState
class CORDL_TYPE ControllerButtonUsageActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

/// @brief Field Controller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Controller, put=__cordl_internal_set_Controller)) ::Oculus::Interaction::Input::IController*  Controller;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Object>  _controller;

/// @brief Field _controllerButtonUsage, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__controllerButtonUsage, put=__cordl_internal_set__controllerButtonUsage)) ::Oculus::Interaction::Input::ControllerButtonUsage  _controllerButtonUsage;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa504c24, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllControllerButtonUsageActiveState, addr 0xa504c90, size 0x24, virtual false, abstract: false, final false
inline void InjectAllControllerButtonUsageActiveState(::Oculus::Interaction::Input::IController*  controller, ::Oculus::Interaction::Input::ControllerButtonUsage  controllerButtonUsage) ;

/// @brief Method InjectController, addr 0xa504cb4, size 0xd0, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method InjectControllerButtonUsage, addr 0xa504d84, size 0x8, virtual false, abstract: false, final false
inline void InjectControllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage  controllerButtonUsage) ;

static inline ::Oculus::Interaction::Input::ControllerButtonUsageActiveState* New_ctor() ;

/// @brief Method Start, addr 0xa504c8c, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get_Controller() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get_Controller() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__controller() ;

constexpr ::Oculus::Interaction::Input::ControllerButtonUsage const& __cordl_internal_get__controllerButtonUsage() const;

constexpr ::Oculus::Interaction::Input::ControllerButtonUsage& __cordl_internal_get__controllerButtonUsage() ;

constexpr void __cordl_internal_set_Controller(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__controllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage  value) ;

/// @brief Method .ctor, addr 0xa504d8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0xa504b78, size 0xac, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerButtonUsageActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerButtonUsageActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerButtonUsageActiveState(ControllerButtonUsageActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerButtonUsageActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerButtonUsageActiveState(ControllerButtonUsageActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16452};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____controller;

/// @brief Field Controller, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ___Controller;

/// [SerializeField]
/// @brief Field _controllerButtonUsage, offset: 0x30, size: 0x4, def value: None
 ::Oculus::Interaction::Input::ControllerButtonUsage  ____controllerButtonUsage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ControllerButtonUsageActiveState, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerButtonUsageActiveState, ___Controller) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerButtonUsageActiveState, ____controllerButtonUsage) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ControllerButtonUsageActiveState) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
