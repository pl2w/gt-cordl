#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext_CaptureOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExecutionContext_CaptureOptions)
// Forward declare root types
namespace GlobalNamespace {
struct ExecutionContext_CaptureOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExecutionContext_CaptureOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExecutionContext_CaptureOptions, "System.Threading", "ExecutionContext/CaptureOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.ExecutionContext/CaptureOptions
struct CORDL_TYPE ExecutionContext_CaptureOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExecutionContext_CaptureOptions_Unwrapped
enum struct __ExecutionContext_CaptureOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IgnoreSyncCtx = static_cast<int32_t>(0x1),
__E_OptimizeDefaultCase = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExecutionContext_CaptureOptions_Unwrapped () const noexcept {
return static_cast<__ExecutionContext_CaptureOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExecutionContext_CaptureOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ExecutionContext_CaptureOptions(int32_t  value__) noexcept;

/// @brief Field IgnoreSyncCtx value: I32(1)
static ::GlobalNamespace::ExecutionContext_CaptureOptions const IgnoreSyncCtx;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ExecutionContext_CaptureOptions const None;

/// @brief Field OptimizeDefaultCase value: I32(2)
static ::GlobalNamespace::ExecutionContext_CaptureOptions const OptimizeDefaultCase;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5842};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExecutionContext_CaptureOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExecutionContext_CaptureOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
