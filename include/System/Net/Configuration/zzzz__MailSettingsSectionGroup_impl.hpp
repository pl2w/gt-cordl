#pragma once
// IWYU pragma private; include "System/Net/Configuration/MailSettingsSectionGroup.hpp"
#include "System/Configuration/zzzz__ConfigurationSectionGroup_impl.hpp"
#include "System/Net/Configuration/zzzz__MailSettingsSectionGroup_def.hpp"
#include "System/Net/Configuration/zzzz__SmtpSection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::MailSettingsSectionGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::MailSettingsSectionGroup::*)()>(&::System::Net::Configuration::MailSettingsSectionGroup::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::MailSettingsSectionGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::MailSettingsSectionGroup.get_Smtp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::SmtpSection* (::System::Net::Configuration::MailSettingsSectionGroup::*)()>(&::System::Net::Configuration::MailSettingsSectionGroup::get_Smtp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::MailSettingsSectionGroup*>(),
                        {"get_Smtp", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::MailSettingsSectionGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::MailSettingsSectionGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::SmtpSection* System::Net::Configuration::MailSettingsSectionGroup::get_Smtp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::MailSettingsSectionGroup*>(),
                        {"get_Smtp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::SmtpSection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::MailSettingsSectionGroup* System::Net::Configuration::MailSettingsSectionGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::MailSettingsSectionGroup*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::MailSettingsSectionGroup::MailSettingsSectionGroup()   {
}
