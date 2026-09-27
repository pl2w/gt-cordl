#pragma once
// IWYU pragma private; include "System/Net/Configuration/BypassElementCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BypassElementCollection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Net::Configuration {
class BypassElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Configuration {
class BypassElementCollection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::BypassElementCollection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::BypassElementCollection*, "System.Net.Configuration", "BypassElementCollection");
// [DefaultMember("Item")]
// [ConfigurationCollection(typeof(System.Net.Configuration.BypassElement))]
// Dependencies System.Configuration.ConfigurationElementCollection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.BypassElementCollection
class CORDL_TYPE BypassElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) ::System::Net::Configuration::BypassElement*  Item[];

 __declspec(property(get=get_ThrowOnDuplicate)) bool  ThrowOnDuplicate;

/// @brief Method Add, addr 0xacf8088, size 0x38, virtual false, abstract: false, final false
inline void Add(::System::Net::Configuration::BypassElement*  element) ;

/// @brief Method Clear, addr 0xacf80c0, size 0x38, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateNewElement, addr 0xacf80f8, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationElement* CreateNewElement() ;

/// @brief Method GetElementKey, addr 0xacf8130, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* GetElementKey(::System::Configuration::ConfigurationElement*  element) ;

/// @brief Method IndexOf, addr 0xacf8168, size 0x38, virtual false, abstract: false, final false
inline int32_t IndexOf(::System::Net::Configuration::BypassElement*  element) ;

static inline ::System::Net::Configuration::BypassElementCollection* New_ctor() ;

/// @brief Method Remove, addr 0xacf81a0, size 0x38, virtual false, abstract: false, final false
inline void Remove(::System::Net::Configuration::BypassElement*  element) ;

/// @brief Method Remove, addr 0xacf81d8, size 0x38, virtual false, abstract: false, final false
inline void Remove(::StringW  name) ;

/// @brief Method RemoveAt, addr 0xacf8210, size 0x38, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method .ctor, addr 0xacf7f38, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xacf7f70, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::BypassElement* get_Item(int32_t  index) ;

/// @brief Method get_Item, addr 0xacf7fe0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::BypassElement* get_Item(::StringW  name) ;

/// @brief Method get_ThrowOnDuplicate, addr 0xacf8050, size 0x38, virtual true, abstract: false, final false
inline bool get_ThrowOnDuplicate() ;

/// @brief Method set_Item, addr 0xacf7fa8, size 0x38, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, ::System::Net::Configuration::BypassElement*  value) ;

/// @brief Method set_Item, addr 0xacf8018, size 0x38, virtual false, abstract: false, final false
inline void set_Item(::StringW  name, ::System::Net::Configuration::BypassElement*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BypassElementCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BypassElementCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BypassElementCollection(BypassElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BypassElementCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BypassElementCollection(BypassElementCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::BypassElementCollection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
