#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ILogSink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILogSink)
namespace Meta::Voice::Logging {
struct LogEntry;
}
namespace Meta::Voice::Logging {
class LoggerOptions;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class ILogSink;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::ILogSink*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::ILogSink*, "Meta.Voice.Logging", "ILogSink");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.ILogSink
class CORDL_TYPE ILogSink {
public:
// Declarations
 __declspec(property(put=set_Options)) ::Meta::Voice::Logging::LoggerOptions*  Options;

/// @brief Method WriteEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteEntry(::Meta::Voice::Logging::LogEntry  logEntry) ;

/// @brief Method set_Options, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Options(::Meta::Voice::Logging::LoggerOptions*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILogSink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILogSink(ILogSink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30948};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Logging
