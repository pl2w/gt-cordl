#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationCollectionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConfigurationCollectionAttribute)
namespace System::Configuration {
struct ConfigurationElementCollectionType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationCollectionAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::ConfigurationCollectionAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ConfigurationCollectionAttribute*, "System.Configuration", "ConfigurationCollectionAttribute");
// [AttributeUsage((System.AttributeTargets)132)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ConfigurationCollectionAttribute
class CORDL_TYPE ConfigurationCollectionAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(put=set_AddItemName)) ::StringW  AddItemName;

 __declspec(property(put=set_ClearItemsName)) ::StringW  ClearItemsName;

 __declspec(property(put=set_CollectionType)) ::System::Configuration::ConfigurationElementCollectionType  CollectionType;

 __declspec(property(put=set_RemoveItemName)) ::StringW  RemoveItemName;

static inline ::System::Configuration::ConfigurationCollectionAttribute* New_ctor(::System::Type*  itemType) ;

/// @brief Method .ctor, addr 0xa84ed60, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  itemType) ;

/// @brief Method set_AddItemName, addr 0xa84ed64, size 0x4, virtual false, abstract: false, final false
inline void set_AddItemName(::StringW  value) ;

/// @brief Method set_ClearItemsName, addr 0xa84ed68, size 0x4, virtual false, abstract: false, final false
inline void set_ClearItemsName(::StringW  value) ;

/// @brief Method set_CollectionType, addr 0xa84ed6c, size 0x4, virtual false, abstract: false, final false
inline void set_CollectionType(::System::Configuration::ConfigurationElementCollectionType  value) ;

/// @brief Method set_RemoveItemName, addr 0xa84ed70, size 0x4, virtual false, abstract: false, final false
inline void set_RemoveItemName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigurationCollectionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationCollectionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationCollectionAttribute(ConfigurationCollectionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationCollectionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationCollectionAttribute(ConfigurationCollectionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33068};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ConfigurationCollectionAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
