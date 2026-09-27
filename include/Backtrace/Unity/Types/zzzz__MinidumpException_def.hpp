#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/MinidumpException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MinidumpException)
// Forward declare root types
namespace Backtrace::Unity::Types {
struct MinidumpException;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Types::MinidumpException);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Types::MinidumpException, "Backtrace.Unity.Types", "MinidumpException");
// Dependencies 
namespace Backtrace::Unity::Types {
// Is value type: true
// CS Name: Backtrace.Unity.Types.MinidumpException
struct CORDL_TYPE MinidumpException {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MinidumpException_Unwrapped
enum struct __MinidumpException_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Present = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MinidumpException_Unwrapped () const noexcept {
return static_cast<__MinidumpException_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MinidumpException() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MinidumpException(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::Backtrace::Unity::Types::MinidumpException const None;

/// @brief Field Present value: I32(1)
static ::Backtrace::Unity::Types::MinidumpException const Present;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27563};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Types::MinidumpException, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Types::MinidumpException) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Types
