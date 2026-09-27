#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineExternalCamera.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExternalCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalCamera.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineExternalCamera::*)()>(&::Unity::Cinemachine::CinemachineExternalCamera::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae91fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalCamera.get_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineExternalCamera::*)()>(&::Unity::Cinemachine::CinemachineExternalCamera::get_LookAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae91fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalCamera.set_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalCamera::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineExternalCamera::set_LookAt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae91fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalCamera.get_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineExternalCamera::*)()>(&::Unity::Cinemachine::CinemachineExternalCamera::get_Follow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae91fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalCamera.set_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalCamera::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineExternalCamera::set_Follow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae91fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalCamera.InternalUpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalCamera::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineExternalCamera::InternalUpdateCameraState)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0xae91fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineExternalCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineExternalCamera::*)()>(&::Unity::Cinemachine::CinemachineExternalCamera::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae92410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineCore_BlendHints& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get_BlendHint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendHint;
}
constexpr ::GlobalNamespace::CinemachineCore_BlendHints const& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get_BlendHint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendHint;
}
constexpr void Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_set_BlendHint(::GlobalNamespace::CinemachineCore_BlendHints  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendHint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get_LookAtTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LookAtTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get_LookAtTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LookAtTarget;
}
constexpr void Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_set_LookAtTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LookAtTarget = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get_m_Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get_m_Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr void Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Camera = value;
}
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get__Follow_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Follow_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_get__Follow_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Follow_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineExternalCamera::__cordl_internal_set__Follow_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Follow_k__BackingField = value;
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineExternalCamera::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineExternalCamera::get_LookAt()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExternalCamera::set_LookAt(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineExternalCamera::get_Follow()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineExternalCamera::set_Follow(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineExternalCamera::InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineExternalCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineExternalCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineExternalCamera* Unity::Cinemachine::CinemachineExternalCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineExternalCamera*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineExternalCamera::CinemachineExternalCamera()   {
}
