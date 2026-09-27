#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyIsReadOnlyException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsPropertyIsReadOnlyException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Configuration {
class SettingsPropertyIsReadOnlyException;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsPropertyIsReadOnlyException*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsPropertyIsReadOnlyException*, "System.Configuration", "SettingsPropertyIsReadOnlyException");
// Dependencies System.Exception
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsPropertyIsReadOnlyException
class CORDL_TYPE SettingsPropertyIsReadOnlyException : public ::System::Exception {
public:
// Declarations
static inline ::System::Configuration::SettingsPropertyIsReadOnlyException* New_ctor() ;

static inline ::System::Configuration::SettingsPropertyIsReadOnlyException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Configuration::SettingsPropertyIsReadOnlyException* New_ctor(::StringW  message) ;

static inline ::System::Configuration::SettingsPropertyIsReadOnlyException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xacfd470, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacfd4a8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xacfd4e0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xacfd518, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPropertyIsReadOnlyException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyIsReadOnlyException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPropertyIsReadOnlyException(SettingsPropertyIsReadOnlyException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyIsReadOnlyException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPropertyIsReadOnlyException(SettingsPropertyIsReadOnlyException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11048};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsPropertyIsReadOnlyException) == 0x90, "Size mismatch!");

} // namespace end def System::Configuration
