#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ILogWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILogWriter)
// Forward declare root types
namespace Meta::Voice::Logging {
class ILogWriter;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::ILogWriter*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::ILogWriter*, "Meta.Voice.Logging", "ILogWriter");
// Dependencies 
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.ILogWriter
class CORDL_TYPE ILogWriter {
public:
// Declarations
/// @brief Method WriteDebug, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteDebug(::StringW  message) ;

/// @brief Method WriteError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteError(::StringW  message) ;

/// @brief Method WriteInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteInfo(::StringW  message) ;

/// @brief Method WriteVerbose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteVerbose(::StringW  message) ;

/// @brief Method WriteWarning, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteWarning(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "ILogWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILogWriter(ILogWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30949};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Logging
