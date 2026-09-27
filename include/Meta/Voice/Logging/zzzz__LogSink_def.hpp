#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LogSink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LogSink)
namespace Meta::Voice::Logging {
struct CorrelationID;
}
namespace Meta::Voice::Logging {
class IErrorMitigator;
}
namespace Meta::Voice::Logging {
class ILogSink;
}
namespace Meta::Voice::Logging {
class ILogWriter;
}
namespace Meta::Voice::Logging {
struct LogEntry;
}
namespace Meta::Voice::Logging {
class LogSink___c;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass22_0;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass23_0;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass24_0;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass25_0;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass26_0;
}
namespace Meta::Voice::Logging {
class LoggerOptions;
}
namespace Meta::Voice::Logging {
template<typename TKey,typename TValue>
class RingDictionaryBuffer_2;
}
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class LogSink;
}
namespace Meta::Voice::Logging {
class LogSink___c;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass22_0;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass23_0;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass24_0;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass25_0;
}
namespace Meta::Voice::Logging {
class LogSink___c__DisplayClass26_0;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::LogSink*);
MARK_REF_T(::Meta::Voice::Logging::LogSink___c*);
MARK_REF_T(::Meta::Voice::Logging::LogSink___c__DisplayClass22_0*);
MARK_REF_T(::Meta::Voice::Logging::LogSink___c__DisplayClass23_0*);
MARK_REF_T(::Meta::Voice::Logging::LogSink___c__DisplayClass24_0*);
MARK_REF_T(::Meta::Voice::Logging::LogSink___c__DisplayClass25_0*);
MARK_REF_T(::Meta::Voice::Logging::LogSink___c__DisplayClass26_0*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogSink*, "Meta.Voice.Logging", "LogSink");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogSink___c*, "Meta.Voice.Logging", "LogSink/<>c");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogSink___c__DisplayClass22_0*, "Meta.Voice.Logging", "LogSink/<>c__DisplayClass22_0");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogSink___c__DisplayClass23_0*, "Meta.Voice.Logging", "LogSink/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogSink___c__DisplayClass24_0*, "Meta.Voice.Logging", "LogSink/<>c__DisplayClass24_0");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogSink___c__DisplayClass25_0*, "Meta.Voice.Logging", "LogSink/<>c__DisplayClass25_0");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LogSink___c__DisplayClass26_0*, "Meta.Voice.Logging", "LogSink/<>c__DisplayClass26_0");
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LogSink
class CORDL_TYPE LogSink : public ::System::Object {
public:
// Declarations
using __c = ::Meta::Voice::Logging::LogSink___c;

using __c__DisplayClass22_0 = ::Meta::Voice::Logging::LogSink___c__DisplayClass22_0;

using __c__DisplayClass23_0 = ::Meta::Voice::Logging::LogSink___c__DisplayClass23_0;

using __c__DisplayClass24_0 = ::Meta::Voice::Logging::LogSink___c__DisplayClass24_0;

using __c__DisplayClass25_0 = ::Meta::Voice::Logging::LogSink___c__DisplayClass25_0;

using __c__DisplayClass26_0 = ::Meta::Voice::Logging::LogSink___c__DisplayClass26_0;

 __declspec(property(get=get_LogWriter, put=set_LogWriter)) ::Meta::Voice::Logging::ILogWriter*  LogWriter;

 __declspec(property(get=get_Options, put=set_Options)) ::Meta::Voice::Logging::LoggerOptions*  Options;

/// @brief Field <LogWriter>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__LogWriter_k__BackingField, put=__cordl_internal_set__LogWriter_k__BackingField)) ::Meta::Voice::Logging::ILogWriter*  _LogWriter_k__BackingField;

/// @brief Field <Options>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Options_k__BackingField, put=__cordl_internal_set__Options_k__BackingField)) ::Meta::Voice::Logging::LoggerOptions*  _Options_k__BackingField;

/// @brief Field _errorMitigator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__errorMitigator, put=setStaticF__errorMitigator)) ::Meta::Voice::Logging::IErrorMitigator*  _errorMitigator;

/// @brief Field _messagesCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__messagesCache, put=__cordl_internal_set__messagesCache)) ::Meta::Voice::Logging::RingDictionaryBuffer_2<::StringW,::Meta::Voice::Logging::CorrelationID>*  _messagesCache;

/// @brief Field _workingDirectory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__workingDirectory, put=__cordl_internal_set__workingDirectory)) ::StringW  _workingDirectory;

/// @brief Field mainThread, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mainThread, put=setStaticF_mainThread)) ::System::Threading::Thread*  mainThread;

/// @brief Convert operator to "::Meta::Voice::Logging::ILogSink"
constexpr operator  ::Meta::Voice::Logging::ILogSink*() noexcept;

/// @brief Method Annotate, addr 0x9e38fc4, size 0x25c, virtual false, abstract: false, final false
inline void Annotate(::System::Text::StringBuilder*  sb, ::Meta::Voice::Logging::LogEntry  logEntry) ;

/// @brief Method IsSafeToLog, addr 0x9e3989c, size 0x48, virtual false, abstract: false, final false
inline bool IsSafeToLog() ;

static inline ::Meta::Voice::Logging::LogSink* New_ctor(::Meta::Voice::Logging::ILogWriter*  logWriter, ::Meta::Voice::Logging::LoggerOptions*  options, ::Meta::Voice::Logging::IErrorMitigator*  errorMitigator) ;

/// @brief Method SendEntryToLogWriter, addr 0x9e39220, size 0x9c, virtual false, abstract: false, final false
inline void SendEntryToLogWriter(::Meta::Voice::Logging::LogEntry  logEntry) ;

/// @brief Method WrapWithLogColor, addr 0x9e38fc0, size 0x4, virtual false, abstract: false, final false
inline void WrapWithLogColor(::System::Text::StringBuilder*  builder, int32_t  startIndex, ::Meta::Voice::Logging::VLoggerVerbosity  logType) ;

/// @brief Method WriteDebug, addr 0x9e39640, size 0x12c, virtual false, abstract: false, final false
inline void WriteDebug(::StringW  message) ;

/// @brief Method WriteEntry, addr 0x9e38a44, size 0x57c, virtual true, abstract: false, final true
inline void WriteEntry(::Meta::Voice::Logging::LogEntry  logEntry) ;

/// @brief Method WriteError, addr 0x9e392bc, size 0x12c, virtual true, abstract: false, final true
inline void WriteError(::StringW  message) ;

/// @brief Method WriteInfo, addr 0x9e39514, size 0x12c, virtual false, abstract: false, final false
inline void WriteInfo(::StringW  message) ;

/// @brief Method WriteVerbose, addr 0x9e3976c, size 0x128, virtual false, abstract: false, final false
inline void WriteVerbose(::StringW  message) ;

/// @brief Method WriteWarning, addr 0x9e393e8, size 0x12c, virtual false, abstract: false, final false
inline void WriteWarning(::StringW  message) ;

constexpr ::Meta::Voice::Logging::ILogWriter* const& __cordl_internal_get__LogWriter_k__BackingField() const;

constexpr ::Meta::Voice::Logging::ILogWriter*& __cordl_internal_get__LogWriter_k__BackingField() ;

constexpr ::Meta::Voice::Logging::LoggerOptions* const& __cordl_internal_get__Options_k__BackingField() const;

constexpr ::Meta::Voice::Logging::LoggerOptions*& __cordl_internal_get__Options_k__BackingField() ;

constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::StringW,::Meta::Voice::Logging::CorrelationID>* const& __cordl_internal_get__messagesCache() const;

constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::StringW,::Meta::Voice::Logging::CorrelationID>*& __cordl_internal_get__messagesCache() ;

constexpr ::StringW const& __cordl_internal_get__workingDirectory() const;

constexpr ::StringW& __cordl_internal_get__workingDirectory() ;

constexpr void __cordl_internal_set__LogWriter_k__BackingField(::Meta::Voice::Logging::ILogWriter*  value) ;

constexpr void __cordl_internal_set__Options_k__BackingField(::Meta::Voice::Logging::LoggerOptions*  value) ;

constexpr void __cordl_internal_set__messagesCache(::Meta::Voice::Logging::RingDictionaryBuffer_2<::StringW,::Meta::Voice::Logging::CorrelationID>*  value) ;

constexpr void __cordl_internal_set__workingDirectory(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e375d0, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::Logging::ILogWriter*  logWriter, ::Meta::Voice::Logging::LoggerOptions*  options, ::Meta::Voice::Logging::IErrorMitigator*  errorMitigator) ;

static inline ::Meta::Voice::Logging::IErrorMitigator* getStaticF__errorMitigator() ;

static inline ::System::Threading::Thread* getStaticF_mainThread() ;

/// [CompilerGenerated]
/// @brief Method get_LogWriter, addr 0x9e38a24, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::ILogWriter* get_LogWriter() ;

/// [CompilerGenerated]
/// @brief Method get_Options, addr 0x9e38a34, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::LoggerOptions* get_Options() ;

/// @brief Convert to "::Meta::Voice::Logging::ILogSink"
constexpr ::Meta::Voice::Logging::ILogSink* i___Meta__Voice__Logging__ILogSink() noexcept;

static inline void setStaticF__errorMitigator(::Meta::Voice::Logging::IErrorMitigator*  value) ;

static inline void setStaticF_mainThread(::System::Threading::Thread*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LogWriter, addr 0x9e38a2c, size 0x8, virtual true, abstract: false, final true
inline void set_LogWriter(::Meta::Voice::Logging::ILogWriter*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Options, addr 0x9e38a3c, size 0x8, virtual true, abstract: false, final true
inline void set_Options(::Meta::Voice::Logging::LoggerOptions*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogSink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogSink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogSink(LogSink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogSink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogSink(LogSink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30969};

/// @brief Field _workingDirectory, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____workingDirectory;

/// [CompilerGenerated]
/// @brief Field <LogWriter>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Meta::Voice::Logging::ILogWriter*  ____LogWriter_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Options>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::LoggerOptions*  ____Options_k__BackingField;

/// @brief Field _messagesCache, offset: 0x28, size: 0x8, def value: None
 ::Meta::Voice::Logging::RingDictionaryBuffer_2<::StringW,::Meta::Voice::Logging::CorrelationID>*  ____messagesCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogSink, ____workingDirectory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogSink, ____LogWriter_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogSink, ____Options_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogSink, ____messagesCache) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogSink) == 0x30, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LogSink/<>c__DisplayClass26_0
class CORDL_TYPE LogSink___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Logging::LogSink*  __4__this;

/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

static inline ::Meta::Voice::Logging::LogSink___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <WriteError>b__0, addr 0x9e39d14, size 0xb4, virtual false, abstract: false, final false
inline void _WriteError_b__0() ;

constexpr ::Meta::Voice::Logging::LogSink* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Logging::LogSink*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e39954, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogSink___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass26_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogSink___c__DisplayClass26_0(LogSink___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass26_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogSink___c__DisplayClass26_0(LogSink___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30968};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::LogSink*  _____4__this;

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass26_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass26_0, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogSink___c__DisplayClass26_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LogSink/<>c__DisplayClass25_0
class CORDL_TYPE LogSink___c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Logging::LogSink*  __4__this;

/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

static inline ::Meta::Voice::Logging::LogSink___c__DisplayClass25_0* New_ctor() ;

/// @brief Method <WriteWarning>b__0, addr 0x9e39c60, size 0xb4, virtual false, abstract: false, final false
inline void _WriteWarning_b__0() ;

constexpr ::Meta::Voice::Logging::LogSink* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Logging::LogSink*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e3994c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogSink___c__DisplayClass25_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass25_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogSink___c__DisplayClass25_0(LogSink___c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass25_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogSink___c__DisplayClass25_0(LogSink___c__DisplayClass25_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30967};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::LogSink*  _____4__this;

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass25_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass25_0, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogSink___c__DisplayClass25_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LogSink/<>c__DisplayClass24_0
class CORDL_TYPE LogSink___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Logging::LogSink*  __4__this;

/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

static inline ::Meta::Voice::Logging::LogSink___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <WriteInfo>b__0, addr 0x9e39bac, size 0xb4, virtual false, abstract: false, final false
inline void _WriteInfo_b__0() ;

constexpr ::Meta::Voice::Logging::LogSink* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Logging::LogSink*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e39944, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogSink___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass24_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogSink___c__DisplayClass24_0(LogSink___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass24_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogSink___c__DisplayClass24_0(LogSink___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30966};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::LogSink*  _____4__this;

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass24_0, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogSink___c__DisplayClass24_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LogSink/<>c__DisplayClass23_0
class CORDL_TYPE LogSink___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Logging::LogSink*  __4__this;

/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

static inline ::Meta::Voice::Logging::LogSink___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <WriteDebug>b__0, addr 0x9e39af8, size 0xb4, virtual false, abstract: false, final false
inline void _WriteDebug_b__0() ;

constexpr ::Meta::Voice::Logging::LogSink* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Logging::LogSink*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e3993c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogSink___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogSink___c__DisplayClass23_0(LogSink___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogSink___c__DisplayClass23_0(LogSink___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30965};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::LogSink*  _____4__this;

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass23_0, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogSink___c__DisplayClass23_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LogSink/<>c__DisplayClass22_0
class CORDL_TYPE LogSink___c__DisplayClass22_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Logging::LogSink*  __4__this;

/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

static inline ::Meta::Voice::Logging::LogSink___c__DisplayClass22_0* New_ctor() ;

/// @brief Method <WriteVerbose>b__0, addr 0x9e39a48, size 0xb0, virtual false, abstract: false, final false
inline void _WriteVerbose_b__0() ;

constexpr ::Meta::Voice::Logging::LogSink* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Logging::LogSink*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e39894, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogSink___c__DisplayClass22_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass22_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogSink___c__DisplayClass22_0(LogSink___c__DisplayClass22_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c__DisplayClass22_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogSink___c__DisplayClass22_0(LogSink___c__DisplayClass22_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30964};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::LogSink*  _____4__this;

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass22_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LogSink___c__DisplayClass22_0, ___message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LogSink___c__DisplayClass22_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LogSink/<>c
class CORDL_TYPE LogSink___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::Voice::Logging::LogSink___c*  __9;

static inline ::Meta::Voice::Logging::LogSink___c* New_ctor() ;

/// @brief Method <.cctor>b__1_0, addr 0x9e399cc, size 0x7c, virtual false, abstract: false, final false
inline ::System::Threading::Thread* __cctor_b__1_0() ;

/// @brief Method .ctor, addr 0x9e399c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::Voice::Logging::LogSink___c* getStaticF___9() ;

static inline void setStaticF___9(::Meta::Voice::Logging::LogSink___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogSink___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogSink___c(LogSink___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogSink___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogSink___c(LogSink___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30963};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Logging::LogSink___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
