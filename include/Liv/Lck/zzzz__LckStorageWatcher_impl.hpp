#pragma once
// IWYU pragma private; include "Liv/Lck/LckStorageWatcher.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckStorageWatcher_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckStorageWatcher_def.hpp"
#include "Liv/Lck/zzzz__LckStorageWatcher_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckStorageWatcher::*)(::Liv::Lck::ILckEventBus*)>(&::Liv::Lck::LckStorageWatcher::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ce8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.GetDiskFreeSpaceEx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<uint64_t>, ::by_ref<uint64_t>, ::by_ref<uint64_t>)>(&::Liv::Lck::LckStorageWatcher::GetDiskFreeSpaceEx)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9ce8198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetDiskFreeSpaceEx", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9ce812c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.CheckStorageSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::CheckStorageSpace)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9ce8274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"CheckStorageSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.GetCurrentStorageThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::GetCurrentStorageThreshold)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ce8390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetCurrentStorageThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.CalculateEstimatedRecordingSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::CalculateEstimatedRecordingSize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9ce83b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"CalculateEstimatedRecordingSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.SetRecordingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckStorageWatcher::*)(::Liv::Lck::CameraTrackDescriptor, ::System::Func_1<float_t>*)>(&::Liv::Lck::LckStorageWatcher::SetRecordingContext)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ce842c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"SetRecordingContext", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.ClearRecordingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::ClearRecordingContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce8464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"ClearRecordingContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.GetAvailableStorageSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::GetAvailableStorageSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ce838c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetAvailableStorageSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.GetAndroidAvailableStorageSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::GetAndroidAvailableStorageSpace)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x9ce846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetAndroidAvailableStorageSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.GetWindowsAvailableStorageSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::GetWindowsAvailableStorageSpace)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x9ce89e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetWindowsAvailableStorageSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.HasEnoughFreeStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::HasEnoughFreeStorage)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ce8c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"HasEnoughFreeStorage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckStorageWatcher::*)()>(&::Liv::Lck::LckStorageWatcher::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9ce8cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckStorageWatcher::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckStorageWatcher::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckStorageWatcher::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr int64_t& Liv::Lck::LckStorageWatcher::__cordl_internal_get__freeSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeSpace;
}
constexpr int64_t const& Liv::Lck::LckStorageWatcher::__cordl_internal_get__freeSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____freeSpace;
}
constexpr void Liv::Lck::LckStorageWatcher::__cordl_internal_set__freeSpace(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____freeSpace = value;
}
constexpr bool& Liv::Lck::LckStorageWatcher::__cordl_internal_get__isRecordingActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecordingActive;
}
constexpr bool const& Liv::Lck::LckStorageWatcher::__cordl_internal_get__isRecordingActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecordingActive;
}
constexpr void Liv::Lck::LckStorageWatcher::__cordl_internal_set__isRecordingActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRecordingActive = value;
}
constexpr ::Liv::Lck::CameraTrackDescriptor& Liv::Lck::LckStorageWatcher::__cordl_internal_get__recordingDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingDescriptor;
}
constexpr ::Liv::Lck::CameraTrackDescriptor const& Liv::Lck::LckStorageWatcher::__cordl_internal_get__recordingDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingDescriptor;
}
constexpr void Liv::Lck::LckStorageWatcher::__cordl_internal_set__recordingDescriptor(::Liv::Lck::CameraTrackDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingDescriptor = value;
}
constexpr ::System::Func_1<float_t>*& Liv::Lck::LckStorageWatcher::__cordl_internal_get__getDurationSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getDurationSeconds;
}
constexpr ::System::Func_1<float_t>* const& Liv::Lck::LckStorageWatcher::__cordl_internal_get__getDurationSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getDurationSeconds;
}
constexpr void Liv::Lck::LckStorageWatcher::__cordl_internal_set__getDurationSeconds(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getDurationSeconds = value;
}
inline void Liv::Lck::LckStorageWatcher::_ctor(::Liv::Lck::ILckEventBus*  eventBus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventBus);
}
inline bool Liv::Lck::LckStorageWatcher::GetDiskFreeSpaceEx(::StringW  lpDirectoryName, ::by_ref<uint64_t>  lpFreeBytesAvailable, ::by_ref<uint64_t>  lpTotalNumberOfBytes, ::by_ref<uint64_t>  lpTotalNumberOfFreeBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetDiskFreeSpaceEx", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lpDirectoryName, lpFreeBytesAvailable, lpTotalNumberOfBytes, lpTotalNumberOfFreeBytes);
}
inline ::System::Collections::IEnumerator* Liv::Lck::LckStorageWatcher::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::LckStorageWatcher::CheckStorageSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"CheckStorageSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Liv::Lck::LckStorageWatcher::GetCurrentStorageThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetCurrentStorageThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Liv::Lck::LckStorageWatcher::CalculateEstimatedRecordingSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"CalculateEstimatedRecordingSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Liv::Lck::LckStorageWatcher::SetRecordingContext(::Liv::Lck::CameraTrackDescriptor  descriptor, ::System::Func_1<float_t>*  getDurationSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"SetRecordingContext", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptor, getDurationSeconds);
}
inline void Liv::Lck::LckStorageWatcher::ClearRecordingContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"ClearRecordingContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Liv::Lck::LckStorageWatcher::GetAvailableStorageSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetAvailableStorageSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Liv::Lck::LckStorageWatcher::GetAndroidAvailableStorageSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetAndroidAvailableStorageSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Liv::Lck::LckStorageWatcher::GetWindowsAvailableStorageSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"GetWindowsAvailableStorageSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Liv::Lck::LckStorageWatcher::HasEnoughFreeStorage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"HasEnoughFreeStorage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::LckStorageWatcher::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckStorageWatcher* Liv::Lck::LckStorageWatcher::New_ctor(::Liv::Lck::ILckEventBus*  eventBus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckStorageWatcher*>(eventBus));
}
/// @brief Convert operator to "::Liv::Lck::ILckStorageWatcher"
constexpr  Liv::Lck::LckStorageWatcher::operator ::Liv::Lck::ILckStorageWatcher*() noexcept {
return static_cast<::Liv::Lck::ILckStorageWatcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckStorageWatcher"
constexpr ::Liv::Lck::ILckStorageWatcher* Liv::Lck::LckStorageWatcher::i___Liv__Lck__ILckStorageWatcher() noexcept {
return static_cast<::Liv::Lck::ILckStorageWatcher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckStorageWatcher::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckStorageWatcher::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckStorageWatcher::LckStorageWatcher()   {
}
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher__Update_d__10._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckStorageWatcher__Update_d__10::*)(int32_t)>(&::Liv::Lck::LckStorageWatcher__Update_d__10::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ce824c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher__Update_d__10.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckStorageWatcher__Update_d__10::*)()>(&::Liv::Lck::LckStorageWatcher__Update_d__10::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ce8d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher__Update_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckStorageWatcher__Update_d__10::*)()>(&::Liv::Lck::LckStorageWatcher__Update_d__10::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ce8d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher__Update_d__10.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckStorageWatcher__Update_d__10::*)()>(&::Liv::Lck::LckStorageWatcher__Update_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce8dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher__Update_d__10.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckStorageWatcher__Update_d__10::*)()>(&::Liv::Lck::LckStorageWatcher__Update_d__10::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ce8ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckStorageWatcher__Update_d__10.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckStorageWatcher__Update_d__10::*)()>(&::Liv::Lck::LckStorageWatcher__Update_d__10::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce8e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Liv::Lck::LckStorageWatcher*& Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::LckStorageWatcher* const& Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::LckStorageWatcher__Update_d__10::__cordl_internal_set___4__this(::Liv::Lck::LckStorageWatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::LckStorageWatcher__Update_d__10::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::LckStorageWatcher__Update_d__10::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckStorageWatcher__Update_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckStorageWatcher__Update_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::LckStorageWatcher__Update_d__10::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckStorageWatcher__Update_d__10::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckStorageWatcher__Update_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::LckStorageWatcher__Update_d__10* Liv::Lck::LckStorageWatcher__Update_d__10::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckStorageWatcher__Update_d__10*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::LckStorageWatcher__Update_d__10::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::LckStorageWatcher__Update_d__10::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::LckStorageWatcher__Update_d__10::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::LckStorageWatcher__Update_d__10::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckStorageWatcher__Update_d__10::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckStorageWatcher__Update_d__10::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckStorageWatcher__Update_d__10::LckStorageWatcher__Update_d__10()   {
}
