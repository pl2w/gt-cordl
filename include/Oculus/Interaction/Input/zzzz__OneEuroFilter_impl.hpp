#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OneEuroFilter.hpp"
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilter_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_def.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilter_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter::*)()>(&::Oculus::Interaction::Input::OneEuroFilter::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa513a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OneEuroFilter::*)(float_t)>(&::Oculus::Interaction::Input::OneEuroFilter::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa513a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"set_Value", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OneEuroFilter::*)()>(&::Oculus::Interaction::Input::OneEuroFilter::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa513a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.SetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OneEuroFilter::*)(::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>)>(&::Oculus::Interaction::Input::OneEuroFilter::SetProperties)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa513b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"SetProperties", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.Step
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter::*)(float_t, float_t)>(&::Oculus::Interaction::Input::OneEuroFilter::Step)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa513b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"Step", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OneEuroFilter::*)()>(&::Oculus::Interaction::Input::OneEuroFilter::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa513cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.GetAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter::*)(float_t, float_t)>(&::Oculus::Interaction::Input::OneEuroFilter::GetAlpha)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa513c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"GetAlpha", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.CreateFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>* (*)()>(&::Oculus::Interaction::Input::OneEuroFilter::CreateFloat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa513d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.CreateVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector2>* (*)()>(&::Oculus::Interaction::Input::OneEuroFilter::CreateVector2)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa513d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateVector2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.CreateVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* (*)()>(&::Oculus::Interaction::Input::OneEuroFilter::CreateVector3)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa513f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateVector3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.CreateVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector4>* (*)()>(&::Oculus::Interaction::Input::OneEuroFilter::CreateVector4)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa5140f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateVector4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.CreateQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>* (*)()>(&::Oculus::Interaction::Input::OneEuroFilter::CreateQuaternion)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa5142b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateQuaternion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.CreatePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Pose>* (*)()>(&::Oculus::Interaction::Input::OneEuroFilter::CreatePose)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa514468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreatePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter.Oculus_Interaction_Input_IOneEuroFilter_System_Single__SetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OneEuroFilter::*)(::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>)>(&::Oculus::Interaction::Input::OneEuroFilter::Oculus_Interaction_Input_IOneEuroFilter_System_Single__SetProperties)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa514620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"Oculus.Interaction.Input.IOneEuroFilter<System.Single>.SetProperties", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__Value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__Value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
constexpr void Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_set__Value_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Value_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr void Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_set__properties(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____properties = value;
}
constexpr bool& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__isFirstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFirstUpdate;
}
constexpr bool const& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__isFirstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFirstUpdate;
}
constexpr void Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_set__isFirstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFirstUpdate = value;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__xfilt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xfilt;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter* const& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__xfilt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xfilt;
}
constexpr void Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_set__xfilt(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xfilt = value;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__dxfilt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dxfilt;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter* const& Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_get__dxfilt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dxfilt;
}
constexpr void Oculus::Interaction::Input::OneEuroFilter::__cordl_internal_set__dxfilt(::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dxfilt = value;
}
inline float_t Oculus::Interaction::Input::OneEuroFilter::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OneEuroFilter::set_Value(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"set_Value", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::OneEuroFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OneEuroFilter::SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"SetProperties", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline float_t Oculus::Interaction::Input::OneEuroFilter::Step(float_t  newValue, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"Step", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, newValue, deltaTime);
}
inline void Oculus::Interaction::Input::OneEuroFilter::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Input::OneEuroFilter::GetAlpha(float_t  rate, float_t  cutoff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"GetAlpha", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, rate, cutoff);
}
inline ::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>* Oculus::Interaction::Input::OneEuroFilter::CreateFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector2>* Oculus::Interaction::Input::OneEuroFilter::CreateVector2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateVector2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* Oculus::Interaction::Input::OneEuroFilter::CreateVector3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateVector3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector4>* Oculus::Interaction::Input::OneEuroFilter::CreateVector4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateVector4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector4>*>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>* Oculus::Interaction::Input::OneEuroFilter::CreateQuaternion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreateQuaternion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*>(nullptr, ___internal_method);
}
inline ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Pose>* Oculus::Interaction::Input::OneEuroFilter::CreatePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"CreatePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Pose>*>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::Input::OneEuroFilter::Oculus_Interaction_Input_IOneEuroFilter_System_Single__SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter*>(),
                        {"Oculus.Interaction.Input.IOneEuroFilter<System.Single>.SetProperties", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline ::Oculus::Interaction::Input::OneEuroFilter* Oculus::Interaction::Input::OneEuroFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OneEuroFilter*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>"
constexpr  Oculus::Interaction::Input::OneEuroFilter::operator ::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*() noexcept {
return static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>"
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>* Oculus::Interaction::Input::OneEuroFilter::i___Oculus__Interaction__Input__IOneEuroFilter_1_float_t_() noexcept {
return static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OneEuroFilter::OneEuroFilter()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OneEuroFilter___c::*)()>(&::Oculus::Interaction::Input::OneEuroFilter___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5146a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreateVector2_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::ArrayW<float_t>)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector2_b__16_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa5146ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector2>b__16_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreateVector2_b__16_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::UnityEngine::Vector2, int32_t)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector2_b__16_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa5146d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector2>b__16_1", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreateVector3_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::ArrayW<float_t>)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector3_b__17_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa514738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector3>b__17_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreateVector3_b__17_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::UnityEngine::Vector3, int32_t)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector3_b__17_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa514770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector3>b__17_1", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreateVector4_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::ArrayW<float_t>)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector4_b__18_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa5147e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector4>b__18_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreateVector4_b__18_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::UnityEngine::Vector4, int32_t)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector4_b__18_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa514820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector4>b__18_1", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreateQuaternion_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::ArrayW<float_t>)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreateQuaternion_b__19_0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa5148a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateQuaternion>b__19_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreateQuaternion_b__19_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::UnityEngine::Quaternion, int32_t)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreateQuaternion_b__19_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa5149a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateQuaternion>b__19_1", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreatePose_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::ArrayW<float_t>)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreatePose_b__20_0)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa514a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreatePose>b__20_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter___c._CreatePose_b__20_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter___c::*)(::UnityEngine::Pose, int32_t)>(&::Oculus::Interaction::Input::OneEuroFilter___c::_CreatePose_b__20_1)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa514b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreatePose>b__20_1", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9(::Oculus::Interaction::Input::OneEuroFilter___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::OneEuroFilter___c*, "<>9", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::Oculus::Interaction::Input::OneEuroFilter___c*>(value));
}
inline ::Oculus::Interaction::Input::OneEuroFilter___c* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::OneEuroFilter___c*, "<>9", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__16_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector2>*, "<>9__16_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector2>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector2>*, "<>9__16_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__16_1(::System::Func_3<::UnityEngine::Vector2,int32_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Vector2,int32_t,float_t>*, "<>9__16_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_3<::UnityEngine::Vector2,int32_t,float_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Vector2,int32_t,float_t>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__16_1()  {
return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Vector2,int32_t,float_t>*, "<>9__16_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__17_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector3>*, "<>9__17_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector3>*>(value));
}
inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector3>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector3>*, "<>9__17_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__17_1(::System::Func_3<::UnityEngine::Vector3,int32_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Vector3,int32_t,float_t>*, "<>9__17_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_3<::UnityEngine::Vector3,int32_t,float_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Vector3,int32_t,float_t>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__17_1()  {
return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Vector3,int32_t,float_t>*, "<>9__17_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__18_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector4>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector4>*, "<>9__18_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector4>*>(value));
}
inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector4>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Vector4>*, "<>9__18_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__18_1(::System::Func_3<::UnityEngine::Vector4,int32_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Vector4,int32_t,float_t>*, "<>9__18_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_3<::UnityEngine::Vector4,int32_t,float_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Vector4,int32_t,float_t>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__18_1()  {
return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Vector4,int32_t,float_t>*, "<>9__18_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__19_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Quaternion>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Quaternion>*, "<>9__19_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Quaternion>*>(value));
}
inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Quaternion>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Quaternion>*, "<>9__19_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__19_1(::System::Func_3<::UnityEngine::Quaternion,int32_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Quaternion,int32_t,float_t>*, "<>9__19_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_3<::UnityEngine::Quaternion,int32_t,float_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Quaternion,int32_t,float_t>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__19_1()  {
return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Quaternion,int32_t,float_t>*, "<>9__19_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__20_0(::System::Func_2<::ArrayW<float_t>,::UnityEngine::Pose>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Pose>*, "<>9__20_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Pose>*>(value));
}
inline ::System::Func_2<::ArrayW<float_t>,::UnityEngine::Pose>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::ArrayW<float_t>,::UnityEngine::Pose>*, "<>9__20_0", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::setStaticF___9__20_1(::System::Func_3<::UnityEngine::Pose,int32_t,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::UnityEngine::Pose,int32_t,float_t>*, "<>9__20_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>(std::forward<::System::Func_3<::UnityEngine::Pose,int32_t,float_t>*>(value));
}
inline ::System::Func_3<::UnityEngine::Pose,int32_t,float_t>* Oculus::Interaction::Input::OneEuroFilter___c::getStaticF___9__20_1()  {
return ::cordl_internals::getStaticField<::System::Func_3<::UnityEngine::Pose,int32_t,float_t>*, "<>9__20_1", ::Oculus::Interaction::Input::OneEuroFilter___c*>();
}
inline void Oculus::Interaction::Input::OneEuroFilter___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector2_b__16_0(::ArrayW<float_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector2>b__16_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, values);
}
inline float_t Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector2_b__16_1(::UnityEngine::Vector2  value, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector2>b__16_1", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, index);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector3_b__17_0(::ArrayW<float_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector3>b__17_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, values);
}
inline float_t Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector3_b__17_1(::UnityEngine::Vector3  value, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector3>b__17_1", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, index);
}
inline ::UnityEngine::Vector4 Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector4_b__18_0(::ArrayW<float_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector4>b__18_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, values);
}
inline float_t Oculus::Interaction::Input::OneEuroFilter___c::_CreateVector4_b__18_1(::UnityEngine::Vector4  value, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateVector4>b__18_1", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, index);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::OneEuroFilter___c::_CreateQuaternion_b__19_0(::ArrayW<float_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateQuaternion>b__19_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, values);
}
inline float_t Oculus::Interaction::Input::OneEuroFilter___c::_CreateQuaternion_b__19_1(::UnityEngine::Quaternion  value, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreateQuaternion>b__19_1", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, index);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::OneEuroFilter___c::_CreatePose_b__20_0(::ArrayW<float_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreatePose>b__20_0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, values);
}
inline float_t Oculus::Interaction::Input::OneEuroFilter___c::_CreatePose_b__20_1(::UnityEngine::Pose  value, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter___c*>(),
                        {"<CreatePose>b__20_1", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, index);
}
inline ::Oculus::Interaction::Input::OneEuroFilter___c* Oculus::Interaction::Input::OneEuroFilter___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OneEuroFilter___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OneEuroFilter___c::OneEuroFilter___c()   {
}
template<typename TData>
constexpr TData& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__Value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename TData>
constexpr TData const& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__Value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_set__Value_k__BackingField(TData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Value_k__BackingField = value;
}
template<typename TData>
constexpr ::System::Func_2<::ArrayW<float_t>,TData>*& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__arrayToType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayToType;
}
template<typename TData>
constexpr ::System::Func_2<::ArrayW<float_t>,TData>* const& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__arrayToType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____arrayToType;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_set__arrayToType(::System::Func_2<::ArrayW<float_t>,TData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____arrayToType = value;
}
template<typename TData>
constexpr ::System::Func_3<TData,int32_t,float_t>*& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__getValAtIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getValAtIndex;
}
template<typename TData>
constexpr ::System::Func_3<TData,int32_t,float_t>* const& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__getValAtIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getValAtIndex;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_set__getValAtIndex(::System::Func_3<TData,int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getValAtIndex = value;
}
template<typename TData>
constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__filters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filters;
}
template<typename TData>
constexpr ::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*> const& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__filters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filters;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_set__filters(::ArrayW<::Oculus::Interaction::Input::IOneEuroFilter_1<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filters = value;
}
template<typename TData>
constexpr ::ArrayW<float_t>& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__componentValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____componentValues;
}
template<typename TData>
constexpr ::ArrayW<float_t> const& Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_get__componentValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____componentValues;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::__cordl_internal_set__componentValues(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____componentValues = value;
}
template<typename TData>
inline TData Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::set_Value(TData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>*>(),
                        {"set_Value", {}, {::i2c::type_of<TData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TData>
inline void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::_ctor(int32_t  numComponents, ::System::Func_2<::ArrayW<float_t>,TData>*  arrayToType, ::System::Func_3<TData,int32_t,float_t>*  getValAtIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::ArrayW<float_t>,TData>*>(), ::i2c::type_of<::System::Func_3<TData,int32_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numComponents, arrayToType, getValAtIndex);
}
template<typename TData>
inline void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>*>(),
                        {"SetProperties", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
template<typename TData>
inline TData Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::Step(TData  newValue, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>*>(),
                        {"Step", {}, {::i2c::type_of<TData>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method, newValue, deltaTime);
}
template<typename TData>
inline void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::Oculus_Interaction_Input_IOneEuroFilter_TData__SetProperties(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>*>(),
                        {"Oculus.Interaction.Input.IOneEuroFilter<TData>.SetProperties", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
template<typename TData>
inline ::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>* Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::New_ctor(int32_t  numComponents, ::System::Func_2<::ArrayW<float_t>,TData>*  arrayToType, ::System::Func_3<TData,int32_t,float_t>*  getValAtIndex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>*>(numComponents, arrayToType, getValAtIndex));
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IOneEuroFilter_1<TData>"
template<typename TData>
constexpr  Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::operator ::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*() noexcept {
return static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IOneEuroFilter_1<TData>"
template<typename TData>
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<TData>* Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::i___Oculus__Interaction__Input__IOneEuroFilter_1_TData_() noexcept {
return static_cast<::Oculus::Interaction::Input::IOneEuroFilter_1<TData>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TData>
constexpr ::Oculus::Interaction::Input::OneEuroFilter_OneEuroFilterMulti_1<TData>::OneEuroFilter_OneEuroFilterMulti_1()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter.get_PrevValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::*)()>(&::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::get_PrevValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa514634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>(),
                        {"get_PrevValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::*)()>(&::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa513b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::*)()>(&::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa513d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::*)(float_t, float_t)>(&::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::Filter)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa513cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>(),
                        {"Filter", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_get__isFirstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFirstUpdate;
}
constexpr bool const& Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_get__isFirstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFirstUpdate;
}
constexpr void Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_set__isFirstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFirstUpdate = value;
}
constexpr float_t& Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_get__hatx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hatx;
}
constexpr float_t const& Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_get__hatx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hatx;
}
constexpr void Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_set__hatx(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hatx = value;
}
constexpr float_t& Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_get__hatxprev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hatxprev;
}
constexpr float_t const& Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_get__hatxprev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hatxprev;
}
constexpr void Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::__cordl_internal_set__hatxprev(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hatxprev = value;
}
inline float_t Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::get_PrevValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>(),
                        {"get_PrevValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::Filter(float_t  x, float_t  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>(),
                        {"Filter", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, x, alpha);
}
inline ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter* Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OneEuroFilter_LowPassFilter::OneEuroFilter_LowPassFilter()   {
}
