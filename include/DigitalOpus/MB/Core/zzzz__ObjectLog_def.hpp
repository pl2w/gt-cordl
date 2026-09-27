#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/ObjectLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectLog)
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class ObjectLog;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::ObjectLog*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::ObjectLog*, "DigitalOpus.MB.Core", "ObjectLog");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.ObjectLog
class CORDL_TYPE ObjectLog : public ::System::Object {
public:
// Declarations
/// @brief Field logMessages, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_logMessages, put=__cordl_internal_set_logMessages)) ::ArrayW<::StringW>  logMessages;

/// @brief Field pos, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) int32_t  pos;

/// @brief Method Dump, addr 0x9d7f23c, size 0xf0, virtual false, abstract: false, final false
inline ::StringW Dump() ;

/// @brief Method Error, addr 0x9d7f188, size 0x24, virtual false, abstract: false, final false
inline void Error(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Info, addr 0x9d7f1d0, size 0x24, virtual false, abstract: false, final false
inline void Info(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Log, addr 0x9d7f154, size 0x34, virtual false, abstract: false, final false
inline void Log(::DigitalOpus::MB::Core::MB2_LogLevel  l, ::StringW  msg, ::DigitalOpus::MB::Core::MB2_LogLevel  currentThreshold) ;

/// @brief Method LogDebug, addr 0x9d7f1f4, size 0x24, virtual false, abstract: false, final false
inline void LogDebug(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

static inline ::DigitalOpus::MB::Core::ObjectLog* New_ctor(int16_t  bufferSize) ;

/// @brief Method Trace, addr 0x9d7f218, size 0x24, virtual false, abstract: false, final false
inline void Trace(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Warn, addr 0x9d7f1ac, size 0x24, virtual false, abstract: false, final false
inline void Warn(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method _CacheLogMessage, addr 0x9d7f080, size 0x64, virtual false, abstract: false, final false
inline void _CacheLogMessage(::StringW  msg) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_logMessages() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_logMessages() ;

constexpr int32_t const& __cordl_internal_get_pos() const;

constexpr int32_t& __cordl_internal_get_pos() ;

constexpr void __cordl_internal_set_logMessages(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_pos(int32_t  value) ;

/// @brief Method .ctor, addr 0x9d7f0e4, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int16_t  bufferSize) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectLog(ObjectLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectLog(ObjectLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22607};

/// @brief Field pos, offset: 0x10, size: 0x4, def value: None
 int32_t  ___pos;

/// @brief Field logMessages, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___logMessages;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::ObjectLog, ___pos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::ObjectLog, ___logMessages) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::ObjectLog) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
