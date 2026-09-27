#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDPlayerPrefs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KIDPlayerPrefs_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDPlayerPrefs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDPlayerPrefs::*)()>(&::GlobalNamespace::KIDPlayerPrefs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a3e404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDPlayerPrefs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDPlayerPrefs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDPlayerPrefs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDPlayerPrefs* GlobalNamespace::KIDPlayerPrefs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDPlayerPrefs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDPlayerPrefs::KIDPlayerPrefs()   {
}
