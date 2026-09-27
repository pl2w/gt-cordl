#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/ExceptionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionExtensions)
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Backtrace::Unity::Common {
class ExceptionExtensions;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Common::ExceptionExtensions*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::ExceptionExtensions*, "Backtrace.Unity.Common", "ExceptionExtensions");
// [Extension]
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.ExceptionExtensions
class CORDL_TYPE ExceptionExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ToBacktraceReport, addr 0x5f274ac, size 0x64, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::BacktraceReport* ToBacktraceReport(::System::Exception*  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExceptionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExceptionExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionExtensions(ExceptionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionExtensions(ExceptionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27679};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::ExceptionExtensions) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common
