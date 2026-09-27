#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputAction_CallbackContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputAction_CallbackContext)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputAction_CallbackContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputAction_CallbackContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputAction_CallbackContext, "UnityEngine.InputSystem", "InputAction/CallbackContext");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputAction/CallbackContext
struct CORDL_TYPE InputAction_CallbackContext {
public:
// Declarations
 __declspec(property(get=get_action)) ::UnityEngine::InputSystem::InputAction*  action;

 __declspec(property(get=get_actionIndex)) int32_t  actionIndex;

 __declspec(property(get=get_bindingIndex)) int32_t  bindingIndex;

 __declspec(property(get=get_canceled)) bool  canceled;

 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_controlIndex)) int32_t  controlIndex;

 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_interaction)) Il2CppObject*  interaction;

 __declspec(property(get=get_interactionIndex)) int32_t  interactionIndex;

 __declspec(property(get=get_performed)) bool  performed;

 __declspec(property(get=get_phase)) ::UnityEngine::InputSystem::InputActionPhase  phase;

 __declspec(property(get=get_startTime)) double_t  startTime;

 __declspec(property(get=get_started)) bool  started;

 __declspec(property(get=get_time)) double_t  time;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue ReadValue() ;

/// @brief Method ReadValue, addr 0xaf0df30, size 0x1c0, virtual false, abstract: false, final false
inline void ReadValue(void*  buffer, int32_t  bufferSize) ;

/// @brief Method ReadValueAsButton, addr 0xaf0e0f0, size 0x84, virtual false, abstract: false, final false
inline bool ReadValueAsButton() ;

/// @brief Method ReadValueAsObject, addr 0xaf0e174, size 0x88, virtual false, abstract: false, final false
inline ::System::Object* ReadValueAsObject() ;

/// @brief Method ToString, addr 0xaf0e1fc, size 0x294, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_action, addr 0xaf0dcec, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_action() ;

/// @brief Method get_actionIndex, addr 0xaf0db70, size 0x8, virtual false, abstract: false, final false
inline int32_t get_actionIndex() ;

/// @brief Method get_bindingIndex, addr 0xaf0db78, size 0x34, virtual false, abstract: false, final false
inline int32_t get_bindingIndex() ;

/// @brief Method get_canceled, addr 0xaf0dcb4, size 0x38, virtual false, abstract: false, final false
inline bool get_canceled() ;

/// @brief Method get_control, addr 0xaf0dd1c, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method get_controlIndex, addr 0xaf0dbac, size 0x34, virtual false, abstract: false, final false
inline int32_t get_controlIndex() ;

/// @brief Method get_duration, addr 0xaf0de28, size 0x68, virtual false, abstract: false, final false
inline double_t get_duration() ;

/// @brief Method get_interaction, addr 0xaf0dd60, size 0x58, virtual false, abstract: false, final false
inline Il2CppObject* get_interaction() ;

/// @brief Method get_interactionIndex, addr 0xaf0dbe0, size 0x34, virtual false, abstract: false, final false
inline int32_t get_interactionIndex() ;

/// @brief Method get_performed, addr 0xaf0dc7c, size 0x38, virtual false, abstract: false, final false
inline bool get_performed() ;

/// @brief Method get_phase, addr 0xaf0dc14, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method get_startTime, addr 0xaf0ddf0, size 0x38, virtual false, abstract: false, final false
inline double_t get_startTime() ;

/// @brief Method get_started, addr 0xaf0dc44, size 0x38, virtual false, abstract: false, final false
inline bool get_started() ;

/// @brief Method get_time, addr 0xaf0ddb8, size 0x38, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_valueSizeInBytes, addr 0xaf0dee0, size 0x50, virtual false, abstract: false, final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method get_valueType, addr 0xaf0de90, size 0x50, virtual false, abstract: false, final false
inline ::System::Type* get_valueType() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAction_CallbackContext() ;

// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ActionIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputAction_CallbackContext(::UnityEngine::InputSystem::InputActionState*  m_State, int32_t  m_ActionIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputActionState*  m_State;

/// @brief Field m_ActionIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  m_ActionIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputAction_CallbackContext, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputAction_CallbackContext, m_ActionIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputAction_CallbackContext) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
