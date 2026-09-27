#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/MinidumpHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MinidumpHelper)
namespace Backtrace::Unity::Common {
struct MiniDumpExceptionInformation;
}
namespace Backtrace::Unity::Types {
struct MiniDumpType;
}
namespace Backtrace::Unity::Types {
struct MinidumpException;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Backtrace::Unity::Common {
class MinidumpHelper;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Common::MinidumpHelper*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::MinidumpHelper*, "Backtrace.Unity.Common", "MinidumpHelper");
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.MinidumpHelper
class CORDL_TYPE MinidumpHelper : public ::System::Object {
public:
// Declarations
/// @brief Field Libraries, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Libraries, put=setStaticF_Libraries)) ::ArrayW<::StringW>  Libraries;

/// @brief Method IsMemoryDumpAvailable, addr 0x5f26ae4, size 0xbc, virtual false, abstract: false, final false
static inline bool IsMemoryDumpAvailable() ;

/// @brief Method MiniDumpWriteDump, addr 0x5f26e14, size 0x118, virtual false, abstract: false, final false
static inline bool MiniDumpWriteDump(::System::IntPtr  hProcess, uint32_t  processId, ::System::Runtime::InteropServices::SafeHandle*  hFile, uint32_t  dumpType, ::System::IntPtr  expParam, ::System::IntPtr  userStreamParam, ::System::IntPtr  callbackParam) ;

/// @brief Method MiniDumpWriteDump, addr 0x5f26cb8, size 0x15c, virtual false, abstract: false, final false
static inline bool MiniDumpWriteDump(::System::IntPtr  hProcess, uint32_t  processId, ::System::Runtime::InteropServices::SafeHandle*  hFile, uint32_t  dumpType, ::by_ref<::Backtrace::Unity::Common::MiniDumpExceptionInformation>  expParam, ::System::IntPtr  userStreamParam, ::System::IntPtr  callbackParam) ;

/// @brief Method Write, addr 0x5f1c0d4, size 0x2a0, virtual false, abstract: false, final false
static inline bool Write(::StringW  filePath, ::Backtrace::Unity::Types::MiniDumpType  options, ::Backtrace::Unity::Types::MinidumpException  exceptionType) ;

static inline ::ArrayW<::StringW> getStaticF_Libraries() ;

static inline void setStaticF_Libraries(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MinidumpHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MinidumpHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MinidumpHelper(MinidumpHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinidumpHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinidumpHelper(MinidumpHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27675};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::MinidumpHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common
