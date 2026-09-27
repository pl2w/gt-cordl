#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineComponentBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineTargetGroup_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_VirtualCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_VirtualCamera)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaeb160c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_VirtualCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::OnEnable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaeb1740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::OnDisable)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaeb17f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_FollowTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_FollowTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaeb18b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_FollowTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_LookAtTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_LookAtTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaeb1958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_LookAtTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_FollowTargetAsGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineTargetGroup* (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_FollowTargetAsGroup)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaeb1a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_FollowTargetAsGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_FollowTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_FollowTargetPosition)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xaeb1a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_FollowTargetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_FollowTargetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_FollowTargetRotation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaeb1bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_FollowTargetRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_LookAtTargetAsGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineTargetGroup* (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_LookAtTargetAsGroup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaeb1d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_LookAtTargetAsGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_LookAtTargetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_LookAtTargetPosition)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xaeb1d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_LookAtTargetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_LookAtTargetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_LookAtTargetRotation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaeb1e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_LookAtTargetRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_VcamState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_VcamState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaeb1fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_VcamState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_IsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.PrePipelineMutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComponentBase::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineComponentBase::PrePipelineMutateCameraState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb2094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_Stage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_BodyAppliesAfterAim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_BodyAppliesAfterAim)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb2098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComponentBase::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineComponentBase::MutateCameraState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineComponentBase::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineComponentBase::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb20a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComponentBase::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineComponentBase::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb20a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComponentBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineComponentBase::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeb20ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb20b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase.get_CameraLooksAtTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::get_CameraLooksAtTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb20b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComponentBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComponentBase::*)()>(&::Unity::Cinemachine::CinemachineComponentBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb20c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineComponentBase::__cordl_internal_get_m_VcamOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VcamOwner;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineComponentBase::__cordl_internal_get_m_VcamOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VcamOwner;
}
constexpr void Unity::Cinemachine::CinemachineComponentBase::__cordl_internal_set_m_VcamOwner(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VcamOwner = value;
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::CinemachineComponentBase::get_VirtualCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_VirtualCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComponentBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComponentBase::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineComponentBase::get_FollowTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_FollowTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineComponentBase::get_LookAtTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_LookAtTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineTargetGroup* Unity::Cinemachine::CinemachineComponentBase::get_FollowTargetAsGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_FollowTargetAsGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineTargetGroup*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineComponentBase::get_FollowTargetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_FollowTargetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineComponentBase::get_FollowTargetRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_FollowTargetRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineTargetGroup* Unity::Cinemachine::CinemachineComponentBase::get_LookAtTargetAsGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_LookAtTargetAsGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineTargetGroup*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineComponentBase::get_LookAtTargetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_LookAtTargetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineComponentBase::get_LookAtTargetRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_LookAtTargetRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineComponentBase::get_VcamState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {"get_VcamState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineComponentBase::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComponentBase::PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineComponentBase::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineComponentBase::get_BodyAppliesAfterAim()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComponentBase::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineComponentBase::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineComponentBase::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineComponentBase::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline float_t Unity::Cinemachine::CinemachineComponentBase::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineComponentBase::get_CameraLooksAtTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComponentBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComponentBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineComponentBase* Unity::Cinemachine::CinemachineComponentBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineComponentBase*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineComponentBase::CinemachineComponentBase()   {
}
