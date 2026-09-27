#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/MetricsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetricsHelper)
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace Backtrace::Unity::Common {
class MetricsHelper;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Common::MetricsHelper*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::MetricsHelper*, "Backtrace.Unity.Common", "MetricsHelper");
// [Extension]
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.MetricsHelper
class CORDL_TYPE MetricsHelper : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetMicroseconds, addr 0x5f26928, size 0x108, virtual false, abstract: false, final false
static inline ::StringW GetMicroseconds(::System::Diagnostics::Stopwatch*  stopwatch) ;

/// [Extension]
/// @brief Method Restart, addr 0x5f26a30, size 0x34, virtual false, abstract: false, final false
static inline void Restart(::System::Diagnostics::Stopwatch*  stopwatch) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetricsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetricsHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetricsHelper(MetricsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetricsHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetricsHelper(MetricsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27673};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::MetricsHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common
