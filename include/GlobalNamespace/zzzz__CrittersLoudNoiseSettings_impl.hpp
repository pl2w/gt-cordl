#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersLoudNoiseSettings.hpp"
#include "GlobalNamespace/zzzz__CrittersActorSettings_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersLoudNoiseSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoiseSettings.UpdateActorSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoiseSettings::*)()>(&::GlobalNamespace::CrittersLoudNoiseSettings::UpdateActorSettings)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56000e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersLoudNoiseSettings*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersLoudNoiseSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersLoudNoiseSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersLoudNoiseSettings::*)()>(&::GlobalNamespace::CrittersLoudNoiseSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x560018c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoiseSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__soundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundVolume;
}
constexpr float_t const& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__soundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundVolume;
}
constexpr void GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_set__soundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____soundVolume = value;
}
constexpr float_t& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__soundDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundDuration;
}
constexpr float_t const& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__soundDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundDuration;
}
constexpr void GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_set__soundDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____soundDuration = value;
}
constexpr bool& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__soundEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundEnabled;
}
constexpr bool const& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__soundEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soundEnabled;
}
constexpr void GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_set__soundEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____soundEnabled = value;
}
constexpr bool& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__disableWhenSoundDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableWhenSoundDisabled;
}
constexpr bool const& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__disableWhenSoundDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableWhenSoundDisabled;
}
constexpr void GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_set__disableWhenSoundDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableWhenSoundDisabled = value;
}
constexpr float_t& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__volumeFearAttractionMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeFearAttractionMultiplier;
}
constexpr float_t const& GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_get__volumeFearAttractionMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeFearAttractionMultiplier;
}
constexpr void GlobalNamespace::CrittersLoudNoiseSettings::__cordl_internal_set__volumeFearAttractionMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeFearAttractionMultiplier = value;
}
inline void GlobalNamespace::CrittersLoudNoiseSettings::UpdateActorSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersLoudNoiseSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersLoudNoiseSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersLoudNoiseSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersLoudNoiseSettings* GlobalNamespace::CrittersLoudNoiseSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersLoudNoiseSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersLoudNoiseSettings::CrittersLoudNoiseSettings()   {
}
