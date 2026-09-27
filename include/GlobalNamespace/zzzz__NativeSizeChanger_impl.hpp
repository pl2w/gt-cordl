#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeSizeChanger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NativeSizeChanger_def.hpp"
#include "GlobalNamespace/zzzz__NativeSizeChangerSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChanger.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeChanger::*)(::GlobalNamespace::NativeSizeChangerSettings*)>(&::GlobalNamespace::NativeSizeChanger::Activate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x56d3920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChanger*>(),
                        {"Activate", {}, {::i2c::type_of<::GlobalNamespace::NativeSizeChangerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChanger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeChanger::*)()>(&::GlobalNamespace::NativeSizeChanger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d39f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChanger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NativeSizeChanger::Activate(::GlobalNamespace::NativeSizeChangerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChanger*>(),
                        {"Activate", {}, {::i2c::type_of<::GlobalNamespace::NativeSizeChangerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GlobalNamespace::NativeSizeChanger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChanger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NativeSizeChanger* GlobalNamespace::NativeSizeChanger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NativeSizeChanger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeSizeChanger::NativeSizeChanger()   {
}
