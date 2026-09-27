#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_TriangleMeshInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_TriangleMeshInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_TriangleMeshInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_TriangleMeshInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_TriangleMeshInternal, "", "OVRPlugin/TriangleMeshInternal");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/TriangleMeshInternal
struct CORDL_TYPE OVRPlugin_TriangleMeshInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_TriangleMeshInternal() ;

// Ctor Parameters [CppParam { name: "vertexCapacityInput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertexCountOutput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vertices", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexCapacityInput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexCountOutput", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_TriangleMeshInternal(int32_t  vertexCapacityInput, int32_t  vertexCountOutput, ::System::IntPtr  vertices, int32_t  indexCapacityInput, int32_t  indexCountOutput, ::System::IntPtr  indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field vertexCapacityInput, offset: 0x0, size: 0x4, def value: None
 int32_t  vertexCapacityInput;

/// @brief Field vertexCountOutput, offset: 0x4, size: 0x4, def value: None
 int32_t  vertexCountOutput;

/// @brief Field vertices, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  vertices;

/// @brief Field indexCapacityInput, offset: 0x10, size: 0x4, def value: None
 int32_t  indexCapacityInput;

/// @brief Field indexCountOutput, offset: 0x14, size: 0x4, def value: None
 int32_t  indexCountOutput;

/// @brief Field indices, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_TriangleMeshInternal, vertexCapacityInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_TriangleMeshInternal, vertexCountOutput) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_TriangleMeshInternal, vertices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_TriangleMeshInternal, indexCapacityInput) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_TriangleMeshInternal, indexCountOutput) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_TriangleMeshInternal, indices) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_TriangleMeshInternal) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
