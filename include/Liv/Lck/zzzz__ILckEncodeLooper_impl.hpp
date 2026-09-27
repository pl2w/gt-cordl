#pragma once
// IWYU pragma private; include "Liv/Lck/ILckEncodeLooper.hpp"
#include "Liv/Lck/zzzz__ILckEncodeLooper_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ILckEncodeLooper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ILckEncodeLooper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
