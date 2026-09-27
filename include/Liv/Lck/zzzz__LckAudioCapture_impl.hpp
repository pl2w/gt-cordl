#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioCapture.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckAudioCapture_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckAudioCapture.GetAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCapture::*)(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*)>(&::Liv::Lck::LckAudioCapture::GetAudioData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9cdc4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCapture.EnableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCapture::*)()>(&::Liv::Lck::LckAudioCapture::EnableCapture)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9cdc5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {"EnableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCapture.DisableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCapture::*)()>(&::Liv::Lck::LckAudioCapture::DisableCapture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9cdc5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {"DisableCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCapture.IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckAudioCapture::*)()>(&::Liv::Lck::LckAudioCapture::IsCapturing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdc5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {"IsCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCapture.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCapture::*)(::ArrayW<float_t>, int32_t)>(&::Liv::Lck::LckAudioCapture::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9cdc600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                    {::i2c::class_of<::Liv::Lck::LckAudioCapture*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCapture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCapture::*)()>(&::Liv::Lck::LckAudioCapture::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9cdc85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::LckAudioCapture::__cordl_internal_get__captureAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureAudio;
}
constexpr bool const& Liv::Lck::LckAudioCapture::__cordl_internal_get__captureAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureAudio;
}
constexpr void Liv::Lck::LckAudioCapture::__cordl_internal_set__captureAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____captureAudio = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCapture::__cordl_internal_get__audioBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCapture::__cordl_internal_get__audioBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBuffer;
}
constexpr void Liv::Lck::LckAudioCapture::__cordl_internal_set__audioBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioBuffer = value;
}
constexpr ::System::Object*& Liv::Lck::LckAudioCapture::__cordl_internal_get__audioThreadLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioThreadLock;
}
constexpr ::System::Object* const& Liv::Lck::LckAudioCapture::__cordl_internal_get__audioThreadLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioThreadLock;
}
constexpr void Liv::Lck::LckAudioCapture::__cordl_internal_set__audioThreadLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioThreadLock = value;
}
inline void Liv::Lck::LckAudioCapture::GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Liv::Lck::LckAudioCapture::EnableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {"EnableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCapture::DisableCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {"DisableCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckAudioCapture::IsCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {"IsCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCapture::OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckAudioCapture*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void Liv::Lck::LckAudioCapture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCapture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckAudioCapture* Liv::Lck::LckAudioCapture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckAudioCapture*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr  Liv::Lck::LckAudioCapture::operator ::Liv::Lck::ILckAudioSource*() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* Liv::Lck::LckAudioCapture::i___Liv__Lck__ILckAudioSource() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioCapture::LckAudioCapture()   {
}
