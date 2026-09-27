#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticsEventProvider_WriteEventErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticsEventProvider_WriteEventErrorCode)
// Forward declare root types
namespace GlobalNamespace {
struct DiagnosticsEventProvider_WriteEventErrorCode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode, "System.Runtime.Diagnostics", "DiagnosticsEventProvider/WriteEventErrorCode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Runtime.Diagnostics.DiagnosticsEventProvider/WriteEventErrorCode
struct CORDL_TYPE DiagnosticsEventProvider_WriteEventErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DiagnosticsEventProvider_WriteEventErrorCode_Unwrapped
enum struct __DiagnosticsEventProvider_WriteEventErrorCode_Unwrapped : int32_t {
__E_NoError = static_cast<int32_t>(0x0),
__E_NoFreeBuffers = static_cast<int32_t>(0x1),
__E_EventTooBig = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DiagnosticsEventProvider_WriteEventErrorCode_Unwrapped () const noexcept {
return static_cast<__DiagnosticsEventProvider_WriteEventErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DiagnosticsEventProvider_WriteEventErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DiagnosticsEventProvider_WriteEventErrorCode(int32_t  value__) noexcept;

/// @brief Field EventTooBig value: I32(2)
static ::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode const EventTooBig;

/// @brief Field NoError value: I32(0)
static ::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode const NoError;

/// @brief Field NoFreeBuffers value: I32(1)
static ::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode const NoFreeBuffers;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
