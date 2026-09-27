#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVolumeSettings.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVolumeSettings_FocusTrackingMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVolumeSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBrain_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVolumeSettings_FocusTrackingMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVolumeSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/Rendering/zzzz__Volume_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.get_CalculatedFocusDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineVolumeSettings::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::get_CalculatedFocusDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee6048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"get_CalculatedFocusDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.set_CalculatedFocusDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings::*)(float_t)>(&::Unity::Cinemachine::CinemachineVolumeSettings::set_CalculatedFocusDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee6050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"set_CalculatedFocusDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineVolumeSettings::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::get_IsValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaee6058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.InvalidateCachedProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::InvalidateCachedProfile)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaee60f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"InvalidateCachedProfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaee62a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::Reset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaee62c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaee62f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaee62f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineVolumeSettings::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0xaee6314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.OnCameraCut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ICinemachineCamera_ActivationEventParams)>(&::Unity::Cinemachine::CinemachineVolumeSettings::OnCameraCut)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xaee6854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"OnCameraCut", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.ApplyPostFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineBrain*)>(&::Unity::Cinemachine::CinemachineVolumeSettings::ApplyPostFX)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xaee699c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"ApplyPostFX", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.GetDynamicBrainVolumes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* (*)(::Unity::Cinemachine::CinemachineBrain*, int32_t)>(&::Unity::Cinemachine::CinemachineVolumeSettings::GetDynamicBrainVolumes)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xaee6c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"GetDynamicBrainVolumes", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings.InitializeModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::InitializeModule)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xaee708c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"InitializeModule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee7270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight;
}
constexpr float_t const& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight;
}
constexpr void Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_set_Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight = value;
}
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_FocusTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusTracking;
}
constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode const& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_FocusTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusTracking;
}
constexpr void Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_set_FocusTracking(::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FocusTracking = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_FocusTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_FocusTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusTarget;
}
constexpr void Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_set_FocusTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FocusTarget = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_FocusOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusOffset;
}
constexpr float_t const& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_FocusOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FocusOffset;
}
constexpr void Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_set_FocusOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FocusOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get__CalculatedFocusDistance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CalculatedFocusDistance_k__BackingField;
}
constexpr float_t const& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get__CalculatedFocusDistance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CalculatedFocusDistance_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_set__CalculatedFocusDistance_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CalculatedFocusDistance_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_Profile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_Profile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Profile;
}
constexpr void Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_set_Profile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Profile = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>*& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_m_extraStateCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_extraStateCache;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>* const& Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_get_m_extraStateCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_extraStateCache;
}
constexpr void Unity::Cinemachine::CinemachineVolumeSettings::__cordl_internal_set_m_extraStateCache(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_extraStateCache = value;
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::setStaticF_s_VolumePriority(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_VolumePriority", ::Unity::Cinemachine::CinemachineVolumeSettings*>(std::forward<float_t>(value));
}
inline float_t Unity::Cinemachine::CinemachineVolumeSettings::getStaticF_s_VolumePriority()  {
return ::cordl_internals::getStaticField<float_t, "s_VolumePriority", ::Unity::Cinemachine::CinemachineVolumeSettings*>();
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::setStaticF_sVolumes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*, "sVolumes", ::Unity::Cinemachine::CinemachineVolumeSettings*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* Unity::Cinemachine::CinemachineVolumeSettings::getStaticF_sVolumes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*, "sVolumes", ::Unity::Cinemachine::CinemachineVolumeSettings*>();
}
inline float_t Unity::Cinemachine::CinemachineVolumeSettings::get_CalculatedFocusDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"get_CalculatedFocusDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::set_CalculatedFocusDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"set_CalculatedFocusDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineVolumeSettings::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::InvalidateCachedProfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"InvalidateCachedProfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::OnCameraCut(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"OnCameraCut", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::ApplyPostFX(::Unity::Cinemachine::CinemachineBrain*  brain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"ApplyPostFX", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, brain);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* Unity::Cinemachine::CinemachineVolumeSettings::GetDynamicBrainVolumes(::Unity::Cinemachine::CinemachineBrain*  brain, int32_t  minVolumes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"GetDynamicBrainVolumes", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBrain*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*>(nullptr, ___internal_method, brain, minVolumes);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::InitializeModule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {"InitializeModule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineVolumeSettings* Unity::Cinemachine::CinemachineVolumeSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineVolumeSettings*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineVolumeSettings::CinemachineVolumeSettings()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState.CreateProfileCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::*)(::UnityEngine::Rendering::VolumeProfile*)>(&::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::CreateProfileCopy)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xaee668c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>(),
                        {"CreateProfileCopy", {}, {::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState.DestroyProfileCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::DestroyProfileCopy)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaee6200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>(),
                        {"DestroyProfileCopy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee7320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::__cordl_internal_get_ProfileCopy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileCopy;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::__cordl_internal_get_ProfileCopy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileCopy;
}
constexpr void Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::__cordl_internal_set_ProfileCopy(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileCopy = value;
}
inline void Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::CreateProfileCopy(::UnityEngine::Rendering::VolumeProfile*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>(),
                        {"CreateProfileCopy", {}, {::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::DestroyProfileCopy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>(),
                        {"DestroyProfileCopy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState* Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState::CinemachineVolumeSettings_VcamExtraState()   {
}
