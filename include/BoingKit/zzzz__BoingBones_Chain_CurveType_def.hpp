#pragma once
// IWYU pragma private; include "BoingKit/BoingBones_Chain_CurveType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingBones_Chain_CurveType)
// Forward declare root types
namespace GlobalNamespace {
struct Chain_BoingBones_CurveType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Chain_BoingBones_CurveType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Chain_BoingBones_CurveType, "BoingKit", "BoingBones/Chain/CurveType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingBones/Chain/CurveType
struct CORDL_TYPE Chain_BoingBones_CurveType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Chain_BoingBones_CurveType_Unwrapped
enum struct __Chain_BoingBones_CurveType_Unwrapped : int32_t {
__E_ConstantOne = static_cast<int32_t>(0x0),
__E_ConstantHalf = static_cast<int32_t>(0x1),
__E_ConstantZero = static_cast<int32_t>(0x2),
__E_RootOneTailHalf = static_cast<int32_t>(0x3),
__E_RootOneTailZero = static_cast<int32_t>(0x4),
__E_RootHalfTailOne = static_cast<int32_t>(0x5),
__E_RootZeroTailOne = static_cast<int32_t>(0x6),
__E_Custom = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Chain_BoingBones_CurveType_Unwrapped () const noexcept {
return static_cast<__Chain_BoingBones_CurveType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Chain_BoingBones_CurveType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Chain_BoingBones_CurveType(int32_t  value__) noexcept;

/// @brief Field ConstantHalf value: I32(1)
static ::GlobalNamespace::Chain_BoingBones_CurveType const ConstantHalf;

/// @brief Field ConstantOne value: I32(0)
static ::GlobalNamespace::Chain_BoingBones_CurveType const ConstantOne;

/// @brief Field ConstantZero value: I32(2)
static ::GlobalNamespace::Chain_BoingBones_CurveType const ConstantZero;

/// @brief Field Custom value: I32(7)
static ::GlobalNamespace::Chain_BoingBones_CurveType const Custom;

/// @brief Field RootHalfTailOne value: I32(5)
static ::GlobalNamespace::Chain_BoingBones_CurveType const RootHalfTailOne;

/// @brief Field RootOneTailHalf value: I32(3)
static ::GlobalNamespace::Chain_BoingBones_CurveType const RootOneTailHalf;

/// @brief Field RootOneTailZero value: I32(4)
static ::GlobalNamespace::Chain_BoingBones_CurveType const RootOneTailZero;

/// @brief Field RootZeroTailOne value: I32(6)
static ::GlobalNamespace::Chain_BoingBones_CurveType const RootZeroTailOne;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5167};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Chain_BoingBones_CurveType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Chain_BoingBones_CurveType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
