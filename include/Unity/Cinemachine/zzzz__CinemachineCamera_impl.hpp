#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCamera.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraTarget_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendHints_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCamera_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::Reset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xae87c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::OnValidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae87c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae87c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.get_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::get_LookAt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xae87c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.set_LookAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineCamera::set_LookAt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae87cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.get_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::get_Follow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae87cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.set_Follow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineCamera::set_Follow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae87cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineCamera::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xae87ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineCamera::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xae88060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xae881ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.OnTransitionFromCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)(::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineCamera::OnTransitionFromCamera)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xae882ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.InternalUpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineCamera::InternalUpdateCameraState)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xae88648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.InvokeComponentPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CinemachineCamera::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineCamera::InvokeComponentPipeline)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xae8884c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"InvokeComponentPipeline", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.InvalidatePipelineCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::InvalidatePipelineCache)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae88a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"InvalidatePipelineCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.get_PipelineCacheInvalidated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::get_PipelineCacheInvalidated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae88aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"get_PipelineCacheInvalidated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.PeekPipelineCacheType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Unity::Cinemachine::CinemachineCamera::*)(::GlobalNamespace::CinemachineCore_Stage)>(&::Unity::Cinemachine::CinemachineCamera::PeekPipelineCacheType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae88ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"PeekPipelineCacheType", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.UpdatePipelineCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::UpdatePipelineCache)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xae87e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"UpdatePipelineCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera.GetCinemachineComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineComponentBase> (::Unity::Cinemachine::CinemachineCamera::*)(::GlobalNamespace::CinemachineCore_Stage)>(&::Unity::Cinemachine::CinemachineCamera::GetCinemachineComponent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xae88b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineCamera::*)()>(&::Unity::Cinemachine::CinemachineCamera::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae88bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::CameraTarget& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr ::Unity::Cinemachine::CameraTarget const& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Target;
}
constexpr void Unity::Cinemachine::CinemachineCamera::__cordl_internal_set_Target(::Unity::Cinemachine::CameraTarget  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Target = value;
}
constexpr ::Unity::Cinemachine::LensSettings& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_Lens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lens;
}
constexpr ::Unity::Cinemachine::LensSettings const& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_Lens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lens;
}
constexpr void Unity::Cinemachine::CinemachineCamera::__cordl_internal_set_Lens(::Unity::Cinemachine::LensSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lens = value;
}
constexpr ::GlobalNamespace::CinemachineCore_BlendHints& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_BlendHint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendHint;
}
constexpr ::GlobalNamespace::CinemachineCore_BlendHints const& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_BlendHint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlendHint;
}
constexpr void Unity::Cinemachine::CinemachineCamera::__cordl_internal_set_BlendHint(::GlobalNamespace::CinemachineCore_BlendHints  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlendHint = value;
}
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void Unity::Cinemachine::CinemachineCamera::__cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_m_Pipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pipeline;
}
constexpr ::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>> const& Unity::Cinemachine::CinemachineCamera::__cordl_internal_get_m_Pipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pipeline;
}
constexpr void Unity::Cinemachine::CinemachineCamera::__cordl_internal_set_m_Pipeline(::ArrayW<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pipeline = value;
}
inline void Unity::Cinemachine::CinemachineCamera::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCamera::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineCamera::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineCamera::get_LookAt()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCamera::set_LookAt(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineCamera::get_Follow()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCamera::set_Follow(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineCamera::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineCamera::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline float_t Unity::Cinemachine::CinemachineCamera::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineCamera::OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromCam, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CinemachineCamera::InternalUpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CinemachineCamera::InvokeComponentPipeline(::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"InvokeComponentPipeline", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineCamera::InvalidatePipelineCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"InvalidatePipelineCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineCamera::get_PipelineCacheInvalidated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"get_PipelineCacheInvalidated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* Unity::Cinemachine::CinemachineCamera::PeekPipelineCacheType(::GlobalNamespace::CinemachineCore_Stage  stage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"PeekPipelineCacheType", {}, {::i2c::type_of<::GlobalNamespace::CinemachineCore_Stage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, stage);
}
inline void Unity::Cinemachine::CinemachineCamera::UpdatePipelineCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {"UpdatePipelineCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineComponentBase> Unity::Cinemachine::CinemachineCamera::GetCinemachineComponent(::GlobalNamespace::CinemachineCore_Stage  stage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineComponentBase>>(this, ___internal_method, stage);
}
inline void Unity::Cinemachine::CinemachineCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineCamera* Unity::Cinemachine::CinemachineCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineCamera*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineCamera::CinemachineCamera()   {
}
