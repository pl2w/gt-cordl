#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_GlobalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InputActionState_GlobalState)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionState_GlobalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionState_GlobalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionState_GlobalState, "UnityEngine.InputSystem", "InputActionState/GlobalState");
// Dependencies System.Runtime.InteropServices.GCHandle, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/GlobalState
struct CORDL_TYPE InputActionState_GlobalState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputActionState_GlobalState() ;

// Ctor Parameters [CppParam { name: "globalList", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onActionChange", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "onActionControlsChanged", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>", modifiers: "", def_value: None, comment: None }]
constexpr InputActionState_GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>  globalList, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>  onActionChange, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>  onActionControlsChanged) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field globalList, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>  globalList;

/// @brief Field onActionChange, offset: 0x18, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::Object*,::UnityEngine::InputSystem::InputActionChange>*>  onActionChange;

/// @brief Field onActionControlsChanged, offset: 0x68, size: 0x50, def value: None
 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::System::Object*>*>  onActionControlsChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionState_GlobalState, globalList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_GlobalState, onActionChange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_GlobalState, onActionControlsChanged) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionState_GlobalState) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
