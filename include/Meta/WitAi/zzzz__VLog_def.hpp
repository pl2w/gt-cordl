#pragma once
// IWYU pragma private; include "Meta/WitAi/VLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VLog)
namespace Meta::Voice::Logging {
class ILoggerRegistry;
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
namespace Meta::WitAi {
class VLog;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::VLog*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::VLog*, "Meta.WitAi", "VLog");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.VLog
class CORDL_TYPE VLog : public ::System::Object {
public:
// Declarations
/// @brief Field LoggerRegistry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LoggerRegistry, put=setStaticF_LoggerRegistry)) ::Meta::Voice::Logging::ILoggerRegistry*  LoggerRegistry;

/// @brief Field <SuppressLogs>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__SuppressLogs_k__BackingField, put=setStaticF__SuppressLogs_k__BackingField)) bool  _SuppressLogs_k__BackingField;

/// @brief Method D, addr 0x9e3cc78, size 0x60, virtual false, abstract: false, final false
static inline void D(::System::Object*  log) ;

/// @brief Method E, addr 0x9e3cdb4, size 0x6c, virtual false, abstract: false, final false
static inline void E(::System::Object*  log, ::System::Exception*  e) ;

/// @brief Method E, addr 0x9e3ce20, size 0x70, virtual false, abstract: false, final false
static inline void E(::StringW  logCategory, ::System::Object*  log, ::System::Exception*  e) ;

/// @brief Method GetCallingCategory, addr 0x9e3ce90, size 0xd4, virtual false, abstract: false, final false
static inline ::StringW GetCallingCategory() ;

/// @brief Method I, addr 0x9e3c79c, size 0x60, virtual false, abstract: false, final false
static inline void I(::System::Object*  log) ;

/// @brief Method Log, addr 0x9e3c7fc, size 0x47c, virtual false, abstract: false, final false
static inline void Log(::Meta::Voice::Logging::VLoggerVerbosity  logType, ::StringW  logCategory, ::System::Object*  log, ::System::Exception*  exception) ;

/// @brief Method W, addr 0x9e3ccd8, size 0x6c, virtual false, abstract: false, final false
static inline void W(::System::Object*  log, ::System::Exception*  e) ;

/// @brief Method W, addr 0x9e3cd44, size 0x70, virtual false, abstract: false, final false
static inline void W(::StringW  logCategory, ::System::Object*  log, ::System::Exception*  e) ;

static inline ::Meta::Voice::Logging::ILoggerRegistry* getStaticF_LoggerRegistry() ;

static inline bool getStaticF__SuppressLogs_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressLogs, addr 0x9e3c744, size 0x58, virtual false, abstract: false, final false
static inline bool get_SuppressLogs() ;

static inline void setStaticF_LoggerRegistry(::Meta::Voice::Logging::ILoggerRegistry*  value) ;

static inline void setStaticF__SuppressLogs_k__BackingField(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VLog(VLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VLog(VLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30985};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::VLog) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
