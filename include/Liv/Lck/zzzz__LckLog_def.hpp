#pragma once
// IWYU pragma private; include "Liv/Lck/LckLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckLog)
namespace Liv::Lck::Core {
struct LogType;
}
namespace Liv::Lck {
struct LogLevel;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
// Forward declare root types
namespace Liv::Lck {
class LckLog;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckLog*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckLog*, "Liv.Lck", "LckLog");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckLog
class CORDL_TYPE LckLog : public ::System::Object {
public:
// Declarations
/// @brief Field _earlyLogs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__earlyLogs, put=setStaticF__earlyLogs)) ::System::Collections::Generic::Queue_1<::System::ValueTuple_5<::Liv::Lck::Core::LogType,::StringW,::StringW,::StringW,int32_t>>*  _earlyLogs;

/// @brief Field _isInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isInitialized, put=setStaticF__isInitialized)) bool  _isInitialized;

/// @brief Field _lockObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lockObject, put=setStaticF__lockObject)) ::System::Object*  _lockObject;

/// @brief Method GetFileName, addr 0x9ceef00, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW GetFileName(::StringW  filePath) ;

/// @brief Method Log, addr 0x9cdcfc0, size 0xe4, virtual false, abstract: false, final false
static inline void Log(::StringW  message, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  filePath, /* [CallerLineNumber] */ int32_t  lineNumber) ;

/// @brief Method LogError, addr 0x9cdd0a4, size 0xe4, virtual false, abstract: false, final false
static inline void LogError(::StringW  message, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  filePath, /* [CallerLineNumber] */ int32_t  lineNumber) ;

/// [Conditional("LCK_TRACE")]
/// @brief Method LogTrace, addr 0x9cef1dc, size 0xb8, virtual false, abstract: false, final false
static inline void LogTrace(::StringW  message, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  filePath, /* [CallerLineNumber] */ int32_t  lineNumber) ;

/// @brief Method LogWarning, addr 0x9cdc778, size 0xe4, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  message, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  filePath, /* [CallerLineNumber] */ int32_t  lineNumber) ;

/// @brief Method OnLckCoreInitialized, addr 0x9ceecc8, size 0x20c, virtual false, abstract: false, final false
static inline void OnLckCoreInitialized() ;

/// @brief Method SendToLckCore, addr 0x9ceefbc, size 0x220, virtual false, abstract: false, final false
static inline void SendToLckCore(::Liv::Lck::Core::LogType  type, ::StringW  message, ::StringW  memberName, ::StringW  filePath, int32_t  lineNumber) ;

/// @brief Method ShouldPrint, addr 0x9ceeed4, size 0x2c, virtual false, abstract: false, final false
static inline bool ShouldPrint(::Liv::Lck::LogLevel  level) ;

static inline ::System::Collections::Generic::Queue_1<::System::ValueTuple_5<::Liv::Lck::Core::LogType,::StringW,::StringW,::StringW,int32_t>>* getStaticF__earlyLogs() ;

static inline bool getStaticF__isInitialized() ;

static inline ::System::Object* getStaticF__lockObject() ;

static inline void setStaticF__earlyLogs(::System::Collections::Generic::Queue_1<::System::ValueTuple_5<::Liv::Lck::Core::LogType,::StringW,::StringW,::StringW,int32_t>>*  value) ;

static inline void setStaticF__isInitialized(bool  value) ;

static inline void setStaticF__lockObject(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckLog(LckLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckLog(LckLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckLog) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
