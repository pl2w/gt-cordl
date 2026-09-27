#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableVector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SerializableVector3)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SerializableVector3;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SerializableVector3);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SerializableVector3, "", "SerializableVector3");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SerializableVector3
struct CORDL_TYPE SerializableVector3 {
public:
// Declarations
/// @brief Method .ctor, addr 0x56d5194, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  x, float_t  y, float_t  z) ;

/// @brief Method op_Implicit, addr 0x56d51a0, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SerializableVector3 op_Implicit___GlobalNamespace__SerializableVector3(::UnityEngine::Vector3  v) ;

/// @brief Method op_Implicit, addr 0x56d51a4, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::GlobalNamespace::SerializableVector3  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializableVector3() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SerializableVector3(float_t  x, float_t  y, float_t  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1075};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 float_t  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializableVector3, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableVector3, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableVector3, z) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SerializableVector3) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
