#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTouchInputMapper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTouchInputMapper_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTouchInputMapper.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTouchInputMapper::*)()>(&::Unity::Cinemachine::CinemachineTouchInputMapper::Start)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaeda0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTouchInputMapper*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTouchInputMapper.GetInputAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineTouchInputMapper::*)(::StringW)>(&::Unity::Cinemachine::CinemachineTouchInputMapper::GetInputAxis)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaeda198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTouchInputMapper*>(),
                        {"GetInputAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTouchInputMapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTouchInputMapper::*)()>(&::Unity::Cinemachine::CinemachineTouchInputMapper::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaeda25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTouchInputMapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_get_TouchSensitivityX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TouchSensitivityX;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_get_TouchSensitivityX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TouchSensitivityX;
}
constexpr void Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_set_TouchSensitivityX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TouchSensitivityX = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_get_TouchSensitivityY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TouchSensitivityY;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_get_TouchSensitivityY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TouchSensitivityY;
}
constexpr void Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_set_TouchSensitivityY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TouchSensitivityY = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_get_TouchXInputMapTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TouchXInputMapTo;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_get_TouchXInputMapTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TouchXInputMapTo;
}
constexpr void Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_set_TouchXInputMapTo(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TouchXInputMapTo = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_get_TouchYInputMapTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TouchYInputMapTo;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_get_TouchYInputMapTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TouchYInputMapTo;
}
constexpr void Unity::Cinemachine::CinemachineTouchInputMapper::__cordl_internal_set_TouchYInputMapTo(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TouchYInputMapTo = value;
}
inline void Unity::Cinemachine::CinemachineTouchInputMapper::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTouchInputMapper*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineTouchInputMapper::GetInputAxis(::StringW  axisName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTouchInputMapper*>(),
                        {"GetInputAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, axisName);
}
inline void Unity::Cinemachine::CinemachineTouchInputMapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTouchInputMapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineTouchInputMapper* Unity::Cinemachine::CinemachineTouchInputMapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineTouchInputMapper*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineTouchInputMapper::CinemachineTouchInputMapper()   {
}
