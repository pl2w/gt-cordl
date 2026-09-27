#pragma once
// IWYU pragma private; include "System/Configuration/SettingElementCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingElementCollection)
namespace System::Configuration {
struct ConfigurationElementCollectionType;
}
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class SettingElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class SettingElementCollection;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingElementCollection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingElementCollection*, "System.Configuration", "SettingElementCollection");
// Dependencies System.Configuration.ConfigurationElementCollection
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingElementCollection
class CORDL_TYPE SettingElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
// Declarations
 __declspec(property(get=get_CollectionType)) ::System::Configuration::ConfigurationElementCollectionType  CollectionType;

 __declspec(property(get=get_ElementName)) ::StringW  ElementName;

/// @brief Method Add, addr 0xacfc310, size 0x38, virtual false, abstract: false, final false
inline void Add(::System::Configuration::SettingElement*  element) ;

/// @brief Method Clear, addr 0xacfc348, size 0x38, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateNewElement, addr 0xacfc380, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElement* CreateNewElement() ;

/// @brief Method Get, addr 0xacfc3b8, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingElement* Get(::StringW  elementKey) ;

/// @brief Method GetElementKey, addr 0xacfc3f0, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement*  element) ;

static inline ::System::Configuration::SettingElementCollection* New_ctor() ;

/// @brief Method Remove, addr 0xacfc428, size 0x38, virtual false, abstract: false, final false
inline void Remove(::System::Configuration::SettingElement*  element) ;

/// @brief Method .ctor, addr 0xacfc268, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CollectionType, addr 0xacfc2a0, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElementCollectionType get_CollectionType() ;

/// @brief Method get_ElementName, addr 0xacfc2d8, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_ElementName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingElementCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingElementCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingElementCollection(SettingElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingElementCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingElementCollection(SettingElementCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingElementCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
