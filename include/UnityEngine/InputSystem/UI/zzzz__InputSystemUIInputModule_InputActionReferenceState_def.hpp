#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/InputSystemUIInputModule_InputActionReferenceState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystemUIInputModule_InputActionReferenceState)
// Forward declare root types
namespace GlobalNamespace {
struct InputSystemUIInputModule_InputActionReferenceState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState, "UnityEngine.InputSystem.UI", "InputSystemUIInputModule/InputActionReferenceState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.InputSystemUIInputModule/InputActionReferenceState
struct CORDL_TYPE InputSystemUIInputModule_InputActionReferenceState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputSystemUIInputModule_InputActionReferenceState() ;

// Ctor Parameters [CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "enabledByInputModule", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InputSystemUIInputModule_InputActionReferenceState(int32_t  refCount, bool  enabledByInputModule) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field refCount, offset: 0x0, size: 0x4, def value: None
 int32_t  refCount;

/// @brief Field enabledByInputModule, offset: 0x4, size: 0x1, def value: None
 bool  enabledByInputModule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState, refCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState, enabledByInputModule) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputSystemUIInputModule_InputActionReferenceState) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
