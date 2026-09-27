#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationElementCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConfigurationElementCollection)
namespace System::Configuration {
struct ConfigurationElementCollectionType;
}
namespace System::Configuration {
class ConfigurationElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationElementCollection;
}
// Write type traits
MARK_REF_T(::System::Configuration::ConfigurationElementCollection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigurationElementCollection*, "System.Configuration", "ConfigurationElementCollection");
// [DebuggerDisplay("Count = {Count}")]
// Dependencies System.Configuration.ConfigurationElement
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationElementCollection
class CORDL_TYPE ConfigurationElementCollection : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_CollectionType)) ::System::Configuration::ConfigurationElementCollectionType  CollectionType;

 __declspec(property(get=get_ElementName)) ::StringW  ElementName;

 __declspec(property(get=get_ThrowOnDuplicate)) bool  ThrowOnDuplicate;

/// @brief Method CreateNewElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Configuration::ConfigurationElement* CreateNewElement() ;

/// @brief Method GetElementKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement*  element) ;

/// @brief Method get_CollectionType, addr 0xa84ecb8, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElementCollectionType get_CollectionType() ;

/// @brief Method get_ElementName, addr 0xa84ecf0, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_ElementName() ;

/// @brief Method get_ThrowOnDuplicate, addr 0xa84ed28, size 0x38, virtual true, abstract: false, final false
inline bool get_ThrowOnDuplicate() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationElementCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationElementCollection(ConfigurationElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationElementCollection(ConfigurationElementCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33066};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ConfigurationElementCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
