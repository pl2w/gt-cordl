#pragma once
// IWYU pragma private; include "Liv/Lck/ILckStorageWatcher.hpp"
#include "Liv/Lck/zzzz__ILckStorageWatcher_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckStorageWatcher.HasEnoughFreeStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::ILckStorageWatcher::*)()>(&::Liv::Lck::ILckStorageWatcher::HasEnoughFreeStorage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(),
                    {::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckStorageWatcher.SetRecordingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckStorageWatcher::*)(::Liv::Lck::CameraTrackDescriptor, ::System::Func_1<float_t>*)>(&::Liv::Lck::ILckStorageWatcher::SetRecordingContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(),
                    {::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckStorageWatcher.ClearRecordingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckStorageWatcher::*)()>(&::Liv::Lck::ILckStorageWatcher::ClearRecordingContext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(),
                    {::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Liv::Lck::ILckStorageWatcher::HasEnoughFreeStorage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::ILckStorageWatcher::SetRecordingContext(::Liv::Lck::CameraTrackDescriptor  descriptor, ::System::Func_1<float_t>*  getDurationSeconds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptor, getDurationSeconds);
}
inline void Liv::Lck::ILckStorageWatcher::ClearRecordingContext()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckStorageWatcher*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ILckStorageWatcher::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ILckStorageWatcher::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
