#pragma once
// IWYU pragma private; include "WebSocketSharp/LogData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/zzzz__LogLevel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LogData)
namespace System::Diagnostics {
class StackFrame;
}
namespace WebSocketSharp {
struct LogLevel;
}
// Forward declare root types
namespace WebSocketSharp {
class LogData;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::LogData*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::LogData*, "WebSocketSharp", "LogData");
// Dependencies System.DateTime, System.Object, WebSocketSharp.LogLevel
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.LogData
class CORDL_TYPE LogData : public ::System::Object {
public:
// Declarations
/// @brief Field _caller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__caller, put=__cordl_internal_set__caller)) ::System::Diagnostics::StackFrame*  _caller;

/// @brief Field _date, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__date, put=__cordl_internal_set__date)) ::System::DateTime  _date;

/// @brief Field _level, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__level, put=__cordl_internal_set__level)) ::WebSocketSharp::LogLevel  _level;

/// @brief Field _message, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__message, put=__cordl_internal_set__message)) ::StringW  _message;

static inline ::WebSocketSharp::LogData* New_ctor(::WebSocketSharp::LogLevel  level, ::System::Diagnostics::StackFrame*  caller, ::StringW  message) ;

/// @brief Method ToString, addr 0xb97fd04, size 0x3a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Diagnostics::StackFrame* const& __cordl_internal_get__caller() const;

constexpr ::System::Diagnostics::StackFrame*& __cordl_internal_get__caller() ;

constexpr ::System::DateTime const& __cordl_internal_get__date() const;

constexpr ::System::DateTime& __cordl_internal_get__date() ;

constexpr ::WebSocketSharp::LogLevel const& __cordl_internal_get__level() const;

constexpr ::WebSocketSharp::LogLevel& __cordl_internal_get__level() ;

constexpr ::StringW const& __cordl_internal_get__message() const;

constexpr ::StringW& __cordl_internal_get__message() ;

constexpr void __cordl_internal_set__caller(::System::Diagnostics::StackFrame*  value) ;

constexpr void __cordl_internal_set__date(::System::DateTime  value) ;

constexpr void __cordl_internal_set__level(::WebSocketSharp::LogLevel  value) ;

constexpr void __cordl_internal_set__message(::StringW  value) ;

/// @brief Method .ctor, addr 0xb97fc4c, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::LogLevel  level, ::System::Diagnostics::StackFrame*  caller, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogData(LogData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogData(LogData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30339};

/// @brief Field _caller, offset: 0x10, size: 0x8, def value: None
 ::System::Diagnostics::StackFrame*  ____caller;

/// @brief Field _date, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____date;

/// @brief Field _level, offset: 0x20, size: 0x4, def value: None
 ::WebSocketSharp::LogLevel  ____level;

/// @brief Field _message, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::LogData, ____caller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::LogData, ____date) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::LogData, ____level) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::LogData, ____message) == 0x28, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::LogData) == 0x30, "Size mismatch!");

} // namespace end def WebSocketSharp
