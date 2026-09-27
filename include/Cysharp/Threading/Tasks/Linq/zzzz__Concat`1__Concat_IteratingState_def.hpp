#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Concat`1__Concat_IteratingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Concat`1__Concat_IteratingState)
// Forward declare root types
namespace GlobalNamespace {
template<typename TSource>
struct _Concat_Concat_1_IteratingState;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_Concat_Concat_1_IteratingState);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_Concat_Concat_1_IteratingState, "Cysharp.Threading.Tasks.Linq", "Concat`1/_Concat/IteratingState");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TSource>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.Concat`1/_Concat/IteratingState<TSource>
struct CORDL_TYPE _Concat_Concat_1_IteratingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ___Concat_Concat_1_IteratingState_Unwrapped
enum struct ___Concat_Concat_1_IteratingState_Unwrapped : int32_t {
__E_IteratingFirst = static_cast<int32_t>(0x0),
__E_IteratingSecond = static_cast<int32_t>(0x1),
__E_Complete = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ___Concat_Concat_1_IteratingState_Unwrapped () const noexcept {
return static_cast<___Concat_Concat_1_IteratingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr _Concat_Concat_1_IteratingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr _Concat_Concat_1_IteratingState(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(2)
static ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource> const Complete;

/// @brief Field IteratingFirst value: I32(0)
static ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource> const IteratingFirst;

/// @brief Field IteratingSecond value: I32(1)
static ::GlobalNamespace::_Concat_Concat_1_IteratingState<TSource> const IteratingSecond;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
