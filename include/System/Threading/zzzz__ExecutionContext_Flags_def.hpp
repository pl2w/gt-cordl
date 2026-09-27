#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext_Flags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExecutionContext_Flags)
// Forward declare root types
namespace GlobalNamespace {
struct ExecutionContext_Flags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExecutionContext_Flags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExecutionContext_Flags, "System.Threading", "ExecutionContext/Flags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.ExecutionContext/Flags
struct CORDL_TYPE ExecutionContext_Flags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExecutionContext_Flags_Unwrapped
enum struct __ExecutionContext_Flags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IsNewCapture = static_cast<int32_t>(0x1),
__E_IsFlowSuppressed = static_cast<int32_t>(0x2),
__E_IsPreAllocatedDefault = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExecutionContext_Flags_Unwrapped () const noexcept {
return static_cast<__ExecutionContext_Flags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExecutionContext_Flags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ExecutionContext_Flags(int32_t  value__) noexcept;

/// @brief Field IsFlowSuppressed value: I32(2)
static ::GlobalNamespace::ExecutionContext_Flags const IsFlowSuppressed;

/// @brief Field IsNewCapture value: I32(1)
static ::GlobalNamespace::ExecutionContext_Flags const IsNewCapture;

/// @brief Field IsPreAllocatedDefault value: I32(4)
static ::GlobalNamespace::ExecutionContext_Flags const IsPreAllocatedDefault;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ExecutionContext_Flags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5840};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExecutionContext_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExecutionContext_Flags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
