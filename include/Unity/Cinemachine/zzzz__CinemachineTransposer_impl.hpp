#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTransposer.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__AngularDampingMode_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__BindingMode_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__Tracker_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTransposer_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFollow_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.get_TrackerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::TargetTracking::TrackerSettings (::Unity::Cinemachine::CinemachineTransposer::*)()>(&::Unity::Cinemachine::CinemachineTransposer::get_TrackerSettings)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaed6168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"get_TrackerSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTransposer::*)()>(&::Unity::Cinemachine::CinemachineTransposer::OnValidate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaed4b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.get_HideOffsetInInspector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineTransposer::*)()>(&::Unity::Cinemachine::CinemachineTransposer::get_HideOffsetInInspector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaedb1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"get_HideOffsetInInspector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.set_HideOffsetInInspector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTransposer::*)(bool)>(&::Unity::Cinemachine::CinemachineTransposer::set_HideOffsetInInspector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaedb1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"set_HideOffsetInInspector", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.get_EffectiveOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineTransposer::*)()>(&::Unity::Cinemachine::CinemachineTransposer::get_EffectiveOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaed5a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"get_EffectiveOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineTransposer::*)()>(&::Unity::Cinemachine::CinemachineTransposer::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaedb1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineTransposer::*)()>(&::Unity::Cinemachine::CinemachineTransposer::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaedb244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineTransposer::*)()>(&::Unity::Cinemachine::CinemachineTransposer::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaedb24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTransposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineTransposer::MutateCameraState)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xaedb294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTransposer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineTransposer::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaed5304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTransposer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineTransposer::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xaed5480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.GetReferenceOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineTransposer::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineTransposer::GetReferenceOrientation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaedb520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"GetReferenceOrientation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.GetTargetCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineTransposer::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineTransposer::GetTargetCameraPosition)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xaedb5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTransposer::*)(::Unity::Cinemachine::CinemachineFollow*)>(&::Unity::Cinemachine::CinemachineTransposer::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaedb6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineFollow*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTransposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTransposer::*)()>(&::Unity::Cinemachine::CinemachineTransposer::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaed67c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_BindingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMode;
}
constexpr ::Unity::Cinemachine::TargetTracking::BindingMode const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_BindingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingMode;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_BindingMode(::Unity::Cinemachine::TargetTracking::BindingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingMode = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_FollowOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FollowOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_FollowOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FollowOffset;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_FollowOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FollowOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_XDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_XDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XDamping;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_XDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_YDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_YDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YDamping;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_YDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_ZDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_ZDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZDamping;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_ZDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZDamping = value;
}
constexpr ::Unity::Cinemachine::TargetTracking::AngularDampingMode& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_AngularDampingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularDampingMode;
}
constexpr ::Unity::Cinemachine::TargetTracking::AngularDampingMode const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_AngularDampingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularDampingMode;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_AngularDampingMode(::Unity::Cinemachine::TargetTracking::AngularDampingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AngularDampingMode = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_PitchDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PitchDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_PitchDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PitchDamping;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_PitchDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PitchDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_YawDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YawDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_YawDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YawDamping;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_YawDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YawDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_RollDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RollDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_RollDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RollDamping;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_RollDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RollDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_AngularDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_AngularDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularDamping;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_AngularDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AngularDamping = value;
}
constexpr ::Unity::Cinemachine::TargetTracking::Tracker& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_TargetTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTracker;
}
constexpr ::Unity::Cinemachine::TargetTracking::Tracker const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get_m_TargetTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTracker;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set_m_TargetTracker(::Unity::Cinemachine::TargetTracking::Tracker  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetTracker = value;
}
constexpr bool& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get__HideOffsetInInspector_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HideOffsetInInspector_k__BackingField;
}
constexpr bool const& Unity::Cinemachine::CinemachineTransposer::__cordl_internal_get__HideOffsetInInspector_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HideOffsetInInspector_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineTransposer::__cordl_internal_set__HideOffsetInInspector_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HideOffsetInInspector_k__BackingField = value;
}
inline ::Unity::Cinemachine::TargetTracking::TrackerSettings Unity::Cinemachine::CinemachineTransposer::get_TrackerSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"get_TrackerSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::TargetTracking::TrackerSettings>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTransposer::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineTransposer::get_HideOffsetInInspector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"get_HideOffsetInInspector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTransposer::set_HideOffsetInInspector(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"set_HideOffsetInInspector", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineTransposer::get_EffectiveOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"get_EffectiveOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineTransposer::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineTransposer::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineTransposer::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTransposer::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineTransposer::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineTransposer::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineTransposer::GetReferenceOrientation(::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"GetReferenceOrientation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, up);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineTransposer::GetTargetCameraPosition(::UnityEngine::Vector3  worldUp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldUp);
}
inline void Unity::Cinemachine::CinemachineTransposer::UpgradeToCm3(::Unity::Cinemachine::CinemachineFollow*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineFollow*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineTransposer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTransposer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineTransposer* Unity::Cinemachine::CinemachineTransposer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineTransposer*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineTransposer::CinemachineTransposer()   {
}
