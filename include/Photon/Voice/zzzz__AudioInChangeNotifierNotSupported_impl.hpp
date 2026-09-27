#pragma once
// IWYU pragma private; include "Photon/Voice/AudioInChangeNotifierNotSupported.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__AudioInChangeNotifierNotSupported_def.hpp"
#include "Photon/Voice/zzzz__IAudioInChangeNotifier_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Photon::Voice::AudioInChangeNotifierNotSupported.get_IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::AudioInChangeNotifierNotSupported::*)()>(&::Photon::Voice::AudioInChangeNotifierNotSupported::get_IsSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInChangeNotifierNotSupported*>(),
                        {"get_IsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioInChangeNotifierNotSupported._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioInChangeNotifierNotSupported::*)(::System::Action*, ::Photon::Voice::ILogger*)>(&::Photon::Voice::AudioInChangeNotifierNotSupported::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInChangeNotifierNotSupported*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioInChangeNotifierNotSupported.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::AudioInChangeNotifierNotSupported::*)()>(&::Photon::Voice::AudioInChangeNotifierNotSupported::get_Error)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa746410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInChangeNotifierNotSupported*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioInChangeNotifierNotSupported.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioInChangeNotifierNotSupported::*)()>(&::Photon::Voice::AudioInChangeNotifierNotSupported::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa746450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInChangeNotifierNotSupported*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Photon::Voice::AudioInChangeNotifierNotSupported::get_IsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInChangeNotifierNotSupported*>(),
                        {"get_IsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::AudioInChangeNotifierNotSupported::_ctor(::System::Action*  callback, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInChangeNotifierNotSupported*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action*>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, logger);
}
inline ::StringW Photon::Voice::AudioInChangeNotifierNotSupported::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInChangeNotifierNotSupported*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::AudioInChangeNotifierNotSupported::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioInChangeNotifierNotSupported*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::AudioInChangeNotifierNotSupported* Photon::Voice::AudioInChangeNotifierNotSupported::New_ctor(::System::Action*  callback, ::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioInChangeNotifierNotSupported*>(callback, logger));
}
/// @brief Convert operator to "::Photon::Voice::IAudioInChangeNotifier"
constexpr  Photon::Voice::AudioInChangeNotifierNotSupported::operator ::Photon::Voice::IAudioInChangeNotifier*() noexcept {
return static_cast<::Photon::Voice::IAudioInChangeNotifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioInChangeNotifier"
constexpr ::Photon::Voice::IAudioInChangeNotifier* Photon::Voice::AudioInChangeNotifierNotSupported::i___Photon__Voice__IAudioInChangeNotifier() noexcept {
return static_cast<::Photon::Voice::IAudioInChangeNotifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::AudioInChangeNotifierNotSupported::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::AudioInChangeNotifierNotSupported::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioInChangeNotifierNotSupported::AudioInChangeNotifierNotSupported()   {
}
