#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDoNotUpgrade.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDoNotUpgrade_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineDoNotUpgrade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineDoNotUpgrade::*)()>(&::Unity::Cinemachine::CinemachineDoNotUpgrade::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaecc0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDoNotUpgrade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineDoNotUpgrade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineDoNotUpgrade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineDoNotUpgrade* Unity::Cinemachine::CinemachineDoNotUpgrade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineDoNotUpgrade*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineDoNotUpgrade::CinemachineDoNotUpgrade()   {
}
