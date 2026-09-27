#pragma once
// IWYU pragma private; include "System/Configuration/ConfigXmlDocument.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigXmlDocument)
namespace System::Configuration::Internal {
class IConfigErrorInfo;
}
namespace System::Xml {
class XmlTextReader;
}
// Forward declare root types
namespace System::Configuration {
class ConfigXmlDocument;
}
// Write type traits
MARK_REF_T(::System::Configuration::ConfigXmlDocument*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigXmlDocument*, "System.Configuration", "ConfigXmlDocument");
// Dependencies System.Xml.XmlDocument
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigXmlDocument
class CORDL_TYPE ConfigXmlDocument : public ::System::Xml::XmlDocument {
public:
// Declarations
 __declspec(property(get=get_Filename)) ::StringW  Filename;

 __declspec(property(get=get_LineNumber)) int32_t  LineNumber;

/// @brief Convert operator to "::System::Configuration::Internal::IConfigErrorInfo"
constexpr operator  ::System::Configuration::Internal::IConfigErrorInfo*() noexcept;

/// @brief Method LoadSingleElement, addr 0xacfca48, size 0x38, virtual false, abstract: false, final false
inline void LoadSingleElement(::StringW  filename, ::System::Xml::XmlTextReader*  sourceReader) ;

static inline ::System::Configuration::ConfigXmlDocument* New_ctor() ;

/// @brief Method System.Configuration.Internal.IConfigErrorInfo.get_Filename, addr 0xacfc9d8, size 0x38, virtual true, abstract: false, final true
inline ::StringW System_Configuration_Internal_IConfigErrorInfo_get_Filename() ;

/// @brief Method System.Configuration.Internal.IConfigErrorInfo.get_LineNumber, addr 0xacfca10, size 0x38, virtual true, abstract: false, final true
inline int32_t System_Configuration_Internal_IConfigErrorInfo_get_LineNumber() ;

/// @brief Method .ctor, addr 0xacfc930, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Filename, addr 0xacfc968, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Filename() ;

/// @brief Method get_LineNumber, addr 0xacfc9a0, size 0x38, virtual false, abstract: false, final false
inline int32_t get_LineNumber() ;

/// @brief Convert to "::System::Configuration::Internal::IConfigErrorInfo"
constexpr ::System::Configuration::Internal::IConfigErrorInfo* i___System__Configuration__Internal__IConfigErrorInfo() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigXmlDocument() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigXmlDocument", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigXmlDocument(ConfigXmlDocument && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigXmlDocument", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigXmlDocument(ConfigXmlDocument const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11028};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ConfigXmlDocument) == 0x140, "Size mismatch!");

} // namespace end def System::Configuration
