#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ProBuilderMesh_NonVersionedEditScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProBuilderMesh_NonVersionedEditScope)
namespace System {
class IDisposable;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProBuilderMesh_NonVersionedEditScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope, "UnityEngine.ProBuilder", "ProBuilderMesh/NonVersionedEditScope");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh/NonVersionedEditScope
struct CORDL_TYPE ProBuilderMesh_NonVersionedEditScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb0ab52c, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb0a5abc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProBuilderMesh_NonVersionedEditScope() ;

// Ctor Parameters [CppParam { name: "m_Mesh", ty: "::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_VersionIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr ProBuilderMesh_NonVersionedEditScope(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  m_Mesh, uint16_t  m_VersionIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Mesh, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  m_Mesh;

/// @brief Field m_VersionIndex, offset: 0x8, size: 0x2, def value: None
 uint16_t  m_VersionIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope, m_Mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope, m_VersionIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProBuilderMesh_NonVersionedEditScope) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
