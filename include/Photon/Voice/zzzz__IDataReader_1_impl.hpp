#pragma once
// IWYU pragma private; include "Photon/Voice/IDataReader_1.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template<typename T>
inline bool Photon::Voice::IDataReader_1<T>::Read(::ArrayW<T>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::IDataReader_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::IDataReader_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::IDataReader_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
