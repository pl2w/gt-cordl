#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler_Basis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColocationSessionEventHandler_Basis)
// Forward declare root types
namespace GlobalNamespace {
struct ColocationSessionEventHandler_Basis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColocationSessionEventHandler_Basis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColocationSessionEventHandler_Basis, "Meta.XR.MultiplayerBlocks.Shared", "ColocationSessionEventHandler/Basis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler/Basis
struct CORDL_TYPE ColocationSessionEventHandler_Basis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColocationSessionEventHandler_Basis_Unwrapped
enum struct __ColocationSessionEventHandler_Basis_Unwrapped : int32_t {
__E_SharedSpatialAnchor = static_cast<int32_t>(0x0),
__E_RoomAnchors = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColocationSessionEventHandler_Basis_Unwrapped () const noexcept {
return static_cast<__ColocationSessionEventHandler_Basis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColocationSessionEventHandler_Basis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ColocationSessionEventHandler_Basis(int32_t  value__) noexcept;

/// @brief Field RoomAnchors value: I32(1)
static ::GlobalNamespace::ColocationSessionEventHandler_Basis const RoomAnchors;

/// @brief Field SharedSpatialAnchor value: I32(0)
static ::GlobalNamespace::ColocationSessionEventHandler_Basis const SharedSpatialAnchor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler_Basis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColocationSessionEventHandler_Basis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
