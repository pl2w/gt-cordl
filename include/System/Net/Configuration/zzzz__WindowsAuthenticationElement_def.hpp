#pragma once
// IWYU pragma private; include "System/Net/Configuration/WindowsAuthenticationElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsAuthenticationElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class WindowsAuthenticationElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::WindowsAuthenticationElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::WindowsAuthenticationElement*, "System.Net.Configuration", "WindowsAuthenticationElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.WindowsAuthenticationElement
class CORDL_TYPE WindowsAuthenticationElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_DefaultCredentialsHandleCacheSize, put=set_DefaultCredentialsHandleCacheSize)) int32_t  DefaultCredentialsHandleCacheSize;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

static inline ::System::Net::Configuration::WindowsAuthenticationElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacfaf90, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCredentialsHandleCacheSize, addr 0xacfafc8, size 0x38, virtual false, abstract: false, final false
inline int32_t get_DefaultCredentialsHandleCacheSize() ;

/// @brief Method get_Properties, addr 0xacfb038, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method set_DefaultCredentialsHandleCacheSize, addr 0xacfb000, size 0x38, virtual false, abstract: false, final false
inline void set_DefaultCredentialsHandleCacheSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WindowsAuthenticationElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WindowsAuthenticationElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WindowsAuthenticationElement(WindowsAuthenticationElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WindowsAuthenticationElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WindowsAuthenticationElement(WindowsAuthenticationElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::WindowsAuthenticationElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
