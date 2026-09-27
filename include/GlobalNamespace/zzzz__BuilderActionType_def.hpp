#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderActionType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderActionType)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderActionType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderActionType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderActionType, "", "BuilderActionType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderActionType
struct CORDL_TYPE BuilderActionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderActionType_Unwrapped
enum struct __BuilderActionType_Unwrapped : int32_t {
__E_AttachToPlayer = static_cast<int32_t>(0x0),
__E_DetachFromPlayer = static_cast<int32_t>(0x1),
__E_AttachToPiece = static_cast<int32_t>(0x2),
__E_DetachFromPiece = static_cast<int32_t>(0x3),
__E_MakePieceRoot = static_cast<int32_t>(0x4),
__E_DropPiece = static_cast<int32_t>(0x5),
__E_AttachToShelf = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderActionType_Unwrapped () const noexcept {
return static_cast<__BuilderActionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderActionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderActionType(int32_t  value__) noexcept;

/// @brief Field AttachToPiece value: I32(2)
static ::GlobalNamespace::BuilderActionType const AttachToPiece;

/// @brief Field AttachToPlayer value: I32(0)
static ::GlobalNamespace::BuilderActionType const AttachToPlayer;

/// @brief Field AttachToShelf value: I32(6)
static ::GlobalNamespace::BuilderActionType const AttachToShelf;

/// @brief Field DetachFromPiece value: I32(3)
static ::GlobalNamespace::BuilderActionType const DetachFromPiece;

/// @brief Field DetachFromPlayer value: I32(1)
static ::GlobalNamespace::BuilderActionType const DetachFromPlayer;

/// @brief Field DropPiece value: I32(5)
static ::GlobalNamespace::BuilderActionType const DropPiece;

/// @brief Field MakePieceRoot value: I32(4)
static ::GlobalNamespace::BuilderActionType const MakePieceRoot;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1577};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderActionType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderActionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
