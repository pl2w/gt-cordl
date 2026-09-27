#pragma once
// IWYU pragma private; include "Modio/ModioConsoleLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioConsoleLog)
namespace Modio {
class IModioLogHandler;
}
namespace Modio {
struct LogLevel;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio {
class ModioConsoleLog;
}
// Write type traits
MARK_REF_T(::Modio::ModioConsoleLog*);
DEFINE_IL2CPP_CLASS(::Modio::ModioConsoleLog*, "Modio", "ModioConsoleLog");
// Dependencies System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModioConsoleLog
class CORDL_TYPE ModioConsoleLog : public ::System::Object {
public:
// Declarations
/// @brief Field _logPrefix, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__logPrefix, put=__cordl_internal_set__logPrefix)) ::StringW  _logPrefix;

/// @brief Convert operator to "::Modio::IModioLogHandler"
constexpr operator  ::Modio::IModioLogHandler*() noexcept;

/// @brief Method LogHandler, addr 0xa01a79c, size 0x1f8, virtual true, abstract: false, final true
inline void LogHandler(::Modio::LogLevel  logLevel, ::System::Object*  message) ;

static inline ::Modio::ModioConsoleLog* New_ctor() ;

static inline ::Modio::ModioConsoleLog* New_ctor(::StringW  logPrefix) ;

constexpr ::StringW const& __cordl_internal_get__logPrefix() const;

constexpr ::StringW& __cordl_internal_get__logPrefix() ;

constexpr void __cordl_internal_set__logPrefix(::StringW  value) ;

/// @brief Method .ctor, addr 0xa01a6dc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa01a724, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  logPrefix) ;

/// @brief Convert to "::Modio::IModioLogHandler"
constexpr ::Modio::IModioLogHandler* i___Modio__IModioLogHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioConsoleLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioConsoleLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioConsoleLog(ModioConsoleLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioConsoleLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioConsoleLog(ModioConsoleLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17493};

/// @brief Field _logPrefix, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____logPrefix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModioConsoleLog, ____logPrefix) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::ModioConsoleLog) == 0x18, "Size mismatch!");

} // namespace end def Modio
