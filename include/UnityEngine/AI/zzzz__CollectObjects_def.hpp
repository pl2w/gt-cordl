#pragma once
// IWYU pragma private; include "UnityEngine/AI/CollectObjects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectObjects)
// Forward declare root types
namespace UnityEngine::AI {
struct CollectObjects;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::CollectObjects);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::CollectObjects, "UnityEngine.AI", "CollectObjects");
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.CollectObjects
struct CORDL_TYPE CollectObjects {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollectObjects_Unwrapped
enum struct __CollectObjects_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_Volume = static_cast<int32_t>(0x1),
__E_Children = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CollectObjects_Unwrapped () const noexcept {
return static_cast<__CollectObjects_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CollectObjects() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CollectObjects(int32_t  value__) noexcept;

/// @brief Field All value: I32(0)
static ::UnityEngine::AI::CollectObjects const All;

/// @brief Field Children value: I32(2)
static ::UnityEngine::AI::CollectObjects const Children;

/// @brief Field Volume value: I32(1)
static ::UnityEngine::AI::CollectObjects const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32783};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::CollectObjects, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::CollectObjects) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AI
