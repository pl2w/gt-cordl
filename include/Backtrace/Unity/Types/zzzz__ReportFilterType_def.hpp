#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/ReportFilterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReportFilterType)
// Forward declare root types
namespace Backtrace::Unity::Types {
struct ReportFilterType;
}
// Write type traits
MARK_VAL_T(::Backtrace::Unity::Types::ReportFilterType);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Types::ReportFilterType, "Backtrace.Unity.Types", "ReportFilterType");
// [Flags]
// Dependencies 
namespace Backtrace::Unity::Types {
// Is value type: true
// CS Name: Backtrace.Unity.Types.ReportFilterType
struct CORDL_TYPE ReportFilterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReportFilterType_Unwrapped
enum struct __ReportFilterType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Message = static_cast<int32_t>(0x1),
__E_Exception = static_cast<int32_t>(0x2),
__E_UnhandledException = static_cast<int32_t>(0x4),
__E_Hang = static_cast<int32_t>(0x8),
__E_Error = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReportFilterType_Unwrapped () const noexcept {
return static_cast<__ReportFilterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReportFilterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReportFilterType(int32_t  value__) noexcept;

/// @brief Field Error value: I32(16)
static ::Backtrace::Unity::Types::ReportFilterType const Error;

/// @brief Field Exception value: I32(2)
static ::Backtrace::Unity::Types::ReportFilterType const Exception;

/// @brief Field Hang value: I32(8)
static ::Backtrace::Unity::Types::ReportFilterType const Hang;

/// @brief Field Message value: I32(1)
static ::Backtrace::Unity::Types::ReportFilterType const Message;

/// @brief Field None value: I32(0)
static ::Backtrace::Unity::Types::ReportFilterType const None;

/// @brief Field UnhandledException value: I32(4)
static ::Backtrace::Unity::Types::ReportFilterType const UnhandledException;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Types::ReportFilterType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Types::ReportFilterType) == 0x4, "Size mismatch!");

} // namespace end def Backtrace::Unity::Types
