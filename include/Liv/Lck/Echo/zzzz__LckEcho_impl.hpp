#pragma once
// IWYU pragma private; include "Liv/Lck/Echo/LckEcho.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Liv/Lck/Echo/zzzz__LckEcho_def.hpp"
#include "GlobalNamespace/zzzz__ILckCaptureStateProvider_def.hpp"
#include "Liv/Lck/Echo/zzzz__ILckEcho_def.hpp"
#include "Liv/Lck/Echo/zzzz__LckEcho__DisableAsync_d__27_def.hpp"
#include "Liv/Lck/Echo/zzzz__LckEcho__SetEnabledAsync_d__22_def.hpp"
#include "Liv/Lck/Echo/zzzz__LckEcho_def.hpp"
#include "Liv/Lck/Echo/zzzz__LckNativeEchoApi_def.hpp"
#include "Liv/Lck/Encoding/zzzz__ILckEncoder_def.hpp"
#include "Liv/Lck/Recorder/zzzz__MuxerConfig_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckStorageWatcher_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_CaptureErrorEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStoppedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_LowStorageSpaceDetectedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.get_IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::get_IsEnabled)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d47890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.get_IsSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::get_IsSaving)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d478a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"get_IsSaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.get_CurrentCaptureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckCaptureState (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::get_CurrentCaptureState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d478ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"get_CurrentCaptureState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho::*)(::Liv::Lck::Encoding::ILckEncoder*, ::Liv::Lck::ILckOutputConfigurer*, ::Liv::Lck::ILckEventBus*, ::Liv::Lck::Telemetry::ILckTelemetryClient*, ::Liv::Lck::ILckStorageWatcher*)>(&::Liv::Lck::Echo::LckEcho::_ctor)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x9d478d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), ::i2c::type_of<::Liv::Lck::ILckStorageWatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::IsPaused)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9d47ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.SetEnabledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Echo::LckEcho::*)(bool)>(&::Liv::Lck::Echo::LckEcho::SetEnabledAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9d47ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"SetEnabledAsync", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.TriggerSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::TriggerSave)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x9d47dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"TriggerSave", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.GetBufferDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::GetBufferDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d480c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"GetBufferDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.GetMaxBufferDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::GetMaxBufferDuration)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d48168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"GetMaxBufferDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::Enable)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x9d481e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.DisableAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::DisableAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d48d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"DisableAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.DestroyNativeContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::DestroyNativeContext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d48cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"DestroyNativeContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.DestroyEchoBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Echo::LckEcho::DestroyEchoBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d48e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"DestroyEchoBuffer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.BuildMuxerConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::MuxerConfig>* (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::BuildMuxerConfig)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x9d489bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"BuildMuxerConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.OnNativeEchoCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::StringW)>(&::Liv::Lck::Echo::LckEcho::OnNativeEchoCompleted)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d47784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"OnNativeEchoCompleted", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.CopyEchoToGalleryWhenReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::Echo::LckEcho::*)(::StringW)>(&::Liv::Lck::Echo::LckEcho::CopyEchoToGalleryWhenReady)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d48e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"CopyEchoToGalleryWhenReady", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.OnLowStorageSpaceDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho::*)(::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent)>(&::Liv::Lck::Echo::LckEcho::OnLowStorageSpaceDetected)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9d48efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"OnLowStorageSpaceDetected", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.OnEncoderStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho::*)(::GlobalNamespace::LckEvents_EncoderStoppedEvent)>(&::Liv::Lck::Echo::LckEcho::OnEncoderStopped)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9d49088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"OnEncoderStopped", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStoppedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.OnCaptureError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho::*)(::GlobalNamespace::LckEvents_CaptureErrorEvent)>(&::Liv::Lck::Echo::LckEcho::OnCaptureError)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9d49150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"OnCaptureError", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho::*)()>(&::Liv::Lck::Echo::LckEcho::Dispose)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9d492f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Encoding::ILckEncoder*& Liv::Lck::Echo::LckEcho::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder* const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr ::Liv::Lck::ILckOutputConfigurer*& Liv::Lck::Echo::LckEcho::__cordl_internal_get__outputConfigurer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr ::Liv::Lck::ILckOutputConfigurer* const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__outputConfigurer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputConfigurer = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::Echo::LckEcho::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& Liv::Lck::Echo::LckEcho::__cordl_internal_get__telemetryClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__telemetryClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryClient = value;
}
constexpr ::Liv::Lck::ILckStorageWatcher*& Liv::Lck::Echo::LckEcho::__cordl_internal_get__storageWatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storageWatcher;
}
constexpr ::Liv::Lck::ILckStorageWatcher* const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__storageWatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storageWatcher;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__storageWatcher(::Liv::Lck::ILckStorageWatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____storageWatcher = value;
}
constexpr ::System::IntPtr& Liv::Lck::Echo::LckEcho::__cordl_internal_get__echoContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoContext;
}
constexpr ::System::IntPtr const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__echoContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoContext;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__echoContext(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoContext = value;
}
constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler& Liv::Lck::Echo::LckEcho::__cordl_internal_get__echoPacketHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoPacketHandler;
}
constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__echoPacketHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoPacketHandler;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__echoPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoPacketHandler = value;
}
constexpr bool& Liv::Lck::Echo::LckEcho::__cordl_internal_get__isSaving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSaving;
}
constexpr bool const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__isSaving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSaving;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__isSaving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSaving = value;
}
constexpr bool& Liv::Lck::Echo::LckEcho::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::System::TimeSpan& Liv::Lck::Echo::LckEcho::__cordl_internal_get__lastSaveDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSaveDuration;
}
constexpr ::System::TimeSpan const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__lastSaveDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSaveDuration;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__lastSaveDuration(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSaveDuration = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Liv::Lck::Echo::LckEcho::__cordl_internal_get__echoTelemetryContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoTelemetryContext;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__echoTelemetryContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echoTelemetryContext;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__echoTelemetryContext(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echoTelemetryContext = value;
}
constexpr ::UnityEngine::WaitForSeconds*& Liv::Lck::Echo::LckEcho::__cordl_internal_get__copyEchoSpinWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyEchoSpinWait;
}
constexpr ::UnityEngine::WaitForSeconds* const& Liv::Lck::Echo::LckEcho::__cordl_internal_get__copyEchoSpinWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyEchoSpinWait;
}
constexpr void Liv::Lck::Echo::LckEcho::__cordl_internal_set__copyEchoSpinWait(::UnityEngine::WaitForSeconds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____copyEchoSpinWait = value;
}
inline void Liv::Lck::Echo::LckEcho::setStaticF__completionCallbackDelegate(::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*, "_completionCallbackDelegate", ::Liv::Lck::Echo::LckEcho*>(std::forward<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*>(value));
}
inline ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback* Liv::Lck::Echo::LckEcho::getStaticF__completionCallbackDelegate()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*, "_completionCallbackDelegate", ::Liv::Lck::Echo::LckEcho*>();
}
inline void Liv::Lck::Echo::LckEcho::setStaticF__activeInstance(::Liv::Lck::Echo::LckEcho*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Echo::LckEcho*, "_activeInstance", ::Liv::Lck::Echo::LckEcho*>(std::forward<::Liv::Lck::Echo::LckEcho*>(value));
}
inline ::Liv::Lck::Echo::LckEcho* Liv::Lck::Echo::LckEcho::getStaticF__activeInstance()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Echo::LckEcho*, "_activeInstance", ::Liv::Lck::Echo::LckEcho*>();
}
inline bool Liv::Lck::Echo::LckEcho::get_IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"get_IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::Echo::LckEcho::get_IsSaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"get_IsSaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LckCaptureState Liv::Lck::Echo::LckEcho::get_CurrentCaptureState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"get_CurrentCaptureState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckCaptureState>(this, ___internal_method);
}
inline void Liv::Lck::Echo::LckEcho::_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::ILckStorageWatcher*  storageWatcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), ::i2c::type_of<::Liv::Lck::ILckStorageWatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoder, outputConfigurer, eventBus, telemetryClient, storageWatcher);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::Echo::LckEcho::IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Echo::LckEcho::SetEnabledAsync(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"SetEnabledAsync", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method, enabled);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Echo::LckEcho::TriggerSave()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"TriggerSave", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::System::TimeSpan Liv::Lck::Echo::LckEcho::GetBufferDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"GetBufferDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan Liv::Lck::Echo::LckEcho::GetMaxBufferDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"GetMaxBufferDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Echo::LckEcho::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Echo::LckEcho::DisableAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"DisableAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method);
}
inline void Liv::Lck::Echo::LckEcho::DestroyNativeContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"DestroyNativeContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Echo::LckEcho::DestroyEchoBuffer(::System::IntPtr  echoContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"DestroyEchoBuffer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, echoContext);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::MuxerConfig>* Liv::Lck::Echo::LckEcho::BuildMuxerConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"BuildMuxerConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::MuxerConfig>*>(this, ___internal_method);
}
inline void Liv::Lck::Echo::LckEcho::OnNativeEchoCompleted(uint32_t  status, ::StringW  outputPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"OnNativeEchoCompleted", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status, outputPath);
}
inline ::System::Collections::IEnumerator* Liv::Lck::Echo::LckEcho::CopyEchoToGalleryWhenReady(::StringW  outputPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"CopyEchoToGalleryWhenReady", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, outputPath);
}
inline void Liv::Lck::Echo::LckEcho::OnLowStorageSpaceDetected(::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent  lowStorageSpaceDetectedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"OnLowStorageSpaceDetected", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowStorageSpaceDetectedEvent);
}
inline void Liv::Lck::Echo::LckEcho::OnEncoderStopped(::GlobalNamespace::LckEvents_EncoderStoppedEvent  encoderStoppedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"OnEncoderStopped", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStoppedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderStoppedEvent);
}
inline void Liv::Lck::Echo::LckEcho::OnCaptureError(::GlobalNamespace::LckEvents_CaptureErrorEvent  captureErrorEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"OnCaptureError", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureErrorEvent);
}
inline void Liv::Lck::Echo::LckEcho::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::Echo::LckEcho* Liv::Lck::Echo::LckEcho::New_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::ILckStorageWatcher*  storageWatcher)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Echo::LckEcho*>(encoder, outputConfigurer, eventBus, telemetryClient, storageWatcher));
}
/// @brief Convert operator to "::Liv::Lck::Echo::ILckEcho"
constexpr  Liv::Lck::Echo::LckEcho::operator ::Liv::Lck::Echo::ILckEcho*() noexcept {
return static_cast<::Liv::Lck::Echo::ILckEcho*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Echo::ILckEcho"
constexpr ::Liv::Lck::Echo::ILckEcho* Liv::Lck::Echo::LckEcho::i___Liv__Lck__Echo__ILckEcho() noexcept {
return static_cast<::Liv::Lck::Echo::ILckEcho*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Echo::LckEcho::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Echo::LckEcho::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr  Liv::Lck::Echo::LckEcho::operator ::GlobalNamespace::ILckCaptureStateProvider*() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* Liv::Lck::Echo::LckEcho::i___GlobalNamespace__ILckCaptureStateProvider() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Echo::LckEcho::LckEcho()   {
}
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::*)(int32_t)>(&::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d48ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::*)()>(&::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d49ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::*)()>(&::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9d49ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::*)()>(&::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4a218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::*)()>(&::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d4a220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::*)()>(&::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4a258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Liv::Lck::Echo::LckEcho*& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::Echo::LckEcho* const& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_set___4__this(::Liv::Lck::Echo::LckEcho*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get_outputPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPath;
}
constexpr ::StringW const& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get_outputPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPath;
}
constexpr void Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_set_outputPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputPath = value;
}
constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0* const& Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::__cordl_internal_set___8__1(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
inline void Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32* Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Echo::LckEcho__CopyEchoToGalleryWhenReady_d__32::LckEcho__CopyEchoToGalleryWhenReady_d__32()   {
}
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::*)()>(&::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d499bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1._CopyEchoToGalleryWhenReady_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::*)()>(&::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::_CopyEchoToGalleryWhenReady_b__2)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x9d499dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1*>(),
                        {"<CopyEchoToGalleryWhenReady>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_get_success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr bool const& Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_get_success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr void Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_set_success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___success = value;
}
constexpr ::StringW& Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*& Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0* const& Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::__cordl_internal_set_CS$__8__locals1(::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::_CopyEchoToGalleryWhenReady_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1*>(),
                        {"<CopyEchoToGalleryWhenReady>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1* Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_1::LckEcho___c__DisplayClass32_1()   {
}
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::*)()>(&::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d49890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0._CopyEchoToGalleryWhenReady_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::*)(bool, ::StringW)>(&::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::_CopyEchoToGalleryWhenReady_b__0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9d49898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*>(),
                        {"<CopyEchoToGalleryWhenReady>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0._CopyEchoToGalleryWhenReady_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::*)()>(&::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::_CopyEchoToGalleryWhenReady_b__1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d499c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*>(),
                        {"<CopyEchoToGalleryWhenReady>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Echo::LckEcho*& Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::Echo::LckEcho* const& Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::__cordl_internal_set___4__this(::Liv::Lck::Echo::LckEcho*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::Task*& Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::__cordl_internal_set_task(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
inline void Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::_CopyEchoToGalleryWhenReady_b__0(bool  success, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*>(),
                        {"<CopyEchoToGalleryWhenReady>b__0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, path);
}
inline bool Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::_CopyEchoToGalleryWhenReady_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*>(),
                        {"<CopyEchoToGalleryWhenReady>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0* Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass32_0::LckEcho___c__DisplayClass32_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::*)()>(&::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d48e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0._OnNativeEchoCompleted_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::*)()>(&::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::_OnNativeEchoCompleted_b__0)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x9d495d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0*>(),
                        {"<OnNativeEchoCompleted>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr uint32_t const& Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::__cordl_internal_set_status(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
constexpr ::StringW& Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::__cordl_internal_get_outputPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPath;
}
constexpr ::StringW const& Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::__cordl_internal_get_outputPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputPath;
}
constexpr void Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::__cordl_internal_set_outputPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputPath = value;
}
inline void Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::_OnNativeEchoCompleted_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0*>(),
                        {"<OnNativeEchoCompleted>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0* Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Echo::LckEcho___c__DisplayClass31_0::LckEcho___c__DisplayClass31_0()   {
}
