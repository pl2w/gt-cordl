#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestObjectDestroyer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PerfTestObjectDestroyer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerfTestObjectDestroyer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestObjectDestroyer::*)()>(&::GlobalNamespace::PerfTestObjectDestroyer::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56bcec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestObjectDestroyer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerfTestObjectDestroyer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerfTestObjectDestroyer::*)()>(&::GlobalNamespace::PerfTestObjectDestroyer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bcf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestObjectDestroyer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerfTestObjectDestroyer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestObjectDestroyer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PerfTestObjectDestroyer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerfTestObjectDestroyer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerfTestObjectDestroyer* GlobalNamespace::PerfTestObjectDestroyer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerfTestObjectDestroyer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerfTestObjectDestroyer::PerfTestObjectDestroyer()   {
}
