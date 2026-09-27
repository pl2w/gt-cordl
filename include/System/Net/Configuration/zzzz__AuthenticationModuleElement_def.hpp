#pragma once
// IWYU pragma private; include "System/Net/Configuration/AuthenticationModuleElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AuthenticationModuleElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class AuthenticationModuleElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::AuthenticationModuleElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::AuthenticationModuleElement*, "System.Net.Configuration", "AuthenticationModuleElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.AuthenticationModuleElement
class CORDL_TYPE AuthenticationModuleElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_Type, put=set_Type)) ::StringW  Type;

static inline ::System::Net::Configuration::AuthenticationModuleElement* New_ctor() ;

static inline ::System::Net::Configuration::AuthenticationModuleElement* New_ctor(::StringW  typeName) ;

/// @brief Method .ctor, addr 0xacf7918, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacf7950, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  typeName) ;

/// @brief Method get_Properties, addr 0xacf7988, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_Type, addr 0xacf79c0, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Type() ;

/// @brief Method set_Type, addr 0xacf79f8, size 0x38, virtual false, abstract: false, final false
inline void set_Type(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationModuleElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationModuleElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationModuleElement(AuthenticationModuleElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationModuleElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationModuleElement(AuthenticationModuleElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10976};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::AuthenticationModuleElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
