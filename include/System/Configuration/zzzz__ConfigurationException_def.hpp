#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigurationException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationException;
}
// Write type traits
MARK_REF_T(::System::Configuration::ConfigurationException*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigurationException*, "System.Configuration", "ConfigurationException");
// Dependencies System.SystemException
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationException
class CORDL_TYPE ConfigurationException : public ::System::SystemException {
public:
// Declarations
 __declspec(property(get=get_BareMessage)) ::StringW  BareMessage;

 __declspec(property(get=get_Filename)) ::StringW  Filename;

 __declspec(property(get=get_Line)) int32_t  Line;

/// [Obsolete("This class is obsolete, use System.Configuration!System.Configuration.ConfigurationErrorsException.GetFilename instead")]
/// @brief Method GetXmlNodeFilename, addr 0xacf652c, size 0x38, virtual false, abstract: false, final false
static inline ::StringW GetXmlNodeFilename(::System::Xml::XmlNode*  node) ;

/// [Obsolete("This class is obsolete, use System.Configuration!System.Configuration.ConfigurationErrorsException.GetLinenumber instead")]
/// @brief Method GetXmlNodeLineNumber, addr 0xacf6564, size 0x38, virtual false, abstract: false, final false
static inline int32_t GetXmlNodeLineNumber(::System::Xml::XmlNode*  node) ;

/// @brief [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
static inline ::System::Configuration::ConfigurationException* New_ctor() ;

static inline ::System::Configuration::ConfigurationException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
static inline ::System::Configuration::ConfigurationException* New_ctor(::StringW  message) ;

/// @brief [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
static inline ::System::Configuration::ConfigurationException* New_ctor(::StringW  message, ::StringW  filename, int32_t  line) ;

/// @brief [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
static inline ::System::Configuration::ConfigurationException* New_ctor(::StringW  message, ::System::Exception*  inner) ;

/// @brief [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
static inline ::System::Configuration::ConfigurationException* New_ctor(::StringW  message, ::System::Exception*  inner, ::StringW  filename, int32_t  line) ;

/// @brief [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
static inline ::System::Configuration::ConfigurationException* New_ctor(::StringW  message, ::System::Exception*  inner, ::System::Xml::XmlNode*  node) ;

/// @brief [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
static inline ::System::Configuration::ConfigurationException* New_ctor(::StringW  message, ::System::Xml::XmlNode*  node) ;

/// [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
/// @brief Method .ctor, addr 0xacf62c4, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacf62fc, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
/// @brief Method .ctor, addr 0xacf6334, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
/// @brief Method .ctor, addr 0xacf6414, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::StringW  filename, int32_t  line) ;

/// [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
/// @brief Method .ctor, addr 0xacf636c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner) ;

/// [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
/// @brief Method .ctor, addr 0xacf63a4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner, ::StringW  filename, int32_t  line) ;

/// [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
/// @brief Method .ctor, addr 0xacf63dc, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  inner, ::System::Xml::XmlNode*  node) ;

/// [Obsolete("This class is obsolete, to create a new exception create a System.Configuration!System.Configuration.ConfigurationErrorsException")]
/// @brief Method .ctor, addr 0xacf644c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Xml::XmlNode*  node) ;

/// @brief Method get_BareMessage, addr 0xacf6484, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_BareMessage() ;

/// @brief Method get_Filename, addr 0xacf64bc, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_Filename() ;

/// @brief Method get_Line, addr 0xacf64f4, size 0x38, virtual true, abstract: false, final false
inline int32_t get_Line() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationException(ConfigurationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationException(ConfigurationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10960};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ConfigurationException) == 0x90, "Size mismatch!");

} // namespace end def System::Configuration
