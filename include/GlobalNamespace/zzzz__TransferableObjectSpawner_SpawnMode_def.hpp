#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferableObjectSpawner_SpawnMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferableObjectSpawner_SpawnMode)
// Forward declare root types
namespace GlobalNamespace {
struct TransferableObjectSpawner_SpawnMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransferableObjectSpawner_SpawnMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferableObjectSpawner_SpawnMode, "", "TransferableObjectSpawner/SpawnMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TransferableObjectSpawner/SpawnMode
struct CORDL_TYPE TransferableObjectSpawner_SpawnMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransferableObjectSpawner_SpawnMode_Unwrapped
enum struct __TransferableObjectSpawner_SpawnMode_Unwrapped : int32_t {
__E_OnGround = static_cast<int32_t>(0x0),
__E_AtCurrentTransform = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransferableObjectSpawner_SpawnMode_Unwrapped () const noexcept {
return static_cast<__TransferableObjectSpawner_SpawnMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransferableObjectSpawner_SpawnMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransferableObjectSpawner_SpawnMode(int32_t  value__) noexcept;

/// @brief Field AtCurrentTransform value: I32(1)
static ::GlobalNamespace::TransferableObjectSpawner_SpawnMode const AtCurrentTransform;

/// @brief Field OnGround value: I32(0)
static ::GlobalNamespace::TransferableObjectSpawner_SpawnMode const OnGround;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2358};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner_SpawnMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferableObjectSpawner_SpawnMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
