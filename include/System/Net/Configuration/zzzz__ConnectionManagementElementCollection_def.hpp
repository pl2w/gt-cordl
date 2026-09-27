#pragma once
// IWYU pragma private; include "System/Net/Configuration/ConnectionManagementElementCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionManagementElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Net::Configuration {
class ConnectionManagementElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementElementCollection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::ConnectionManagementElementCollection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::ConnectionManagementElementCollection*, "System.Net.Configuration", "ConnectionManagementElementCollection");
// [DefaultMember("Item")]
// [ConfigurationCollection(typeof(System.Net.Configuration.ConnectionManagementElement))]
// Dependencies System.Configuration.ConfigurationElementCollection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.ConnectionManagementElementCollection
class CORDL_TYPE ConnectionManagementElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::System::Net::Configuration::ConnectionManagementElement*  Item[];

/// @brief Method Add, addr 0xacf84e8, size 0x38, virtual false, abstract: false, final false
inline void Add(::System::Net::Configuration::ConnectionManagementElement*  element) ;

/// @brief Method Clear, addr 0xacf8520, size 0x38, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateNewElement, addr 0xacf8558, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElement* CreateNewElement() ;

/// @brief Method GetElementKey, addr 0xacf8590, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement*  element) ;

/// @brief Method IndexOf, addr 0xacf85c8, size 0x38, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::Net::Configuration::ConnectionManagementElement*  element) ;

static inline ::System::Net::Configuration::ConnectionManagementElementCollection* New_ctor() ;

/// @brief Method Remove, addr 0xacf8600, size 0x38, virtual false, abstract: false, final false
inline void Remove(::System::Net::Configuration::ConnectionManagementElement*  element) ;

/// @brief Method Remove, addr 0xacf8638, size 0x38, virtual false, abstract: false, final false
inline void Remove(::StringW  name) ;

/// @brief Method RemoveAt, addr 0xacf8670, size 0x38, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method .ctor, addr 0xacf83d0, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xacf8408, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::ConnectionManagementElement* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0xacf8478, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::ConnectionManagementElement* get_Item(::StringW  name) ;

/// @brief Method set_Item, addr 0xacf8440, size 0x38, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::System::Net::Configuration::ConnectionManagementElement*  value) ;

/// @brief Method set_Item, addr 0xacf84b0, size 0x38, virtual false, abstract: false, final false
inline void set_Item(::StringW  name, ::System::Net::Configuration::ConnectionManagementElement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectionManagementElementCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElementCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionManagementElementCollection(ConnectionManagementElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElementCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionManagementElementCollection(ConnectionManagementElementCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10982};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::ConnectionManagementElementCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
