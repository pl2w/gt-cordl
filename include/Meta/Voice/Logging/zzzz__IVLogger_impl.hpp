#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/IVLogger.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__ICoreLogger_def.hpp"
/// @brief Convert operator to "::Meta::Voice::Logging::ICoreLogger"
constexpr  Meta::Voice::Logging::IVLogger::operator ::Meta::Voice::Logging::ICoreLogger*() noexcept {
return static_cast<::Meta::Voice::Logging::ICoreLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::ICoreLogger"
constexpr ::Meta::Voice::Logging::ICoreLogger* Meta::Voice::Logging::IVLogger::i___Meta__Voice__Logging__ICoreLogger() noexcept {
return static_cast<::Meta::Voice::Logging::ICoreLogger*>(static_cast<void*>(this));
}
