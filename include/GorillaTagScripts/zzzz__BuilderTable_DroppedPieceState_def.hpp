#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_DroppedPieceState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTable_DroppedPieceState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTable_DroppedPieceState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTable_DroppedPieceState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTable_DroppedPieceState, "GorillaTagScripts", "BuilderTable/DroppedPieceState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTable/DroppedPieceState
struct CORDL_TYPE BuilderTable_DroppedPieceState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderTable_DroppedPieceState_Unwrapped
enum struct __BuilderTable_DroppedPieceState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Light = static_cast<int32_t>(0x0),
__E_Heavy = static_cast<int32_t>(0x1),
__E_Frozen = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderTable_DroppedPieceState_Unwrapped () const noexcept {
return static_cast<__BuilderTable_DroppedPieceState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_DroppedPieceState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTable_DroppedPieceState(int32_t  value__) noexcept;

/// @brief Field Frozen value: I32(2)
static ::GlobalNamespace::BuilderTable_DroppedPieceState const Frozen;

/// @brief Field Heavy value: I32(1)
static ::GlobalNamespace::BuilderTable_DroppedPieceState const Heavy;

/// @brief Field Light value: I32(0)
static ::GlobalNamespace::BuilderTable_DroppedPieceState const Light;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::BuilderTable_DroppedPieceState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTable_DroppedPieceState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTable_DroppedPieceState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
