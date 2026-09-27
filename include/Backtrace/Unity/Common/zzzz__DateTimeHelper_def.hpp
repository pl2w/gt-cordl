#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/DateTimeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeHelper)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Backtrace::Unity::Common {
class DateTimeHelper;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Common::DateTimeHelper*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::DateTimeHelper*, "Backtrace.Unity.Common", "DateTimeHelper");
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.DateTimeHelper
class CORDL_TYPE DateTimeHelper : public ::System::Object {
public:
// Declarations
/// @brief Method Now, addr 0x5f26790, size 0x90, virtual false, abstract: false, final false
static inline ::System::TimeSpan Now() ;

/// @brief Method Timestamp, addr 0x5f162f8, size 0x80, virtual false, abstract: false, final false
static inline int32_t Timestamp() ;

/// @brief Method TimestampMs, addr 0x5f1e520, size 0x68, virtual false, abstract: false, final false
static inline double_t TimestampMs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DateTimeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DateTimeHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DateTimeHelper(DateTimeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateTimeHelper(DateTimeHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27671};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::DateTimeHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common
