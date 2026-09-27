#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AudioChangesHandler.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_impl.hpp"
#include "Photon/Voice/Unity/zzzz__AudioChangesHandler_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/zzzz__IAudioInChangeNotifier_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::AudioChangesHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioChangesHandler::*)()>(&::Photon::Voice::Unity::AudioChangesHandler::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa765960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioChangesHandler.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioChangesHandler::*)()>(&::Photon::Voice::Unity::AudioChangesHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa765f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioChangesHandler.OnDeviceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioChangesHandler::*)()>(&::Photon::Voice::Unity::AudioChangesHandler::OnDeviceChange)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xa7662c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"OnDeviceChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioChangesHandler.SubscribeToSystemChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioChangesHandler::*)()>(&::Photon::Voice::Unity::AudioChangesHandler::SubscribeToSystemChanges)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0xa765b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"SubscribeToSystemChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioChangesHandler.OnAudioConfigChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioChangesHandler::*)(bool)>(&::Photon::Voice::Unity::AudioChangesHandler::OnAudioConfigChanged)> {
  constexpr static std::size_t size = 0x978;
  constexpr static std::size_t addrs = 0xa7669b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"OnAudioConfigChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioChangesHandler.UnsubscribeFromSystemChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioChangesHandler::*)()>(&::Photon::Voice::Unity::AudioChangesHandler::UnsubscribeFromSystemChanges)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xa765f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"UnsubscribeFromSystemChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::AudioChangesHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::AudioChangesHandler::*)()>(&::Photon::Voice::Unity::AudioChangesHandler::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa7673f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::IAudioInChangeNotifier*& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_photonMicChangeNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonMicChangeNotifier;
}
constexpr ::Photon::Voice::IAudioInChangeNotifier* const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_photonMicChangeNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonMicChangeNotifier;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_photonMicChangeNotifier(::Photon::Voice::IAudioInChangeNotifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonMicChangeNotifier = value;
}
constexpr ::UnityEngine::AudioConfiguration& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_audioConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioConfiguration;
}
constexpr ::UnityEngine::AudioConfiguration const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_audioConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioConfiguration;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_audioConfiguration(::UnityEngine::AudioConfiguration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioConfiguration = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recorder = value;
}
constexpr bool& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_StartWhenDeviceChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartWhenDeviceChange;
}
constexpr bool const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_StartWhenDeviceChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartWhenDeviceChange;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_StartWhenDeviceChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartWhenDeviceChange = value;
}
constexpr bool& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_HandleDeviceChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleDeviceChange;
}
constexpr bool const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_HandleDeviceChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleDeviceChange;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_HandleDeviceChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandleDeviceChange = value;
}
constexpr bool& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_HandleConfigChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleConfigChange;
}
constexpr bool const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_HandleConfigChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleConfigChange;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_HandleConfigChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandleConfigChange = value;
}
constexpr bool& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_UseNativePluginChangeNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNativePluginChangeNotifier;
}
constexpr bool const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_UseNativePluginChangeNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNativePluginChangeNotifier;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_UseNativePluginChangeNotifier(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseNativePluginChangeNotifier = value;
}
constexpr bool& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_UseOnAudioConfigurationChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseOnAudioConfigurationChanged;
}
constexpr bool const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_UseOnAudioConfigurationChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseOnAudioConfigurationChanged;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_UseOnAudioConfigurationChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseOnAudioConfigurationChanged = value;
}
constexpr bool& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_Android_AlwaysHandleDeviceChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Android_AlwaysHandleDeviceChange;
}
constexpr bool const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_Android_AlwaysHandleDeviceChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Android_AlwaysHandleDeviceChange;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_Android_AlwaysHandleDeviceChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Android_AlwaysHandleDeviceChange = value;
}
constexpr bool& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_subscribedToSystemChangesPhoton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedToSystemChangesPhoton;
}
constexpr bool const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_subscribedToSystemChangesPhoton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedToSystemChangesPhoton;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_subscribedToSystemChangesPhoton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedToSystemChangesPhoton = value;
}
constexpr bool& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_subscribedToSystemChangesUnity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedToSystemChangesUnity;
}
constexpr bool const& Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_get_subscribedToSystemChangesUnity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedToSystemChangesUnity;
}
constexpr void Photon::Voice::Unity::AudioChangesHandler::__cordl_internal_set_subscribedToSystemChangesUnity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedToSystemChangesUnity = value;
}
inline void Photon::Voice::Unity::AudioChangesHandler::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AudioChangesHandler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AudioChangesHandler::OnDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"OnDeviceChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AudioChangesHandler::SubscribeToSystemChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"SubscribeToSystemChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AudioChangesHandler::OnAudioConfigChanged(bool  deviceWasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"OnAudioConfigChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceWasChanged);
}
inline void Photon::Voice::Unity::AudioChangesHandler::UnsubscribeFromSystemChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {"UnsubscribeFromSystemChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::AudioChangesHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::AudioChangesHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::AudioChangesHandler* Photon::Voice::Unity::AudioChangesHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::AudioChangesHandler*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::AudioChangesHandler::AudioChangesHandler()   {
}
