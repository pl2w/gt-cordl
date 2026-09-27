#pragma once
// IWYU pragma private; include "System/Net/Configuration/SmtpSpecifiedPickupDirectoryElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SmtpSpecifiedPickupDirectoryElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class SmtpSpecifiedPickupDirectoryElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*, "System.Net.Configuration", "SmtpSpecifiedPickupDirectoryElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.SmtpSpecifiedPickupDirectoryElement
class CORDL_TYPE SmtpSpecifiedPickupDirectoryElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_PickupDirectoryLocation, put=set_PickupDirectoryLocation)) ::StringW  PickupDirectoryLocation;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

static inline ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacf9dd8, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PickupDirectoryLocation, addr 0xacf9e10, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_PickupDirectoryLocation() ;

/// @brief Method get_Properties, addr 0xacf9e80, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method set_PickupDirectoryLocation, addr 0xacf9e48, size 0x38, virtual false, abstract: false, final false
inline void set_PickupDirectoryLocation(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmtpSpecifiedPickupDirectoryElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmtpSpecifiedPickupDirectoryElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmtpSpecifiedPickupDirectoryElement(SmtpSpecifiedPickupDirectoryElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmtpSpecifiedPickupDirectoryElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmtpSpecifiedPickupDirectoryElement(SmtpSpecifiedPickupDirectoryElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10999};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
