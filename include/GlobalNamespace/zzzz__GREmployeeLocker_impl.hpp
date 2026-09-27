#pragma once
// IWYU pragma private; include "GlobalNamespace/GREmployeeLocker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GREmployeeLocker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREmployeeLocker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREmployeeLocker::*)()>(&::GlobalNamespace::GREmployeeLocker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587ea64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREmployeeLocker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GREmployeeLocker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREmployeeLocker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREmployeeLocker* GlobalNamespace::GREmployeeLocker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREmployeeLocker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREmployeeLocker::GREmployeeLocker()   {
}
