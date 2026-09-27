#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/IVLoggerFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IVLoggerFactory)
namespace Meta::Voice::Logging {
class ILogSink;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class IVLoggerFactory;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::IVLoggerFactory*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::IVLoggerFactory*, "Meta.Voice.Logging", "IVLoggerFactory");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.IVLoggerFactory
class CORDL_TYPE IVLoggerFactory {
public:
// Declarations
/// @brief Method GetLogger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Logging::IVLogger* GetLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink) ;

// Ctor Parameters [CppParam { name: "", ty: "IVLoggerFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVLoggerFactory(IVLoggerFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30951};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Logging
