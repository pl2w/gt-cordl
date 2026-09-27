#pragma once
// IWYU pragma private; include "System/Configuration/SchemeSettingElementCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SchemeSettingElementCollection)
namespace System::Configuration {
struct ConfigurationElementCollectionType;
}
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class SchemeSettingElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class SchemeSettingElementCollection;
}
// Write type traits
MARK_REF_T(::System::Configuration::SchemeSettingElementCollection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SchemeSettingElementCollection*, "System.Configuration", "SchemeSettingElementCollection");
// [DefaultMember("Item")]
// [ConfigurationCollection(typeof(System.Configuration.SchemeSettingElement), CollectionType = (System.Configuration.ConfigurationElementCollectionType)1, AddItemName = "add", ClearItemsName = "clear", RemoveItemName = "remove")]
// Dependencies System.Configuration.ConfigurationElementCollection
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SchemeSettingElementCollection
class CORDL_TYPE SchemeSettingElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
// Declarations
 __declspec(property(get=get_CollectionType)) ::System::Configuration::ConfigurationElementCollectionType  CollectionType;

 __declspec(property(get=get_Item)) ::System::Configuration::SchemeSettingElement*  Item[];

/// @brief Method CreateNewElement, addr 0xacfd2d8, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElement* CreateNewElement() ;

/// @brief Method GetElementKey, addr 0xacfd310, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement*  element) ;

/// @brief Method IndexOf, addr 0xacfd348, size 0x38, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::Configuration::SchemeSettingElement*  element) ;

static inline ::System::Configuration::SchemeSettingElementCollection* New_ctor() ;

/// @brief Method .ctor, addr 0xacfd1f8, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CollectionType, addr 0xacfd230, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElementCollectionType get_CollectionType() ;

/// @brief Method get_Item, addr 0xacfd268, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SchemeSettingElement* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0xacfd2a0, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SchemeSettingElement* get_Item(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SchemeSettingElementCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SchemeSettingElementCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SchemeSettingElementCollection(SchemeSettingElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SchemeSettingElementCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SchemeSettingElementCollection(SchemeSettingElementCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11042};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SchemeSettingElementCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
