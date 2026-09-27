#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AndroidAudioInAEC.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "Photon/Voice/Unity/zzzz__AndroidAudioInAEC_def.hpp"
#include "Photon/Voice/Unity/zzzz__AndroidAudioInAEC_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioPusher_1_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__IResettable_def.hpp"
#include "Photon/Voice/zzzz__ObjectFactory_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC::*)(::Photon::Voice::ILogger*, bool, bool, bool)>(&::Photon::Voice::Unity::AndroidAudioInAEC::_ctor)> {
  constexpr static std::size_t size = 0x10f8;
  constexpr static std::size_t addrs = 0xa746dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC.SetCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC::*)(::System::Action_1<::ArrayW<int16_t>>*, ::Photon::Voice::ObjectFactory_2<::ArrayW<int16_t>,int32_t>*)>(&::Photon::Voice::Unity::AndroidAudioInAEC::SetCallback)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa75a0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"SetCallback", {}, {::i2c::type_of<::System::Action_1<::ArrayW<int16_t>>*>(), ::i2c::type_of<::Photon::Voice::ObjectFactory_2<::ArrayW<int16_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::AndroidAudioInAEC::*)()>(&::Photon::Voice::Unity::AndroidAudioInAEC::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC.get_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::AndroidAudioInAEC::*)()>(&::Photon::Voice::Unity::AndroidAudioInAEC::get_SamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::AndroidAudioInAEC::*)()>(&::Photon::Voice::Unity::AndroidAudioInAEC::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC::*)(::StringW)>(&::Photon::Voice::Unity::AndroidAudioInAEC::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75a404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC::*)()>(&::Photon::Voice::Unity::AndroidAudioInAEC::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa75a40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC::*)()>(&::Photon::Voice::Unity::AndroidAudioInAEC::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa75a4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AndroidJavaObject*& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_audioIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioIn;
}
constexpr ::UnityEngine::AndroidJavaObject* const& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_audioIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioIn;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_set_audioIn(::UnityEngine::AndroidJavaObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioIn = value;
}
constexpr ::System::IntPtr& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_javaBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___javaBuf;
}
constexpr ::System::IntPtr const& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_javaBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___javaBuf;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_set_javaBuf(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___javaBuf = value;
}
constexpr ::Photon::Voice::ILogger*& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr int32_t& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_audioInSampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioInSampleRate;
}
constexpr int32_t const& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_audioInSampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioInSampleRate;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_set_audioInSampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioInSampleRate = value;
}
constexpr ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback* const& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_set_callback(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::StringW& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline void Photon::Voice::Unity::AndroidAudioInAEC::_ctor(::Photon::Voice::ILogger*  logger, bool  enableAEC, bool  enableAGC, bool  enableNS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger, enableAEC, enableAGC, enableNS);
}
inline void Photon::Voice::Unity::AndroidAudioInAEC::SetCallback(::System::Action_1<::ArrayW<int16_t>>*  callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<int16_t>,int32_t>*  bufferFactory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"SetCallback", {}, {::i2c::type_of<::System::Action_1<::ArrayW<int16_t>>*>(), ::i2c::type_of<::Photon::Voice::ObjectFactory_2<::ArrayW<int16_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, bufferFactory);
}
inline int32_t Photon::Voice::Unity::AndroidAudioInAEC::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::AndroidAudioInAEC::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Photon::Voice::Unity::AndroidAudioInAEC::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AndroidAudioInAEC::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::AndroidAudioInAEC::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AndroidAudioInAEC::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::AndroidAudioInAEC* Photon::Voice::Unity::AndroidAudioInAEC::New_ctor(::Photon::Voice::ILogger*  logger, bool  enableAEC, bool  enableAGC, bool  enableNS)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::AndroidAudioInAEC*>(logger, enableAEC, enableAGC, enableNS));
}
/// @brief Convert operator to "::Photon::Voice::IAudioPusher_1<int16_t>"
constexpr  Photon::Voice::Unity::AndroidAudioInAEC::operator ::Photon::Voice::IAudioPusher_1<int16_t>*() noexcept {
return static_cast<::Photon::Voice::IAudioPusher_1<int16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioPusher_1<int16_t>"
constexpr ::Photon::Voice::IAudioPusher_1<int16_t>* Photon::Voice::Unity::AndroidAudioInAEC::i___Photon__Voice__IAudioPusher_1_int16_t_() noexcept {
return static_cast<::Photon::Voice::IAudioPusher_1<int16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr  Photon::Voice::Unity::AndroidAudioInAEC::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::Unity::AndroidAudioInAEC::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::Unity::AndroidAudioInAEC::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::Unity::AndroidAudioInAEC::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IResettable"
constexpr  Photon::Voice::Unity::AndroidAudioInAEC::operator ::Photon::Voice::IResettable*() noexcept {
return static_cast<::Photon::Voice::IResettable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IResettable"
constexpr ::Photon::Voice::IResettable* Photon::Voice::Unity::AndroidAudioInAEC::i___Photon__Voice__IResettable() noexcept {
return static_cast<::Photon::Voice::IResettable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AndroidAudioInAEC::AndroidAudioInAEC()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::*)()>(&::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa75a074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback.SetCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::*)(::System::Action_1<::ArrayW<int16_t>>*, ::System::IntPtr)>(&::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::SetCallback)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa75a3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>(),
                        {"SetCallback", {}, {::i2c::type_of<::System::Action_1<::ArrayW<int16_t>>*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback.OnData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::*)()>(&::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::OnData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa75a5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>(),
                        {"OnData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback.OnStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::*)()>(&::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::OnStop)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa75a620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>(),
                        {"OnStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::ArrayW<int16_t>>*& Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::ArrayW<int16_t>>* const& Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_set_callback(::System::Action_1<::ArrayW<int16_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::System::IntPtr& Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_get_javaBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___javaBuf;
}
constexpr ::System::IntPtr const& Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_get_javaBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___javaBuf;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_set_javaBuf(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___javaBuf = value;
}
constexpr int32_t& Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_get_cntFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cntFrame;
}
constexpr int32_t const& Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_get_cntFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cntFrame;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_set_cntFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cntFrame = value;
}
constexpr int32_t& Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_get_cntShort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cntShort;
}
constexpr int32_t const& Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_get_cntShort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cntShort;
}
constexpr void Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::__cordl_internal_set_cntShort(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cntShort = value;
}
inline void Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::SetCallback(::System::Action_1<::ArrayW<int16_t>>*  callback, ::System::IntPtr  javaBuf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>(),
                        {"SetCallback", {}, {::i2c::type_of<::System::Action_1<::ArrayW<int16_t>>*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, javaBuf);
}
inline void Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::OnData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>(),
                        {"OnData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::OnStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>(),
                        {"OnStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback* Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback::AndroidAudioInAEC_DataCallback()   {
}
