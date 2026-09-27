#pragma once
// IWYU pragma private; include "Fusion/ICoroutine.hpp"
#include "Fusion/zzzz__ICoroutine_def.hpp"
#include "Fusion/zzzz__IAsyncOperation_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
/// @brief Convert operator to "::Fusion::IAsyncOperation"
constexpr  Fusion::ICoroutine::operator ::Fusion::IAsyncOperation*() noexcept {
return static_cast<::Fusion::IAsyncOperation*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IAsyncOperation"
constexpr ::Fusion::IAsyncOperation* Fusion::ICoroutine::i___Fusion__IAsyncOperation() noexcept {
return static_cast<::Fusion::IAsyncOperation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Fusion::ICoroutine::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Fusion::ICoroutine::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
