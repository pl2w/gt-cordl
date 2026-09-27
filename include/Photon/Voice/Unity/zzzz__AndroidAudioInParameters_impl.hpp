#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AndroidAudioInParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__AndroidAudioInParameters_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInParameters::*)()>(&::Photon::Voice::Unity::AndroidAudioInParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_get_EnableAEC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableAEC;
}
constexpr bool const& Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_get_EnableAEC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableAEC;
}
constexpr void Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_set_EnableAEC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableAEC = value;
}
constexpr bool& Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_get_EnableAGC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableAGC;
}
constexpr bool const& Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_get_EnableAGC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableAGC;
}
constexpr void Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_set_EnableAGC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableAGC = value;
}
constexpr bool& Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_get_EnableNS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableNS;
}
constexpr bool const& Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_get_EnableNS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableNS;
}
constexpr void Photon::Voice::Unity::AndroidAudioInParameters::__cordl_internal_set_EnableNS(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableNS = value;
}
inline void Photon::Voice::Unity::AndroidAudioInParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::AndroidAudioInParameters* Photon::Voice::Unity::AndroidAudioInParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::AndroidAudioInParameters*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AndroidAudioInParameters::AndroidAudioInParameters()   {
}
