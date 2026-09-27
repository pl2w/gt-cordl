#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController_EWearingCosmeticSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController_EWearingCosmeticSet)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsController_EWearingCosmeticSet;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsController_EWearingCosmeticSet);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsController_EWearingCosmeticSet, "GorillaNetworking", "CosmeticsController/EWearingCosmeticSet");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsController/EWearingCosmeticSet
struct CORDL_TYPE CosmeticsController_EWearingCosmeticSet {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticsController_EWearingCosmeticSet_Unwrapped
enum struct __CosmeticsController_EWearingCosmeticSet_Unwrapped : int32_t {
__E_NotASet = static_cast<int32_t>(0x0),
__E_NotWearing = static_cast<int32_t>(0x1),
__E_Partial = static_cast<int32_t>(0x2),
__E_Complete = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticsController_EWearingCosmeticSet_Unwrapped () const noexcept {
return static_cast<__CosmeticsController_EWearingCosmeticSet_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_EWearingCosmeticSet() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsController_EWearingCosmeticSet(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(3)
static ::GlobalNamespace::CosmeticsController_EWearingCosmeticSet const Complete;

/// @brief Field NotASet value: I32(0)
static ::GlobalNamespace::CosmeticsController_EWearingCosmeticSet const NotASet;

/// @brief Field NotWearing value: I32(1)
static ::GlobalNamespace::CosmeticsController_EWearingCosmeticSet const NotWearing;

/// @brief Field Partial value: I32(2)
static ::GlobalNamespace::CosmeticsController_EWearingCosmeticSet const Partial;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4281};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsController_EWearingCosmeticSet, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsController_EWearingCosmeticSet) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
