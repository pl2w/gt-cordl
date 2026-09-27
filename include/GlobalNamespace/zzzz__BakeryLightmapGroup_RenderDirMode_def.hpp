#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroup_RenderDirMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BakeryLightmapGroup_RenderDirMode)
// Forward declare root types
namespace GlobalNamespace {
struct BakeryLightmapGroup_RenderDirMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BakeryLightmapGroup_RenderDirMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeryLightmapGroup_RenderDirMode, "", "BakeryLightmapGroup/RenderDirMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BakeryLightmapGroup/RenderDirMode
struct CORDL_TYPE BakeryLightmapGroup_RenderDirMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BakeryLightmapGroup_RenderDirMode_Unwrapped
enum struct __BakeryLightmapGroup_RenderDirMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_BakedNormalMaps = static_cast<int32_t>(0x1),
__E_DominantDirection = static_cast<int32_t>(0x2),
__E_RNM = static_cast<int32_t>(0x3),
__E_SH = static_cast<int32_t>(0x4),
__E_ProbeSH = static_cast<int32_t>(0x5),
__E_MonoSH = static_cast<int32_t>(0x6),
__E_ProbeSHL2 = static_cast<int32_t>(0x7),
__E_Auto = static_cast<int32_t>(0x3e8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BakeryLightmapGroup_RenderDirMode_Unwrapped () const noexcept {
return static_cast<__BakeryLightmapGroup_RenderDirMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BakeryLightmapGroup_RenderDirMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BakeryLightmapGroup_RenderDirMode(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(1000)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const Auto;

/// @brief Field BakedNormalMaps value: I32(1)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const BakedNormalMaps;

/// @brief Field DominantDirection value: I32(2)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const DominantDirection;

/// @brief Field MonoSH value: I32(6)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const MonoSH;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const None;

/// @brief Field ProbeSH value: I32(5)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const ProbeSH;

/// @brief Field ProbeSHL2 value: I32(7)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const ProbeSHL2;

/// @brief Field RNM value: I32(3)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const RNM;

/// @brief Field SH value: I32(4)
static ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const SH;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BakeryLightmapGroup_RenderDirMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BakeryLightmapGroup_RenderDirMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
