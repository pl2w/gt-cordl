#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineSmoother.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineSmoother_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineSmoother.SmoothSplineNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineSmoother::*)()>(&::Unity::Cinemachine::CinemachineSplineSmoother::SmoothSplineNow)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0xaee0400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineSmoother*>(),
                        {"SmoothSplineNow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineSplineSmoother._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineSplineSmoother::*)()>(&::Unity::Cinemachine::CinemachineSplineSmoother::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee0894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineSmoother*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Cinemachine::CinemachineSplineSmoother::__cordl_internal_get_AutoSmooth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSmooth;
}
constexpr bool const& Unity::Cinemachine::CinemachineSplineSmoother::__cordl_internal_get_AutoSmooth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSmooth;
}
constexpr void Unity::Cinemachine::CinemachineSplineSmoother::__cordl_internal_set_AutoSmooth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoSmooth = value;
}
inline void Unity::Cinemachine::CinemachineSplineSmoother::SmoothSplineNow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineSmoother*>(),
                        {"SmoothSplineNow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineSplineSmoother::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineSplineSmoother*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineSplineSmoother* Unity::Cinemachine::CinemachineSplineSmoother::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineSplineSmoother*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineSplineSmoother::CinemachineSplineSmoother()   {
}
