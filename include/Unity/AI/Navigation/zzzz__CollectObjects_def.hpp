#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/CollectObjects.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectObjects)
// Forward declare root types
namespace Unity::AI::Navigation {
struct CollectObjects;
}
// Write type traits
MARK_VAL_T(::Unity::AI::Navigation::CollectObjects);
DEFINE_IL2CPP_CLASS(::Unity::AI::Navigation::CollectObjects, "Unity.AI.Navigation", "CollectObjects");
// Dependencies 
namespace Unity::AI::Navigation {
// Is value type: true
// CS Name: Unity.AI.Navigation.CollectObjects
struct CORDL_TYPE CollectObjects {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CollectObjects_Unwrapped
enum struct __CollectObjects_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_Volume = static_cast<int32_t>(0x1),
__E_Children = static_cast<int32_t>(0x2),
__E_MarkedWithModifier = static_cast<int32_t>(0x3),
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
static ::Unity::AI::Navigation::CollectObjects const All;

/// @brief Field Children value: I32(2)
static ::Unity::AI::Navigation::CollectObjects const Children;

/// @brief Field MarkedWithModifier value: I32(3)
static ::Unity::AI::Navigation::CollectObjects const MarkedWithModifier;

/// @brief Field Volume value: I32(1)
static ::Unity::AI::Navigation::CollectObjects const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32515};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::AI::Navigation::CollectObjects, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::AI::Navigation::CollectObjects) == 0x4, "Size mismatch!");

} // namespace end def Unity::AI::Navigation
