#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntPools_EState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropHuntPools_EState)
// Forward declare root types
namespace GlobalNamespace {
struct PropHuntPools_EState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PropHuntPools_EState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntPools_EState, "", "PropHuntPools/EState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropHuntPools/EState
struct CORDL_TYPE PropHuntPools_EState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PropHuntPools_EState_Unwrapped
enum struct __PropHuntPools_EState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_WaitingForTitleData = static_cast<int32_t>(0x1),
__E_WaitingForLocalPlayerToVisitBayou = static_cast<int32_t>(0x2),
__E_SpawningProps = static_cast<int32_t>(0x3),
__E_Ready = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PropHuntPools_EState_Unwrapped () const noexcept {
return static_cast<__PropHuntPools_EState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PropHuntPools_EState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PropHuntPools_EState(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::PropHuntPools_EState const None;

/// @brief Field Ready value: I32(4)
static ::GlobalNamespace::PropHuntPools_EState const Ready;

/// @brief Field SpawningProps value: I32(3)
static ::GlobalNamespace::PropHuntPools_EState const SpawningProps;

/// @brief Field WaitingForLocalPlayerToVisitBayou value: I32(2)
static ::GlobalNamespace::PropHuntPools_EState const WaitingForLocalPlayerToVisitBayou;

/// @brief Field WaitingForTitleData value: I32(1)
static ::GlobalNamespace::PropHuntPools_EState const WaitingForTitleData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntPools_EState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntPools_EState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
