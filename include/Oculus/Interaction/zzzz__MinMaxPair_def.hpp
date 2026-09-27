#pragma once
// IWYU pragma private; include "Oculus/Interaction/MinMaxPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MinMaxPair)
// Forward declare root types
namespace Oculus::Interaction {
struct MinMaxPair;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::MinMaxPair);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MinMaxPair, "Oculus.Interaction", "MinMaxPair");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.MinMaxPair
struct CORDL_TYPE MinMaxPair {
public:
// Declarations
 __declspec(property(get=get_Max)) float_t  Max;

 __declspec(property(get=get_Min)) float_t  Min;

 __declspec(property(get=get_UseRandomRange)) bool  UseRandomRange;

/// @brief Method get_Max, addr 0xa42c120, size 0x8, virtual false, abstract: false, final false
inline float_t get_Max() ;

/// @brief Method get_Min, addr 0xa42c118, size 0x8, virtual false, abstract: false, final false
inline float_t get_Min() ;

/// @brief Method get_UseRandomRange, addr 0xa42c110, size 0x8, virtual false, abstract: false, final false
inline bool get_UseRandomRange() ;

// Ctor Parameters []
// @brief default ctor
constexpr MinMaxPair() ;

// Ctor Parameters [CppParam { name: "_useRandomRange", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_min", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_max", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MinMaxPair(bool  _useRandomRange, float_t  _min, float_t  _max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28259};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [SerializeField]
/// @brief Field _useRandomRange, offset: 0x0, size: 0x1, def value: None
 bool  _useRandomRange;

/// [SerializeField]
/// @brief Field _min, offset: 0x4, size: 0x4, def value: None
 float_t  _min;

/// [SerializeField]
/// @brief Field _max, offset: 0x8, size: 0x4, def value: None
 float_t  _max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MinMaxPair, _useRandomRange) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MinMaxPair, _min) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MinMaxPair, _max) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MinMaxPair) == 0xc, "Size mismatch!");

} // namespace end def Oculus::Interaction
