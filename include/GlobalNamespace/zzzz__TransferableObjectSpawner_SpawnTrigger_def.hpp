#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferableObjectSpawner_SpawnTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferableObjectSpawner_SpawnTrigger)
// Forward declare root types
namespace GlobalNamespace {
struct TransferableObjectSpawner_SpawnTrigger;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger, "", "TransferableObjectSpawner/SpawnTrigger");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TransferableObjectSpawner/SpawnTrigger
struct CORDL_TYPE TransferableObjectSpawner_SpawnTrigger {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransferableObjectSpawner_SpawnTrigger_Unwrapped
enum struct __TransferableObjectSpawner_SpawnTrigger_Unwrapped : int32_t {
__E_Timer = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransferableObjectSpawner_SpawnTrigger_Unwrapped () const noexcept {
return static_cast<__TransferableObjectSpawner_SpawnTrigger_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransferableObjectSpawner_SpawnTrigger() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransferableObjectSpawner_SpawnTrigger(int32_t  value__) noexcept;

/// @brief Field Timer value: I32(0)
static ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger const Timer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
