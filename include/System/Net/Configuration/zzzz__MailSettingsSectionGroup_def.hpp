#pragma once
// IWYU pragma private; include "System/Net/Configuration/MailSettingsSectionGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSectionGroup_def.hpp"
CORDL_MODULE_EXPORT(MailSettingsSectionGroup)
namespace System::Net::Configuration {
class SmtpSection;
}
// Forward declare root types
namespace System::Net::Configuration {
class MailSettingsSectionGroup;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::MailSettingsSectionGroup*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::MailSettingsSectionGroup*, "System.Net.Configuration", "MailSettingsSectionGroup");
// Dependencies System.Configuration.ConfigurationSectionGroup
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.MailSettingsSectionGroup
class CORDL_TYPE MailSettingsSectionGroup : public ::System::Configuration::ConfigurationSectionGroup {
public:
// Declarations
 __declspec(property(get=get_Smtp)) ::System::Net::Configuration::SmtpSection*  Smtp;

static inline ::System::Net::Configuration::MailSettingsSectionGroup* New_ctor() ;

/// @brief Method .ctor, addr 0xacf9710, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Smtp, addr 0xacf9748, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::SmtpSection* get_Smtp() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MailSettingsSectionGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MailSettingsSectionGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MailSettingsSectionGroup(MailSettingsSectionGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MailSettingsSectionGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MailSettingsSectionGroup(MailSettingsSectionGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::MailSettingsSectionGroup) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
