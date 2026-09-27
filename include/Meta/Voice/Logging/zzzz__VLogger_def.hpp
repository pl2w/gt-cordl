#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/VLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VLogger)
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
class ILogSink;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Logging {
struct LogEntry;
}
namespace Meta::Voice::Logging {
class LoggingContext;
}
namespace Meta::Voice::Logging {
template<typename TKey,typename TValue>
class RingDictionaryBuffer_2;
}
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading {
template<typename T>
class ThreadLocal_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class VLogger;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::VLogger*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::VLogger*, "Meta.Voice.Logging", "VLogger");
// Dependencies Meta.Voice.Logging.CorrelationID, System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.VLogger
class CORDL_TYPE VLogger : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CorrelationID, put=set_CorrelationID)) ::Meta::Voice::Logging::CorrelationID  CorrelationID;

/// @brief Field CorrelationIDThreadLocal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CorrelationIDThreadLocal, put=setStaticF_CorrelationIDThreadLocal)) ::System::Threading::ThreadLocal_1<::StringW>*  CorrelationIDThreadLocal;

/// @brief Field LogBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LogBuffer, put=setStaticF_LogBuffer)) ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::LogEntry>*  LogBuffer;

/// @brief Field _category, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__category, put=__cordl_internal_set__category)) ::StringW  _category;

/// @brief Field _correlationID, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__correlationID, put=__cordl_internal_set__correlationID)) ::Meta::Voice::Logging::CorrelationID  _correlationID;

/// @brief Field _correlations, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__correlations, put=__cordl_internal_set__correlations)) ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*  _correlations;

/// @brief Field _downStreamCorrelations, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__downStreamCorrelations, put=__cordl_internal_set__downStreamCorrelations)) ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*  _downStreamCorrelations;

/// @brief Field _emptyContext, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__emptyContext, put=__cordl_internal_set__emptyContext)) ::Meta::Voice::Logging::LoggingContext*  _emptyContext;

/// @brief Field _logSink, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__logSink, put=__cordl_internal_set__logSink)) ::Meta::Voice::Logging::ILogSink*  _logSink;

/// @brief Field _nextSequenceId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextSequenceId, put=__cordl_internal_set__nextSequenceId)) int32_t  _nextSequenceId;

/// @brief Field _scopeEntries, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__scopeEntries, put=__cordl_internal_set__scopeEntries)) ::System::Collections::Generic::Dictionary_2<int32_t,::Meta::Voice::Logging::LogEntry>*  _scopeEntries;

/// @brief Convert operator to "::Meta::Voice::Logging::ICoreLogger"
constexpr operator  ::Meta::Voice::Logging::ICoreLogger*() noexcept;

/// @brief Convert operator to "::Meta::Voice::Logging::IVLogger"
constexpr operator  ::Meta::Voice::Logging::IVLogger*() noexcept;

/// @brief Method Correlate, addr 0x9e3a398, size 0x160, virtual true, abstract: false, final true
inline void Correlate(::Meta::Voice::Logging::CorrelationID  newCorrelationId, ::Meta::Voice::Logging::CorrelationID  rootCorrelationId) ;

/// @brief Method CorrelateIds, addr 0x9e3a2ec, size 0xac, virtual false, abstract: false, final false
inline void CorrelateIds(::Meta::Voice::Logging::CorrelationID  correlationId) ;

/// @brief Method Debug, addr 0x9e3aba0, size 0x22c, virtual true, abstract: false, final true
inline void Debug(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber) ;

/// @brief Method Error, addr 0x9e3af24, size 0x48, virtual true, abstract: false, final true
inline void Error(::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Error, addr 0x9e3b0cc, size 0x58, virtual true, abstract: false, final true
inline void Error(::System::Exception*  exception, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Error, addr 0x9e3b094, size 0x38, virtual true, abstract: false, final true
inline void Error(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method ExtractDownstreamRelatedEntries, addr 0x9e3ba64, size 0x3ac, virtual false, abstract: false, final false
inline void ExtractDownstreamRelatedEntries(::Meta::Voice::Logging::CorrelationID  correlationID, ::by_ref<::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>*>  entries) ;

/// @brief Method ExtractRelatedEntries, addr 0x9e3b5b0, size 0x4b4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>* ExtractRelatedEntries(::Meta::Voice::Logging::CorrelationID  correlationID) ;

/// @brief Method Flush, addr 0x9e3b428, size 0x188, virtual true, abstract: false, final true
inline void Flush(::Meta::Voice::Logging::CorrelationID  correlationID) ;

/// @brief Method Info, addr 0x9e3a974, size 0x22c, virtual true, abstract: false, final true
inline void Info(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber) ;

/// @brief Method IsFiltered, addr 0x9e3b2f8, size 0x8, virtual false, abstract: false, final false
inline bool IsFiltered(::Meta::Voice::Logging::LogEntry  logEntry) ;

/// @brief Method IsSuppressed, addr 0x9e3b250, size 0xa8, virtual false, abstract: false, final false
inline bool IsSuppressed(::Meta::Voice::Logging::LogEntry  logEntry) ;

/// @brief Method Log, addr 0x9e3af6c, size 0x128, virtual true, abstract: false, final true
inline void Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Log, addr 0x9e3b124, size 0x12c, virtual true, abstract: false, final true
inline void Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::System::Exception*  exception, ::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Log, addr 0x9e3ae04, size 0x120, virtual true, abstract: false, final true
inline void Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method LogEntry, addr 0x9e3a724, size 0xf8, virtual false, abstract: false, final false
inline void LogEntry(::Meta::Voice::Logging::LogEntry  logEntry) ;

static inline ::Meta::Voice::Logging::VLogger* New_ctor(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink) ;

/// @brief Method Verbose, addr 0x9e3a8c8, size 0xac, virtual true, abstract: false, final true
inline void Verbose(::Meta::Voice::Logging::CorrelationID  correlationId, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Verbose, addr 0x9e3a4f8, size 0x22c, virtual true, abstract: false, final true
inline void Verbose(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber) ;

/// @brief Method Verbose, addr 0x9e3a81c, size 0xac, virtual true, abstract: false, final true
inline void Verbose(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Warning, addr 0x9e3adcc, size 0x38, virtual true, abstract: false, final true
inline void Warning(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Write, addr 0x9e3b300, size 0x128, virtual false, abstract: false, final false
inline void Write(::Meta::Voice::Logging::LogEntry  logEntry, bool  force) ;

constexpr ::StringW const& __cordl_internal_get__category() const;

constexpr ::StringW& __cordl_internal_get__category() ;

constexpr ::Meta::Voice::Logging::CorrelationID const& __cordl_internal_get__correlationID() const;

constexpr ::Meta::Voice::Logging::CorrelationID& __cordl_internal_get__correlationID() ;

constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>* const& __cordl_internal_get__correlations() const;

constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*& __cordl_internal_get__correlations() ;

constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>* const& __cordl_internal_get__downStreamCorrelations() const;

constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*& __cordl_internal_get__downStreamCorrelations() ;

constexpr ::Meta::Voice::Logging::LoggingContext* const& __cordl_internal_get__emptyContext() const;

constexpr ::Meta::Voice::Logging::LoggingContext*& __cordl_internal_get__emptyContext() ;

constexpr ::Meta::Voice::Logging::ILogSink* const& __cordl_internal_get__logSink() const;

constexpr ::Meta::Voice::Logging::ILogSink*& __cordl_internal_get__logSink() ;

constexpr int32_t const& __cordl_internal_get__nextSequenceId() const;

constexpr int32_t& __cordl_internal_get__nextSequenceId() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Meta::Voice::Logging::LogEntry>* const& __cordl_internal_get__scopeEntries() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Meta::Voice::Logging::LogEntry>*& __cordl_internal_get__scopeEntries() ;

constexpr void __cordl_internal_set__category(::StringW  value) ;

constexpr void __cordl_internal_set__correlationID(::Meta::Voice::Logging::CorrelationID  value) ;

constexpr void __cordl_internal_set__correlations(::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*  value) ;

constexpr void __cordl_internal_set__downStreamCorrelations(::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*  value) ;

constexpr void __cordl_internal_set__emptyContext(::Meta::Voice::Logging::LoggingContext*  value) ;

constexpr void __cordl_internal_set__logSink(::Meta::Voice::Logging::ILogSink*  value) ;

constexpr void __cordl_internal_set__nextSequenceId(int32_t  value) ;

constexpr void __cordl_internal_set__scopeEntries(::System::Collections::Generic::Dictionary_2<int32_t,::Meta::Voice::Logging::LogEntry>*  value) ;

/// @brief Method .ctor, addr 0x9e3a174, size 0x178, virtual false, abstract: false, final false
inline void _ctor(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink) ;

static inline ::System::Threading::ThreadLocal_1<::StringW>* getStaticF_CorrelationIDThreadLocal() ;

static inline ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::LogEntry>* getStaticF_LogBuffer() ;

/// @brief Method get_CorrelationID, addr 0x9e39f80, size 0x158, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::CorrelationID get_CorrelationID() ;

/// @brief Convert to "::Meta::Voice::Logging::ICoreLogger"
constexpr ::Meta::Voice::Logging::ICoreLogger* i___Meta__Voice__Logging__ICoreLogger() noexcept;

/// @brief Convert to "::Meta::Voice::Logging::IVLogger"
constexpr ::Meta::Voice::Logging::IVLogger* i___Meta__Voice__Logging__IVLogger() noexcept;

static inline void setStaticF_CorrelationIDThreadLocal(::System::Threading::ThreadLocal_1<::StringW>*  value) ;

static inline void setStaticF_LogBuffer(::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::LogEntry>*  value) ;

/// @brief Method set_CorrelationID, addr 0x9e3a0d8, size 0x9c, virtual true, abstract: false, final true
inline void set_CorrelationID(::Meta::Voice::Logging::CorrelationID  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VLogger(VLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VLogger(VLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30972};

/// @brief Field _emptyContext, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::LoggingContext*  ____emptyContext;

/// @brief Field _nextSequenceId, offset: 0x18, size: 0x4, def value: None
 int32_t  ____nextSequenceId;

/// @brief Field _scopeEntries, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Meta::Voice::Logging::LogEntry>*  ____scopeEntries;

/// @brief Field _correlations, offset: 0x28, size: 0x8, def value: None
 ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*  ____correlations;

/// @brief Field _downStreamCorrelations, offset: 0x30, size: 0x8, def value: None
 ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*  ____downStreamCorrelations;

/// @brief Field _logSink, offset: 0x38, size: 0x8, def value: None
 ::Meta::Voice::Logging::ILogSink*  ____logSink;

/// @brief Field _category, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____category;

/// @brief Field _correlationID, offset: 0x48, size: 0x8, def value: None
 ::Meta::Voice::Logging::CorrelationID  ____correlationID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::VLogger, ____emptyContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::VLogger, ____nextSequenceId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::VLogger, ____scopeEntries) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::VLogger, ____correlations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::VLogger, ____downStreamCorrelations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::VLogger, ____logSink) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::VLogger, ____category) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::VLogger, ____correlationID) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::VLogger) == 0x50, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
