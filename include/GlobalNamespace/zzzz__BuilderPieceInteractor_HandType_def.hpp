#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractor_HandType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceInteractor_HandType)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceInteractor_HandType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceInteractor_HandType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceInteractor_HandType, "", "BuilderPieceInteractor/HandType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderPieceInteractor/HandType
struct CORDL_TYPE BuilderPieceInteractor_HandType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceInteractor_HandType_Unwrapped
enum struct __BuilderPieceInteractor_HandType_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceInteractor_HandType_Unwrapped () const noexcept {
return static_cast<__BuilderPieceInteractor_HandType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceInteractor_HandType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceInteractor_HandType(int32_t  value__) noexcept;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::BuilderPieceInteractor_HandType const Invalid;

/// @brief Field Left value: I32(0)
static ::GlobalNamespace::BuilderPieceInteractor_HandType const Left;

/// @brief Field Right value: I32(1)
static ::GlobalNamespace::BuilderPieceInteractor_HandType const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceInteractor_HandType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceInteractor_HandType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
