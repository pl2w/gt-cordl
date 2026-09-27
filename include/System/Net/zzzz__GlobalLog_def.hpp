#pragma once
// IWYU pragma private; include "System/Net/GlobalLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalLog)
namespace System::Net {
class BaseLoggingObject;
}
namespace System::Net {
struct ThreadKinds;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class GlobalLog;
}
// Write type traits
MARK_REF_T(::System::Net::GlobalLog*);
DEFINE_IL2CPP_CLASS(::System::Net::GlobalLog*, "System.Net", "GlobalLog");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.GlobalLog
class CORDL_TYPE GlobalLog : public ::System::Object {
public:
// Declarations
/// @brief Field Logobject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Logobject, put=setStaticF_Logobject)) ::System::Net::BaseLoggingObject*  Logobject;

/// [Conditional("TRAVE")]
/// @brief Method AddToArray, addr 0xac72c50, size 0x4, virtual false, abstract: false, final false
static inline void AddToArray(::StringW  msg) ;

/// [Conditional("TRAVE")]
/// @brief Method Dump, addr 0xac72e10, size 0x4, virtual false, abstract: false, final false
static inline void Dump(::ArrayW<uint8_t>  buffer) ;

/// [Conditional("TRAVE")]
/// @brief Method Dump, addr 0xac72e14, size 0x4, virtual false, abstract: false, final false
static inline void Dump(::ArrayW<uint8_t>  buffer, int32_t  length) ;

/// [Conditional("TRAVE")]
/// @brief Method Dump, addr 0xac72e18, size 0x4, virtual false, abstract: false, final false
static inline void Dump(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// [Conditional("TRAVE")]
/// @brief Method Dump, addr 0xac72e1c, size 0x4, virtual false, abstract: false, final false
static inline void Dump(::System::IntPtr  buffer, int32_t  offset, int32_t  length) ;

/// [Conditional("TRAVE")]
/// @brief Method DumpArray, addr 0xac72e0c, size 0x4, virtual false, abstract: false, final false
static inline void DumpArray() ;

/// [Conditional("TRAVE")]
/// @brief Method Enter, addr 0xac72c60, size 0x4, virtual false, abstract: false, final false
static inline void Enter(::StringW  func) ;

/// [Conditional("TRAVE")]
/// @brief Method Enter, addr 0xac72c64, size 0x4, virtual false, abstract: false, final false
static inline void Enter(::StringW  func, ::StringW  parms) ;

/// [Conditional("TRAVE")]
/// @brief Method Ignore, addr 0xac72c54, size 0x4, virtual false, abstract: false, final false
static inline void Ignore(::System::Object*  msg) ;

/// [Conditional("TRAVE")]
/// @brief Method Leave, addr 0xac72dfc, size 0x4, virtual false, abstract: false, final false
static inline void Leave(::StringW  func) ;

/// [Conditional("TRAVE")]
/// @brief Method Leave, addr 0xac72e00, size 0x4, virtual false, abstract: false, final false
static inline void Leave(::StringW  func, ::StringW  result) ;

/// [Conditional("TRAVE")]
/// @brief Method Leave, addr 0xac72e08, size 0x4, virtual false, abstract: false, final false
static inline void Leave(::StringW  func, bool  returnval) ;

/// [Conditional("TRAVE")]
/// @brief Method Leave, addr 0xac72e04, size 0x4, virtual false, abstract: false, final false
static inline void Leave(::StringW  func, int32_t  returnval) ;

/// [Conditional("TRAVE")]
/// @brief Method LeaveException, addr 0xac72df8, size 0x4, virtual false, abstract: false, final false
static inline void LeaveException(::StringW  func, ::System::Exception*  exception) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)1, (System.Runtime.ConstrainedExecution.Cer)0)]
/// @brief Method LoggingInitialize, addr 0xac72b50, size 0x54, virtual false, abstract: false, final false
static inline ::System::Net::BaseLoggingObject* LoggingInitialize() ;

/// [Conditional("TRAVE")]
/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)1, (System.Runtime.ConstrainedExecution.Cer)0)]
/// @brief Method Print, addr 0xac72c58, size 0x4, virtual false, abstract: false, final false
static inline void Print(::StringW  msg) ;

/// [Conditional("TRAVE")]
/// @brief Method PrintHex, addr 0xac72c5c, size 0x4, virtual false, abstract: false, final false
static inline void PrintHex(::StringW  msg, ::System::Object*  value) ;

/// [Conditional("DEBUG")]
/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)1, (System.Runtime.ConstrainedExecution.Cer)0)]
/// @brief Method SetThreadSource, addr 0xac72bac, size 0x4, virtual false, abstract: false, final false
static inline void SetThreadSource(::System::Net::ThreadKinds  source) ;

/// [Conditional("DEBUG")]
/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)1, (System.Runtime.ConstrainedExecution.Cer)0)]
/// @brief Method ThreadContract, addr 0xac72bb4, size 0x9c, virtual false, abstract: false, final false
static inline void ThreadContract(::System::Net::ThreadKinds  kind, ::System::Net::ThreadKinds  allowedSources, ::StringW  errorMsg) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)1, (System.Runtime.ConstrainedExecution.Cer)0)]
/// [Conditional("DEBUG")]
/// @brief Method ThreadContract, addr 0xac72bb0, size 0x4, virtual false, abstract: false, final false
static inline void ThreadContract(::System::Net::ThreadKinds  kind, ::StringW  errorMsg) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)1, (System.Runtime.ConstrainedExecution.Cer)0)]
/// [Conditional("DEBUG")]
/// [Conditional("_FORCE_ASSERTS")]
/// @brief Method Assert, addr 0xac72c68, size 0x9c, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition, ::StringW  messageFormat, /* [ParamArray] */ ::ArrayW<::System::Object*>  data) ;

/// [Conditional("_FORCE_ASSERTS")]
/// [Conditional("DEBUG")]
/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)1, (System.Runtime.ConstrainedExecution.Cer)0)]
/// @brief Method Assert, addr 0xac72d04, size 0x4, virtual false, abstract: false, final false
static inline void _cordl_Assert(::StringW  message) ;

/// [Conditional("DEBUG")]
/// [Conditional("_FORCE_ASSERTS")]
/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)1, (System.Runtime.ConstrainedExecution.Cer)0)]
/// @brief Method Assert, addr 0xac72d08, size 0xf0, virtual false, abstract: false, final false
static inline void _cordl_Assert(::StringW  message, ::StringW  detailMessage) ;

static inline ::System::Net::BaseLoggingObject* getStaticF_Logobject() ;

/// @brief Method get_CurrentThreadKind, addr 0xac72ba4, size 0x8, virtual false, abstract: false, final false
static inline ::System::Net::ThreadKinds get_CurrentThreadKind() ;

static inline void setStaticF_Logobject(::System::Net::BaseLoggingObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlobalLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlobalLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalLog(GlobalLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalLog(GlobalLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::GlobalLog) == 0x10, "Size mismatch!");

} // namespace end def System::Net
