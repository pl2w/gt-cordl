#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraBlendStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__NestedBlendSource_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraBlendStack_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraBlendStack_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__ICameraOverrideStack_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.get_DefaultWorldUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CameraBlendStack::*)()>(&::Unity::Cinemachine::CameraBlendStack::get_DefaultWorldUp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaea9898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"get_DefaultWorldUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.SetCameraOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CameraBlendStack::*)(int32_t, int32_t, ::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, float_t, float_t)>(&::Unity::Cinemachine::CameraBlendStack::SetCameraOverride)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xaea98dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"SetCameraOverride", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.ReleaseCameraOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)(int32_t)>(&::Unity::Cinemachine::CameraBlendStack::ReleaseCameraOverride)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaea9d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"ReleaseCameraOverride", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)()>(&::Unity::Cinemachine::CameraBlendStack::OnEnable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaea8594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)()>(&::Unity::Cinemachine::CameraBlendStack::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaea9df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CameraBlendStack::*)()>(&::Unity::Cinemachine::CameraBlendStack::get_IsInitialized)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaea9e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.get_LookupBlendDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate* (::Unity::Cinemachine::CameraBlendStack::*)()>(&::Unity::Cinemachine::CameraBlendStack::get_LookupBlendDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea9eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"get_LookupBlendDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.set_LookupBlendDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)(::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*)>(&::Unity::Cinemachine::CameraBlendStack::set_LookupBlendDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea9ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"set_LookupBlendDelegate", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.ResetRootFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)()>(&::Unity::Cinemachine::CameraBlendStack::ResetRootFrame)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xaea9ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"ResetRootFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.UpdateRootFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)(::Unity::Cinemachine::ICinemachineMixer*, ::Unity::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CameraBlendStack::UpdateRootFrame)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0xaeaa01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"UpdateRootFrame", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.ProcessOverrideFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)(::by_ref<::Unity::Cinemachine::CinemachineBlend*>, int32_t)>(&::Unity::Cinemachine::CameraBlendStack::ProcessOverrideFrames)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xaea8be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"ProcessOverrideFrames", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineBlend*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.SetRootBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)(::Unity::Cinemachine::CinemachineBlend*)>(&::Unity::Cinemachine::CameraBlendStack::SetRootBlend)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xaea87f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"SetRootBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack.GetDeltaTimeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CameraBlendStack::*)()>(&::Unity::Cinemachine::CameraBlendStack::GetDeltaTimeOverride)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaeaa9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"GetDeltaTimeOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack::*)()>(&::Unity::Cinemachine::CameraBlendStack::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaea9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack._SetCameraOverride_g__FindFrame_7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CameraBlendStack::*)(int32_t, int32_t)>(&::Unity::Cinemachine::CameraBlendStack::_SetCameraOverride_g__FindFrame_7_0)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xaea9b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"<SetCameraOverride>g__FindFrame|7_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack._UpdateRootFrame_g__AdvanceBlend_18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::CinemachineBlend*, float_t)>(&::Unity::Cinemachine::CameraBlendStack::_UpdateRootFrame_g__AdvanceBlend_18_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaeaa8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"<UpdateRootFrame>g__AdvanceBlend|18_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CameraBlendStack_StackFrame*>*& Unity::Cinemachine::CameraBlendStack::__cordl_internal_get_m_FrameStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameStack;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CameraBlendStack_StackFrame*>* const& Unity::Cinemachine::CameraBlendStack::__cordl_internal_get_m_FrameStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameStack;
}
constexpr void Unity::Cinemachine::CameraBlendStack::__cordl_internal_set_m_FrameStack(::System::Collections::Generic::List_1<::Unity::Cinemachine::CameraBlendStack_StackFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameStack = value;
}
constexpr int32_t& Unity::Cinemachine::CameraBlendStack::__cordl_internal_get_m_NextFrameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextFrameId;
}
constexpr int32_t const& Unity::Cinemachine::CameraBlendStack::__cordl_internal_get_m_NextFrameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextFrameId;
}
constexpr void Unity::Cinemachine::CameraBlendStack::__cordl_internal_set_m_NextFrameId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextFrameId = value;
}
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*& Unity::Cinemachine::CameraBlendStack::__cordl_internal_get__LookupBlendDelegate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LookupBlendDelegate_k__BackingField;
}
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate* const& Unity::Cinemachine::CameraBlendStack::__cordl_internal_get__LookupBlendDelegate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LookupBlendDelegate_k__BackingField;
}
constexpr void Unity::Cinemachine::CameraBlendStack::__cordl_internal_set__LookupBlendDelegate_k__BackingField(::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LookupBlendDelegate_k__BackingField = value;
}
inline void Unity::Cinemachine::CameraBlendStack::setStaticF_s_DefaultLinearAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
::cordl_internals::setStaticField<::UnityEngine::AnimationCurve*, "s_DefaultLinearAnimationCurve", ::Unity::Cinemachine::CameraBlendStack*>(std::forward<::UnityEngine::AnimationCurve*>(value));
}
inline ::UnityEngine::AnimationCurve* Unity::Cinemachine::CameraBlendStack::getStaticF_s_DefaultLinearAnimationCurve()  {
return ::cordl_internals::getStaticField<::UnityEngine::AnimationCurve*, "s_DefaultLinearAnimationCurve", ::Unity::Cinemachine::CameraBlendStack*>();
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CameraBlendStack::get_DefaultWorldUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"get_DefaultWorldUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CameraBlendStack::SetCameraOverride(int32_t  overrideId, int32_t  priority, ::Unity::Cinemachine::ICinemachineCamera*  camA, ::Unity::Cinemachine::ICinemachineCamera*  camB, float_t  weightB, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"SetCameraOverride", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, overrideId, priority, camA, camB, weightB, deltaTime);
}
inline void Unity::Cinemachine::CameraBlendStack::ReleaseCameraOverride(int32_t  overrideId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"ReleaseCameraOverride", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideId);
}
inline void Unity::Cinemachine::CameraBlendStack::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CameraBlendStack::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CameraBlendStack::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate* Unity::Cinemachine::CameraBlendStack::get_LookupBlendDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"get_LookupBlendDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CameraBlendStack::set_LookupBlendDelegate(::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"set_LookupBlendDelegate", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CameraBlendStack::ResetRootFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"ResetRootFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CameraBlendStack::UpdateRootFrame(::Unity::Cinemachine::ICinemachineMixer*  context, ::Unity::Cinemachine::ICinemachineCamera*  activeCamera, ::UnityEngine::Vector3  up, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"UpdateRootFrame", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineMixer*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, activeCamera, up, deltaTime);
}
inline void Unity::Cinemachine::CameraBlendStack::ProcessOverrideFrames(::by_ref<::Unity::Cinemachine::CinemachineBlend*>  outputBlend, int32_t  numTopLayersToExclude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"ProcessOverrideFrames", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CinemachineBlend*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputBlend, numTopLayersToExclude);
}
inline void Unity::Cinemachine::CameraBlendStack::SetRootBlend(::Unity::Cinemachine::CinemachineBlend*  blend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"SetRootBlend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blend);
}
inline float_t Unity::Cinemachine::CameraBlendStack::GetDeltaTimeOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"GetDeltaTimeOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CameraBlendStack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::CameraBlendStack::_SetCameraOverride_g__FindFrame_7_0(int32_t  withId, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"<SetCameraOverride>g__FindFrame|7_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, withId, priority);
}
inline bool Unity::Cinemachine::CameraBlendStack::_UpdateRootFrame_g__AdvanceBlend_18_0(::Unity::Cinemachine::CinemachineBlend*  blend, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack*>(),
                        {"<UpdateRootFrame>g__AdvanceBlend|18_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, blend, deltaTime);
}
inline ::Unity::Cinemachine::CameraBlendStack* Unity::Cinemachine::CameraBlendStack::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CameraBlendStack*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::ICameraOverrideStack"
constexpr  Unity::Cinemachine::CameraBlendStack::operator ::Unity::Cinemachine::ICameraOverrideStack*() noexcept {
return static_cast<::Unity::Cinemachine::ICameraOverrideStack*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICameraOverrideStack"
constexpr ::Unity::Cinemachine::ICameraOverrideStack* Unity::Cinemachine::CameraBlendStack::i___Unity__Cinemachine__ICameraOverrideStack() noexcept {
return static_cast<::Unity::Cinemachine::ICameraOverrideStack*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraBlendStack::CameraBlendStack()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.get_RemainingTimeInBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)()>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_RemainingTimeInBlend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeab094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_RemainingTimeInBlend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.set_RemainingTimeInBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)(float_t)>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::set_RemainingTimeInBlend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeab09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"set_RemainingTimeInBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)(::Unity::Cinemachine::ICinemachineCamera*, float_t)>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xaeaabb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)()>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeab0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)()>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeab0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)()>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeab0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)()>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeab0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.get_ParentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineMixer* (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)()>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_ParentCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeab0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_ParentCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.UpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::UpdateCameraState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeab0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.OnCameraActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)(::GlobalNamespace::ICinemachineCamera_ActivationEventParams)>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::OnCameraActivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeab0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource.TakeSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::*)(::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::TakeSnapshot)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xaeaae98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"TakeSnapshot", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_set_m_State(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr ::StringW& Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr ::StringW const& Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr void Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_set_m_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
constexpr float_t& Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_get__RemainingTimeInBlend_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemainingTimeInBlend_k__BackingField;
}
constexpr float_t const& Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_get__RemainingTimeInBlend_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RemainingTimeInBlend_k__BackingField;
}
constexpr void Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::__cordl_internal_set__RemainingTimeInBlend_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RemainingTimeInBlend_k__BackingField = value;
}
inline float_t Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_RemainingTimeInBlend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_RemainingTimeInBlend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::set_RemainingTimeInBlend(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"set_RemainingTimeInBlend", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::_ctor(::Unity::Cinemachine::ICinemachineCamera*  source, float_t  remainingTimeInBlend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, remainingTimeInBlend);
}
inline ::StringW Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::get_ParentCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"get_ParentCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineMixer*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::TakeSnapshot(::Unity::Cinemachine::ICinemachineCamera*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(),
                        {"TakeSnapshot", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource* Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::New_ctor(::Unity::Cinemachine::ICinemachineCamera*  source, float_t  remainingTimeInBlend)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*>(source, remainingTimeInBlend));
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr  Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::operator ::Unity::Cinemachine::ICinemachineCamera*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::i___Unity__Cinemachine__ICinemachineCamera() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource::CameraBlendStack_SnapshotBlendSource()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_StackFrame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CameraBlendStack_StackFrame::*)()>(&::Unity::Cinemachine::CameraBlendStack_StackFrame::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaeaaad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_StackFrame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_StackFrame.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CameraBlendStack_StackFrame::*)()>(&::Unity::Cinemachine::CameraBlendStack_StackFrame::get_Active)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeaac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_StackFrame*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CameraBlendStack_StackFrame.GetSnapshotIfAppropriate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineCamera* (::Unity::Cinemachine::CameraBlendStack_StackFrame::*)(::Unity::Cinemachine::ICinemachineCamera*, float_t)>(&::Unity::Cinemachine::CameraBlendStack_StackFrame::GetSnapshotIfAppropriate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xaeaad5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_StackFrame*>(),
                        {"GetSnapshotIfAppropriate", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr int32_t const& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_set_Id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr int32_t& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_Priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr int32_t const& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_Priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr void Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_set_Priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Priority = value;
}
constexpr ::Unity::Cinemachine::CinemachineBlend*& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::Unity::Cinemachine::CinemachineBlend* const& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_set_Source(::Unity::Cinemachine::CinemachineBlend*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Source = value;
}
constexpr float_t& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_DeltaTimeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeltaTimeOverride;
}
constexpr float_t const& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_DeltaTimeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeltaTimeOverride;
}
constexpr void Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_set_DeltaTimeOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeltaTimeOverride = value;
}
constexpr ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_m_Snapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Snapshot;
}
constexpr ::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource* const& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_m_Snapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Snapshot;
}
constexpr void Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_set_m_Snapshot(::Unity::Cinemachine::CameraBlendStack_SnapshotBlendSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Snapshot = value;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera*& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_m_SnapshotSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapshotSource;
}
constexpr ::Unity::Cinemachine::ICinemachineCamera* const& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_m_SnapshotSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapshotSource;
}
constexpr void Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_set_m_SnapshotSource(::Unity::Cinemachine::ICinemachineCamera*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapshotSource = value;
}
constexpr float_t& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_m_SnapshotBlendWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapshotBlendWeight;
}
constexpr float_t const& Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_get_m_SnapshotBlendWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapshotBlendWeight;
}
constexpr void Unity::Cinemachine::CameraBlendStack_StackFrame::__cordl_internal_set_m_SnapshotBlendWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapshotBlendWeight = value;
}
inline void Unity::Cinemachine::CameraBlendStack_StackFrame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_StackFrame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CameraBlendStack_StackFrame::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_StackFrame*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::CameraBlendStack_StackFrame::GetSnapshotIfAppropriate(::Unity::Cinemachine::ICinemachineCamera*  cam, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CameraBlendStack_StackFrame*>(),
                        {"GetSnapshotIfAppropriate", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineCamera*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineCamera*>(this, ___internal_method, cam, weight);
}
inline ::Unity::Cinemachine::CameraBlendStack_StackFrame* Unity::Cinemachine::CameraBlendStack_StackFrame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CameraBlendStack_StackFrame*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraBlendStack_StackFrame::CameraBlendStack_StackFrame()   {
}
