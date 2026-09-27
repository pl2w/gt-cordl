#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis1DFingerUseAPI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__Axis1DFingerUseAPI_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IFingerUseAPI_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Axis1DFingerUseAPI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DFingerUseAPI::*)()>(&::Oculus::Interaction::Axis1DFingerUseAPI::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa46a108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DFingerUseAPI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DFingerUseAPI::*)()>(&::Oculus::Interaction::Axis1DFingerUseAPI::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa46a1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                    {::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DFingerUseAPI.GetFingerUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Axis1DFingerUseAPI::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Axis1DFingerUseAPI::GetFingerUseStrength)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa46a1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {"GetFingerUseStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DFingerUseAPI.InjectAllUseFingerPinchPressureApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DFingerUseAPI::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Axis1DFingerUseAPI::InjectAllUseFingerPinchPressureApi)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa46a31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {"InjectAllUseFingerPinchPressureApi", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DFingerUseAPI.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DFingerUseAPI::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Axis1DFingerUseAPI::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa46a344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DFingerUseAPI.InjectAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DFingerUseAPI::*)(::Oculus::Interaction::Input::IAxis1D*)>(&::Oculus::Interaction::Axis1DFingerUseAPI::InjectAxis)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa46a414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {"InjectAxis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Axis1DFingerUseAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Axis1DFingerUseAPI::*)()>(&::Oculus::Interaction::Axis1DFingerUseAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_set__axis(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get_Hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get_Hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr void Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hand = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get_Axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get_Axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis;
}
constexpr void Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_set_Axis(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis = value;
}
constexpr bool& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Axis1DFingerUseAPI::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::Axis1DFingerUseAPI::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Axis1DFingerUseAPI::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Axis1DFingerUseAPI::GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {"GetFingerUseStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::Axis1DFingerUseAPI::InjectAllUseFingerPinchPressureApi(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::IAxis1D*  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {"InjectAllUseFingerPinchPressureApi", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, axis);
}
inline void Oculus::Interaction::Axis1DFingerUseAPI::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::Axis1DFingerUseAPI::InjectAxis(::Oculus::Interaction::Input::IAxis1D*  pinchPressure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {"InjectAxis", {}, {::i2c::type_of<::Oculus::Interaction::Input::IAxis1D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pinchPressure);
}
inline void Oculus::Interaction::Axis1DFingerUseAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Axis1DFingerUseAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Axis1DFingerUseAPI* Oculus::Interaction::Axis1DFingerUseAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Axis1DFingerUseAPI*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IFingerUseAPI"
constexpr  Oculus::Interaction::Axis1DFingerUseAPI::operator ::Oculus::Interaction::IFingerUseAPI*() noexcept {
return static_cast<::Oculus::Interaction::IFingerUseAPI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IFingerUseAPI"
constexpr ::Oculus::Interaction::IFingerUseAPI* Oculus::Interaction::Axis1DFingerUseAPI::i___Oculus__Interaction__IFingerUseAPI() noexcept {
return static_cast<::Oculus::Interaction::IFingerUseAPI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Axis1DFingerUseAPI::Axis1DFingerUseAPI()   {
}
