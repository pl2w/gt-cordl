#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/IVLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVLogger)
namespace Meta::Voice::Logging {
class ICoreLogger;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class IVLogger;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::IVLogger*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::IVLogger*, "Meta.Voice.Logging", "IVLogger");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.IVLogger
class CORDL_TYPE IVLogger {
public:
// Declarations
/// @brief Convert operator to "::Meta::Voice::Logging::ICoreLogger"
constexpr operator  ::Meta::Voice::Logging::ICoreLogger*() noexcept;

/// @brief Convert to "::Meta::Voice::Logging::ICoreLogger"
constexpr ::Meta::Voice::Logging::ICoreLogger* i___Meta__Voice__Logging__ICoreLogger() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IVLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVLogger(IVLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30950};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Logging
