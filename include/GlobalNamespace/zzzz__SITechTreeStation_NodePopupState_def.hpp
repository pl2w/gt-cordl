#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeStation_NodePopupState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SITechTreeStation_NodePopupState)
// Forward declare root types
namespace GlobalNamespace {
struct SITechTreeStation_NodePopupState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITechTreeStation_NodePopupState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeStation_NodePopupState, "", "SITechTreeStation/NodePopupState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITechTreeStation/NodePopupState
struct CORDL_TYPE SITechTreeStation_NodePopupState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SITechTreeStation_NodePopupState_Unwrapped
enum struct __SITechTreeStation_NodePopupState_Unwrapped : int32_t {
__E_Description = static_cast<int32_t>(0x0),
__E_NotEnoughResources = static_cast<int32_t>(0x1),
__E_Success = static_cast<int32_t>(0x2),
__E_PurchaseInitiation = static_cast<int32_t>(0x3),
__E_Loading = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SITechTreeStation_NodePopupState_Unwrapped () const noexcept {
return static_cast<__SITechTreeStation_NodePopupState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeStation_NodePopupState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SITechTreeStation_NodePopupState(int32_t  value__) noexcept;

/// @brief Field Description value: I32(0)
static ::GlobalNamespace::SITechTreeStation_NodePopupState const Description;

/// @brief Field Loading value: I32(4)
static ::GlobalNamespace::SITechTreeStation_NodePopupState const Loading;

/// @brief Field NotEnoughResources value: I32(1)
static ::GlobalNamespace::SITechTreeStation_NodePopupState const NotEnoughResources;

/// @brief Field PurchaseInitiation value: I32(3)
static ::GlobalNamespace::SITechTreeStation_NodePopupState const PurchaseInitiation;

/// @brief Field Success value: I32(2)
static ::GlobalNamespace::SITechTreeStation_NodePopupState const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeStation_NodePopupState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeStation_NodePopupState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
