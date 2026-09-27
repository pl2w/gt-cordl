#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactor_ToolEntityCreateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactor_ToolEntityCreateData)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactor_ToolEntityCreateData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactor_ToolEntityCreateData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactor_ToolEntityCreateData, "", "GhostReactor/ToolEntityCreateData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactor/ToolEntityCreateData
struct CORDL_TYPE GhostReactor_ToolEntityCreateData {
public:
// Declarations
/// @brief Method Pack, addr 0x5847bf0, size 0x10, virtual false, abstract: false, final false
inline int64_t Pack() ;

/// @brief Method PackData, addr 0x5847ba4, size 0x14, virtual false, abstract: false, final false
static inline int64_t PackData(int32_t  value, int32_t  nbits, int32_t  shift) ;

/// @brief Method Unpack, addr 0x5847bcc, size 0x24, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GhostReactor_ToolEntityCreateData Unpack(int64_t  bits) ;

/// @brief Method UnpackData, addr 0x5847bb8, size 0x14, virtual false, abstract: false, final false
static inline int32_t UnpackData(int64_t  createData, int32_t  nbits, int32_t  shift) ;

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactor_ToolEntityCreateData() ;

// Ctor Parameters [CppParam { name: "stationIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "decayTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactor_ToolEntityCreateData(int32_t  stationIndex, float_t  decayTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1804};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field stationIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  stationIndex;

/// @brief Field decayTime, offset: 0x4, size: 0x4, def value: None
 float_t  decayTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactor_ToolEntityCreateData, stationIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor_ToolEntityCreateData, decayTime) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactor_ToolEntityCreateData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
