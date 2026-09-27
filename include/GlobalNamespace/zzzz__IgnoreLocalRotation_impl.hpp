#pragma once
// IWYU pragma private; include "GlobalNamespace/IgnoreLocalRotation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__IgnoreLocalRotation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IgnoreLocalRotation.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IgnoreLocalRotation::*)()>(&::GlobalNamespace::IgnoreLocalRotation::LateUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5654f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IgnoreLocalRotation*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IgnoreLocalRotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IgnoreLocalRotation::*)()>(&::GlobalNamespace::IgnoreLocalRotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5654ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IgnoreLocalRotation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IgnoreLocalRotation::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IgnoreLocalRotation*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IgnoreLocalRotation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::IgnoreLocalRotation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IgnoreLocalRotation* GlobalNamespace::IgnoreLocalRotation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IgnoreLocalRotation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IgnoreLocalRotation::IgnoreLocalRotation()   {
}
