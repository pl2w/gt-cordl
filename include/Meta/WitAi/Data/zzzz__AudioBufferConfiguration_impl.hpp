#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioBufferConfiguration.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/zzzz__AudioBufferConfiguration_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::AudioBufferConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioBufferConfiguration::*)()>(&::Meta::WitAi::Data::AudioBufferConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e9a14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBufferConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_get_sampleLengthInMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleLengthInMs;
}
constexpr int32_t const& Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_get_sampleLengthInMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleLengthInMs;
}
constexpr void Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_set_sampleLengthInMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleLengthInMs = value;
}
constexpr float_t& Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_get_micBufferLengthInSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micBufferLengthInSeconds;
}
constexpr float_t const& Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_get_micBufferLengthInSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micBufferLengthInSeconds;
}
constexpr void Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_set_micBufferLengthInSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micBufferLengthInSeconds = value;
}
constexpr ::Meta::WitAi::Data::AudioEncoding*& Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_get_encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr ::Meta::WitAi::Data::AudioEncoding* const& Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_get_encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr void Meta::WitAi::Data::AudioBufferConfiguration::__cordl_internal_set_encoding(::Meta::WitAi::Data::AudioEncoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoding = value;
}
inline void Meta::WitAi::Data::AudioBufferConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioBufferConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioBufferConfiguration* Meta::WitAi::Data::AudioBufferConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::AudioBufferConfiguration*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::AudioBufferConfiguration::AudioBufferConfiguration()   {
}
