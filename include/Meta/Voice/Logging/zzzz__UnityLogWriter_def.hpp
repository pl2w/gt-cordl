#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/UnityLogWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnityLogWriter)
namespace Meta::Voice::Logging {
class ILogWriter;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class UnityLogWriter;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::UnityLogWriter*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::UnityLogWriter*, "Meta.Voice.Logging", "UnityLogWriter");
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.UnityLogWriter
class CORDL_TYPE UnityLogWriter : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Meta::Voice::Logging::ILogWriter"
constexpr operator  ::Meta::Voice::Logging::ILogWriter*() noexcept;

static inline ::Meta::Voice::Logging::UnityLogWriter* New_ctor() ;

/// @brief Method WriteDebug, addr 0x9e39e20, size 0x58, virtual true, abstract: false, final true
inline void WriteDebug(::StringW  message) ;

/// @brief Method WriteError, addr 0x9e39f28, size 0x58, virtual true, abstract: false, final true
inline void WriteError(::StringW  message) ;

/// @brief Method WriteInfo, addr 0x9e39e78, size 0x58, virtual true, abstract: false, final true
inline void WriteInfo(::StringW  message) ;

/// @brief Method WriteVerbose, addr 0x9e39dc8, size 0x58, virtual true, abstract: false, final true
inline void WriteVerbose(::StringW  message) ;

/// @brief Method WriteWarning, addr 0x9e39ed0, size 0x58, virtual true, abstract: false, final true
inline void WriteWarning(::StringW  message) ;

/// @brief Method .ctor, addr 0x9e375c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::Voice::Logging::ILogWriter"
constexpr ::Meta::Voice::Logging::ILogWriter* i___Meta__Voice__Logging__ILogWriter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLogWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLogWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLogWriter(UnityLogWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLogWriter(UnityLogWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30971};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Logging::UnityLogWriter) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
