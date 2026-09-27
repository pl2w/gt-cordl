#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MeshUtils)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class MeshUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MeshUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshUtils*, "", "MeshUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MeshUtils
class CORDL_TYPE MeshUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CreateReadableMeshCopy, addr 0x5b0ac74, size 0x308, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CreateReadableMeshCopy(::UnityEngine::Mesh*  sourceMesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshUtils(MeshUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshUtils(MeshUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3517};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MeshUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
