#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_UnmanagedMemory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState_UnmanagedMemory)
namespace GlobalNamespace {
struct InputActionState_ActionMapIndices;
}
namespace GlobalNamespace {
struct InputActionState_BindingState;
}
namespace GlobalNamespace {
struct InputActionState_InteractionState;
}
namespace GlobalNamespace {
struct InputActionState_TriggerState;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionState_UnmanagedMemory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionState_UnmanagedMemory);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionState_UnmanagedMemory, "UnityEngine.InputSystem", "InputActionState/UnmanagedMemory");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct CORDL_TYPE InputActionState_UnmanagedMemory {
public:
// Declarations
 __declspec(property(get=get_isAllocated)) bool  isAllocated;

 __declspec(property(get=get_sizeInBytes)) int32_t  sizeInBytes;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AllocFromBlob, addr 0xaf30580, size 0x20, virtual false, abstract: false, final false
static inline uint8_t* AllocFromBlob(::by_ref<uint8_t*>  top, int32_t  size) ;

/// @brief Method Allocate, addr 0xaf305a0, size 0x1cc, virtual false, abstract: false, final false
inline void Allocate(int32_t  mapCount, int32_t  actionCount, int32_t  bindingCount, int32_t  controlCount, int32_t  interactionCount, int32_t  compositeCount) ;

/// @brief Method Clone, addr 0xaf290f4, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionState_UnmanagedMemory Clone() ;

/// @brief Method CopyDataFrom, addr 0xaf3076c, size 0x16c, virtual false, abstract: false, final false
inline void CopyDataFrom(::GlobalNamespace::InputActionState_UnmanagedMemory  memory) ;

/// @brief Method Dispose, addr 0xaf28f24, size 0x3c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method get_isAllocated, addr 0xaf30520, size 0x10, virtual false, abstract: false, final false
inline bool get_isAllocated() ;

/// @brief Method get_sizeInBytes, addr 0xaf30530, size 0x50, virtual false, abstract: false, final false
inline int32_t get_sizeInBytes() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionState_UnmanagedMemory() ;

// Ctor Parameters [CppParam { name: "basePtr", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "mapCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "actionCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactionCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "compositeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "actionStates", ty: "::GlobalNamespace::InputActionState_TriggerState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingStates", ty: "::GlobalNamespace::InputActionState_BindingState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactionStates", ty: "::GlobalNamespace::InputActionState_InteractionState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlMagnitudes", ty: "float_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "compositeMagnitudes", ty: "float_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "enabledControls", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "actionBindingIndicesAndCounts", ty: "uint16_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "actionBindingIndices", ty: "uint16_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlIndexToBindingIndex", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlGroupingAndComplexity", ty: "uint16_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlGroupingInitialized", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mapIndices", ty: "::GlobalNamespace::InputActionState_ActionMapIndices*", modifiers: "", def_value: None, comment: None }]
constexpr InputActionState_UnmanagedMemory(void*  basePtr, int32_t  mapCount, int32_t  actionCount, int32_t  interactionCount, int32_t  bindingCount, int32_t  controlCount, int32_t  compositeCount, ::GlobalNamespace::InputActionState_TriggerState*  actionStates, ::GlobalNamespace::InputActionState_BindingState*  bindingStates, ::GlobalNamespace::InputActionState_InteractionState*  interactionStates, float_t*  controlMagnitudes, float_t*  compositeMagnitudes, int32_t*  enabledControls, uint16_t*  actionBindingIndicesAndCounts, uint16_t*  actionBindingIndices, int32_t*  controlIndexToBindingIndex, uint16_t*  controlGroupingAndComplexity, bool  controlGroupingInitialized, ::GlobalNamespace::InputActionState_ActionMapIndices*  mapIndices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13388};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field basePtr, offset: 0x0, size: 0x8, def value: None
 void*  basePtr;

/// @brief Field mapCount, offset: 0x8, size: 0x4, def value: None
 int32_t  mapCount;

/// @brief Field actionCount, offset: 0xc, size: 0x4, def value: None
 int32_t  actionCount;

/// @brief Field interactionCount, offset: 0x10, size: 0x4, def value: None
 int32_t  interactionCount;

/// @brief Field bindingCount, offset: 0x14, size: 0x4, def value: None
 int32_t  bindingCount;

/// @brief Field controlCount, offset: 0x18, size: 0x4, def value: None
 int32_t  controlCount;

/// @brief Field compositeCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  compositeCount;

/// @brief Field actionStates, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::InputActionState_TriggerState*  actionStates;

/// @brief Field bindingStates, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::InputActionState_BindingState*  bindingStates;

/// @brief Field interactionStates, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::InputActionState_InteractionState*  interactionStates;

/// @brief Field controlMagnitudes, offset: 0x38, size: 0x8, def value: None
 float_t*  controlMagnitudes;

/// @brief Field compositeMagnitudes, offset: 0x40, size: 0x8, def value: None
 float_t*  compositeMagnitudes;

/// @brief Field enabledControls, offset: 0x48, size: 0x8, def value: None
 int32_t*  enabledControls;

/// @brief Field actionBindingIndicesAndCounts, offset: 0x50, size: 0x8, def value: None
 uint16_t*  actionBindingIndicesAndCounts;

/// @brief Field actionBindingIndices, offset: 0x58, size: 0x8, def value: None
 uint16_t*  actionBindingIndices;

/// @brief Field controlIndexToBindingIndex, offset: 0x60, size: 0x8, def value: None
 int32_t*  controlIndexToBindingIndex;

/// @brief Field controlGroupingAndComplexity, offset: 0x68, size: 0x8, def value: None
 uint16_t*  controlGroupingAndComplexity;

/// @brief Field controlGroupingInitialized, offset: 0x70, size: 0x1, def value: None
 bool  controlGroupingInitialized;

/// @brief Field mapIndices, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::InputActionState_ActionMapIndices*  mapIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, basePtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, mapCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, actionCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, interactionCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, bindingCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, controlCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, compositeCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, actionStates) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, bindingStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, interactionStates) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, controlMagnitudes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, compositeMagnitudes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, enabledControls) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, actionBindingIndicesAndCounts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, actionBindingIndices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, controlIndexToBindingIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, controlGroupingAndComplexity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, controlGroupingInitialized) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionState_UnmanagedMemory, mapIndices) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionState_UnmanagedMemory) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
