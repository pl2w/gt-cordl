#pragma once
// IWYU pragma private; include "Liv/Lck/LckPreviewer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckPreviewer_def.hpp"
#include "GlobalNamespace/zzzz__ILckVideoTextureProvider_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckMonitor_def.hpp"
#include "Liv/Lck/zzzz__ILckPreviewer_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_ActiveCameraTrackTextureChangedEvent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckPreviewer.get_IsPreviewActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckPreviewer::*)()>(&::Liv::Lck::LckPreviewer::get_IsPreviewActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf2b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"get_IsPreviewActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPreviewer.set_IsPreviewActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPreviewer::*)(bool)>(&::Liv::Lck::LckPreviewer::set_IsPreviewActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf2b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"set_IsPreviewActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPreviewer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPreviewer::*)(::GlobalNamespace::ILckVideoTextureProvider*, ::Liv::Lck::ILckEventBus*)>(&::Liv::Lck::LckPreviewer::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9cf2b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ILckVideoTextureProvider*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPreviewer.SetMonitorRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPreviewer::*)(::Liv::Lck::ILckMonitor*)>(&::Liv::Lck::LckPreviewer::SetMonitorRenderTexture)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9cf2d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"SetMonitorRenderTexture", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPreviewer.OnMonitorRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPreviewer::*)(::Liv::Lck::ILckMonitor*)>(&::Liv::Lck::LckPreviewer::OnMonitorRegistered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cf2f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"OnMonitorRegistered", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPreviewer.OnMonitorUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckMonitor*)>(&::Liv::Lck::LckPreviewer::OnMonitorUnregistered)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9cf2f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"OnMonitorUnregistered", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPreviewer.SetMonitorTextureForAllMonitors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPreviewer::*)()>(&::Liv::Lck::LckPreviewer::SetMonitorTextureForAllMonitors)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x9cf3048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"SetMonitorTextureForAllMonitors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPreviewer.OnCameraTrackTextureChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPreviewer::*)(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent)>(&::Liv::Lck::LckPreviewer::OnCameraTrackTextureChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cf3310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"OnCameraTrackTextureChanged", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckPreviewer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckPreviewer::*)()>(&::Liv::Lck::LckPreviewer::Dispose)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9cf3314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ILckVideoTextureProvider*& Liv::Lck::LckPreviewer::__cordl_internal_get__videoTextureProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTextureProvider;
}
constexpr ::GlobalNamespace::ILckVideoTextureProvider* const& Liv::Lck::LckPreviewer::__cordl_internal_get__videoTextureProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTextureProvider;
}
constexpr void Liv::Lck::LckPreviewer::__cordl_internal_set__videoTextureProvider(::GlobalNamespace::ILckVideoTextureProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____videoTextureProvider = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckPreviewer::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckPreviewer::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckPreviewer::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr bool& Liv::Lck::LckPreviewer::__cordl_internal_get__IsPreviewActive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPreviewActive_k__BackingField;
}
constexpr bool const& Liv::Lck::LckPreviewer::__cordl_internal_get__IsPreviewActive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsPreviewActive_k__BackingField;
}
constexpr void Liv::Lck::LckPreviewer::__cordl_internal_set__IsPreviewActive_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsPreviewActive_k__BackingField = value;
}
inline bool Liv::Lck::LckPreviewer::get_IsPreviewActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"get_IsPreviewActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckPreviewer::set_IsPreviewActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"set_IsPreviewActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckPreviewer::_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ILckVideoTextureProvider*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, videoTextureProvider, eventBus);
}
inline void Liv::Lck::LckPreviewer::SetMonitorRenderTexture(::Liv::Lck::ILckMonitor*  monitor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"SetMonitorRenderTexture", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, monitor);
}
inline void Liv::Lck::LckPreviewer::OnMonitorRegistered(::Liv::Lck::ILckMonitor*  monitor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"OnMonitorRegistered", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, monitor);
}
inline void Liv::Lck::LckPreviewer::OnMonitorUnregistered(::Liv::Lck::ILckMonitor*  monitor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"OnMonitorUnregistered", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monitor);
}
inline void Liv::Lck::LckPreviewer::SetMonitorTextureForAllMonitors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"SetMonitorTextureForAllMonitors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckPreviewer::OnCameraTrackTextureChanged(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent  activeCameraTrackTextureChangedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"OnCameraTrackTextureChanged", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeCameraTrackTextureChangedEvent);
}
inline void Liv::Lck::LckPreviewer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckPreviewer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckPreviewer* Liv::Lck::LckPreviewer::New_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckPreviewer*>(videoTextureProvider, eventBus));
}
/// @brief Convert operator to "::Liv::Lck::ILckPreviewer"
constexpr  Liv::Lck::LckPreviewer::operator ::Liv::Lck::ILckPreviewer*() noexcept {
return static_cast<::Liv::Lck::ILckPreviewer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckPreviewer"
constexpr ::Liv::Lck::ILckPreviewer* Liv::Lck::LckPreviewer::i___Liv__Lck__ILckPreviewer() noexcept {
return static_cast<::Liv::Lck::ILckPreviewer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckPreviewer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckPreviewer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckPreviewer::LckPreviewer()   {
}
