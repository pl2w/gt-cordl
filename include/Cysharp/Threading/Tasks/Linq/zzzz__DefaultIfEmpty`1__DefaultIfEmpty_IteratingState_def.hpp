#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/DefaultIfEmpty`1__DefaultIfEmpty_IteratingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultIfEmpty`1__DefaultIfEmpty_IteratingState)
// Forward declare root types
namespace GlobalNamespace {
template<typename TSource>
struct _DefaultIfEmpty_DefaultIfEmpty_1_IteratingState;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState, "Cysharp.Threading.Tasks.Linq", "DefaultIfEmpty`1/_DefaultIfEmpty/IteratingState");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TSource>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.DefaultIfEmpty`1/_DefaultIfEmpty/IteratingState<TSource>
struct CORDL_TYPE _DefaultIfEmpty_DefaultIfEmpty_1_IteratingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ___DefaultIfEmpty_DefaultIfEmpty_1_IteratingState_Unwrapped
enum struct ___DefaultIfEmpty_DefaultIfEmpty_1_IteratingState_Unwrapped : uint8_t {
__E_Empty = static_cast<uint8_t>(0x0u),
__E_Iterating = static_cast<uint8_t>(0x1u),
__E_Completed = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ___DefaultIfEmpty_DefaultIfEmpty_1_IteratingState_Unwrapped () const noexcept {
return static_cast<___DefaultIfEmpty_DefaultIfEmpty_1_IteratingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr _DefaultIfEmpty_DefaultIfEmpty_1_IteratingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr _DefaultIfEmpty_DefaultIfEmpty_1_IteratingState(uint8_t  value__) noexcept;

/// @brief Field Completed value: U8(2)
static ::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource> const Completed;

/// @brief Field Empty value: U8(0)
static ::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource> const Empty;

/// @brief Field Iterating value: U8(1)
static ::GlobalNamespace::_DefaultIfEmpty_DefaultIfEmpty_1_IteratingState<TSource> const Iterating;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
