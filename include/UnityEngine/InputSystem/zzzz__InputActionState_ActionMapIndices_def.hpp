#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_ActionMapIndices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState_ActionMapIndices)
// Forward declare root types
namespace GlobalNamespace {
struct InputActionState_ActionMapIndices;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionState_ActionMapIndices);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionState_ActionMapIndices, "UnityEngine.InputSystem", "InputActionState/ActionMapIndices");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct CORDL_TYPE InputActionState_ActionMapIndices {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputActionState_ActionMapIndices() ;

// Ctor Parameters [CppParam { name: "actionStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactionStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "processorStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "processorCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "compositeStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionState_ActionMapIndices(int32_t  actionStartIndex, int32_t  actionCount, int32_t  controlStartIndex, int32_t  controlCount, int32_t  bindingStartIndex, int32_t  bindingCount, int32_t  interactionStartIndex, int32_t  interactionCount, int32_t  processorStartIndex, int32_t  processorCount, int32_t  compositeStartIndex, int32_t  compositeCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13387};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field actionStartIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  actionStartIndex;

/// @brief Field actionCount, offset: 0x4, size: 0x4, def value: None
 int32_t  actionCount;

/// @brief Field controlStartIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  controlStartIndex;

/// @brief Field controlCount, offset: 0xc, size: 0x4, def value: None
 int32_t  controlCount;

/// @brief Field bindingStartIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  bindingStartIndex;

/// @brief Field bindingCount, offset: 0x14, size: 0x4, def value: None
 int32_t  bindingCount;

/// @brief Field interactionStartIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  interactionStartIndex;

/// @brief Field interactionCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  interactionCount;

/// @brief Field processorStartIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  processorStartIndex;

/// @brief Field processorCount, offset: 0x24, size: 0x4, def value: None
 int32_t  processorCount;

/// @brief Field compositeStartIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  compositeStartIndex;

/// @brief Field compositeCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  compositeCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, actionStartIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, actionCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, controlStartIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, controlCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, bindingStartIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, bindingCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, interactionStartIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, interactionCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, processorStartIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, processorCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, compositeStartIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_ActionMapIndices, compositeCount) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionState_ActionMapIndices) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
