#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/InputActionUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InputActionUtility)
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class InputActionUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "InputActionUtility");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionUtility
class CORDL_TYPE InputActionUtility : public ::System::Object {
public:
// Declarations
/// @brief Method CreateButtonAction, addr 0xb4b17a8, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* CreateButtonAction(::StringW  name, bool  wantsInitialStateCheck) ;

/// @brief Method CreatePassThroughAction, addr 0xb4b183c, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* CreatePassThroughAction(::System::Type*  valueType, ::StringW  name, bool  wantsInitialStateCheck) ;

/// @brief Method CreateValueAction, addr 0xb4b14d4, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* CreateValueAction(::System::Type*  valueType, ::StringW  name) ;

/// @brief Method GetExpectedControlType, addr 0xb4b1560, size 0x248, virtual false, abstract: false, final false
static inline ::StringW GetExpectedControlType(::System::Type*  valueType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionUtility(InputActionUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionUtility(InputActionUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11592};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
