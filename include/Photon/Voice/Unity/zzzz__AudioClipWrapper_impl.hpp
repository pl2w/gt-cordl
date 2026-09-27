#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioClipWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__AudioClipWrapper_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioReader_1_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper.get_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::AudioClipWrapper::*)()>(&::Photon::Voice::Unity::AudioClipWrapper::get_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"get_Loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper.set_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioClipWrapper::*)(bool)>(&::Photon::Voice::Unity::AudioClipWrapper::set_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioClipWrapper::*)(::UnityEngine::AudioClip*)>(&::Photon::Voice::Unity::AudioClipWrapper::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa75a63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::AudioClipWrapper::*)(::ArrayW<float_t>)>(&::Photon::Voice::Unity::AudioClipWrapper::Read)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa75a684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper.get_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::AudioClipWrapper::*)()>(&::Photon::Voice::Unity::AudioClipWrapper::get_SamplingRate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa75a794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::AudioClipWrapper::*)()>(&::Photon::Voice::Unity::AudioClipWrapper::get_Channels)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa75a7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::AudioClipWrapper::*)()>(&::Photon::Voice::Unity::AudioClipWrapper::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioClipWrapper::*)(::StringW)>(&::Photon::Voice::Unity::AudioClipWrapper::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioClipWrapper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioClipWrapper::*)()>(&::Photon::Voice::Unity::AudioClipWrapper::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa75a7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get_audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get_audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr void Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClip = value;
}
constexpr int32_t& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get_readPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readPos;
}
constexpr int32_t const& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get_readPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readPos;
}
constexpr void Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_set_readPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readPos = value;
}
constexpr float_t& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr bool& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get__Loop_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Loop_k__BackingField;
}
constexpr bool const& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get__Loop_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Loop_k__BackingField;
}
constexpr void Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_set__Loop_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Loop_k__BackingField = value;
}
constexpr bool& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get_playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playing;
}
constexpr bool const& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get_playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playing;
}
constexpr void Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_set_playing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playing = value;
}
constexpr ::StringW& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Photon::Voice::Unity::AudioClipWrapper::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline bool Photon::Voice::Unity::AudioClipWrapper::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"get_Loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AudioClipWrapper::set_Loop(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"set_Loop", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::AudioClipWrapper::_ctor(::UnityEngine::AudioClip*  audioClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip);
}
inline bool Photon::Voice::Unity::AudioClipWrapper::Read(::ArrayW<float_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer);
}
inline int32_t Photon::Voice::Unity::AudioClipWrapper::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::AudioClipWrapper::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Photon::Voice::Unity::AudioClipWrapper::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AudioClipWrapper::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::AudioClipWrapper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioClipWrapper*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::AudioClipWrapper* Photon::Voice::Unity::AudioClipWrapper::New_ctor(::UnityEngine::AudioClip*  audioClip)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::AudioClipWrapper*>(audioClip));
}
/// @brief Convert operator to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr  Photon::Voice::Unity::AudioClipWrapper::operator ::Photon::Voice::IAudioReader_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IAudioReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr ::Photon::Voice::IAudioReader_1<float_t>* Photon::Voice::Unity::AudioClipWrapper::i___Photon__Voice__IAudioReader_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IAudioReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IDataReader_1<float_t>"
constexpr  Photon::Voice::Unity::AudioClipWrapper::operator ::Photon::Voice::IDataReader_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDataReader_1<float_t>"
constexpr ::Photon::Voice::IDataReader_1<float_t>* Photon::Voice::Unity::AudioClipWrapper::i___Photon__Voice__IDataReader_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::Unity::AudioClipWrapper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::Unity::AudioClipWrapper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr  Photon::Voice::Unity::AudioClipWrapper::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::Unity::AudioClipWrapper::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AudioClipWrapper::AudioClipWrapper()   {
}
