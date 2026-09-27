#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolumeAccelerator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RigEventVolumeAccelerator_def.hpp"
#include "GlobalNamespace/zzzz__RigEventVolume_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeAccelerator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeAccelerator::*)()>(&::GlobalNamespace::RigEventVolumeAccelerator::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ac2618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeAccelerator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeAccelerator.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeAccelerator::*)()>(&::GlobalNamespace::RigEventVolumeAccelerator::FixedUpdate)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5ac26a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeAccelerator*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeAccelerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeAccelerator::*)()>(&::GlobalNamespace::RigEventVolumeAccelerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac2800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeAccelerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RigEventVolume>& GlobalNamespace::RigEventVolumeAccelerator::__cordl_internal_get_rev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rev;
}
constexpr ::UnityW<::GlobalNamespace::RigEventVolume> const& GlobalNamespace::RigEventVolumeAccelerator::__cordl_internal_get_rev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rev;
}
constexpr void GlobalNamespace::RigEventVolumeAccelerator::__cordl_internal_set_rev(::UnityW<::GlobalNamespace::RigEventVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rev = value;
}
constexpr float_t& GlobalNamespace::RigEventVolumeAccelerator::__cordl_internal_get_multiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplier;
}
constexpr float_t const& GlobalNamespace::RigEventVolumeAccelerator::__cordl_internal_get_multiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplier;
}
constexpr void GlobalNamespace::RigEventVolumeAccelerator::__cordl_internal_set_multiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiplier = value;
}
inline void GlobalNamespace::RigEventVolumeAccelerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeAccelerator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventVolumeAccelerator::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeAccelerator*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventVolumeAccelerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeAccelerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigEventVolumeAccelerator* GlobalNamespace::RigEventVolumeAccelerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigEventVolumeAccelerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigEventVolumeAccelerator::RigEventVolumeAccelerator()   {
}
