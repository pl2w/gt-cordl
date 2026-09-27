#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_IndirectionEntryInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeReferenceVolume_IndirectionEntryInfo)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeReferenceVolume_IndirectionEntryInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo, "UnityEngine.Rendering", "ProbeReferenceVolume/IndirectionEntryInfo");
// Dependencies UnityEngine.Vector3Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/IndirectionEntryInfo
struct CORDL_TYPE ProbeReferenceVolume_IndirectionEntryInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeReferenceVolume_IndirectionEntryInfo() ;

// Ctor Parameters [CppParam { name: "positionInBricks", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minBrickPos", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxBrickPosPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasMinMax", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasOnlyBiggerBricks", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ProbeReferenceVolume_IndirectionEntryInfo(::UnityEngine::Vector3Int  positionInBricks, int32_t  minSubdiv, ::UnityEngine::Vector3Int  minBrickPos, ::UnityEngine::Vector3Int  maxBrickPosPlusOne, bool  hasMinMax, bool  hasOnlyBiggerBricks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field positionInBricks, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  positionInBricks;

/// @brief Field minSubdiv, offset: 0xc, size: 0x4, def value: None
 int32_t  minSubdiv;

/// @brief Field minBrickPos, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  minBrickPos;

/// @brief Field maxBrickPosPlusOne, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  maxBrickPosPlusOne;

/// @brief Field hasMinMax, offset: 0x28, size: 0x1, def value: None
 bool  hasMinMax;

/// @brief Field hasOnlyBiggerBricks, offset: 0x29, size: 0x1, def value: None
 bool  hasOnlyBiggerBricks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo, positionInBricks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo, minSubdiv) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo, minBrickPos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo, maxBrickPosPlusOne) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo, hasMinMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo, hasOnlyBiggerBricks) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
