#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayFabAuthenticatorSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayFabAuthenticatorSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayFabAuthenticatorSettings.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PlayFabAuthenticatorSettings::Load)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ab20c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabAuthenticatorSettings*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabAuthenticatorSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabAuthenticatorSettings::*)()>(&::GlobalNamespace::PlayFabAuthenticatorSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab223c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabAuthenticatorSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_TitleId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TitleId", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_TitleId()  {
return ::cordl_internals::getStaticField<::StringW, "TitleId", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_AuthApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "AuthApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_AuthApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "AuthApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_DailyQuestsApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "DailyQuestsApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_DailyQuestsApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "DailyQuestsApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_FriendApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "FriendApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_FriendApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "FriendApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_HpPromoApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "HpPromoApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_HpPromoApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "HpPromoApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_IapApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "IapApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_IapApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "IapApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_KidApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "KidApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_KidApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "KidApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_MmrApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "MmrApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_MmrApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "MmrApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_ModerationApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ModerationApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_ModerationApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "ModerationApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_ProgressionApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ProgressionApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_ProgressionApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "ProgressionApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_TitleDataApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TitleDataApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_TitleDataApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "TitleDataApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::setStaticF_VotingApiBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "VotingApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayFabAuthenticatorSettings::getStaticF_VotingApiBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "VotingApiBaseUrl", ::GlobalNamespace::PlayFabAuthenticatorSettings*>();
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::Load(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabAuthenticatorSettings*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline void GlobalNamespace::PlayFabAuthenticatorSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabAuthenticatorSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayFabAuthenticatorSettings* GlobalNamespace::PlayFabAuthenticatorSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayFabAuthenticatorSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayFabAuthenticatorSettings::PlayFabAuthenticatorSettings()   {
}
