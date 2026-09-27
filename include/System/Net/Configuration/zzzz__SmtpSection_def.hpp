#pragma once
// IWYU pragma private; include "System/Net/Configuration/SmtpSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SmtpSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
class SmtpNetworkElement;
}
namespace System::Net::Configuration {
class SmtpSpecifiedPickupDirectoryElement;
}
namespace System::Net::Mail {
struct SmtpDeliveryFormat;
}
namespace System::Net::Mail {
struct SmtpDeliveryMethod;
}
// Forward declare root types
namespace System::Net::Configuration {
class SmtpSection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::SmtpSection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::SmtpSection*, "System.Net.Configuration", "SmtpSection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.SmtpSection
class CORDL_TYPE SmtpSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_DeliveryFormat, put=set_DeliveryFormat)) ::System::Net::Mail::SmtpDeliveryFormat  DeliveryFormat;

 __declspec(property(get=get_DeliveryMethod, put=set_DeliveryMethod)) ::System::Net::Mail::SmtpDeliveryMethod  DeliveryMethod;

 __declspec(property(get=get_From, put=set_From)) ::StringW  From;

 __declspec(property(get=get_Network)) ::System::Net::Configuration::SmtpNetworkElement*  Network;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_SpecifiedPickupDirectory)) ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*  SpecifiedPickupDirectory;

static inline ::System::Net::Configuration::SmtpSection* New_ctor() ;

/// @brief Method .ctor, addr 0xacf9780, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DeliveryFormat, addr 0xacf97b8, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Mail::SmtpDeliveryFormat get_DeliveryFormat() ;

/// @brief Method get_DeliveryMethod, addr 0xacf9828, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Mail::SmtpDeliveryMethod get_DeliveryMethod() ;

/// @brief Method get_From, addr 0xacf9898, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_From() ;

/// @brief Method get_Network, addr 0xacf9908, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::SmtpNetworkElement* get_Network() ;

/// @brief Method get_Properties, addr 0xacf9940, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_SpecifiedPickupDirectory, addr 0xacf9978, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* get_SpecifiedPickupDirectory() ;

/// @brief Method set_DeliveryFormat, addr 0xacf97f0, size 0x38, virtual false, abstract: false, final false
inline void set_DeliveryFormat(::System::Net::Mail::SmtpDeliveryFormat  value) ;

/// @brief Method set_DeliveryMethod, addr 0xacf9860, size 0x38, virtual false, abstract: false, final false
inline void set_DeliveryMethod(::System::Net::Mail::SmtpDeliveryMethod  value) ;

/// @brief Method set_From, addr 0xacf98d0, size 0x38, virtual false, abstract: false, final false
inline void set_From(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmtpSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmtpSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmtpSection(SmtpSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmtpSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmtpSection(SmtpSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10997};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::SmtpSection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
