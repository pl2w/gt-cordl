#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRMesh_MeshType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRMesh)
namespace GlobalNamespace {
class OVRMesh_IOVRMeshDataProvider;
}
namespace GlobalNamespace {
struct OVRMesh_MeshType;
}
namespace GlobalNamespace {
class OVRPlugin_Mesh;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMesh;
}
namespace GlobalNamespace {
class OVRMesh_IOVRMeshDataProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRMesh*);
MARK_REF_T(::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMesh*, "", "OVRMesh");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*, "", "OVRMesh/IOVRMeshDataProvider");
// Dependencies OVRMesh::MeshType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMesh
class CORDL_TYPE OVRMesh : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using IOVRMeshDataProvider = ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider;

using MeshType = ::GlobalNamespace::OVRMesh_MeshType;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

/// @brief Field <IsInitialized>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialized_k__BackingField, put=__cordl_internal_set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field _dataProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataProvider, put=__cordl_internal_set__dataProvider)) ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*  _dataProvider;

/// @brief Field _loadedMeshType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__loadedMeshType, put=__cordl_internal_set__loadedMeshType)) ::GlobalNamespace::OVRMesh_MeshType  _loadedMeshType;

/// @brief Field _mesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _meshType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__meshType, put=__cordl_internal_set__meshType)) ::GlobalNamespace::OVRMesh_MeshType  _meshType;

/// @brief Method Awake, addr 0xa6670dc, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetMeshType, addr 0xa6670cc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRMesh_MeshType GetMeshType() ;

/// @brief Method Initialize, addr 0xa66721c, size 0xcc, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::OVRMesh_MeshType  meshType) ;

static inline ::GlobalNamespace::OVRMesh* New_ctor() ;

/// @brief Method SetMeshType, addr 0xa6670d4, size 0x8, virtual false, abstract: false, final false
inline void SetMeshType(::GlobalNamespace::OVRMesh_MeshType  type) ;

/// @brief Method ShouldInitialize, addr 0xa6671f4, size 0x28, virtual false, abstract: false, final false
inline bool ShouldInitialize() ;

/// @brief Method TransformOvrpMesh, addr 0xa6672e8, size 0x9fc, virtual false, abstract: false, final false
inline void TransformOvrpMesh(::GlobalNamespace::OVRPlugin_Mesh*  ovrpMesh, ::UnityEngine::Mesh*  mesh) ;

constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField() ;

constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider* const& __cordl_internal_get__dataProvider() const;

constexpr ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*& __cordl_internal_get__dataProvider() ;

constexpr ::GlobalNamespace::OVRMesh_MeshType const& __cordl_internal_get__loadedMeshType() const;

constexpr ::GlobalNamespace::OVRMesh_MeshType& __cordl_internal_get__loadedMeshType() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::GlobalNamespace::OVRMesh_MeshType const& __cordl_internal_get__meshType() const;

constexpr ::GlobalNamespace::OVRMesh_MeshType& __cordl_internal_get__meshType() ;

constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__dataProvider(::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*  value) ;

constexpr void __cordl_internal_set__loadedMeshType(::GlobalNamespace::OVRMesh_MeshType  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__meshType(::GlobalNamespace::OVRMesh_MeshType  value) ;

/// @brief Method .ctor, addr 0xa667ce4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsInitialized, addr 0xa6670b4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_Mesh, addr 0xa6670c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

/// [CompilerGenerated]
/// @brief Method set_IsInitialized, addr 0xa6670bc, size 0x8, virtual false, abstract: false, final false
inline void set_IsInitialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMesh(OVRMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMesh(OVRMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12656};

/// [SerializeField]
/// @brief Field _dataProvider, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::OVRMesh_IOVRMeshDataProvider*  ____dataProvider;

/// [SerializeField]
/// @brief Field _meshType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OVRMesh_MeshType  ____meshType;

/// @brief Field _loadedMeshType, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::OVRMesh_MeshType  ____loadedMeshType;

/// @brief Field _mesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// [CompilerGenerated]
/// @brief Field <IsInitialized>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____IsInitialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMesh, ____dataProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____meshType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____loadedMeshType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____mesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMesh, ____IsInitialized_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMesh) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMesh/IOVRMeshDataProvider
class CORDL_TYPE OVRMesh_IOVRMeshDataProvider {
public:
// Declarations
/// @brief Method GetMeshType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::OVRMesh_MeshType GetMeshType() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRMesh_IOVRMeshDataProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMesh_IOVRMeshDataProvider(OVRMesh_IOVRMeshDataProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
