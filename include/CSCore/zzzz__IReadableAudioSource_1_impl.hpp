#pragma once
// IWYU pragma private; include "CSCore/IReadableAudioSource_1.hpp"
#include "CSCore/zzzz__IReadableAudioSource_1_def.hpp"
#include "CSCore/zzzz__IAudioSource_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline int32_t CSCore::IReadableAudioSource_1<T>::Read(::ArrayW<T>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::IReadableAudioSource_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
/// @brief Convert operator to "::CSCore::IAudioSource"
template<typename T>
constexpr  CSCore::IReadableAudioSource_1<T>::operator ::CSCore::IAudioSource*() noexcept {
return static_cast<::CSCore::IAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::CSCore::IAudioSource"
template<typename T>
constexpr ::CSCore::IAudioSource* CSCore::IReadableAudioSource_1<T>::i___CSCore__IAudioSource() noexcept {
return static_cast<::CSCore::IAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  CSCore::IReadableAudioSource_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* CSCore::IReadableAudioSource_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
