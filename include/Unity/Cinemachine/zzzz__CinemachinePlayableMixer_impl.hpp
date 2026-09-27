#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePlayableMixer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePlayableMixer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePlayableMixer_def.hpp"
#include "Unity/Cinemachine/zzzz__ICameraOverrideStack_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer.OnPlayableDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePlayableMixer::*)(::UnityEngine::Playables::Playable)>(&::Unity::Cinemachine::CinemachinePlayableMixer::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf001f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer.PrepareFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePlayableMixer::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::Unity::Cinemachine::CinemachinePlayableMixer::PrepareFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf002a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer.ProcessFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePlayableMixer::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::Unity::Cinemachine::CinemachinePlayableMixer::ProcessFrame)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xaf002b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer.GetDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachinePlayableMixer::*)(float_t)>(&::Unity::Cinemachine::CinemachinePlayableMixer::GetDeltaTime)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaf008f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(),
                        {"GetDeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePlayableMixer::*)()>(&::Unity::Cinemachine::CinemachinePlayableMixer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf009b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_get_Priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr int32_t const& Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_get_Priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Priority;
}
constexpr void Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_set_Priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Priority = value;
}
constexpr ::Unity::Cinemachine::ICameraOverrideStack*& Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_get_m_BrainOverrideStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BrainOverrideStack;
}
constexpr ::Unity::Cinemachine::ICameraOverrideStack* const& Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_get_m_BrainOverrideStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BrainOverrideStack;
}
constexpr void Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_set_m_BrainOverrideStack(::Unity::Cinemachine::ICameraOverrideStack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BrainOverrideStack = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_get_m_BrainOverrideId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BrainOverrideId;
}
constexpr int32_t const& Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_get_m_BrainOverrideId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BrainOverrideId;
}
constexpr void Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_set_m_BrainOverrideId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BrainOverrideId = value;
}
constexpr bool& Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_get_m_PreviewPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviewPlay;
}
constexpr bool const& Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_get_m_PreviewPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviewPlay;
}
constexpr void Unity::Cinemachine::CinemachinePlayableMixer::__cordl_internal_set_m_PreviewPlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviewPlay = value;
}
inline void Unity::Cinemachine::CinemachinePlayableMixer::setStaticF_GetMasterPlayableDirector(::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*, "GetMasterPlayableDirector", ::Unity::Cinemachine::CinemachinePlayableMixer*>(std::forward<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(value));
}
inline ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate* Unity::Cinemachine::CinemachinePlayableMixer::getStaticF_GetMasterPlayableDirector()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*, "GetMasterPlayableDirector", ::Unity::Cinemachine::CinemachinePlayableMixer*>();
}
inline void Unity::Cinemachine::CinemachinePlayableMixer::OnPlayableDestroy(::UnityEngine::Playables::Playable  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void Unity::Cinemachine::CinemachinePlayableMixer::PrepareFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info);
}
inline void Unity::Cinemachine::CinemachinePlayableMixer::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline float_t Unity::Cinemachine::CinemachinePlayableMixer::GetDeltaTime(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(),
                        {"GetDeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, deltaTime);
}
inline void Unity::Cinemachine::CinemachinePlayableMixer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachinePlayableMixer* Unity::Cinemachine::CinemachinePlayableMixer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachinePlayableMixer*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachinePlayableMixer::CinemachinePlayableMixer()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaf009c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Playables::PlayableDirector> (::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::*)()>(&::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf00a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf00a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Playables::PlayableDirector> (::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf00a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityW<::UnityEngine::Playables::PlayableDirector> Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableDirector>>(this, ___internal_method);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::UnityW<::UnityEngine::Playables::PlayableDirector> Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableDirector>>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate* Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate::CinemachinePlayableMixer_MasterDirectorDelegate()   {
}
