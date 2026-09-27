#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableVector2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SerializableVector2)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct SerializableVector2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SerializableVector2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SerializableVector2, "", "SerializableVector2");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SerializableVector2
struct CORDL_TYPE SerializableVector2 {
public:
// Declarations
/// @brief Method .ctor, addr 0x56d5184, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y) ;

/// @brief Method op_Implicit, addr 0x56d518c, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SerializableVector2 op_Implicit___GlobalNamespace__SerializableVector2(::UnityEngine::Vector2  v) ;

/// @brief Method op_Implicit, addr 0x56d5190, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::GlobalNamespace::SerializableVector2  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializableVector2() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SerializableVector2(float_t  x, float_t  y) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializableVector2, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableVector2, y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SerializableVector2) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
