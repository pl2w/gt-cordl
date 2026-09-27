#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_HistoryUpdateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(STP_HistoryUpdateInfo)
// Forward declare root types
namespace GlobalNamespace {
struct STP_HistoryUpdateInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::STP_HistoryUpdateInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::STP_HistoryUpdateInfo, "UnityEngine.Rendering", "STP/HistoryUpdateInfo");
// Dependencies UnityEngine.Vector2Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/HistoryUpdateInfo
struct CORDL_TYPE STP_HistoryUpdateInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr STP_HistoryUpdateInfo() ;

// Ctor Parameters [CppParam { name: "preUpscaleSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "postUpscaleSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "useHwDrs", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "useTexArray", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr STP_HistoryUpdateInfo(::UnityEngine::Vector2Int  preUpscaleSize, ::UnityEngine::Vector2Int  postUpscaleSize, bool  useHwDrs, bool  useTexArray) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field preUpscaleSize, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  preUpscaleSize;

/// @brief Field postUpscaleSize, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  postUpscaleSize;

/// @brief Field useHwDrs, offset: 0x10, size: 0x1, def value: None
 bool  useHwDrs;

/// @brief Field useTexArray, offset: 0x11, size: 0x1, def value: None
 bool  useTexArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::STP_HistoryUpdateInfo, preUpscaleSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_HistoryUpdateInfo, postUpscaleSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_HistoryUpdateInfo, useHwDrs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_HistoryUpdateInfo, useTexArray) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::STP_HistoryUpdateInfo) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
