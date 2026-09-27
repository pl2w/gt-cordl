#pragma once
// IWYU pragma private; include "Modio/ModioLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__LogLevel_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioLog)
namespace Modio {
class IModioLogHandler;
}
namespace Modio {
struct LogLevel;
}
namespace Modio {
class ModioLog_LogHandler;
}
namespace Modio {
class ModioSettings;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio {
class ModioLog;
}
namespace Modio {
class ModioLog_LogHandler;
}
// Write type traits
MARK_REF_T(::Modio::ModioLog*);
MARK_REF_T(::Modio::ModioLog_LogHandler*);
DEFINE_IL2CPP_CLASS(::Modio::ModioLog*, "Modio", "ModioLog");
DEFINE_IL2CPP_CLASS(::Modio::ModioLog_LogHandler*, "Modio", "ModioLog/LogHandler");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies Modio.LogLevel, System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModioLog
class CORDL_TYPE ModioLog : public ::System::Object {
public:
// Declarations
using LogHandler = ::Modio::ModioLog_LogHandler;

/// @brief Field <Error>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Error_k__BackingField, put=setStaticF__Error_k__BackingField)) ::Modio::ModioLog*  _Error_k__BackingField;

/// @brief Field <Message>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Message_k__BackingField, put=setStaticF__Message_k__BackingField)) ::Modio::ModioLog*  _Message_k__BackingField;

/// @brief Field <Verbose>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Verbose_k__BackingField, put=setStaticF__Verbose_k__BackingField)) ::Modio::ModioLog*  _Verbose_k__BackingField;

/// @brief Field <Warning>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Warning_k__BackingField, put=setStaticF__Warning_k__BackingField)) ::Modio::ModioLog*  _Warning_k__BackingField;

/// @brief Field _logHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__logHandler, put=setStaticF__logHandler)) ::Modio::IModioLogHandler*  _logHandler;

/// @brief Field _logLevel, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__logLevel, put=__cordl_internal_set__logLevel)) ::Modio::LogLevel  _logLevel;

/// @brief Method ApplyLogLevel, addr 0xa01af88, size 0x388, virtual false, abstract: false, final false
static inline void ApplyLogLevel(::Modio::LogLevel  logLevel) ;

/// @brief Method GetLogLevel, addr 0xa01b3f8, size 0x190, virtual false, abstract: false, final false
static inline ::Modio::ModioLog* GetLogLevel(::Modio::LogLevel  logLevel) ;

/// [NullableContext(0)]
/// @brief Method GetLogLevelFromSettings, addr 0xa01b370, size 0x60, virtual false, abstract: false, final false
static inline void GetLogLevelFromSettings(::Modio::ModioSettings*  settings) ;

/// [NullableContext(0)]
/// @brief Method Log, addr 0xa008f10, size 0x1b4, virtual false, abstract: false, final false
inline void Log(::System::Object*  message) ;

static inline ::Modio::ModioLog* New_ctor(::Modio::LogLevel  logLevel) ;

/// [NullableContext(0)]
/// @brief Method UpdateLogHandler, addr 0xa01b310, size 0x60, virtual false, abstract: false, final false
static inline void UpdateLogHandler(::Modio::IModioLogHandler*  logHandler) ;

constexpr ::Modio::LogLevel const& __cordl_internal_get__logLevel() const;

constexpr ::Modio::LogLevel& __cordl_internal_get__logLevel() ;

constexpr void __cordl_internal_set__logLevel(::Modio::LogLevel  value) ;

/// @brief Method .ctor, addr 0xa01b3d0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Modio::LogLevel  logLevel) ;

static inline ::Modio::ModioLog* getStaticF__Error_k__BackingField() ;

static inline ::Modio::ModioLog* getStaticF__Message_k__BackingField() ;

static inline ::Modio::ModioLog* getStaticF__Verbose_k__BackingField() ;

static inline ::Modio::ModioLog* getStaticF__Warning_k__BackingField() ;

static inline ::Modio::IModioLogHandler* getStaticF__logHandler() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0xa01a9a4, size 0x58, virtual false, abstract: false, final false
static inline ::Modio::ModioLog* get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_Message, addr 0xa01ab1c, size 0x58, virtual false, abstract: false, final false
static inline ::Modio::ModioLog* get_Message() ;

/// [CompilerGenerated]
/// @brief Method get_Verbose, addr 0xa01abd4, size 0x58, virtual false, abstract: false, final false
static inline ::Modio::ModioLog* get_Verbose() ;

/// [CompilerGenerated]
/// @brief Method get_Warning, addr 0xa01aa64, size 0x58, virtual false, abstract: false, final false
static inline ::Modio::ModioLog* get_Warning() ;

static inline void setStaticF__Error_k__BackingField(::Modio::ModioLog*  value) ;

static inline void setStaticF__Message_k__BackingField(::Modio::ModioLog*  value) ;

static inline void setStaticF__Verbose_k__BackingField(::Modio::ModioLog*  value) ;

static inline void setStaticF__Warning_k__BackingField(::Modio::ModioLog*  value) ;

static inline void setStaticF__logHandler(::Modio::IModioLogHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0xa01a9fc, size 0x68, virtual false, abstract: false, final false
static inline void set_Error(::Modio::ModioLog*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Message, addr 0xa01ab74, size 0x60, virtual false, abstract: false, final false
static inline void set_Message(::Modio::ModioLog*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Verbose, addr 0xa01ac2c, size 0x60, virtual false, abstract: false, final false
static inline void set_Verbose(::Modio::ModioLog*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Warning, addr 0xa01aabc, size 0x60, virtual false, abstract: false, final false
static inline void set_Warning(::Modio::ModioLog*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioLog(ModioLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioLog(ModioLog const& ) = delete;

/// @brief Field LOG_PREFIX_DEFAULT offset 0xffffffff size 0x8
static constexpr ::ConstString  LOG_PREFIX_DEFAULT{u"[mod.io] "};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17498};

/// @brief Field _logLevel, offset: 0x10, size: 0x1, def value: None
 ::Modio::LogLevel  ____logLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModioLog, ____logLevel) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::ModioLog) == 0x18, "Size mismatch!");

} // namespace end def Modio
// [NullableContext(0)]
// Dependencies System.MulticastDelegate
namespace Modio {
// Is value type: false
// CS Name: Modio.ModioLog/LogHandler
class CORDL_TYPE ModioLog_LogHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa01b63c, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Modio::LogLevel  logLevel, ::System::Object*  message, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa01b6d0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa01b628, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Modio::LogLevel  logLevel, ::System::Object*  message) ;

static inline ::Modio::ModioLog_LogHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa01b588, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioLog_LogHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioLog_LogHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioLog_LogHandler(ModioLog_LogHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioLog_LogHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioLog_LogHandler(ModioLog_LogHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17497};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModioLog_LogHandler) == 0x80, "Size mismatch!");

} // namespace end def Modio
