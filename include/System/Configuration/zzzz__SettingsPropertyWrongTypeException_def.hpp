#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyWrongTypeException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsPropertyWrongTypeException)
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
class SettingsPropertyWrongTypeException;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsPropertyWrongTypeException*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsPropertyWrongTypeException*, "System.Configuration", "SettingsPropertyWrongTypeException");
// Dependencies System.Exception
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsPropertyWrongTypeException
class CORDL_TYPE SettingsPropertyWrongTypeException : public ::System::Exception {
public:
// Declarations
static inline ::System::Configuration::SettingsPropertyWrongTypeException* New_ctor() ;

static inline ::System::Configuration::SettingsPropertyWrongTypeException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Configuration::SettingsPropertyWrongTypeException* New_ctor(::StringW  message) ;

static inline ::System::Configuration::SettingsPropertyWrongTypeException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xacfd630, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacfd668, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xacfd6a0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xacfd6d8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsPropertyWrongTypeException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyWrongTypeException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsPropertyWrongTypeException(SettingsPropertyWrongTypeException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsPropertyWrongTypeException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsPropertyWrongTypeException(SettingsPropertyWrongTypeException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11050};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsPropertyWrongTypeException) == 0x90, "Size mismatch!");

} // namespace end def System::Configuration
