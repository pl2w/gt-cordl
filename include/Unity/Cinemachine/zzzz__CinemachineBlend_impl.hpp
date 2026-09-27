#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBlend.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.get_BlendWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineBlend::*)()>(&::Unity::Cinemachine::CinemachineBlend::get_BlendWeight)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaeae364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_BlendWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.get_CustomBlender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlend_IBlender* (::Unity::Cinemachine::CinemachineBlend::*)()>(&::Unity::Cinemachine::CinemachineBlend::get_CustomBlender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeae420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_CustomBlender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.set_CustomBlender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlend::*)(::Unity::Cinemachine::CinemachineBlend_IBlender*)>(&::Unity::Cinemachine::CinemachineBlend::set_CustomBlender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeae428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"set_CustomBlender", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend_IBlender*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBlend::*)()>(&::Unity::Cinemachine::CinemachineBlend::get_IsValid)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaeaac3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBlend::*)()>(&::Unity::Cinemachine::CinemachineBlend::get_IsComplete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeae3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CinemachineBlend::*)()>(&::Unity::Cinemachine::CinemachineBlend::get_Description)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xaeae430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.Uses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineBlend::*)(::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineBlend::Uses)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xaeae704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"Uses", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlend::*)(::Unity::Cinemachine::CinemachineBlend*)>(&::Unity::Cinemachine::CinemachineBlend::CopyFrom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaeae808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.ClearBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlend::*)()>(&::Unity::Cinemachine::CinemachineBlend::ClearBlend)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaeae874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"ClearBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.UpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlend::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineBlend::UpdateCameraState)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xaeae8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineBlend::*)()>(&::Unity::Cinemachine::CinemachineBlend::get_State)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0xaeaeae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlend::*)()>(&::Unity::Cinemachine::CinemachineBlend::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeaabb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::ICinemachineCamera*& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_CamA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CamA;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera* const& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_CamA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CamA;
}
constexpr void Unity::Cinemachine::CinemachineBlend::__cordl_internal_set_CamA(::Unity::Cinemachine::ICinemachineCamera*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CamA = value;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera*& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_CamB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CamB;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera* const& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_CamB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CamB;
}
constexpr void Unity::Cinemachine::CinemachineBlend::__cordl_internal_set_CamB(::Unity::Cinemachine::ICinemachineCamera*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CamB = value;
}
constexpr ::UnityEngine::AnimationCurve*& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_BlendCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_BlendCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendCurve;
}
constexpr void Unity::Cinemachine::CinemachineBlend::__cordl_internal_set_BlendCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendCurve = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_TimeInBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeInBlend;
}
constexpr float_t const& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_TimeInBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeInBlend;
}
constexpr void Unity::Cinemachine::CinemachineBlend::__cordl_internal_set_TimeInBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimeInBlend = value;
}
constexpr ::Unity::Cinemachine::CinemachineBlend_IBlender*& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get__CustomBlender_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomBlender_k__BackingField;
}
constexpr ::Unity::Cinemachine::CinemachineBlend_IBlender* const& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get__CustomBlender_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomBlender_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineBlend::__cordl_internal_set__CustomBlender_k__BackingField(::Unity::Cinemachine::CinemachineBlend_IBlender*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CustomBlender_k__BackingField = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_Duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Duration;
}
constexpr float_t const& Unity::Cinemachine::CinemachineBlend::__cordl_internal_get_Duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Duration;
}
constexpr void Unity::Cinemachine::CinemachineBlend::__cordl_internal_set_Duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Duration = value;
}
inline float_t Unity::Cinemachine::CinemachineBlend::get_BlendWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_BlendWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBlend_IBlender* Unity::Cinemachine::CinemachineBlend::get_CustomBlender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_CustomBlender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlend_IBlender*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBlend::set_CustomBlender(::Unity::Cinemachine::CinemachineBlend_IBlender*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"set_CustomBlender", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend_IBlender*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineBlend::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineBlend::get_IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::CinemachineBlend::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineBlend::Uses(::Unity::Cinemachine::ICinemachineCamera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"Uses", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam);
}
inline void Unity::Cinemachine::CinemachineBlend::CopyFrom(::Unity::Cinemachine::CinemachineBlend*  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void Unity::Cinemachine::CinemachineBlend::ClearBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"ClearBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBlend::UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineBlend::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBlend::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBlend* Unity::Cinemachine::CinemachineBlend::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineBlend*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineBlend::CinemachineBlend()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlend_IBlender.GetIntermediateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineBlend_IBlender::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, float_t)>(&::Unity::Cinemachine::CinemachineBlend_IBlender::GetIntermediateState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBlend_IBlender*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBlend_IBlender*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineBlend_IBlender::GetIntermediateState(::Unity::Cinemachine::ICinemachineCamera*  CamA, ::Unity::Cinemachine::ICinemachineCamera*  CamB, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBlend_IBlender*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method, CamA, CamB, t);
}
