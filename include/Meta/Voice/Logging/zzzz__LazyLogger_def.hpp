#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LazyLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Lazy_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LazyLogger)
namespace Meta::Voice::Logging {
struct CorrelationID;
}
namespace Meta::Voice::Logging {
struct ErrorCode;
}
namespace Meta::Voice::Logging {
class ICoreLogger;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace System {
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class LazyLogger;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::LazyLogger*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LazyLogger*, "Meta.Voice.Logging", "LazyLogger");
// Dependencies System.Lazy`1<T>
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LazyLogger
class CORDL_TYPE LazyLogger : public ::System::Lazy_1<::Meta::Voice::Logging::IVLogger*> {
public:
// Declarations
 __declspec(property(get=get_CorrelationID, put=set_CorrelationID)) ::Meta::Voice::Logging::CorrelationID  CorrelationID;

/// @brief Convert operator to "::Meta::Voice::Logging::ICoreLogger"
constexpr operator  ::Meta::Voice::Logging::ICoreLogger*() noexcept;

/// @brief Convert operator to "::Meta::Voice::Logging::IVLogger"
constexpr operator  ::Meta::Voice::Logging::IVLogger*() noexcept;

/// @brief Method Debug, addr 0x9e36674, size 0x128, virtual true, abstract: false, final true
inline void Debug(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber) ;

/// @brief Method Error, addr 0x9e36878, size 0xec, virtual true, abstract: false, final true
inline void Error(::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Error, addr 0x9e36a40, size 0xec, virtual true, abstract: false, final true
inline void Error(::System::Exception*  exception, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Error, addr 0x9e36964, size 0xdc, virtual true, abstract: false, final true
inline void Error(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Info, addr 0x9e3654c, size 0x128, virtual true, abstract: false, final true
inline void Info(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber) ;

/// @brief Method Log, addr 0x9e36b2c, size 0xf4, virtual true, abstract: false, final true
inline void Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

static inline ::Meta::Voice::Logging::LazyLogger* New_ctor(::System::Func_1<::Meta::Voice::Logging::IVLogger*>*  initializer) ;

/// @brief Method Verbose, addr 0x9e36338, size 0xec, virtual true, abstract: false, final true
inline void Verbose(::Meta::Voice::Logging::CorrelationID  correlationId, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Verbose, addr 0x9e36424, size 0x128, virtual true, abstract: false, final true
inline void Verbose(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber) ;

/// @brief Method Verbose, addr 0x9e3625c, size 0xdc, virtual true, abstract: false, final true
inline void Verbose(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Warning, addr 0x9e3679c, size 0xdc, virtual true, abstract: false, final true
inline void Warning(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method .ctor, addr 0x9e36070, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::Meta::Voice::Logging::IVLogger*>*  initializer) ;

/// @brief Method get_CorrelationID, addr 0x9e360c8, size 0xc0, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::CorrelationID get_CorrelationID() ;

/// @brief Convert to "::Meta::Voice::Logging::ICoreLogger"
constexpr ::Meta::Voice::Logging::ICoreLogger* i___Meta__Voice__Logging__ICoreLogger() noexcept;

/// @brief Convert to "::Meta::Voice::Logging::IVLogger"
constexpr ::Meta::Voice::Logging::IVLogger* i___Meta__Voice__Logging__IVLogger() noexcept;

/// @brief Method set_CorrelationID, addr 0x9e36188, size 0xd4, virtual true, abstract: false, final true
inline void set_CorrelationID(::Meta::Voice::Logging::CorrelationID  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LazyLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LazyLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LazyLogger(LazyLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LazyLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LazyLogger(LazyLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30953};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Logging::LazyLogger) == 0x28, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
