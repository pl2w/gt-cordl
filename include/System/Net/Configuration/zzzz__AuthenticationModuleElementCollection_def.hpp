#pragma once
// IWYU pragma private; include "System/Net/Configuration/AuthenticationModuleElementCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationModuleElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Net::Configuration {
class AuthenticationModuleElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class AuthenticationModuleElementCollection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::AuthenticationModuleElementCollection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::AuthenticationModuleElementCollection*, "System.Net.Configuration", "AuthenticationModuleElementCollection");
// [DefaultMember("Item")]
// [ConfigurationCollection(typeof(System.Net.Configuration.AuthenticationModuleElement))]
// Dependencies System.Configuration.ConfigurationElementCollection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.AuthenticationModuleElementCollection
class CORDL_TYPE AuthenticationModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::System::Net::Configuration::AuthenticationModuleElement*  Item[];

/// @brief Method Add, addr 0xacf7b48, size 0x38, virtual false, abstract: false, final false
inline void Add(::System::Net::Configuration::AuthenticationModuleElement*  element) ;

/// @brief Method Clear, addr 0xacf7b80, size 0x38, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateNewElement, addr 0xacf7bb8, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElement* CreateNewElement() ;

/// @brief Method GetElementKey, addr 0xacf7bf0, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement*  element) ;

/// @brief Method IndexOf, addr 0xacf7c28, size 0x38, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::Net::Configuration::AuthenticationModuleElement*  element) ;

static inline ::System::Net::Configuration::AuthenticationModuleElementCollection* New_ctor() ;

/// @brief Method Remove, addr 0xacf7c60, size 0x38, virtual false, abstract: false, final false
inline void Remove(::System::Net::Configuration::AuthenticationModuleElement*  element) ;

/// @brief Method Remove, addr 0xacf7c98, size 0x38, virtual false, abstract: false, final false
inline void Remove(::StringW  name) ;

/// @brief Method RemoveAt, addr 0xacf7cd0, size 0x38, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method .ctor, addr 0xacf7a30, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xacf7a68, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::AuthenticationModuleElement* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0xacf7ad8, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::AuthenticationModuleElement* get_Item(::StringW  name) ;

/// @brief Method set_Item, addr 0xacf7aa0, size 0x38, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::System::Net::Configuration::AuthenticationModuleElement*  value) ;

/// @brief Method set_Item, addr 0xacf7b10, size 0x38, virtual false, abstract: false, final false
inline void set_Item(::StringW  name, ::System::Net::Configuration::AuthenticationModuleElement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationModuleElementCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationModuleElementCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationModuleElementCollection(AuthenticationModuleElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationModuleElementCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationModuleElementCollection(AuthenticationModuleElementCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::AuthenticationModuleElementCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
