#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioCaptureFMODAndUnity.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckAudioCaptureFMODAndUnity_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckAudioCaptureFMODAndUnity::*)()>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::IsCapturing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdcb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"IsCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.TryAppendToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t, int32_t, ::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::TryAppendToBuffer)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cdcb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"TryAppendToBuffer", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.TryAppendToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Collections::AudioBuffer*, ::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::TryAppendToBuffer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9cdcc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"TryAppendToBuffer", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.AppendToBufferAsStereo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t, int32_t, int32_t, ::Liv::Lck::Collections::AudioBuffer*, ::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::AppendToBufferAsStereo)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x9cdcd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"AppendToBufferAsStereo", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMODAndUnity::*)(::ArrayW<float_t>, int32_t)>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9cdd188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                    {::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMODAndUnity::*)()>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x9cdd280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMODAndUnity::*)()>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cdd3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.GetAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMODAndUnity::*)(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*)>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::GetAudioData)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9cdd3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.EnableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMODAndUnity::*)()>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::EnableCapture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cdd648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"EnableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity.DisableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMODAndUnity::*)()>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::DisableCapture)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9cdd690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"DisableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMODAndUnity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMODAndUnity::*)()>(&::Liv::Lck::LckAudioCaptureFMODAndUnity::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9cdd6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__mObjHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mObjHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__mObjHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mObjHandle;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__mObjHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mObjHandle = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__tmpRemixBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpRemixBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__tmpRemixBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpRemixBuffer;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__tmpRemixBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpRemixBuffer = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__tmpAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpAudio;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__tmpAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpAudio;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__tmpAudio(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpAudio = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__fmodBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fmodBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__fmodBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fmodBuffer;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__fmodBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fmodBuffer = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__unityBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__unityBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityBuffer;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__unityBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unityBuffer = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__mixBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__mixBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mixBuffer;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__mixBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mixBuffer = value;
}
constexpr int32_t& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__fmodSampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fmodSampleRate;
}
constexpr int32_t const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__fmodSampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fmodSampleRate;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__fmodSampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fmodSampleRate = value;
}
constexpr int32_t& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__unitySampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unitySampleRate;
}
constexpr int32_t const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__unitySampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unitySampleRate;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__unitySampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unitySampleRate = value;
}
constexpr bool& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__isCapturing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCapturing;
}
constexpr bool const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__isCapturing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCapturing;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__isCapturing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCapturing = value;
}
constexpr ::System::Object*& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__audioThreadLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioThreadLock;
}
constexpr ::System::Object* const& Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_get__audioThreadLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioThreadLock;
}
constexpr void Liv::Lck::LckAudioCaptureFMODAndUnity::__cordl_internal_set__audioThreadLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioThreadLock = value;
}
inline bool Liv::Lck::LckAudioCaptureFMODAndUnity::IsCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"IsCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::TryAppendToBuffer(::ArrayW<float_t>  srcDataBuffer, int32_t  srcStartIdx, int32_t  srcDataLength, ::Liv::Lck::Collections::AudioBuffer*  destBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"TryAppendToBuffer", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, srcDataBuffer, srcStartIdx, srcDataLength, destBuffer);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::TryAppendToBuffer(::Liv::Lck::Collections::AudioBuffer*  srcBuffer, ::Liv::Lck::Collections::AudioBuffer*  destBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"TryAppendToBuffer", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, srcBuffer, destBuffer);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::AppendToBufferAsStereo(::ArrayW<float_t>  sourceAudioBuffer, int32_t  sourceAudioStartIdx, int32_t  sourceAudioLength, int32_t  sourceChannels, ::Liv::Lck::Collections::AudioBuffer*  destBuffer, ::Liv::Lck::Collections::AudioBuffer*  remixBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"AppendToBufferAsStereo", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceAudioBuffer, sourceAudioStartIdx, sourceAudioLength, sourceChannels, destBuffer, remixBuffer);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::EnableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"EnableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::DisableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {"DisableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMODAndUnity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMODAndUnity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckAudioCaptureFMODAndUnity* Liv::Lck::LckAudioCaptureFMODAndUnity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckAudioCaptureFMODAndUnity*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr  Liv::Lck::LckAudioCaptureFMODAndUnity::operator ::Liv::Lck::ILckAudioSource*() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* Liv::Lck::LckAudioCaptureFMODAndUnity::i___Liv__Lck__ILckAudioSource() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioCaptureFMODAndUnity::LckAudioCaptureFMODAndUnity()   {
}
