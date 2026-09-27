#pragma once
// IWYU pragma private; include "Docking/LivCameraDock.hpp"
#include "Docking/zzzz__Dock_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCameraDockSettings_impl.hpp"
#include "Docking/zzzz__LivCameraDock_def.hpp"
//  Writing Method size for method: ::Docking::LivCameraDock.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::LivCameraDock::*)()>(&::Docking::LivCameraDock::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ddcf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::LivCameraDock*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::LivCameraDock.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::LivCameraDock::*)()>(&::Docking::LivCameraDock::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ddcf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::LivCameraDock*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Docking::LivCameraDock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Docking::LivCameraDock::*)()>(&::Docking::LivCameraDock::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddcf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::LivCameraDock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::GorillaTag::GtCameraDockSettings& Docking::LivCameraDock::__cordl_internal_get_cameraSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraSettings;
}
constexpr ::Liv::Lck::GorillaTag::GtCameraDockSettings const& Docking::LivCameraDock::__cordl_internal_get_cameraSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraSettings;
}
constexpr void Docking::LivCameraDock::__cordl_internal_set_cameraSettings(::Liv::Lck::GorillaTag::GtCameraDockSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraSettings = value;
}
inline void Docking::LivCameraDock::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::LivCameraDock*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Docking::LivCameraDock::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::LivCameraDock*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Docking::LivCameraDock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Docking::LivCameraDock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Docking::LivCameraDock* Docking::LivCameraDock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Docking::LivCameraDock*>());
}
// Ctor Parameters []
constexpr ::Docking::LivCameraDock::LivCameraDock()   {
}
