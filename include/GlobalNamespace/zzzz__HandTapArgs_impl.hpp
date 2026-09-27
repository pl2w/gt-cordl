#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapArgs.hpp"
#include "GlobalNamespace/zzzz__FXSArgs_impl.hpp"
#include "GlobalNamespace/zzzz__HandTapArgs_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandTapArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapArgs::*)()>(&::GlobalNamespace::HandTapArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58fe4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HandTapArgs::__cordl_internal_get_soundIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundIndex;
}
constexpr int32_t const& GlobalNamespace::HandTapArgs::__cordl_internal_get_soundIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundIndex;
}
constexpr void GlobalNamespace::HandTapArgs::__cordl_internal_set_soundIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundIndex = value;
}
constexpr bool& GlobalNamespace::HandTapArgs::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::HandTapArgs::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::HandTapArgs::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
constexpr float_t& GlobalNamespace::HandTapArgs::__cordl_internal_get_tapVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapVolume;
}
constexpr float_t const& GlobalNamespace::HandTapArgs::__cordl_internal_get_tapVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapVolume;
}
constexpr void GlobalNamespace::HandTapArgs::__cordl_internal_set_tapVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapVolume = value;
}
inline void GlobalNamespace::HandTapArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandTapArgs* GlobalNamespace::HandTapArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandTapArgs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandTapArgs::HandTapArgs()   {
}
