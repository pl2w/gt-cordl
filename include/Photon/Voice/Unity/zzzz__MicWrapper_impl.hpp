#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/MicWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__MicWrapper_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioReader_1_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapper.get_Mic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Photon::Voice::Unity::MicWrapper::*)()>(&::Photon::Voice::Unity::MicWrapper::get_Mic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75acdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"get_Mic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapper::*)(::StringW, int32_t, ::Photon::Voice::ILogger*)>(&::Photon::Voice::Unity::MicWrapper::_ctor)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0xa75ace4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapper.get_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::MicWrapper::*)()>(&::Photon::Voice::Unity::MicWrapper::get_SamplingRate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa75b1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapper.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::MicWrapper::*)()>(&::Photon::Voice::Unity::MicWrapper::get_Channels)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa75b1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapper.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::MicWrapper::*)()>(&::Photon::Voice::Unity::MicWrapper::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75b1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapper.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapper::*)(::StringW)>(&::Photon::Voice::Unity::MicWrapper::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75b204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapper.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::MicWrapper::*)()>(&::Photon::Voice::Unity::MicWrapper::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa75b20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::MicWrapper.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::MicWrapper::*)(::ArrayW<float_t>)>(&::Photon::Voice::Unity::MicWrapper::Read)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa75b284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_mic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mic;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_mic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mic;
}
constexpr void Photon::Voice::Unity::MicWrapper::__cordl_internal_set_mic(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mic = value;
}
constexpr ::StringW& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr ::StringW const& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___device;
}
constexpr void Photon::Voice::Unity::MicWrapper::__cordl_internal_set_device(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___device = value;
}
constexpr ::Photon::Voice::ILogger*& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::Unity::MicWrapper::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr ::StringW& Photon::Voice::Unity::MicWrapper::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& Photon::Voice::Unity::MicWrapper::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Photon::Voice::Unity::MicWrapper::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_micPrevPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micPrevPos;
}
constexpr int32_t const& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_micPrevPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micPrevPos;
}
constexpr void Photon::Voice::Unity::MicWrapper::__cordl_internal_set_micPrevPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micPrevPos = value;
}
constexpr int32_t& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_micLoopCnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micLoopCnt;
}
constexpr int32_t const& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_micLoopCnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micLoopCnt;
}
constexpr void Photon::Voice::Unity::MicWrapper::__cordl_internal_set_micLoopCnt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micLoopCnt = value;
}
constexpr int32_t& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_readAbsPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readAbsPos;
}
constexpr int32_t const& Photon::Voice::Unity::MicWrapper::__cordl_internal_get_readAbsPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readAbsPos;
}
constexpr void Photon::Voice::Unity::MicWrapper::__cordl_internal_set_readAbsPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readAbsPos = value;
}
inline ::UnityW<::UnityEngine::AudioClip> Photon::Voice::Unity::MicWrapper::get_Mic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"get_Mic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void Photon::Voice::Unity::MicWrapper::_ctor(::StringW  device, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, suggestedFrequency, logger);
}
inline int32_t Photon::Voice::Unity::MicWrapper::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::MicWrapper::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Photon::Voice::Unity::MicWrapper::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::MicWrapper::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::MicWrapper::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::MicWrapper::Read(::ArrayW<float_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::MicWrapper*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer);
}
inline ::Photon::Voice::Unity::MicWrapper* Photon::Voice::Unity::MicWrapper::New_ctor(::StringW  device, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::MicWrapper*>(device, suggestedFrequency, logger));
}
/// @brief Convert operator to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr  Photon::Voice::Unity::MicWrapper::operator ::Photon::Voice::IAudioReader_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IAudioReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr ::Photon::Voice::IAudioReader_1<float_t>* Photon::Voice::Unity::MicWrapper::i___Photon__Voice__IAudioReader_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IAudioReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IDataReader_1<float_t>"
constexpr  Photon::Voice::Unity::MicWrapper::operator ::Photon::Voice::IDataReader_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDataReader_1<float_t>"
constexpr ::Photon::Voice::IDataReader_1<float_t>* Photon::Voice::Unity::MicWrapper::i___Photon__Voice__IDataReader_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::Unity::MicWrapper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::Unity::MicWrapper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr  Photon::Voice::Unity::MicWrapper::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::Unity::MicWrapper::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::MicWrapper::MicWrapper()   {
}
