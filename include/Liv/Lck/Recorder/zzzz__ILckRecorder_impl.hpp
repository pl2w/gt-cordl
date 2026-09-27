#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/ILckRecorder.hpp"
#include "Liv/Lck/Recorder/zzzz__ILckRecorder_def.hpp"
#include "GlobalNamespace/zzzz__ILckCaptureStateProvider_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckRecorder.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::ILckRecorder::*)()>(&::Liv::Lck::Recorder::ILckRecorder::StartRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckRecorder.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::ILckRecorder::*)(::GlobalNamespace::LckService_StopReason)>(&::Liv::Lck::Recorder::ILckRecorder::StopRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckRecorder.PauseRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::ILckRecorder::*)()>(&::Liv::Lck::Recorder::ILckRecorder::PauseRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckRecorder.ResumeRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::ILckRecorder::*)()>(&::Liv::Lck::Recorder::ILckRecorder::ResumeRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckRecorder.GetRecordingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::Recorder::ILckRecorder::*)()>(&::Liv::Lck::Recorder::ILckRecorder::GetRecordingDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckRecorder.IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::Recorder::ILckRecorder::*)()>(&::Liv::Lck::Recorder::ILckRecorder::IsRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckRecorder.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::ILckRecorder::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Recorder::ILckRecorder::SetLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 6}
                ));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::ILckRecorder::StartRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::ILckRecorder::StopRecording(::GlobalNamespace::LckService_StopReason  stopReason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, stopReason);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::ILckRecorder::PauseRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::ILckRecorder::ResumeRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::Recorder::ILckRecorder::GetRecordingDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::Recorder::ILckRecorder::IsRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::ILckRecorder::SetLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckRecorder*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr  Liv::Lck::Recorder::ILckRecorder::operator ::GlobalNamespace::ILckCaptureStateProvider*() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* Liv::Lck::Recorder::ILckRecorder::i___GlobalNamespace__ILckCaptureStateProvider() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Recorder::ILckRecorder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Recorder::ILckRecorder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
