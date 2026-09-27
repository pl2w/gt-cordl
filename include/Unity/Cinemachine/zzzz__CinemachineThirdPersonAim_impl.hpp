#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineThirdPersonAim.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineThirdPersonAim_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonAim.get_AimTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineThirdPersonAim::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonAim::get_AimTarget)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae9db80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"get_AimTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonAim.set_AimTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonAim::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineThirdPersonAim::set_AimTarget)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae9db8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"set_AimTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonAim.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonAim::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonAim::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae9db98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonAim.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonAim::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonAim::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae9dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonAim.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonAim::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineThirdPersonAim::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xae9dc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonAim.ComputeLookAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineThirdPersonAim::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineThirdPersonAim::ComputeLookAtPoint)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xae9df04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"ComputeLookAtPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonAim.ComputeAimTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineThirdPersonAim::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineThirdPersonAim::ComputeAimTarget)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xae9e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"ComputeAimTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineThirdPersonAim._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineThirdPersonAim::*)()>(&::Unity::Cinemachine::CinemachineThirdPersonAim::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae9e368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get_AimCollisionFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AimCollisionFilter;
}
constexpr ::UnityEngine::LayerMask const& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get_AimCollisionFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AimCollisionFilter;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_set_AimCollisionFilter(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AimCollisionFilter = value;
}
constexpr ::StringW& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get_IgnoreTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get_IgnoreTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreTag;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_set_IgnoreTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreTag = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get_AimDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AimDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get_AimDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AimDistance;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_set_AimDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AimDistance = value;
}
constexpr bool& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get_NoiseCancellation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoiseCancellation;
}
constexpr bool const& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get_NoiseCancellation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoiseCancellation;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_set_NoiseCancellation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoiseCancellation = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get__AimTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AimTarget_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_get__AimTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AimTarget_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineThirdPersonAim::__cordl_internal_set__AimTarget_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AimTarget_k__BackingField = value;
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineThirdPersonAim::get_AimTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"get_AimTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineThirdPersonAim::set_AimTarget(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"set_AimTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineThirdPersonAim::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineThirdPersonAim::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineThirdPersonAim::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineThirdPersonAim::ComputeLookAtPoint(::UnityEngine::Vector3  camPos, ::UnityEngine::Transform*  player, ::UnityEngine::Vector3  fwd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"ComputeLookAtPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, camPos, player, fwd);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineThirdPersonAim::ComputeAimTarget(::UnityEngine::Vector3  cameraLookAt, ::UnityEngine::Transform*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {"ComputeAimTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, cameraLookAt, player);
}
inline void Unity::Cinemachine::CinemachineThirdPersonAim::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineThirdPersonAim*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineThirdPersonAim* Unity::Cinemachine::CinemachineThirdPersonAim::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineThirdPersonAim*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineThirdPersonAim::CinemachineThirdPersonAim()   {
}
