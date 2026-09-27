#pragma once
// IWYU pragma private; include "Unity/Cinemachine/BlendManager.hpp"
#include "Unity/Cinemachine/zzzz__CameraBlendStack_impl.hpp"
#include "Unity/Cinemachine/zzzz__BlendManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::BlendManager::*)()>(&::Unity::Cinemachine::BlendManager::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaea8524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                    {::i2c::class_of<::Unity::Cinemachine::BlendManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.get_ActiveVirtualCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineCamera* (::Unity::Cinemachine::BlendManager::*)()>(&::Unity::Cinemachine::BlendManager::get_ActiveVirtualCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea869c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_ActiveVirtualCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.DeepCamBFromBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineCamera* (*)(::Unity::Cinemachine::CinemachineBlend*)>(&::Unity::Cinemachine::BlendManager::DeepCamBFromBlend)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaea86a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"DeepCamBFromBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.get_ActiveBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlend* (::Unity::Cinemachine::BlendManager::*)()>(&::Unity::Cinemachine::BlendManager::get_ActiveBlend)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaea87ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_ActiveBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.set_ActiveBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::BlendManager::*)(::Unity::Cinemachine::CinemachineBlend*)>(&::Unity::Cinemachine::BlendManager::set_ActiveBlend)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaea87f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"set_ActiveBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.get_IsBlending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::BlendManager::*)()>(&::Unity::Cinemachine::BlendManager::get_IsBlending)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaea8924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_IsBlending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::BlendManager::*)()>(&::Unity::Cinemachine::BlendManager::get_Description)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xaea893c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.IsLiveInBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::BlendManager::*)(::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::BlendManager::IsLiveInBlend)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaea8ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"IsLiveInBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.IsLive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::BlendManager::*)(::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::BlendManager::IsLive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaea8b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"IsLive", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.get_CameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::BlendManager::*)()>(&::Unity::Cinemachine::BlendManager::get_CameraState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaea8b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_CameraState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.ComputeCurrentBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::BlendManager::*)()>(&::Unity::Cinemachine::BlendManager::ComputeCurrentBlend)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea8bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"ComputeCurrentBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.RefreshCurrentCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::BlendManager::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::BlendManager::RefreshCurrentCameraState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaea8f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"RefreshCurrentCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager.ProcessActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineCamera* (::Unity::Cinemachine::BlendManager::*)(::Unity::Cinemachine::ICinemachineMixer*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::BlendManager::ProcessActiveCamera)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0xaea8f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"ProcessActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::BlendManager::*)()>(&::Unity::Cinemachine::BlendManager::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xaea9728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::BlendManager._ProcessActiveCamera_g__CollectLiveCameras_21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::CinemachineBlend*, ::by_ref<::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*>)>(&::Unity::Cinemachine::BlendManager::_ProcessActiveCamera_g__CollectLiveCameras_21_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaea9608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"<ProcessActiveCamera>g__CollectLiveCameras|21_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::CinemachineBlend*& Unity::Cinemachine::BlendManager::__cordl_internal_get_m_CurrentLiveCameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentLiveCameras;
}
constexpr ::Unity::Cinemachine::CinemachineBlend* const& Unity::Cinemachine::BlendManager::__cordl_internal_get_m_CurrentLiveCameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentLiveCameras;
}
constexpr void Unity::Cinemachine::BlendManager::__cordl_internal_set_m_CurrentLiveCameras(::Unity::Cinemachine::CinemachineBlend*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentLiveCameras = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*& Unity::Cinemachine::BlendManager::__cordl_internal_get_m_PreviousLiveCameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousLiveCameras;
}
constexpr ::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>* const& Unity::Cinemachine::BlendManager::__cordl_internal_get_m_PreviousLiveCameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousLiveCameras;
}
constexpr void Unity::Cinemachine::BlendManager::__cordl_internal_set_m_PreviousLiveCameras(::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousLiveCameras = value;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera*& Unity::Cinemachine::BlendManager::__cordl_internal_get_m_PreviousActiveCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousActiveCamera;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera* const& Unity::Cinemachine::BlendManager::__cordl_internal_get_m_PreviousActiveCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousActiveCamera;
}
constexpr void Unity::Cinemachine::BlendManager::__cordl_internal_set_m_PreviousActiveCamera(::Unity::Cinemachine::ICinemachineCamera*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousActiveCamera = value;
}
constexpr bool& Unity::Cinemachine::BlendManager::__cordl_internal_get_m_WasBlending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasBlending;
}
constexpr bool const& Unity::Cinemachine::BlendManager::__cordl_internal_get_m_WasBlending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasBlending;
}
constexpr void Unity::Cinemachine::BlendManager::__cordl_internal_set_m_WasBlending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WasBlending = value;
}
inline void Unity::Cinemachine::BlendManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::BlendManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::BlendManager::get_ActiveVirtualCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_ActiveVirtualCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineCamera*>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::BlendManager::DeepCamBFromBlend(::Unity::Cinemachine::CinemachineBlend*  blend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"DeepCamBFromBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineCamera*>(nullptr, ___internal_method, blend);
}
inline ::Unity::Cinemachine::CinemachineBlend* Unity::Cinemachine::BlendManager::get_ActiveBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_ActiveBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlend*>(this, ___internal_method);
}
inline void Unity::Cinemachine::BlendManager::set_ActiveBlend(::Unity::Cinemachine::CinemachineBlend*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"set_ActiveBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::BlendManager::get_IsBlending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_IsBlending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::BlendManager::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Unity::Cinemachine::BlendManager::IsLiveInBlend(::Unity::Cinemachine::ICinemachineCamera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"IsLiveInBlend", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam);
}
inline bool Unity::Cinemachine::BlendManager::IsLive(::Unity::Cinemachine::ICinemachineCamera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"IsLive", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cam);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::BlendManager::get_CameraState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"get_CameraState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline void Unity::Cinemachine::BlendManager::ComputeCurrentBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"ComputeCurrentBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::BlendManager::RefreshCurrentCameraState(::UnityEngine::Vector3  up, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"RefreshCurrentCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, up, deltaTime);
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::BlendManager::ProcessActiveCamera(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::UnityEngine::Vector3  up, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"ProcessActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineCamera*>(this, ___internal_method, mixer, up, deltaTime);
}
inline void Unity::Cinemachine::BlendManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::BlendManager::_ProcessActiveCamera_g__CollectLiveCameras_21_0(::Unity::Cinemachine::CinemachineBlend*  blend, ::by_ref<::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*>  cams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::BlendManager*>(),
                        {"<ProcessActiveCamera>g__CollectLiveCameras|21_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<::Unity::Cinemachine::ICinemachineCamera*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, blend, cams);
}
inline ::Unity::Cinemachine::BlendManager* Unity::Cinemachine::BlendManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::BlendManager*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::BlendManager::BlendManager()   {
}
