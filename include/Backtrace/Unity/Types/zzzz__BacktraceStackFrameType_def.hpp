#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/BacktraceStackFrameType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceStackFrameType)
// Forward declare root types
namespace Backtrace::Unity::Types {
struct BacktraceStackFrameType;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Types::BacktraceStackFrameType);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Types::BacktraceStackFrameType, "Backtrace.Unity.Types", "BacktraceStackFrameType");
// Dependencies 
namespace Backtrace::Unity::Types {
// Is value type: true
// CS Name: Backtrace.Unity.Types.BacktraceStackFrameType
struct CORDL_TYPE BacktraceStackFrameType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BacktraceStackFrameType_Unwrapped
enum struct __BacktraceStackFrameType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Dotnet = static_cast<int32_t>(0x1),
__E_Android = static_cast<int32_t>(0x2),
__E_Native = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BacktraceStackFrameType_Unwrapped () const noexcept {
return static_cast<__BacktraceStackFrameType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BacktraceStackFrameType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BacktraceStackFrameType(int32_t  value__) noexcept;

/// @brief Field Android value: I32(2)
static ::Backtrace::Unity::Types::BacktraceStackFrameType const Android;

/// @brief Field Dotnet value: I32(1)
static ::Backtrace::Unity::Types::BacktraceStackFrameType const Dotnet;

/// @brief Field Native value: I32(3)
static ::Backtrace::Unity::Types::BacktraceStackFrameType const Native;

/// @brief Field Unknown value: I32(0)
static ::Backtrace::Unity::Types::BacktraceStackFrameType const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27561};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Types::BacktraceStackFrameType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Types::BacktraceStackFrameType) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Types
