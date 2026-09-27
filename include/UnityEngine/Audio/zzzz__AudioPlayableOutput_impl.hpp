#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioPlayableOutput.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioPlayableOutput_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioPlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW, ::UnityEngine::AudioSource*)>(&::UnityEngine::Audio::AudioPlayableOutput::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb55ad84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioPlayableOutput::*)(::UnityEngine::Playables::PlayableOutputHandle)>(&::UnityEngine::Audio::AudioPlayableOutput::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb55b070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.get_Null
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioPlayableOutput (*)()>(&::UnityEngine::Audio::AudioPlayableOutput::get_Null)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb55aff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"get_Null", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Audio::AudioPlayableOutput::*)()>(&::UnityEngine::Audio::AudioPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb55b164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"GetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.op_Implicit___UnityEngine__Playables__PlayableOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableOutput (*)(::UnityEngine::Audio::AudioPlayableOutput)>(&::UnityEngine::Audio::AudioPlayableOutput::op_Implicit___UnityEngine__Playables__PlayableOutput)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb55ade4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Audio::AudioPlayableOutput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.op_Explicit___UnityEngine__Audio__AudioPlayableOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioPlayableOutput (*)(::UnityEngine::Playables::PlayableOutput)>(&::UnityEngine::Audio::AudioPlayableOutput::op_Explicit___UnityEngine__Audio__AudioPlayableOutput)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb55b170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableOutput>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioPlayableOutput::*)(::UnityEngine::AudioSource*)>(&::UnityEngine::Audio::AudioPlayableOutput::SetTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb55b160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.SetEvaluateOnSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioPlayableOutput::*)(bool)>(&::UnityEngine::Audio::AudioPlayableOutput::SetEvaluateOnSeek)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb55b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"SetEvaluateOnSeek", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.InternalSetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::UnityEngine::AudioSource*)>(&::UnityEngine::Audio::AudioPlayableOutput::InternalSetTarget)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb55b1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"InternalSetTarget", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.InternalSetEvaluateOnSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, bool)>(&::UnityEngine::Audio::AudioPlayableOutput::InternalSetEvaluateOnSeek)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb55b2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"InternalSetEvaluateOnSeek", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioPlayableOutput.InternalSetTarget_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>, ::System::IntPtr)>(&::UnityEngine::Audio::AudioPlayableOutput::InternalSetTarget_Injected)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb55b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"InternalSetTarget_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::AudioPlayableOutput UnityEngine::Audio::AudioPlayableOutput::Create(::UnityEngine::Playables::PlayableGraph  graph, ::StringW  name, ::UnityEngine::AudioSource*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioPlayableOutput>(nullptr, ___internal_method, graph, name, target);
}
inline void UnityEngine::Audio::AudioPlayableOutput::_ctor(::UnityEngine::Playables::PlayableOutputHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableOutputHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Audio::AudioPlayableOutput UnityEngine::Audio::AudioPlayableOutput::get_Null()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"get_Null", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioPlayableOutput>(nullptr, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutputHandle UnityEngine::Audio::AudioPlayableOutput::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"GetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableOutput UnityEngine::Audio::AudioPlayableOutput::op_Implicit___UnityEngine__Playables__PlayableOutput(::UnityEngine::Audio::AudioPlayableOutput  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Audio::AudioPlayableOutput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput>(nullptr, ___internal_method, output);
}
inline ::UnityEngine::Audio::AudioPlayableOutput UnityEngine::Audio::AudioPlayableOutput::op_Explicit___UnityEngine__Audio__AudioPlayableOutput(::UnityEngine::Playables::PlayableOutput  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"op_Explicit", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableOutput>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioPlayableOutput>(nullptr, ___internal_method, output);
}
inline void UnityEngine::Audio::AudioPlayableOutput::SetTarget(::UnityEngine::AudioSource*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Audio::AudioPlayableOutput::SetEvaluateOnSeek(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"SetEvaluateOnSeek", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Audio::AudioPlayableOutput::InternalSetTarget(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, ::UnityEngine::AudioSource*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"InternalSetTarget", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, target);
}
inline void UnityEngine::Audio::AudioPlayableOutput::InternalSetEvaluateOnSeek(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"InternalSetEvaluateOnSeek", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, value);
}
inline void UnityEngine::Audio::AudioPlayableOutput::InternalSetTarget_Injected(::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  output, ::System::IntPtr  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Audio::AudioPlayableOutput>(),
                        {"InternalSetTarget_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableOutputHandle>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, target);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayableOutput"
constexpr  UnityEngine::Audio::AudioPlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput*()  {
return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayableOutput"
constexpr ::UnityEngine::Playables::IPlayableOutput* UnityEngine::Audio::AudioPlayableOutput::i___UnityEngine__Playables__IPlayableOutput()  {
return static_cast<::UnityEngine::Playables::IPlayableOutput*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::AudioPlayableOutput::AudioPlayableOutput(::UnityEngine::Playables::PlayableOutputHandle  m_Handle) noexcept  {
this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioPlayableOutput::AudioPlayableOutput()   {
}
