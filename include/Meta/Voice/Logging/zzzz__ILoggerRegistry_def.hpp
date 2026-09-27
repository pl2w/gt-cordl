#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ILoggerRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILoggerRegistry)
namespace Meta::Voice::Logging {
class ILogSink;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Logging {
struct LogCategory;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class ILoggerRegistry;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::ILoggerRegistry*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::ILoggerRegistry*, "Meta.Voice.Logging", "ILoggerRegistry");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.ILoggerRegistry
class CORDL_TYPE ILoggerRegistry {
public:
// Declarations
/// @brief Method GetLogger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Logging::IVLogger* GetLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink) ;

/// @brief Method GetLogger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Logging::IVLogger* GetLogger(::Meta::Voice::Logging::LogCategory  logCategory, ::Meta::Voice::Logging::ILogSink*  logSink) ;

// Ctor Parameters [CppParam { name: "", ty: "ILoggerRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILoggerRegistry(ILoggerRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30947};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Logging
