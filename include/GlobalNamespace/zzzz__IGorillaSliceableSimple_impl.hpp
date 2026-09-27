#pragma once
// IWYU pragma private; include "GlobalNamespace/IGorillaSliceableSimple.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGorillaSliceableSimple.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGorillaSliceableSimple::*)()>(&::GlobalNamespace::IGorillaSliceableSimple::SliceUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IGorillaSliceableSimple*>(),
                    {::i2c::class_of<::GlobalNamespace::IGorillaSliceableSimple*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IGorillaSliceableSimple::SliceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IGorillaSliceableSimple*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
