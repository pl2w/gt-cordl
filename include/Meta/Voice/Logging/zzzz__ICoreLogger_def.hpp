#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ICoreLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICoreLogger)
namespace Meta::Voice::Logging {
struct CorrelationID;
}
namespace Meta::Voice::Logging {
struct ErrorCode;
}
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class ICoreLogger;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::ICoreLogger*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::ICoreLogger*, "Meta.Voice.Logging", "ICoreLogger");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.ICoreLogger
class CORDL_TYPE ICoreLogger {
public:
// Declarations
 __declspec(property(get=get_CorrelationID, put=set_CorrelationID)) ::Meta::Voice::Logging::CorrelationID  CorrelationID;

/// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Debug(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber) ;

/// @brief Method Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Error(::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Error(::System::Exception*  exception, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Error(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Info, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Info(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber) ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Verbose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Verbose(::Meta::Voice::Logging::CorrelationID  correlationId, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Verbose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Verbose(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber) ;

/// @brief Method Verbose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Verbose(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Warning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Warning(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method get_CorrelationID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Logging::CorrelationID get_CorrelationID() ;

/// @brief Method set_CorrelationID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_CorrelationID(::Meta::Voice::Logging::CorrelationID  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ICoreLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICoreLogger(ICoreLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30945};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Logging
