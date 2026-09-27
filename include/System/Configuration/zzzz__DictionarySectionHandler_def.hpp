#pragma once
// IWYU pragma private; include "System/Configuration/DictionarySectionHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DictionarySectionHandler)
namespace System::Configuration {
class IConfigurationSectionHandler;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class DictionarySectionHandler;
}
// Write type traits
MARK_REF_T(::System::Configuration::DictionarySectionHandler*);
DEFINE_IL2CPP_CLASS(::System::Configuration::DictionarySectionHandler*, "System.Configuration", "DictionarySectionHandler");
// Dependencies System.Object
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.DictionarySectionHandler
class CORDL_TYPE DictionarySectionHandler : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_KeyAttributeName)) ::StringW  KeyAttributeName;

 __declspec(property(get=get_ValueAttributeName)) ::StringW  ValueAttributeName;

/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr operator  ::System::Configuration::IConfigurationSectionHandler*() noexcept;

/// @brief Method Create, addr 0xacfcb64, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* Create(::System::Object*  parent, ::System::Object*  context, ::System::Xml::XmlNode*  section) ;

static inline ::System::Configuration::DictionarySectionHandler* New_ctor() ;

/// @brief Method .ctor, addr 0xacfcabc, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_KeyAttributeName, addr 0xacfcaf4, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_KeyAttributeName() ;

/// @brief Method get_ValueAttributeName, addr 0xacfcb2c, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_ValueAttributeName() ;

/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* i___System__Configuration__IConfigurationSectionHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictionarySectionHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictionarySectionHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionarySectionHandler(DictionarySectionHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionarySectionHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionarySectionHandler(DictionarySectionHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::DictionarySectionHandler) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
