#pragma once
// IWYU pragma private; include "System/Net/Configuration/ProxyElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(ProxyElement)
namespace GlobalNamespace {
struct ProxyElement_AutoDetectValues;
}
namespace GlobalNamespace {
struct ProxyElement_BypassOnLocalValues;
}
namespace GlobalNamespace {
struct ProxyElement_UseSystemDefaultValues;
}
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::Configuration {
class ProxyElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::ProxyElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::ProxyElement*, "System.Net.Configuration", "ProxyElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.ProxyElement
class CORDL_TYPE ProxyElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
using AutoDetectValues = ::GlobalNamespace::ProxyElement_AutoDetectValues;

using BypassOnLocalValues = ::GlobalNamespace::ProxyElement_BypassOnLocalValues;

using UseSystemDefaultValues = ::GlobalNamespace::ProxyElement_UseSystemDefaultValues;

 __declspec(property(get=get_AutoDetect, put=set_AutoDetect)) ::GlobalNamespace::ProxyElement_AutoDetectValues  AutoDetect;

 __declspec(property(get=get_BypassOnLocal, put=set_BypassOnLocal)) ::GlobalNamespace::ProxyElement_BypassOnLocalValues  BypassOnLocal;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_ProxyAddress, put=set_ProxyAddress)) ::System::Uri*  ProxyAddress;

 __declspec(property(get=get_ScriptLocation, put=set_ScriptLocation)) ::System::Uri*  ScriptLocation;

 __declspec(property(get=get_UseSystemDefault, put=set_UseSystemDefault)) ::GlobalNamespace::ProxyElement_UseSystemDefaultValues  UseSystemDefault;

static inline ::System::Net::Configuration::ProxyElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacf8a98, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AutoDetect, addr 0xacf8ad0, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProxyElement_AutoDetectValues get_AutoDetect() ;

/// @brief Method get_BypassOnLocal, addr 0xacf8b40, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProxyElement_BypassOnLocalValues get_BypassOnLocal() ;

/// @brief Method get_Properties, addr 0xacf8bb0, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_ProxyAddress, addr 0xacf8be8, size 0x38, virtual false, abstract: false, final false
inline ::System::Uri* get_ProxyAddress() ;

/// @brief Method get_ScriptLocation, addr 0xacf8c58, size 0x38, virtual false, abstract: false, final false
inline ::System::Uri* get_ScriptLocation() ;

/// @brief Method get_UseSystemDefault, addr 0xacf8cc8, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProxyElement_UseSystemDefaultValues get_UseSystemDefault() ;

/// @brief Method set_AutoDetect, addr 0xacf8b08, size 0x38, virtual false, abstract: false, final false
inline void set_AutoDetect(::GlobalNamespace::ProxyElement_AutoDetectValues  value) ;

/// @brief Method set_BypassOnLocal, addr 0xacf8b78, size 0x38, virtual false, abstract: false, final false
inline void set_BypassOnLocal(::GlobalNamespace::ProxyElement_BypassOnLocalValues  value) ;

/// @brief Method set_ProxyAddress, addr 0xacf8c20, size 0x38, virtual false, abstract: false, final false
inline void set_ProxyAddress(::System::Uri*  value) ;

/// @brief Method set_ScriptLocation, addr 0xacf8c90, size 0x38, virtual false, abstract: false, final false
inline void set_ScriptLocation(::System::Uri*  value) ;

/// @brief Method set_UseSystemDefault, addr 0xacf8d00, size 0x38, virtual false, abstract: false, final false
inline void set_UseSystemDefault(::GlobalNamespace::ProxyElement_UseSystemDefaultValues  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProxyElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProxyElement(ProxyElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProxyElement(ProxyElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10989};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::ProxyElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
