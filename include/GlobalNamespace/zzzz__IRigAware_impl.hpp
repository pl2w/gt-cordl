#pragma once
// IWYU pragma private; include "GlobalNamespace/IRigAware.hpp"
#include "GlobalNamespace/zzzz__IRigAware_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IRigAware.SetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IRigAware::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::IRigAware::SetRig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IRigAware*>(),
                    {::i2c::class_of<::GlobalNamespace::IRigAware*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IRigAware::SetRig(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IRigAware*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
