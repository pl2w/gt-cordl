#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBlendDefinition.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_Styles_impl.hpp"
#include "UnityEngine/zzzz__AnimationCurve_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_Styles_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlendDefinition.get_BlendTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineBlendDefinition::*)()>(&::Unity::Cinemachine::CinemachineBlendDefinition::get_BlendTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeaef4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition>(),
                        {"get_BlendTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlendDefinition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlendDefinition::*)(::GlobalNamespace::CinemachineBlendDefinition_Styles, float_t)>(&::Unity::Cinemachine::CinemachineBlendDefinition::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeaef64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CinemachineBlendDefinition_Styles>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlendDefinition.CreateStandardCurves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlendDefinition::*)()>(&::Unity::Cinemachine::CinemachineBlendDefinition::CreateStandardCurves)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0xaeaef78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition>(),
                        {"CreateStandardCurves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlendDefinition.get_BlendCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Unity::Cinemachine::CinemachineBlendDefinition::*)()>(&::Unity::Cinemachine::CinemachineBlendDefinition::get_BlendCurve)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaeaf4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition>(),
                        {"get_BlendCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineBlendDefinition::setStaticF_s_StandardCurves(::ArrayW<::UnityEngine::AnimationCurve*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::AnimationCurve*>, "s_StandardCurves", ::Unity::Cinemachine::CinemachineBlendDefinition>(std::forward<::ArrayW<::UnityEngine::AnimationCurve*>>(value));
}
inline ::ArrayW<::UnityEngine::AnimationCurve*> Unity::Cinemachine::CinemachineBlendDefinition::getStaticF_s_StandardCurves()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::AnimationCurve*>, "s_StandardCurves", ::Unity::Cinemachine::CinemachineBlendDefinition>();
}
inline float_t Unity::Cinemachine::CinemachineBlendDefinition::get_BlendTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition>(),
                        {"get_BlendTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineBlendDefinition::_ctor(::GlobalNamespace::CinemachineBlendDefinition_Styles  style, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::CinemachineBlendDefinition_Styles>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, style, time);
}
inline void Unity::Cinemachine::CinemachineBlendDefinition::CreateStandardCurves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition>(),
                        {"CreateStandardCurves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* Unity::Cinemachine::CinemachineBlendDefinition::get_BlendCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition>(),
                        {"get_BlendCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Style", ty: "::GlobalNamespace::CinemachineBlendDefinition_Styles", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition::CinemachineBlendDefinition(::GlobalNamespace::CinemachineBlendDefinition_Styles  Style, float_t  Time, ::UnityEngine::AnimationCurve*  CustomCurve) noexcept  {
this->Style = Style;
this->Time = Time;
this->CustomCurve = CustomCurve;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition::CinemachineBlendDefinition()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xaeaf59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*)>(&::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeaf6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::*)(::Unity::Cinemachine::ICinemachineCamera*, ::Unity::Cinemachine::ICinemachineCamera*, ::System::AsyncCallback*, ::System::Object*)>(&::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeaf6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlendDefinition (::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::*)(::System::IAsyncResult*)>(&::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeaf6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::Invoke(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(this, ___internal_method, outgoing, incoming);
}
inline ::System::IAsyncResult* Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::BeginInvoke(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, outgoing, incoming, callback, object);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlendDefinition>(this, ___internal_method, result);
}
inline ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate* Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate::CinemachineBlendDefinition_LookupBlendDelegate()   {
}
