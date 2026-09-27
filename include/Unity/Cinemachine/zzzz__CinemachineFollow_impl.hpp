#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFollow.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettings_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFollow_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollow::*)()>(&::Unity::Cinemachine::CinemachineFollow::OnValidate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xae9eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollow::*)()>(&::Unity::Cinemachine::CinemachineFollow::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae9eb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.get_EffectiveOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineFollow::*)()>(&::Unity::Cinemachine::CinemachineFollow::get_EffectiveOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xae9eb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"get_EffectiveOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineFollow::*)()>(&::Unity::Cinemachine::CinemachineFollow::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae9ec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineFollow::*)()>(&::Unity::Cinemachine::CinemachineFollow::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae9eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineFollow::*)()>(&::Unity::Cinemachine::CinemachineFollow::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xae9eca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollow::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineFollow::MutateCameraState)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xae9ecdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollow::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFollow::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae9ef38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollow::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineFollow::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xae9f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.GetReferenceOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineFollow::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFollow::GetReferenceOrientation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae9f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"GetReferenceOrientation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow.GetDesiredCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineFollow::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineFollow::GetDesiredCameraPosition)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xae9f214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"GetDesiredCameraPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineFollow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineFollow::*)()>(&::Unity::Cinemachine::CinemachineFollow::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae9f34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings& Unity::Cinemachine::CinemachineFollow::__cordl_internal_get_TrackerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackerSettings;
}
constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettings const& Unity::Cinemachine::CinemachineFollow::__cordl_internal_get_TrackerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackerSettings;
}
constexpr void Unity::Cinemachine::CinemachineFollow::__cordl_internal_set_TrackerSettings(::Unity::Cinemachine::TargetTracking::TrackerSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackerSettings = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineFollow::__cordl_internal_get_FollowOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineFollow::__cordl_internal_get_FollowOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FollowOffset;
}
constexpr void Unity::Cinemachine::CinemachineFollow::__cordl_internal_set_FollowOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FollowOffset = value;
}
constexpr ::Unity::Cinemachine::TargetTracking::Tracker& Unity::Cinemachine::CinemachineFollow::__cordl_internal_get_m_TargetTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTracker;
}
constexpr ::Unity::Cinemachine::TargetTracking::Tracker const& Unity::Cinemachine::CinemachineFollow::__cordl_internal_get_m_TargetTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTracker;
}
constexpr void Unity::Cinemachine::CinemachineFollow::__cordl_internal_set_m_TargetTracker(::Unity::Cinemachine::TargetTracking::Tracker  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetTracker = value;
}
inline void Unity::Cinemachine::CinemachineFollow::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFollow::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineFollow::get_EffectiveOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"get_EffectiveOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineFollow::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineFollow::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineFollow::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineFollow::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineFollow::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineFollow::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineFollow::GetReferenceOrientation(::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"GetReferenceOrientation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, up);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineFollow::GetDesiredCameraPosition(::UnityEngine::Vector3  worldUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {"GetDesiredCameraPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldUp);
}
inline void Unity::Cinemachine::CinemachineFollow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineFollow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineFollow* Unity::Cinemachine::CinemachineFollow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineFollow*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineFollow::CinemachineFollow()   {
}
