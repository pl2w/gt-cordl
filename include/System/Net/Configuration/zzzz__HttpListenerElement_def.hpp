#pragma once
// IWYU pragma private; include "System/Net/Configuration/HttpListenerElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(HttpListenerElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
class HttpListenerTimeoutsElement;
}
// Forward declare root types
namespace System::Net::Configuration {
class HttpListenerElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::HttpListenerElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::HttpListenerElement*, "System.Net.Configuration", "HttpListenerElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.HttpListenerElement
class CORDL_TYPE HttpListenerElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_Timeouts)) ::System::Net::Configuration::HttpListenerTimeoutsElement*  Timeouts;

 __declspec(property(get=get_UnescapeRequestUrl)) bool  UnescapeRequestUrl;

static inline ::System::Net::Configuration::HttpListenerElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacf9128, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0xacf9160, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_Timeouts, addr 0xacf9198, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::HttpListenerTimeoutsElement* get_Timeouts() ;

/// @brief Method get_UnescapeRequestUrl, addr 0xacf91d0, size 0x38, virtual false, abstract: false, final false
inline bool get_UnescapeRequestUrl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerElement(HttpListenerElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerElement(HttpListenerElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10992};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::HttpListenerElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
