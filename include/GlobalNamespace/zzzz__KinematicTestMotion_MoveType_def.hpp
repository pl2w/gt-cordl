#pragma once
// IWYU pragma private; include "GlobalNamespace/KinematicTestMotion_MoveType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KinematicTestMotion_MoveType)
// Forward declare root types
namespace GlobalNamespace {
struct KinematicTestMotion_MoveType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KinematicTestMotion_MoveType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KinematicTestMotion_MoveType, "", "KinematicTestMotion/MoveType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KinematicTestMotion/MoveType
struct CORDL_TYPE KinematicTestMotion_MoveType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KinematicTestMotion_MoveType_Unwrapped
enum struct __KinematicTestMotion_MoveType_Unwrapped : int32_t {
__E_TransformPosition = static_cast<int32_t>(0x0),
__E_RigidbodyMovePosition = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KinematicTestMotion_MoveType_Unwrapped () const noexcept {
return static_cast<__KinematicTestMotion_MoveType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KinematicTestMotion_MoveType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr KinematicTestMotion_MoveType(int32_t  value__) noexcept;

/// @brief Field RigidbodyMovePosition value: I32(1)
static ::GlobalNamespace::KinematicTestMotion_MoveType const RigidbodyMovePosition;

/// @brief Field TransformPosition value: I32(0)
static ::GlobalNamespace::KinematicTestMotion_MoveType const TransformPosition;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3444};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KinematicTestMotion_MoveType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KinematicTestMotion_MoveType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
