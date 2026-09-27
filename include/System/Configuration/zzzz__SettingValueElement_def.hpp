#pragma once
// IWYU pragma private; include "System/Configuration/SettingValueElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingValueElement)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Configuration {
struct ConfigurationSaveMode;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Configuration {
class SettingValueElement;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingValueElement*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingValueElement*, "System.Configuration", "SettingValueElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingValueElement
class CORDL_TYPE SettingValueElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_ValueXml, put=set_ValueXml)) ::System::Xml::XmlNode*  ValueXml;

/// @brief Method DeserializeElement, addr 0xacfc738, size 0x38, virtual true, abstract: false, final false
inline void DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey) ;

/// @brief Method IsModified, addr 0xacfc770, size 0x38, virtual true, abstract: false, final false
inline bool IsModified() ;

static inline ::System::Configuration::SettingValueElement* New_ctor() ;

/// @brief Method Reset, addr 0xacfc7a8, size 0x38, virtual true, abstract: false, final false
inline void Reset(::System::Configuration::ConfigurationElement*  parentElement) ;

/// @brief Method ResetModified, addr 0xacfc7e0, size 0x38, virtual true, abstract: false, final false
inline void ResetModified() ;

/// @brief Method SerializeToXmlElement, addr 0xacfc818, size 0x38, virtual true, abstract: false, final false
inline bool SerializeToXmlElement(::System::Xml::XmlWriter*  writer, ::StringW  elementName) ;

/// @brief Method Unmerge, addr 0xacfc850, size 0x38, virtual true, abstract: false, final false
inline void Unmerge(::System::Configuration::ConfigurationElement*  sourceElement, ::System::Configuration::ConfigurationElement*  parentElement, ::System::Configuration::ConfigurationSaveMode  saveMode) ;

/// @brief Method .ctor, addr 0xacfc658, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0xacfc690, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_ValueXml, addr 0xacfc6c8, size 0x38, virtual false, abstract: false, final false
inline ::System::Xml::XmlNode* get_ValueXml() ;

/// @brief Method set_ValueXml, addr 0xacfc700, size 0x38, virtual false, abstract: false, final false
inline void set_ValueXml(::System::Xml::XmlNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingValueElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingValueElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingValueElement(SettingValueElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingValueElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingValueElement(SettingValueElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingValueElement) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
