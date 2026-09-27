#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh_Triangle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh_Triangle)
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh_Triangle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh_Triangle);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTriangleMesh_Triangle, "", "OVRTriangleMesh/Triangle");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh/Triangle
struct CORDL_TYPE OVRTriangleMesh_Triangle {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRTriangleMesh_Triangle() ;

// Ctor Parameters [CppParam { name: "A", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "B", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "C", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRTriangleMesh_Triangle(int32_t  A, int32_t  B, int32_t  C) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11858};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field A, offset: 0x0, size: 0x4, def value: None
 int32_t  A;

/// @brief Field B, offset: 0x4, size: 0x4, def value: None
 int32_t  B;

/// @brief Field C, offset: 0x8, size: 0x4, def value: None
 int32_t  C;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_Triangle, A) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_Triangle, B) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh_Triangle, C) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTriangleMesh_Triangle) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
