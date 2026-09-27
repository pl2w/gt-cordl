#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAudioSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAudioSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MetaXRAudioSettings> (*)()>(&::GlobalNamespace::MetaXRAudioSettings::get_Instance)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9ebdbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAudioSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAudioSettings::*)()>(&::GlobalNamespace::MetaXRAudioSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ebdd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MetaXRAudioSettings::__cordl_internal_get_voiceLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceLimit;
}
constexpr int32_t const& GlobalNamespace::MetaXRAudioSettings::__cordl_internal_get_voiceLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceLimit;
}
constexpr void GlobalNamespace::MetaXRAudioSettings::__cordl_internal_set_voiceLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceLimit = value;
}
inline void GlobalNamespace::MetaXRAudioSettings::setStaticF_instance(::UnityW<::GlobalNamespace::MetaXRAudioSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MetaXRAudioSettings>, "instance", ::GlobalNamespace::MetaXRAudioSettings*>(std::forward<::UnityW<::GlobalNamespace::MetaXRAudioSettings>>(value));
}
inline ::UnityW<::GlobalNamespace::MetaXRAudioSettings> GlobalNamespace::MetaXRAudioSettings::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MetaXRAudioSettings>, "instance", ::GlobalNamespace::MetaXRAudioSettings*>();
}
inline ::UnityW<::GlobalNamespace::MetaXRAudioSettings> GlobalNamespace::MetaXRAudioSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MetaXRAudioSettings>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MetaXRAudioSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAudioSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAudioSettings* GlobalNamespace::MetaXRAudioSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAudioSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAudioSettings::MetaXRAudioSettings()   {
}
