#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMaterialProperties_BuiltinPreset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAcousticMaterialProperties_BuiltinPreset)
// Forward declare root types
namespace GlobalNamespace {
struct MetaXRAcousticMaterialProperties_BuiltinPreset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset, "", "MetaXRAcousticMaterialProperties/BuiltinPreset");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MetaXRAcousticMaterialProperties/BuiltinPreset
struct CORDL_TYPE MetaXRAcousticMaterialProperties_BuiltinPreset {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MetaXRAcousticMaterialProperties_BuiltinPreset_Unwrapped
enum struct __MetaXRAcousticMaterialProperties_BuiltinPreset_Unwrapped : int32_t {
__E_Custom = static_cast<int32_t>(0x0),
__E_AcousticTile = static_cast<int32_t>(0x1),
__E_Brick = static_cast<int32_t>(0x2),
__E_BrickPainted = static_cast<int32_t>(0x3),
__E_Cardboard = static_cast<int32_t>(0x4),
__E_Carpet = static_cast<int32_t>(0x5),
__E_CarpetHeavy = static_cast<int32_t>(0x6),
__E_CarpetHeavyPadded = static_cast<int32_t>(0x7),
__E_CeramicTile = static_cast<int32_t>(0x8),
__E_Concrete = static_cast<int32_t>(0x9),
__E_ConcreteRough = static_cast<int32_t>(0xa),
__E_ConcreteBlock = static_cast<int32_t>(0xb),
__E_ConcreteBlockPainted = static_cast<int32_t>(0xc),
__E_Curtain = static_cast<int32_t>(0xd),
__E_Foliage = static_cast<int32_t>(0xe),
__E_Glass = static_cast<int32_t>(0xf),
__E_GlassHeavy = static_cast<int32_t>(0x10),
__E_Grass = static_cast<int32_t>(0x11),
__E_Gravel = static_cast<int32_t>(0x12),
__E_GypsumBoard = static_cast<int32_t>(0x13),
__E_Marble = static_cast<int32_t>(0x14),
__E_Mud = static_cast<int32_t>(0x15),
__E_PlasterOnBrick = static_cast<int32_t>(0x16),
__E_PlasterOnConcreteBlock = static_cast<int32_t>(0x17),
__E_Rubber = static_cast<int32_t>(0x18),
__E_Soil = static_cast<int32_t>(0x19),
__E_SoundProof = static_cast<int32_t>(0x1a),
__E_Snow = static_cast<int32_t>(0x1b),
__E_Steel = static_cast<int32_t>(0x1c),
__E_Stone = static_cast<int32_t>(0x1d),
__E_Vent = static_cast<int32_t>(0x1e),
__E_Water = static_cast<int32_t>(0x1f),
__E_WoodThin = static_cast<int32_t>(0x20),
__E_WoodThick = static_cast<int32_t>(0x21),
__E_WoodFloor = static_cast<int32_t>(0x22),
__E_WoodOnConcrete = static_cast<int32_t>(0x23),
__E_MetaDefault = static_cast<int32_t>(0x24),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetaXRAcousticMaterialProperties_BuiltinPreset_Unwrapped () const noexcept {
return static_cast<__MetaXRAcousticMaterialProperties_BuiltinPreset_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMaterialProperties_BuiltinPreset() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MetaXRAcousticMaterialProperties_BuiltinPreset(int32_t  value__) noexcept;

/// @brief Field AcousticTile value: I32(1)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const AcousticTile;

/// @brief Field Brick value: I32(2)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Brick;

/// @brief Field BrickPainted value: I32(3)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const BrickPainted;

/// @brief Field Cardboard value: I32(4)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Cardboard;

/// @brief Field Carpet value: I32(5)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Carpet;

/// @brief Field CarpetHeavy value: I32(6)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const CarpetHeavy;

/// @brief Field CarpetHeavyPadded value: I32(7)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const CarpetHeavyPadded;

/// @brief Field CeramicTile value: I32(8)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const CeramicTile;

/// @brief Field Concrete value: I32(9)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Concrete;

/// @brief Field ConcreteBlock value: I32(11)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const ConcreteBlock;

/// @brief Field ConcreteBlockPainted value: I32(12)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const ConcreteBlockPainted;

/// @brief Field ConcreteRough value: I32(10)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const ConcreteRough;

/// @brief Field Curtain value: I32(13)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Curtain;

/// @brief Field Custom value: I32(0)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Custom;

/// @brief Field Foliage value: I32(14)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Foliage;

/// @brief Field Glass value: I32(15)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Glass;

/// @brief Field GlassHeavy value: I32(16)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const GlassHeavy;

/// @brief Field Grass value: I32(17)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Grass;

/// @brief Field Gravel value: I32(18)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Gravel;

/// @brief Field GypsumBoard value: I32(19)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const GypsumBoard;

/// @brief Field Marble value: I32(20)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Marble;

/// @brief Field MetaDefault value: I32(36)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const MetaDefault;

/// @brief Field Mud value: I32(21)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Mud;

/// @brief Field PlasterOnBrick value: I32(22)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const PlasterOnBrick;

/// @brief Field PlasterOnConcreteBlock value: I32(23)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const PlasterOnConcreteBlock;

/// @brief Field Rubber value: I32(24)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Rubber;

/// @brief Field Snow value: I32(27)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Snow;

/// @brief Field Soil value: I32(25)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Soil;

/// @brief Field SoundProof value: I32(26)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const SoundProof;

/// @brief Field Steel value: I32(28)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Steel;

/// @brief Field Stone value: I32(29)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Stone;

/// @brief Field Vent value: I32(30)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Vent;

/// @brief Field Water value: I32(31)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const Water;

/// @brief Field WoodFloor value: I32(34)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const WoodFloor;

/// @brief Field WoodOnConcrete value: I32(35)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const WoodOnConcrete;

/// @brief Field WoodThick value: I32(33)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const WoodThick;

/// @brief Field WoodThin value: I32(32)
static ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const WoodThin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29934};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
