#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioCaptureFMOD.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckAudioCaptureFMOD_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMOD.IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckAudioCaptureFMOD::*)()>(&::Liv::Lck::LckAudioCaptureFMOD::IsCapturing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdc910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"IsCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMOD.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMOD::*)()>(&::Liv::Lck::LckAudioCaptureFMOD::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cdc918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMOD.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMOD::*)()>(&::Liv::Lck::LckAudioCaptureFMOD::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cdc91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMOD.GetAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMOD::*)(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*)>(&::Liv::Lck::LckAudioCaptureFMOD::GetAudioData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9cdc920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMOD.EnableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMOD::*)()>(&::Liv::Lck::LckAudioCaptureFMOD::EnableCapture)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9cdca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"EnableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMOD.DisableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMOD::*)()>(&::Liv::Lck::LckAudioCaptureFMOD::DisableCapture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cdca34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"DisableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureFMOD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureFMOD::*)()>(&::Liv::Lck::LckAudioCaptureFMOD::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cdca54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::GCHandle& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get_mObjHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mObjHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get_mObjHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mObjHandle;
}
constexpr void Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_set_mObjHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mObjHandle = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__tmpDownmixBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpDownmixBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__tmpDownmixBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpDownmixBuffer;
}
constexpr void Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_set__tmpDownmixBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpDownmixBuffer = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__tmpAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpAudio;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__tmpAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpAudio;
}
constexpr void Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_set__tmpAudio(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpAudio = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__audioBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__audioBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBuffer;
}
constexpr void Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_set__audioBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioBuffer = value;
}
constexpr bool& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__isCapturing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCapturing;
}
constexpr bool const& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__isCapturing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCapturing;
}
constexpr void Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_set__isCapturing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCapturing = value;
}
constexpr ::System::Object*& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__audioThreadLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioThreadLock;
}
constexpr ::System::Object* const& Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_get__audioThreadLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioThreadLock;
}
constexpr void Liv::Lck::LckAudioCaptureFMOD::__cordl_internal_set__audioThreadLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioThreadLock = value;
}
inline bool Liv::Lck::LckAudioCaptureFMOD::IsCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"IsCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMOD::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMOD::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMOD::GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Liv::Lck::LckAudioCaptureFMOD::EnableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"EnableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMOD::DisableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {"DisableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureFMOD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureFMOD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckAudioCaptureFMOD* Liv::Lck::LckAudioCaptureFMOD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckAudioCaptureFMOD*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr  Liv::Lck::LckAudioCaptureFMOD::operator ::Liv::Lck::ILckAudioSource*() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* Liv::Lck::LckAudioCaptureFMOD::i___Liv__Lck__ILckAudioSource() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioCaptureFMOD::LckAudioCaptureFMOD()   {
}
