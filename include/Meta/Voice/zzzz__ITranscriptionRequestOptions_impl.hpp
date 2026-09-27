#pragma once
// IWYU pragma private; include "Meta/Voice/ITranscriptionRequestOptions.hpp"
#include "Meta/Voice/zzzz__ITranscriptionRequestOptions_def.hpp"
#include "Meta/Voice/zzzz__IVoiceRequestOptions_def.hpp"
/// @brief Convert operator to "::Meta::Voice::IVoiceRequestOptions"
constexpr  Meta::Voice::ITranscriptionRequestOptions::operator ::Meta::Voice::IVoiceRequestOptions*() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestOptions*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::IVoiceRequestOptions"
constexpr ::Meta::Voice::IVoiceRequestOptions* Meta::Voice::ITranscriptionRequestOptions::i___Meta__Voice__IVoiceRequestOptions() noexcept {
return static_cast<::Meta::Voice::IVoiceRequestOptions*>(static_cast<void*>(this));
}
