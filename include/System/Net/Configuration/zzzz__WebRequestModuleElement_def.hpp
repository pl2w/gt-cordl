#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebRequestModuleElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebRequestModuleElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::WebRequestModuleElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::WebRequestModuleElement*, "System.Net.Configuration", "WebRequestModuleElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.WebRequestModuleElement
class CORDL_TYPE WebRequestModuleElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Prefix, put=set_Prefix)) ::StringW  Prefix;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_Type, put=set_Type)) ::System::Type*  Type;

static inline ::System::Net::Configuration::WebRequestModuleElement* New_ctor() ;

static inline ::System::Net::Configuration::WebRequestModuleElement* New_ctor(::StringW  prefix, ::StringW  type) ;

static inline ::System::Net::Configuration::WebRequestModuleElement* New_ctor(::StringW  prefix, ::System::Type*  type) ;

/// @brief Method .ctor, addr 0xacfb460, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacfb498, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix, ::StringW  type) ;

/// @brief Method .ctor, addr 0xacfb4d0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix, ::System::Type*  type) ;

/// @brief Method get_Prefix, addr 0xacfb508, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Prefix() ;

/// @brief Method get_Properties, addr 0xacfb578, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_Type, addr 0xacfb5b0, size 0x38, virtual false, abstract: false, final false
inline ::System::Type* get_Type() ;

/// @brief Method set_Prefix, addr 0xacfb540, size 0x38, virtual false, abstract: false, final false
inline void set_Prefix(::StringW  value) ;

/// @brief Method set_Type, addr 0xacfb5e8, size 0x38, virtual false, abstract: false, final false
inline void set_Type(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestModuleElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestModuleElement(WebRequestModuleElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestModuleElement(WebRequestModuleElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::WebRequestModuleElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
