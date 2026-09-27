#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConfigurationElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Configuration {
struct ConfigurationSaveMode;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationElement;
}
// Write type traits
MARK_REF_T(::System::Configuration::ConfigurationElement*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigurationElement*, "System.Configuration", "ConfigurationElement");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationElement
class CORDL_TYPE ConfigurationElement : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

/// @brief Method DeserializeElement, addr 0xa84ea18, size 0x38, virtual true, abstract: false, final false
inline void DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey) ;

/// @brief Method InitializeDefault, addr 0xa84ea50, size 0x38, virtual true, abstract: false, final false
inline void InitializeDefault() ;

/// @brief Method IsModified, addr 0xa84ea88, size 0x38, virtual true, abstract: false, final false
inline bool IsModified() ;

/// @brief Method PostDeserialize, addr 0xa84eac0, size 0x38, virtual true, abstract: false, final false
inline void PostDeserialize() ;

/// @brief Method Reset, addr 0xa84eaf8, size 0x38, virtual true, abstract: false, final false
inline void Reset(::System::Configuration::ConfigurationElement*  parentElement) ;

/// @brief Method ResetModified, addr 0xa84eb30, size 0x38, virtual true, abstract: false, final false
inline void ResetModified() ;

/// @brief Method SerializeToXmlElement, addr 0xa84eb68, size 0x38, virtual true, abstract: false, final false
inline bool SerializeToXmlElement(::System::Xml::XmlWriter*  writer, ::StringW  elementName) ;

/// @brief Method Unmerge, addr 0xa84eba0, size 0x38, virtual true, abstract: false, final false
inline void Unmerge(::System::Configuration::ConfigurationElement*  sourceElement, ::System::Configuration::ConfigurationElement*  parentElement, ::System::Configuration::ConfigurationSaveMode  saveMode) ;

/// @brief Method get_Properties, addr 0xa84e9e0, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationElement(ConfigurationElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationElement(ConfigurationElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33061};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ConfigurationElement) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
