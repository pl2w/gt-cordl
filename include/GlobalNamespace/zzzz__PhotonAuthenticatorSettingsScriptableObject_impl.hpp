#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonAuthenticatorSettingsScriptableObject.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonAuthenticatorSettingsScriptableObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::*)()>(&::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab2080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_get_PunAppId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PunAppId;
}
constexpr ::StringW const& GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_get_PunAppId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PunAppId;
}
constexpr void GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_set_PunAppId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PunAppId = value;
}
constexpr ::StringW& GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_get_FusionAppId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FusionAppId;
}
constexpr ::StringW const& GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_get_FusionAppId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FusionAppId;
}
constexpr void GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_set_FusionAppId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FusionAppId = value;
}
constexpr ::StringW& GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_get_VoiceAppId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceAppId;
}
constexpr ::StringW const& GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_get_VoiceAppId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoiceAppId;
}
constexpr void GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::__cordl_internal_set_VoiceAppId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoiceAppId = value;
}
inline void GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject* GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonAuthenticatorSettingsScriptableObject::PhotonAuthenticatorSettingsScriptableObject()   {
}
