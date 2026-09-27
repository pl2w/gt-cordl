#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/ILckEncoder.hpp"
#include "Liv/Lck/Encoding/zzzz__ILckEncoder_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderConsumer_def.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderSessionData_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Encoding::ILckEncoder.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::ILckEncoder::*)()>(&::Liv::Lck::Encoding::ILckEncoder::IsActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::ILckEncoder.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::ILckEncoder::*)()>(&::Liv::Lck::Encoding::ILckEncoder::IsPaused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::ILckEncoder.AcquireEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Encoding::ILckEncoder::*)(::Liv::Lck::Encoding::EncoderConsumer, ::Liv::Lck::CameraTrackDescriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*)>(&::Liv::Lck::Encoding::ILckEncoder::AcquireEncoder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::ILckEncoder.ReleaseEncoderAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Encoding::ILckEncoder::*)(::Liv::Lck::Encoding::EncoderConsumer, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*)>(&::Liv::Lck::Encoding::ILckEncoder::ReleaseEncoderAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::ILckEncoder.EncodeFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::ILckEncoder::*)(float_t, ::Liv::Lck::Collections::AudioBuffer*, bool)>(&::Liv::Lck::Encoding::ILckEncoder::EncodeFrame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::ILckEncoder.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::ILckEncoder::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Encoding::ILckEncoder::SetLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::ILckEncoder.GetCurrentSessionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Encoding::EncoderSessionData (::Liv::Lck::Encoding::ILckEncoder::*)()>(&::Liv::Lck::Encoding::ILckEncoder::GetCurrentSessionData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 6}
                ));
    return ___internal_method;
  }
};
inline bool Liv::Lck::Encoding::ILckEncoder::IsActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::Encoding::ILckEncoder::IsPaused()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Encoding::ILckEncoder::AcquireEncoder(::Liv::Lck::Encoding::EncoderConsumer  consumer, ::Liv::Lck::CameraTrackDescriptor  descriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, consumer, descriptor, handlers);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Encoding::ILckEncoder::ReleaseEncoderAsync(::Liv::Lck::Encoding::EncoderConsumer  consumer, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method, consumer, handlers);
}
inline bool Liv::Lck::Encoding::ILckEncoder::EncodeFrame(float_t  videoTimeSeconds, ::Liv::Lck::Collections::AudioBuffer*  audioData, bool  encodeVideo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, videoTimeSeconds, audioData, encodeVideo);
}
inline void Liv::Lck::Encoding::ILckEncoder::SetLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline ::Liv::Lck::Encoding::EncoderSessionData Liv::Lck::Encoding::ILckEncoder::GetCurrentSessionData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::ILckEncoder*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Encoding::EncoderSessionData>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Encoding::ILckEncoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Encoding::ILckEncoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
