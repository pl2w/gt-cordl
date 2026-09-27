#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioEncoding.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_Endian_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_Endian_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::AudioEncoding.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Data::AudioEncoding::*)()>(&::Meta::WitAi::Data::AudioEncoding::ToString)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9e18ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Data::AudioEncoding*>(),
                    {::i2c::class_of<::Meta::WitAi::Data::AudioEncoding*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::AudioEncoding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::AudioEncoding::*)()>(&::Meta::WitAi::Data::AudioEncoding::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e15bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioEncoding*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_numChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numChannels;
}
constexpr int32_t const& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_numChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numChannels;
}
constexpr void Meta::WitAi::Data::AudioEncoding::__cordl_internal_set_numChannels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numChannels = value;
}
constexpr int32_t& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_samplerate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplerate;
}
constexpr int32_t const& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_samplerate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplerate;
}
constexpr void Meta::WitAi::Data::AudioEncoding::__cordl_internal_set_samplerate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplerate = value;
}
constexpr ::StringW& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr ::StringW const& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoding;
}
constexpr void Meta::WitAi::Data::AudioEncoding::__cordl_internal_set_encoding(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoding = value;
}
constexpr int32_t& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_bits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bits;
}
constexpr int32_t const& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_bits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bits;
}
constexpr void Meta::WitAi::Data::AudioEncoding::__cordl_internal_set_bits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bits = value;
}
constexpr ::GlobalNamespace::AudioEncoding_Endian& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_endian()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endian;
}
constexpr ::GlobalNamespace::AudioEncoding_Endian const& Meta::WitAi::Data::AudioEncoding::__cordl_internal_get_endian() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endian;
}
constexpr void Meta::WitAi::Data::AudioEncoding::__cordl_internal_set_endian(::GlobalNamespace::AudioEncoding_Endian  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endian = value;
}
inline ::StringW Meta::WitAi::Data::AudioEncoding::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::AudioEncoding*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Data::AudioEncoding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::AudioEncoding*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::AudioEncoding* Meta::WitAi::Data::AudioEncoding::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::AudioEncoding*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::AudioEncoding::AudioEncoding()   {
}
