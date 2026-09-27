#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions_RebindingOperation_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions_RebindingOperation_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct RebindingOperation_InputActionRebindingExtensions_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation/Flags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct CORDL_TYPE RebindingOperation_InputActionRebindingExtensions_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RebindingOperation_InputActionRebindingExtensions_Flags_Unwrapped
enum struct __RebindingOperation_InputActionRebindingExtensions_Flags_Unwrapped : int32_t {
__E_Started = static_cast<int32_t>(0x1),
__E_Completed = static_cast<int32_t>(0x2),
__E_Canceled = static_cast<int32_t>(0x4),
__E_OnEventHooked = static_cast<int32_t>(0x8),
__E_OnAfterUpdateHooked = static_cast<int32_t>(0x10),
__E_DontIgnoreNoisyControls = static_cast<int32_t>(0x40),
__E_DontGeneralizePathOfSelectedControl = static_cast<int32_t>(0x80),
__E_AddNewBinding = static_cast<int32_t>(0x100),
__E_SuppressMatchingEvents = static_cast<int32_t>(0x200),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RebindingOperation_InputActionRebindingExtensions_Flags_Unwrapped () const noexcept {
return static_cast<__RebindingOperation_InputActionRebindingExtensions_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RebindingOperation_InputActionRebindingExtensions_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RebindingOperation_InputActionRebindingExtensions_Flags(int32_t  value__) noexcept;

/// @brief Field AddNewBinding value: I32(256)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const AddNewBinding;

/// @brief Field Canceled value: I32(4)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const Canceled;

/// @brief Field Completed value: I32(2)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const Completed;

/// @brief Field DontGeneralizePathOfSelectedControl value: I32(128)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const DontGeneralizePathOfSelectedControl;

/// @brief Field DontIgnoreNoisyControls value: I32(64)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const DontIgnoreNoisyControls;

/// @brief Field OnAfterUpdateHooked value: I32(16)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const OnAfterUpdateHooked;

/// @brief Field OnEventHooked value: I32(8)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const OnEventHooked;

/// @brief Field Started value: I32(1)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const Started;

/// @brief Field SuppressMatchingEvents value: I32(512)
static ::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags const SuppressMatchingEvents;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RebindingOperation_InputActionRebindingExtensions_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
