#pragma once
// IWYU pragma private; include "System/Net/Configuration/SmtpNetworkElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmtpNetworkElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class SmtpNetworkElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::SmtpNetworkElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::SmtpNetworkElement*, "System.Net.Configuration", "SmtpNetworkElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.SmtpNetworkElement
class CORDL_TYPE SmtpNetworkElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_ClientDomain, put=set_ClientDomain)) ::StringW  ClientDomain;

 __declspec(property(get=get_DefaultCredentials, put=set_DefaultCredentials)) bool  DefaultCredentials;

 __declspec(property(get=get_EnableSsl, put=set_EnableSsl)) bool  EnableSsl;

 __declspec(property(get=get_Host, put=set_Host)) ::StringW  Host;

 __declspec(property(get=get_Password, put=set_Password)) ::StringW  Password;

 __declspec(property(get=get_Port, put=set_Port)) int32_t  Port;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_TargetName, put=set_TargetName)) ::StringW  TargetName;

 __declspec(property(get=get_UserName, put=set_UserName)) ::StringW  UserName;

static inline ::System::Net::Configuration::SmtpNetworkElement* New_ctor() ;

/// @brief Method PostDeserialize, addr 0xacf9da0, size 0x38, virtual true, abstract: false, final false
inline void PostDeserialize() ;

/// @brief Method .ctor, addr 0xacf99b0, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ClientDomain, addr 0xacf99e8, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_ClientDomain() ;

/// @brief Method get_DefaultCredentials, addr 0xacf9a58, size 0x38, virtual false, abstract: false, final false
inline bool get_DefaultCredentials() ;

/// @brief Method get_EnableSsl, addr 0xacf9ac8, size 0x38, virtual false, abstract: false, final false
inline bool get_EnableSsl() ;

/// @brief Method get_Host, addr 0xacf9b38, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Host() ;

/// @brief Method get_Password, addr 0xacf9ba8, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Password() ;

/// @brief Method get_Port, addr 0xacf9c18, size 0x38, virtual false, abstract: false, final false
inline int32_t get_Port() ;

/// @brief Method get_Properties, addr 0xacf9c88, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_TargetName, addr 0xacf9cc0, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_TargetName() ;

/// @brief Method get_UserName, addr 0xacf9d30, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_UserName() ;

/// @brief Method set_ClientDomain, addr 0xacf9a20, size 0x38, virtual false, abstract: false, final false
inline void set_ClientDomain(::StringW  value) ;

/// @brief Method set_DefaultCredentials, addr 0xacf9a90, size 0x38, virtual false, abstract: false, final false
inline void set_DefaultCredentials(bool  value) ;

/// @brief Method set_EnableSsl, addr 0xacf9b00, size 0x38, virtual false, abstract: false, final false
inline void set_EnableSsl(bool  value) ;

/// @brief Method set_Host, addr 0xacf9b70, size 0x38, virtual false, abstract: false, final false
inline void set_Host(::StringW  value) ;

/// @brief Method set_Password, addr 0xacf9be0, size 0x38, virtual false, abstract: false, final false
inline void set_Password(::StringW  value) ;

/// @brief Method set_Port, addr 0xacf9c50, size 0x38, virtual false, abstract: false, final false
inline void set_Port(int32_t  value) ;

/// @brief Method set_TargetName, addr 0xacf9cf8, size 0x38, virtual false, abstract: false, final false
inline void set_TargetName(::StringW  value) ;

/// @brief Method set_UserName, addr 0xacf9d68, size 0x38, virtual false, abstract: false, final false
inline void set_UserName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmtpNetworkElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmtpNetworkElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmtpNetworkElement(SmtpNetworkElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmtpNetworkElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmtpNetworkElement(SmtpNetworkElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::SmtpNetworkElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
