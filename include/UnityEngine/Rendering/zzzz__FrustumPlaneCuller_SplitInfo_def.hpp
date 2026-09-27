#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrustumPlaneCuller_SplitInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrustumPlaneCuller_SplitInfo)
// Forward declare root types
namespace GlobalNamespace {
struct FrustumPlaneCuller_SplitInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FrustumPlaneCuller_SplitInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FrustumPlaneCuller_SplitInfo, "UnityEngine.Rendering", "FrustumPlaneCuller/SplitInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.FrustumPlaneCuller/SplitInfo
struct CORDL_TYPE FrustumPlaneCuller_SplitInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FrustumPlaneCuller_SplitInfo() ;

// Ctor Parameters [CppParam { name: "packetCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FrustumPlaneCuller_SplitInfo(int32_t  packetCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field packetCount, offset: 0x0, size: 0x4, def value: None
 int32_t  packetCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FrustumPlaneCuller_SplitInfo, packetCount) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FrustumPlaneCuller_SplitInfo) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
