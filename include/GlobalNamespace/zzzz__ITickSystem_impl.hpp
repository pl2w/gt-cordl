#pragma once
// IWYU pragma private; include "GlobalNamespace/ITickSystem.hpp"
#include "GlobalNamespace/zzzz__ITickSystem_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPre_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr  GlobalNamespace::ITickSystem::operator ::GlobalNamespace::ITickSystemPre*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPre*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* GlobalNamespace::ITickSystem::i___GlobalNamespace__ITickSystemPre() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPre*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::ITickSystem::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::ITickSystem::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GlobalNamespace::ITickSystem::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GlobalNamespace::ITickSystem::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
