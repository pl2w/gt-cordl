#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LoggerOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LoggerOptions)
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class LoggerOptions;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::LoggerOptions*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::LoggerOptions*, "Meta.Voice.Logging", "LoggerOptions");
// Dependencies Meta.Voice.Logging.VLoggerVerbosity, System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.LoggerOptions
class CORDL_TYPE LoggerOptions : public ::System::Object {
public:
// Declarations
/// @brief Field ColorLogs, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_ColorLogs, put=__cordl_internal_set_ColorLogs)) bool  ColorLogs;

/// @brief Field LinkToCallSite, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_LinkToCallSite, put=__cordl_internal_set_LinkToCallSite)) bool  LinkToCallSite;

/// @brief Field MinimumVerbosity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinimumVerbosity, put=__cordl_internal_set_MinimumVerbosity)) ::Meta::Voice::Logging::VLoggerVerbosity  MinimumVerbosity;

/// @brief Field StackTraceLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StackTraceLevel, put=__cordl_internal_set_StackTraceLevel)) ::Meta::Voice::Logging::VLoggerVerbosity  StackTraceLevel;

/// @brief Field SuppressionLevel, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_SuppressionLevel, put=__cordl_internal_set_SuppressionLevel)) ::Meta::Voice::Logging::VLoggerVerbosity  SuppressionLevel;

static inline ::Meta::Voice::Logging::LoggerOptions* New_ctor(::Meta::Voice::Logging::VLoggerVerbosity  minimumVerbosity, ::Meta::Voice::Logging::VLoggerVerbosity  suppressionLevel, ::Meta::Voice::Logging::VLoggerVerbosity  stackTraceLevel, bool  colorLogs, bool  linkToCallSite) ;

constexpr bool const& __cordl_internal_get_ColorLogs() const;

constexpr bool& __cordl_internal_get_ColorLogs() ;

constexpr bool const& __cordl_internal_get_LinkToCallSite() const;

constexpr bool& __cordl_internal_get_LinkToCallSite() ;

constexpr ::Meta::Voice::Logging::VLoggerVerbosity const& __cordl_internal_get_MinimumVerbosity() const;

constexpr ::Meta::Voice::Logging::VLoggerVerbosity& __cordl_internal_get_MinimumVerbosity() ;

constexpr ::Meta::Voice::Logging::VLoggerVerbosity const& __cordl_internal_get_StackTraceLevel() const;

constexpr ::Meta::Voice::Logging::VLoggerVerbosity& __cordl_internal_get_StackTraceLevel() ;

constexpr ::Meta::Voice::Logging::VLoggerVerbosity const& __cordl_internal_get_SuppressionLevel() const;

constexpr ::Meta::Voice::Logging::VLoggerVerbosity& __cordl_internal_get_SuppressionLevel() ;

constexpr void __cordl_internal_set_ColorLogs(bool  value) ;

constexpr void __cordl_internal_set_LinkToCallSite(bool  value) ;

constexpr void __cordl_internal_set_MinimumVerbosity(::Meta::Voice::Logging::VLoggerVerbosity  value) ;

constexpr void __cordl_internal_set_StackTraceLevel(::Meta::Voice::Logging::VLoggerVerbosity  value) ;

constexpr void __cordl_internal_set_SuppressionLevel(::Meta::Voice::Logging::VLoggerVerbosity  value) ;

/// @brief Method .ctor, addr 0x9e37354, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::Logging::VLoggerVerbosity  minimumVerbosity, ::Meta::Voice::Logging::VLoggerVerbosity  suppressionLevel, ::Meta::Voice::Logging::VLoggerVerbosity  stackTraceLevel, bool  colorLogs, bool  linkToCallSite) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoggerOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoggerOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoggerOptions(LoggerOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoggerOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoggerOptions(LoggerOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30957};

/// @brief Field MinimumVerbosity, offset: 0x10, size: 0x4, def value: None
 ::Meta::Voice::Logging::VLoggerVerbosity  ___MinimumVerbosity;

/// @brief Field SuppressionLevel, offset: 0x14, size: 0x4, def value: None
 ::Meta::Voice::Logging::VLoggerVerbosity  ___SuppressionLevel;

/// @brief Field StackTraceLevel, offset: 0x18, size: 0x4, def value: None
 ::Meta::Voice::Logging::VLoggerVerbosity  ___StackTraceLevel;

/// @brief Field ColorLogs, offset: 0x1c, size: 0x1, def value: None
 bool  ___ColorLogs;

/// @brief Field LinkToCallSite, offset: 0x1d, size: 0x1, def value: None
 bool  ___LinkToCallSite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Logging::LoggerOptions, ___MinimumVerbosity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerOptions, ___SuppressionLevel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerOptions, ___StackTraceLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerOptions, ___ColorLogs) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Logging::LoggerOptions, ___LinkToCallSite) == 0x1d, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Logging::LoggerOptions) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
