#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardModelAnimationStatesInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardModelAnimationStatesInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelAnimationStatesInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStatesInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStatesInternal, "", "OVRPlugin/VirtualKeyboardModelAnimationStatesInternal");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardModelAnimationStatesInternal
struct CORDL_TYPE OVRPlugin_VirtualKeyboardModelAnimationStatesInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardModelAnimationStatesInternal() ;

// Ctor Parameters [CppParam { name: "StateCapacityInput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StateCountOutput", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StatesBuffer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardModelAnimationStatesInternal(uint32_t  StateCapacityInput, uint32_t  StateCountOutput, ::System::IntPtr  StatesBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12193};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field StateCapacityInput, offset: 0x0, size: 0x4, def value: None
 uint32_t  StateCapacityInput;

/// @brief Field StateCountOutput, offset: 0x4, size: 0x4, def value: None
 uint32_t  StateCountOutput;

/// @brief Field StatesBuffer, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  StatesBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStatesInternal, StateCapacityInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStatesInternal, StateCountOutput) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStatesInternal, StatesBuffer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStatesInternal) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
