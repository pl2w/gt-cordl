#pragma once
// IWYU pragma private; include "WebSocketSharp/Logger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/zzzz__LogLevel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
namespace WebSocketSharp {
class LogData;
}
namespace WebSocketSharp {
struct LogLevel;
}
// Forward declare root types
namespace WebSocketSharp {
class Logger;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Logger*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Logger*, "WebSocketSharp", "Logger");
// Dependencies System.Object, WebSocketSharp.LogLevel
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.Logger
class CORDL_TYPE Logger : public ::System::Object {
public:
// Declarations
/// @brief Field _file, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__file, put=__cordl_internal_set__file)) ::StringW  _file;

/// @brief Field _level, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__level, put=__cordl_internal_set__level)) ::WebSocketSharp::LogLevel  _level;

/// @brief Field _output, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*  _output;

/// @brief Field _sync, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sync, put=__cordl_internal_set__sync)) ::System::Object*  _sync;

/// @brief Method Debug, addr 0xb97a240, size 0x44, virtual false, abstract: false, final false
inline void Debug(::StringW  message) ;

/// @brief Method Error, addr 0xb97a1fc, size 0x44, virtual false, abstract: false, final false
inline void Error(::StringW  message) ;

/// @brief Method Fatal, addr 0xb97aea0, size 0x8, virtual false, abstract: false, final false
inline void Fatal(::StringW  message) ;

/// @brief Method Info, addr 0xb979bac, size 0x44, virtual false, abstract: false, final false
inline void Info(::StringW  message) ;

static inline ::WebSocketSharp::Logger* New_ctor() ;

static inline ::WebSocketSharp::Logger* New_ctor(::WebSocketSharp::LogLevel  level, ::StringW  file, ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*  output) ;

/// @brief Method Trace, addr 0xb97a020, size 0x44, virtual false, abstract: false, final false
inline void Trace(::StringW  message) ;

/// @brief Method Warn, addr 0xb97ab8c, size 0x44, virtual false, abstract: false, final false
inline void Warn(::StringW  message) ;

constexpr ::StringW const& __cordl_internal_get__file() const;

constexpr ::StringW& __cordl_internal_get__file() ;

constexpr ::WebSocketSharp::LogLevel const& __cordl_internal_get__level() const;

constexpr ::WebSocketSharp::LogLevel& __cordl_internal_get__level() ;

constexpr ::System::Action_2<::WebSocketSharp::LogData*,::StringW>* const& __cordl_internal_get__output() const;

constexpr ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*& __cordl_internal_get__output() ;

constexpr ::System::Object* const& __cordl_internal_get__sync() const;

constexpr ::System::Object*& __cordl_internal_get__sync() ;

constexpr void __cordl_internal_set__file(::StringW  value) ;

constexpr void __cordl_internal_set__level(::WebSocketSharp::LogLevel  value) ;

constexpr void __cordl_internal_set__output(::System::Action_2<::WebSocketSharp::LogData*,::StringW>*  value) ;

constexpr void __cordl_internal_set__sync(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xb978484, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb9800a4, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::LogLevel  level, ::StringW  file, ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*  output) ;

/// @brief Method defaultOutput, addr 0xb980198, size 0xa4, virtual false, abstract: false, final false
static inline void defaultOutput(::WebSocketSharp::LogData*  data, ::StringW  path) ;

/// @brief Method output, addr 0xb980494, size 0x2b8, virtual false, abstract: false, final false
inline void output(::StringW  message, ::WebSocketSharp::LogLevel  level) ;

/// @brief Method writeToFile, addr 0xb98023c, size 0x258, virtual false, abstract: false, final false
static inline void writeToFile(::StringW  value, ::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Logger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Logger(Logger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logger(Logger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30341};

/// @brief Field _file, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____file;

/// @brief Field _level, offset: 0x18, size: 0x4, def value: None
 ::WebSocketSharp::LogLevel  ____level;

/// @brief Field _output, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*  ____output;

/// @brief Field _sync, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____sync;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Logger, ____file) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Logger, ____level) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Logger, ____output) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Logger, ____sync) == 0x28, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Logger) == 0x30, "Size mismatch!");

} // namespace end def WebSocketSharp
