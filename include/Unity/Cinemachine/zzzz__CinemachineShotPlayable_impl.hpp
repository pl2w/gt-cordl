#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineShotPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineShotPlayable_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShotPlayable.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineShotPlayable::*)()>(&::Unity::Cinemachine::CinemachineShotPlayable::get_IsValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf00890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotPlayable*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShotPlayable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineShotPlayable::*)()>(&::Unity::Cinemachine::CinemachineShotPlayable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf011b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotPlayable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineShotPlayable::__cordl_internal_get_VirtualCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCamera;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineShotPlayable::__cordl_internal_get_VirtualCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCamera;
}
constexpr void Unity::Cinemachine::CinemachineShotPlayable::__cordl_internal_set_VirtualCamera(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCamera = value;
}
inline bool Unity::Cinemachine::CinemachineShotPlayable::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotPlayable*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineShotPlayable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShotPlayable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineShotPlayable* Unity::Cinemachine::CinemachineShotPlayable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineShotPlayable*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineShotPlayable::CinemachineShotPlayable()   {
}
