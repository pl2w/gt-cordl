#pragma once
// IWYU pragma private; include "System/Diagnostics/Process_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Process_State)
// Forward declare root types
namespace GlobalNamespace {
struct Process_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Process_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Process_State, "System.Diagnostics", "Process/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Diagnostics.Process/State
struct CORDL_TYPE Process_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Process_State_Unwrapped
enum struct __Process_State_Unwrapped : int32_t {
__E_HaveId = static_cast<int32_t>(0x1),
__E_IsLocal = static_cast<int32_t>(0x2),
__E_IsNt = static_cast<int32_t>(0x4),
__E_HaveProcessInfo = static_cast<int32_t>(0x8),
__E_Exited = static_cast<int32_t>(0x10),
__E_Associated = static_cast<int32_t>(0x20),
__E_IsWin2k = static_cast<int32_t>(0x40),
__E_HaveNtProcessInfo = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Process_State_Unwrapped () const noexcept {
return static_cast<__Process_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Process_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Process_State(int32_t  value__) noexcept;

/// @brief Field Associated value: I32(32)
static ::GlobalNamespace::Process_State const Associated;

/// @brief Field Exited value: I32(16)
static ::GlobalNamespace::Process_State const Exited;

/// @brief Field HaveId value: I32(1)
static ::GlobalNamespace::Process_State const HaveId;

/// @brief Field HaveNtProcessInfo value: I32(12)
static ::GlobalNamespace::Process_State const HaveNtProcessInfo;

/// @brief Field HaveProcessInfo value: I32(8)
static ::GlobalNamespace::Process_State const HaveProcessInfo;

/// @brief Field IsLocal value: I32(2)
static ::GlobalNamespace::Process_State const IsLocal;

/// @brief Field IsNt value: I32(4)
static ::GlobalNamespace::Process_State const IsNt;

/// @brief Field IsWin2k value: I32(64)
static ::GlobalNamespace::Process_State const IsWin2k;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10014};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Process_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Process_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
