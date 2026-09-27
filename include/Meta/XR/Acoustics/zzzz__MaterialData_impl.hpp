#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MaterialData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__MaterialData_def.hpp"
#include "Meta/XR/Acoustics/zzzz__Spectrum_def.hpp"
//  Writing Method size for method: ::Meta::XR::Acoustics::MaterialData.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Acoustics::MaterialData::*)(::Meta::XR::Acoustics::MaterialData*)>(&::Meta::XR::Acoustics::MaterialData::Clone)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9ebea3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::MaterialData*>(),
                        {"Clone", {}, {::i2c::type_of<::Meta::XR::Acoustics::MaterialData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::MaterialData.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::Acoustics::MaterialData::*)()>(&::Meta::XR::Acoustics::MaterialData::get_IsEmpty)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ebeb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::MaterialData*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::MaterialData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::Acoustics::MaterialData::*)()>(&::Meta::XR::Acoustics::MaterialData::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ebebc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::MaterialData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::Acoustics::Spectrum*& Meta::XR::Acoustics::MaterialData::__cordl_internal_get_absorption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absorption;
}
constexpr ::Meta::XR::Acoustics::Spectrum* const& Meta::XR::Acoustics::MaterialData::__cordl_internal_get_absorption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absorption;
}
constexpr void Meta::XR::Acoustics::MaterialData::__cordl_internal_set_absorption(::Meta::XR::Acoustics::Spectrum*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absorption = value;
}
constexpr ::Meta::XR::Acoustics::Spectrum*& Meta::XR::Acoustics::MaterialData::__cordl_internal_get_transmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transmission;
}
constexpr ::Meta::XR::Acoustics::Spectrum* const& Meta::XR::Acoustics::MaterialData::__cordl_internal_get_transmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transmission;
}
constexpr void Meta::XR::Acoustics::MaterialData::__cordl_internal_set_transmission(::Meta::XR::Acoustics::Spectrum*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transmission = value;
}
constexpr ::Meta::XR::Acoustics::Spectrum*& Meta::XR::Acoustics::MaterialData::__cordl_internal_get_scattering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scattering;
}
constexpr ::Meta::XR::Acoustics::Spectrum* const& Meta::XR::Acoustics::MaterialData::__cordl_internal_get_scattering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scattering;
}
constexpr void Meta::XR::Acoustics::MaterialData::__cordl_internal_set_scattering(::Meta::XR::Acoustics::Spectrum*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scattering = value;
}
constexpr ::UnityEngine::Color& Meta::XR::Acoustics::MaterialData::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& Meta::XR::Acoustics::MaterialData::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void Meta::XR::Acoustics::MaterialData::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
inline void Meta::XR::Acoustics::MaterialData::Clone(::Meta::XR::Acoustics::MaterialData*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::MaterialData*>(),
                        {"Clone", {}, {::i2c::type_of<::Meta::XR::Acoustics::MaterialData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool Meta::XR::Acoustics::MaterialData::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::MaterialData*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::Acoustics::MaterialData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::Acoustics::MaterialData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::Acoustics::MaterialData* Meta::XR::Acoustics::MaterialData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::Acoustics::MaterialData*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::Acoustics::MaterialData::MaterialData()   {
}
