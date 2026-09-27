#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/MethodImplOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MethodImplOptions)
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct MethodImplOptions;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::MethodImplOptions);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::MethodImplOptions, "System.Runtime.CompilerServices", "MethodImplOptions");
// [Flags]
// [ComVisible(true)]
// Dependencies 
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: System.Runtime.CompilerServices.MethodImplOptions
struct CORDL_TYPE MethodImplOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MethodImplOptions_Unwrapped
enum struct __MethodImplOptions_Unwrapped : int32_t {
__E_Unmanaged = static_cast<int32_t>(0x4),
__E_ForwardRef = static_cast<int32_t>(0x10),
__E_PreserveSig = static_cast<int32_t>(0x80),
__E_InternalCall = static_cast<int32_t>(0x1000),
__E_Synchronized = static_cast<int32_t>(0x20),
__E_NoInlining = static_cast<int32_t>(0x8),
__E_AggressiveInlining = static_cast<int32_t>(0x100),
__E_NoOptimization = static_cast<int32_t>(0x40),
__E_SecurityMitigations = static_cast<int32_t>(0x400),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MethodImplOptions_Unwrapped () const noexcept {
return static_cast<__MethodImplOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MethodImplOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MethodImplOptions(int32_t  value__) noexcept;

/// @brief Field AggressiveInlining value: I32(256)
static ::System::Runtime::CompilerServices::MethodImplOptions const AggressiveInlining;

/// @brief Field ForwardRef value: I32(16)
static ::System::Runtime::CompilerServices::MethodImplOptions const ForwardRef;

/// @brief Field InternalCall value: I32(4096)
static ::System::Runtime::CompilerServices::MethodImplOptions const InternalCall;

/// @brief Field NoInlining value: I32(8)
static ::System::Runtime::CompilerServices::MethodImplOptions const NoInlining;

/// @brief Field NoOptimization value: I32(64)
static ::System::Runtime::CompilerServices::MethodImplOptions const NoOptimization;

/// @brief Field PreserveSig value: I32(128)
static ::System::Runtime::CompilerServices::MethodImplOptions const PreserveSig;

/// @brief Field SecurityMitigations value: I32(1024)
static ::System::Runtime::CompilerServices::MethodImplOptions const SecurityMitigations;

/// @brief Field Synchronized value: I32(32)
static ::System::Runtime::CompilerServices::MethodImplOptions const Synchronized;

/// @brief Field Unmanaged value: I32(4)
static ::System::Runtime::CompilerServices::MethodImplOptions const Unmanaged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6554};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::MethodImplOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::CompilerServices::MethodImplOptions) == 0x4, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
