#pragma once
// IWYU pragma private; include "Oculus/Interaction/Unity/Input/InputAxis.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Unity/Input/zzzz__InputAxis_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Unity::Input::InputAxis.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Unity::Input::InputAxis::*)()>(&::Oculus::Interaction::Unity::Input::InputAxis::Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4928a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputAxis*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Unity::Input::InputAxis._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Unity::Input::InputAxis::*)()>(&::Oculus::Interaction::Unity::Input::InputAxis::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4928b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputAxis*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::Unity::Input::InputAxis::__cordl_internal_get__axisName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisName;
}
constexpr ::StringW const& Oculus::Interaction::Unity::Input::InputAxis::__cordl_internal_get__axisName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisName;
}
constexpr void Oculus::Interaction::Unity::Input::InputAxis::__cordl_internal_set__axisName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axisName = value;
}
inline float_t Oculus::Interaction::Unity::Input::InputAxis::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputAxis*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Unity::Input::InputAxis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputAxis*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Unity::Input::InputAxis* Oculus::Interaction::Unity::Input::InputAxis::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Unity::Input::InputAxis*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr  Oculus::Interaction::Unity::Input::InputAxis::operator ::Oculus::Interaction::Input::IAxis1D*() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Unity::Input::InputAxis::i___Oculus__Interaction__Input__IAxis1D() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Unity::Input::InputAxis::InputAxis()   {
}
