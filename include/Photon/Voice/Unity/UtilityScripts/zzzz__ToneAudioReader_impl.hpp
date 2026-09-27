#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/ToneAudioReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__ToneAudioReader_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioReader_1_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::*)()>(&::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa78d600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::*)()>(&::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78d634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader.get_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::*)()>(&::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::get_SamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78d62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::*)()>(&::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78d63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::*)()>(&::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa78d644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::*)(::ArrayW<float_t>)>(&::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::Read)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa78d648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& Photon::Voice::Unity::UtilityScripts::ToneAudioReader::__cordl_internal_get_k()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k;
}
constexpr double_t const& Photon::Voice::Unity::UtilityScripts::ToneAudioReader::__cordl_internal_get_k() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ToneAudioReader::__cordl_internal_set_k(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___k = value;
}
constexpr int64_t& Photon::Voice::Unity::UtilityScripts::ToneAudioReader::__cordl_internal_get_timeSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSamples;
}
constexpr int64_t const& Photon::Voice::Unity::UtilityScripts::ToneAudioReader::__cordl_internal_get_timeSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSamples;
}
constexpr void Photon::Voice::Unity::UtilityScripts::ToneAudioReader::__cordl_internal_set_timeSamples(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSamples = value;
}
inline void Photon::Voice::Unity::UtilityScripts::ToneAudioReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::UtilityScripts::ToneAudioReader::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::UtilityScripts::ToneAudioReader::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Photon::Voice::Unity::UtilityScripts::ToneAudioReader::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::ToneAudioReader::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::UtilityScripts::ToneAudioReader::Read(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buf);
}
inline ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader* Photon::Voice::Unity::UtilityScripts::ToneAudioReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::ToneAudioReader*>());
}
/// @brief Convert operator to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr  Photon::Voice::Unity::UtilityScripts::ToneAudioReader::operator ::Photon::Voice::IAudioReader_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IAudioReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr ::Photon::Voice::IAudioReader_1<float_t>* Photon::Voice::Unity::UtilityScripts::ToneAudioReader::i___Photon__Voice__IAudioReader_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IAudioReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IDataReader_1<float_t>"
constexpr  Photon::Voice::Unity::UtilityScripts::ToneAudioReader::operator ::Photon::Voice::IDataReader_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDataReader_1<float_t>"
constexpr ::Photon::Voice::IDataReader_1<float_t>* Photon::Voice::Unity::UtilityScripts::ToneAudioReader::i___Photon__Voice__IDataReader_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::Unity::UtilityScripts::ToneAudioReader::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::Unity::UtilityScripts::ToneAudioReader::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr  Photon::Voice::Unity::UtilityScripts::ToneAudioReader::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::Unity::UtilityScripts::ToneAudioReader::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::ToneAudioReader::ToneAudioReader()   {
}
