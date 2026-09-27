#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/Android/UnwindingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnwindingMode)
// Forward declare root types
namespace Backtrace::Unity::Runtime::Native::Android {
struct UnwindingMode;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Runtime::Native::Android::UnwindingMode);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Runtime::Native::Android::UnwindingMode, "Backtrace.Unity.Runtime.Native.Android", "UnwindingMode");
// Dependencies 
namespace Backtrace::Unity::Runtime::Native::Android {
// Is value type: true
// CS Name: Backtrace.Unity.Runtime.Native.Android.UnwindingMode
struct CORDL_TYPE UnwindingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnwindingMode_Unwrapped
enum struct __UnwindingMode_Unwrapped : int32_t {
__E_LOCAL = static_cast<int32_t>(0x0),
__E_REMOTE = static_cast<int32_t>(0x1),
__E_REMOTE_DUMPWITHOUTCRASH = static_cast<int32_t>(0x2),
__E_LOCAL_DUMPWITHOUTCRASH = static_cast<int32_t>(0x3),
__E_LOCAL_CONTEXT = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnwindingMode_Unwrapped () const noexcept {
return static_cast<__UnwindingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnwindingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnwindingMode(int32_t  value__) noexcept;

/// @brief Field LOCAL value: I32(0)
static ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode const LOCAL;

/// @brief Field LOCAL_CONTEXT value: I32(4)
static ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode const LOCAL_CONTEXT;

/// @brief Field LOCAL_DUMPWITHOUTCRASH value: I32(3)
static ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode const LOCAL_DUMPWITHOUTCRASH;

/// @brief Field REMOTE value: I32(1)
static ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode const REMOTE;

/// @brief Field REMOTE_DUMPWITHOUTCRASH value: I32(2)
static ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode const REMOTE_DUMPWITHOUTCRASH;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27588};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Runtime::Native::Android::UnwindingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Runtime::Native::Android::UnwindingMode) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Runtime::Native::Android
