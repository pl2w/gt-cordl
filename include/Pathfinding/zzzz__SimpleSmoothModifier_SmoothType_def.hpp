#pragma once
// IWYU pragma private; include "Pathfinding/SimpleSmoothModifier_SmoothType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleSmoothModifier_SmoothType)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleSmoothModifier_SmoothType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleSmoothModifier_SmoothType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleSmoothModifier_SmoothType, "Pathfinding", "SimpleSmoothModifier/SmoothType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.SimpleSmoothModifier/SmoothType
struct CORDL_TYPE SimpleSmoothModifier_SmoothType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimpleSmoothModifier_SmoothType_Unwrapped
enum struct __SimpleSmoothModifier_SmoothType_Unwrapped : int32_t {
__E_Simple = static_cast<int32_t>(0x0),
__E_Bezier = static_cast<int32_t>(0x1),
__E_OffsetSimple = static_cast<int32_t>(0x2),
__E_CurvedNonuniform = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimpleSmoothModifier_SmoothType_Unwrapped () const noexcept {
return static_cast<__SimpleSmoothModifier_SmoothType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimpleSmoothModifier_SmoothType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimpleSmoothModifier_SmoothType(int32_t  value__) noexcept;

/// @brief Field Bezier value: I32(1)
static ::GlobalNamespace::SimpleSmoothModifier_SmoothType const Bezier;

/// @brief Field CurvedNonuniform value: I32(3)
static ::GlobalNamespace::SimpleSmoothModifier_SmoothType const CurvedNonuniform;

/// @brief Field OffsetSimple value: I32(2)
static ::GlobalNamespace::SimpleSmoothModifier_SmoothType const OffsetSimple;

/// @brief Field Simple value: I32(0)
static ::GlobalNamespace::SimpleSmoothModifier_SmoothType const Simple;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21372};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleSmoothModifier_SmoothType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleSmoothModifier_SmoothType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
