#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebRequestModuleElementCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestModuleElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Net::Configuration {
class WebRequestModuleElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElementCollection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::WebRequestModuleElementCollection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::WebRequestModuleElementCollection*, "System.Net.Configuration", "WebRequestModuleElementCollection");
// [DefaultMember("Item")]
// [ConfigurationCollection(typeof(System.Net.Configuration.WebRequestModuleElement))]
// Dependencies System.Configuration.ConfigurationElementCollection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.WebRequestModuleElementCollection
class CORDL_TYPE WebRequestModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::System::Net::Configuration::WebRequestModuleElement*  Item[];

/// @brief Method Add, addr 0xacfb2a0, size 0x38, virtual false, abstract: false, final false
inline void Add(::System::Net::Configuration::WebRequestModuleElement*  element) ;

/// @brief Method Clear, addr 0xacfb2d8, size 0x38, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateNewElement, addr 0xacfb310, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElement* CreateNewElement() ;

/// @brief Method GetElementKey, addr 0xacfb348, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement*  element) ;

/// @brief Method IndexOf, addr 0xacfb380, size 0x38, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::Net::Configuration::WebRequestModuleElement*  element) ;

static inline ::System::Net::Configuration::WebRequestModuleElementCollection* New_ctor() ;

/// @brief Method Remove, addr 0xacfb3b8, size 0x38, virtual false, abstract: false, final false
inline void Remove(::System::Net::Configuration::WebRequestModuleElement*  element) ;

/// @brief Method Remove, addr 0xacfb3f0, size 0x38, virtual false, abstract: false, final false
inline void Remove(::StringW  name) ;

/// @brief Method RemoveAt, addr 0xacfb428, size 0x38, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method .ctor, addr 0xacfb188, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xacfb1c0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::WebRequestModuleElement* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0xacfb230, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::WebRequestModuleElement* get_Item(::StringW  name) ;

/// @brief Method set_Item, addr 0xacfb1f8, size 0x38, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::System::Net::Configuration::WebRequestModuleElement*  value) ;

/// @brief Method set_Item, addr 0xacfb268, size 0x38, virtual false, abstract: false, final false
inline void set_Item(::StringW  name, ::System::Net::Configuration::WebRequestModuleElement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestModuleElementCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElementCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestModuleElementCollection(WebRequestModuleElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElementCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestModuleElementCollection(WebRequestModuleElementCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11010};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::WebRequestModuleElementCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
