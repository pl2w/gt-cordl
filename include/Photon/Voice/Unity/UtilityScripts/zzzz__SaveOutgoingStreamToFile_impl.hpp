#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/SaveOutgoingStreamToFile.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__SaveOutgoingStreamToFile_def.hpp"
#include "CSCore/Codecs/WAV/zzzz__WaveWriter_def.hpp"
#include "Photon/Voice/Unity/UtilityScripts/zzzz__SaveOutgoingStreamToFile_def.hpp"
#include "Photon/Voice/Unity/zzzz__PhotonVoiceCreatedParams_def.hpp"
#include "Photon/Voice/zzzz__IProcessor_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile.PhotonVoiceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::*)(::Photon::Voice::Unity::PhotonVoiceCreatedParams*)>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::PhotonVoiceCreated)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0xa78cbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>(),
                        {"PhotonVoiceCreated", {}, {::i2c::type_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile.GetFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::GetFilePath)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa78d02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>(),
                        {"GetFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile.PhotonVoiceRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::PhotonVoiceRemoved)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa78d1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>(),
                        {"PhotonVoiceRemoved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78d2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::CSCore::Codecs::WAV::WaveWriter*& Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::__cordl_internal_get_wavWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wavWriter;
}
constexpr ::CSCore::Codecs::WAV::WaveWriter* const& Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::__cordl_internal_get_wavWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wavWriter;
}
constexpr void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::__cordl_internal_set_wavWriter(::CSCore::Codecs::WAV::WaveWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wavWriter = value;
}
inline void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::PhotonVoiceCreated(::Photon::Voice::Unity::PhotonVoiceCreatedParams*  photonVoiceCreatedParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>(),
                        {"PhotonVoiceCreated", {}, {::i2c::type_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, photonVoiceCreatedParams);
}
inline ::StringW Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::GetFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>(),
                        {"GetFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::PhotonVoiceRemoved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>(),
                        {"PhotonVoiceRemoved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile* Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile::SaveOutgoingStreamToFile()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::*)(::CSCore::Codecs::WAV::WaveWriter*)>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa78d1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*>(),
                        {".ctor", {}, {::i2c::type_of<::CSCore::Codecs::WAV::WaveWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int16_t> (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::*)(::ArrayW<int16_t>)>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::Process)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa78d354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa78d3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::CSCore::Codecs::WAV::WaveWriter*& Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::__cordl_internal_get_wavWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wavWriter;
}
constexpr ::CSCore::Codecs::WAV::WaveWriter* const& Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::__cordl_internal_get_wavWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wavWriter;
}
constexpr void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::__cordl_internal_set_wavWriter(::CSCore::Codecs::WAV::WaveWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wavWriter = value;
}
inline void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::_ctor(::CSCore::Codecs::WAV::WaveWriter*  waveWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*>(),
                        {".ctor", {}, {::i2c::type_of<::CSCore::Codecs::WAV::WaveWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waveWriter);
}
inline ::ArrayW<int16_t> Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::Process(::ArrayW<int16_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t>>(this, ___internal_method, buf);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort* Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::New_ctor(::CSCore::Codecs::WAV::WaveWriter*  waveWriter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort*>(waveWriter));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr  Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::operator ::Photon::Voice::IProcessor_1<int16_t>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<int16_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<int16_t>"
constexpr ::Photon::Voice::IProcessor_1<int16_t>* Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::i___Photon__Voice__IProcessor_1_int16_t_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<int16_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverShort::SaveOutgoingStreamToFile_OutgoingStreamSaverShort()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::*)(::CSCore::Codecs::WAV::WaveWriter*)>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa78d188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::CSCore::Codecs::WAV::WaveWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::*)(::ArrayW<float_t>)>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::Process)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa78d2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::*)()>(&::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa78d328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::CSCore::Codecs::WAV::WaveWriter*& Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::__cordl_internal_get_wavWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wavWriter;
}
constexpr ::CSCore::Codecs::WAV::WaveWriter* const& Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::__cordl_internal_get_wavWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wavWriter;
}
constexpr void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::__cordl_internal_set_wavWriter(::CSCore::Codecs::WAV::WaveWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wavWriter = value;
}
inline void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::_ctor(::CSCore::Codecs::WAV::WaveWriter*  waveWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::CSCore::Codecs::WAV::WaveWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waveWriter);
}
inline ::ArrayW<float_t> Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::Process(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, buf);
}
inline void Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat* Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::New_ctor(::CSCore::Codecs::WAV::WaveWriter*  waveWriter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat*>(waveWriter));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<float_t>"
constexpr  Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::operator ::Photon::Voice::IProcessor_1<float_t>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<float_t>"
constexpr ::Photon::Voice::IProcessor_1<float_t>* Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::i___Photon__Voice__IProcessor_1_float_t_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::UtilityScripts::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat::SaveOutgoingStreamToFile_OutgoingStreamSaverFloat()   {
}
