#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipSharedSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipSharedSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipSharedSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipSharedSettings::*)()>(&::GlobalNamespace::MothershipSharedSettings::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x53c14b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipSharedSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void GlobalNamespace::MothershipSharedSettings::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_EnvironmentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnvironmentId;
}
constexpr ::StringW const& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_EnvironmentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnvironmentId;
}
constexpr void GlobalNamespace::MothershipSharedSettings::__cordl_internal_set_EnvironmentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnvironmentId = value;
}
constexpr ::StringW& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_DeploymentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeploymentId;
}
constexpr ::StringW const& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_DeploymentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeploymentId;
}
constexpr void GlobalNamespace::MothershipSharedSettings::__cordl_internal_set_DeploymentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeploymentId = value;
}
constexpr ::StringW& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_BaseUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseUrl;
}
constexpr ::StringW const& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_BaseUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BaseUrl;
}
constexpr void GlobalNamespace::MothershipSharedSettings::__cordl_internal_set_BaseUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BaseUrl = value;
}
constexpr ::StringW& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_WebSocketUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WebSocketUrl;
}
constexpr ::StringW const& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_WebSocketUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WebSocketUrl;
}
constexpr void GlobalNamespace::MothershipSharedSettings::__cordl_internal_set_WebSocketUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WebSocketUrl = value;
}
constexpr ::StringW& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_ServerApiKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerApiKey;
}
constexpr ::StringW const& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_ServerApiKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerApiKey;
}
constexpr void GlobalNamespace::MothershipSharedSettings::__cordl_internal_set_ServerApiKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerApiKey = value;
}
constexpr bool& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void GlobalNamespace::MothershipSharedSettings::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr bool& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_RequestLoggingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestLoggingEnabled;
}
constexpr bool const& GlobalNamespace::MothershipSharedSettings::__cordl_internal_get_RequestLoggingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestLoggingEnabled;
}
constexpr void GlobalNamespace::MothershipSharedSettings::__cordl_internal_set_RequestLoggingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestLoggingEnabled = value;
}
inline void GlobalNamespace::MothershipSharedSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipSharedSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipSharedSettings* GlobalNamespace::MothershipSharedSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipSharedSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipSharedSettings::MothershipSharedSettings()   {
}
