#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineLegacyCameraEvents.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineLegacyCameraEvents_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineLegacyCameraEvents_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineLegacyCameraEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineLegacyCameraEvents::*)()>(&::Unity::Cinemachine::CinemachineLegacyCameraEvents::OnEnable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaed3f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineLegacyCameraEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineLegacyCameraEvents::*)()>(&::Unity::Cinemachine::CinemachineLegacyCameraEvents::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaed40dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineLegacyCameraEvents.OnCameraActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineLegacyCameraEvents::*)(::GlobalNamespace::ICinemachineCamera_ActivationEventParams)>(&::Unity::Cinemachine::CinemachineLegacyCameraEvents::OnCameraActivated)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaed41ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineLegacyCameraEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineLegacyCameraEvents::*)()>(&::Unity::Cinemachine::CinemachineLegacyCameraEvents::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaed4220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*& Unity::Cinemachine::CinemachineLegacyCameraEvents::__cordl_internal_get_OnCameraLive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCameraLive;
}
constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent* const& Unity::Cinemachine::CinemachineLegacyCameraEvents::__cordl_internal_get_OnCameraLive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCameraLive;
}
constexpr void Unity::Cinemachine::CinemachineLegacyCameraEvents::__cordl_internal_set_OnCameraLive(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCameraLive = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& Unity::Cinemachine::CinemachineLegacyCameraEvents::__cordl_internal_get_m_Vcam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Vcam;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& Unity::Cinemachine::CinemachineLegacyCameraEvents::__cordl_internal_get_m_Vcam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Vcam;
}
constexpr void Unity::Cinemachine::CinemachineLegacyCameraEvents::__cordl_internal_set_m_Vcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Vcam = value;
}
inline void Unity::Cinemachine::CinemachineLegacyCameraEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineLegacyCameraEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineLegacyCameraEvents::OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Unity::Cinemachine::CinemachineLegacyCameraEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineLegacyCameraEvents* Unity::Cinemachine::CinemachineLegacyCameraEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineLegacyCameraEvents*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents::CinemachineLegacyCameraEvents()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent::*)()>(&::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaed4288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent* Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent::CinemachineLegacyCameraEvents_OnCameraLiveEvent()   {
}
