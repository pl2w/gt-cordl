#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSDiskCacheSettings.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheLocation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheSettings_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSDiskCacheSettings::*)()>(&::Meta::WitAi::TTS::Data::TTSDiskCacheSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e68e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation& Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_get_DiskCacheLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DiskCacheLocation;
}
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheLocation const& Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_get_DiskCacheLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DiskCacheLocation;
}
constexpr void Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_set_DiskCacheLocation(::Meta::WitAi::TTS::Data::TTSDiskCacheLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DiskCacheLocation = value;
}
constexpr bool& Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_get_StreamFromDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StreamFromDisk;
}
constexpr bool const& Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_get_StreamFromDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StreamFromDisk;
}
constexpr void Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_set_StreamFromDisk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StreamFromDisk = value;
}
constexpr float_t& Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_get_StreamBufferLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StreamBufferLength;
}
constexpr float_t const& Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_get_StreamBufferLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StreamBufferLength;
}
constexpr void Meta::WitAi::TTS::Data::TTSDiskCacheSettings::__cordl_internal_set_StreamBufferLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StreamBufferLength = value;
}
inline void Meta::WitAi::TTS::Data::TTSDiskCacheSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* Meta::WitAi::TTS::Data::TTSDiskCacheSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings::TTSDiskCacheSettings()   {
}
