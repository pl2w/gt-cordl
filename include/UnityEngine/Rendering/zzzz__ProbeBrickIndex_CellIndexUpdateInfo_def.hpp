#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex_CellIndexUpdateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_IndirectionEntryUpdateInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickIndex_CellIndexUpdateInfo)
namespace GlobalNamespace {
struct ProbeBrickIndex_IndirectionEntryUpdateInfo;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProbeBrickIndex_CellIndexUpdateInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo, "UnityEngine.Rendering", "ProbeBrickIndex/CellIndexUpdateInfo");
// Dependencies UnityEngine.Rendering.ProbeBrickIndex::IndirectionEntryUpdateInfo
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickIndex/CellIndexUpdateInfo
struct CORDL_TYPE ProbeBrickIndex_CellIndexUpdateInfo {
public:
// Declarations
/// @brief Method GetNumberOfChunks, addr 0xb159608, size 0x58, virtual false, abstract: false, final false
inline int32_t GetNumberOfChunks() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProbeBrickIndex_CellIndexUpdateInfo() ;

// Ctor Parameters [CppParam { name: "entriesInfo", ty: "::ArrayW<::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo>", modifiers: "", def_value: None, comment: None }]
constexpr ProbeBrickIndex_CellIndexUpdateInfo(::ArrayW<::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo>  entriesInfo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field entriesInfo, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo>  entriesInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo, entriesInfo) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeBrickIndex_CellIndexUpdateInfo) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
