#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuAction_Status.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DropdownMenuAction_Status)
// Forward declare root types
namespace GlobalNamespace {
struct DropdownMenuAction_Status;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DropdownMenuAction_Status);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DropdownMenuAction_Status, "UnityEngine.UIElements", "DropdownMenuAction/Status");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.DropdownMenuAction/Status
struct CORDL_TYPE DropdownMenuAction_Status {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DropdownMenuAction_Status_Unwrapped
enum struct __DropdownMenuAction_Status_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Normal = static_cast<int32_t>(0x1),
__E_Disabled = static_cast<int32_t>(0x2),
__E_Checked = static_cast<int32_t>(0x4),
__E_Hidden = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DropdownMenuAction_Status_Unwrapped () const noexcept {
return static_cast<__DropdownMenuAction_Status_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DropdownMenuAction_Status() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DropdownMenuAction_Status(int32_t  value__) noexcept;

/// @brief Field Checked value: I32(4)
static ::GlobalNamespace::DropdownMenuAction_Status const Checked;

/// @brief Field Disabled value: I32(2)
static ::GlobalNamespace::DropdownMenuAction_Status const Disabled;

/// @brief Field Hidden value: I32(8)
static ::GlobalNamespace::DropdownMenuAction_Status const Hidden;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DropdownMenuAction_Status const None;

/// @brief Field Normal value: I32(1)
static ::GlobalNamespace::DropdownMenuAction_Status const Normal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DropdownMenuAction_Status, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DropdownMenuAction_Status) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
