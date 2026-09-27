#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/HeadModel_CosmeticStand_BustType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HeadModel_CosmeticStand_BustType)
// Forward declare root types
namespace GlobalNamespace {
struct HeadModel_CosmeticStand_BustType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HeadModel_CosmeticStand_BustType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeadModel_CosmeticStand_BustType, "GorillaNetworking.Store", "HeadModel_CosmeticStand/BustType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.Store.HeadModel_CosmeticStand/BustType
struct CORDL_TYPE HeadModel_CosmeticStand_BustType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HeadModel_CosmeticStand_BustType_Unwrapped
enum struct __HeadModel_CosmeticStand_BustType_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_GorillaHead = static_cast<int32_t>(0x1),
__E_GorillaTorso = static_cast<int32_t>(0x2),
__E_GorillaTorsoPost = static_cast<int32_t>(0x3),
__E_GorillaMannequin = static_cast<int32_t>(0x4),
__E_GuitarStand = static_cast<int32_t>(0x5),
__E_JewelryBox = static_cast<int32_t>(0x6),
__E_Table = static_cast<int32_t>(0x7),
__E_PinDisplay = static_cast<int32_t>(0x8),
__E_TagEffectDisplay = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HeadModel_CosmeticStand_BustType_Unwrapped () const noexcept {
return static_cast<__HeadModel_CosmeticStand_BustType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HeadModel_CosmeticStand_BustType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HeadModel_CosmeticStand_BustType(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const Disabled;

/// @brief Field GorillaHead value: I32(1)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const GorillaHead;

/// @brief Field GorillaMannequin value: I32(4)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const GorillaMannequin;

/// @brief Field GorillaTorso value: I32(2)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const GorillaTorso;

/// @brief Field GorillaTorsoPost value: I32(3)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const GorillaTorsoPost;

/// @brief Field GuitarStand value: I32(5)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const GuitarStand;

/// @brief Field JewelryBox value: I32(6)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const JewelryBox;

/// @brief Field PinDisplay value: I32(8)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const PinDisplay;

/// @brief Field Table value: I32(7)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const Table;

/// @brief Field TagEffectDisplay value: I32(9)
static ::GlobalNamespace::HeadModel_CosmeticStand_BustType const TagEffectDisplay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeadModel_CosmeticStand_BustType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeadModel_CosmeticStand_BustType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
