#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/MicDebug.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Lib/zzzz__MicDebug_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputSource_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Lib::MicDebug.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicDebug::*)()>(&::Meta::WitAi::Lib::MicDebug::OnEnable)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x9e182e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicDebug.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicDebug::*)()>(&::Meta::WitAi::Lib::MicDebug::OnDisable)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9e1857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicDebug.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicDebug::*)()>(&::Meta::WitAi::Lib::MicDebug::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e187d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicDebug.OnStartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicDebug::*)()>(&::Meta::WitAi::Lib::MicDebug::OnStartRecording)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x9e18824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnStartRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicDebug.OnSampleReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicDebug::*)(int32_t, ::ArrayW<float_t>, float_t)>(&::Meta::WitAi::Lib::MicDebug::OnSampleReady)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9e18ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnSampleReady", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicDebug.OnStopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicDebug::*)()>(&::Meta::WitAi::Lib::MicDebug::OnStopRecording)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e18e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnStopRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicDebug.UnloadStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicDebug::*)()>(&::Meta::WitAi::Lib::MicDebug::UnloadStream)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e187d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"UnloadStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::MicDebug._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Lib::MicDebug::*)()>(&::Meta::WitAi::Lib::MicDebug::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e18e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Interfaces::IAudioInputSource*& Meta::WitAi::Lib::MicDebug::__cordl_internal_get__micSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSource;
}
constexpr ::Meta::WitAi::Interfaces::IAudioInputSource* const& Meta::WitAi::Lib::MicDebug::__cordl_internal_get__micSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micSource;
}
constexpr void Meta::WitAi::Lib::MicDebug::__cordl_internal_set__micSource(::Meta::WitAi::Interfaces::IAudioInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micSource = value;
}
constexpr ::StringW& Meta::WitAi::Lib::MicDebug::__cordl_internal_get_fileDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileDirectory;
}
constexpr ::StringW const& Meta::WitAi::Lib::MicDebug::__cordl_internal_get_fileDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileDirectory;
}
constexpr void Meta::WitAi::Lib::MicDebug::__cordl_internal_set_fileDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileDirectory = value;
}
constexpr ::StringW& Meta::WitAi::Lib::MicDebug::__cordl_internal_get_fileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr ::StringW const& Meta::WitAi::Lib::MicDebug::__cordl_internal_get_fileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName;
}
constexpr void Meta::WitAi::Lib::MicDebug::__cordl_internal_set_fileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileName = value;
}
constexpr ::System::IO::FileStream*& Meta::WitAi::Lib::MicDebug::__cordl_internal_get__fileStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileStream;
}
constexpr ::System::IO::FileStream* const& Meta::WitAi::Lib::MicDebug::__cordl_internal_get__fileStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fileStream;
}
constexpr void Meta::WitAi::Lib::MicDebug::__cordl_internal_set__fileStream(::System::IO::FileStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fileStream = value;
}
constexpr ::ArrayW<uint8_t>& Meta::WitAi::Lib::MicDebug::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& Meta::WitAi::Lib::MicDebug::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Meta::WitAi::Lib::MicDebug::__cordl_internal_set__buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
inline void Meta::WitAi::Lib::MicDebug::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicDebug::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicDebug::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicDebug::OnStartRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnStartRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicDebug::OnSampleReady(int32_t  sampleCount, ::ArrayW<float_t>  sample, float_t  levelMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnSampleReady", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleCount, sample, levelMax);
}
inline void Meta::WitAi::Lib::MicDebug::OnStopRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"OnStopRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicDebug::UnloadStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {"UnloadStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Lib::MicDebug::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Lib::MicDebug*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Lib::MicDebug* Meta::WitAi::Lib::MicDebug::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Lib::MicDebug*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Lib::MicDebug::MicDebug()   {
}
