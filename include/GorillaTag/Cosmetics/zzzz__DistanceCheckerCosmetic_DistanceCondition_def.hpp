#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DistanceCheckerCosmetic_DistanceCondition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DistanceCheckerCosmetic_DistanceCondition)
// Forward declare root types
namespace GlobalNamespace {
struct DistanceCheckerCosmetic_DistanceCondition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition, "GorillaTag.Cosmetics", "DistanceCheckerCosmetic/DistanceCondition");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.DistanceCheckerCosmetic/DistanceCondition
struct CORDL_TYPE DistanceCheckerCosmetic_DistanceCondition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DistanceCheckerCosmetic_DistanceCondition_Unwrapped
enum struct __DistanceCheckerCosmetic_DistanceCondition_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Owner = static_cast<int32_t>(0x1),
__E_Others = static_cast<int32_t>(0x2),
__E_Everyone = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DistanceCheckerCosmetic_DistanceCondition_Unwrapped () const noexcept {
return static_cast<__DistanceCheckerCosmetic_DistanceCondition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DistanceCheckerCosmetic_DistanceCondition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DistanceCheckerCosmetic_DistanceCondition(int32_t  value__) noexcept;

/// @brief Field Everyone value: I32(3)
static ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition const Everyone;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition const None;

/// @brief Field Others value: I32(2)
static ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition const Others;

/// @brief Field Owner value: I32(1)
static ::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition const Owner;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DistanceCheckerCosmetic_DistanceCondition) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
