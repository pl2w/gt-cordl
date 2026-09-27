#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/CuttableMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CuttableMesh)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator {
class CuttableSubMesh;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class CuttableMesh;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::CuttableMesh*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::CuttableMesh*, "Technie.PhysicsCreator", "CuttableMesh");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.CuttableMesh
class CORDL_TYPE CuttableMesh : public ::System::Object {
public:
// Declarations
/// @brief Field hasColours, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasColours, put=__cordl_internal_set_hasColours)) bool  hasColours;

/// @brief Field hasUv1s, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasUv1s, put=__cordl_internal_set_hasUv1s)) bool  hasUv1s;

/// @brief Field hasUvs, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasUvs, put=__cordl_internal_set_hasUvs)) bool  hasUvs;

/// @brief Field inputMeshRenderer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputMeshRenderer, put=__cordl_internal_set_inputMeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  inputMeshRenderer;

/// @brief Field subMeshes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_subMeshes, put=__cordl_internal_set_subMeshes)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  subMeshes;

/// @brief Method Add, addr 0xadc9b38, size 0x11c, virtual false, abstract: false, final false
inline void Add(::Technie::PhysicsCreator::CuttableMesh*  other) ;

/// @brief Method ConvertToRenderer, addr 0xadc9e0c, size 0x2b0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::MeshRenderer> ConvertToRenderer(::StringW  newObjectName) ;

/// @brief Method CreateMesh, addr 0xadca0bc, size 0x5b4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> CreateMesh() ;

/// @brief Method GetSubMesh, addr 0xadc9d2c, size 0x58, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::CuttableSubMesh* GetSubMesh(int32_t  index) ;

/// @brief Method GetSubMeshes, addr 0xadc9d24, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* GetSubMeshes() ;

/// @brief Method GetTransform, addr 0xadc9d84, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetTransform() ;

/// @brief Method HasColours, addr 0xadc9d1c, size 0x8, virtual false, abstract: false, final false
inline bool HasColours() ;

/// @brief Method HasUvs, addr 0xadc9d14, size 0x8, virtual false, abstract: false, final false
inline bool HasUvs() ;

/// @brief Method Init, addr 0xadc9250, size 0x2d4, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Mesh*  inputMesh, ::StringW  debugName) ;

static inline ::Technie::PhysicsCreator::CuttableMesh* New_ctor(::UnityEngine::MeshRenderer*  input) ;

static inline ::Technie::PhysicsCreator::CuttableMesh* New_ctor(::Technie::PhysicsCreator::CuttableMesh*  inputMesh, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  newSubMeshes) ;

static inline ::Technie::PhysicsCreator::CuttableMesh* New_ctor(::UnityEngine::Mesh*  inputMesh) ;

/// @brief Method NumSubMeshes, addr 0xadc9ccc, size 0x48, virtual false, abstract: false, final false
inline int32_t NumSubMeshes() ;

constexpr bool const& __cordl_internal_get_hasColours() const;

constexpr bool& __cordl_internal_get_hasColours() ;

constexpr bool const& __cordl_internal_get_hasUv1s() const;

constexpr bool& __cordl_internal_get_hasUv1s() ;

constexpr bool const& __cordl_internal_get_hasUvs() const;

constexpr bool& __cordl_internal_get_hasUvs() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_inputMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_inputMeshRenderer() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* const& __cordl_internal_get_subMeshes() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*& __cordl_internal_get_subMeshes() ;

constexpr void __cordl_internal_set_hasColours(bool  value) ;

constexpr void __cordl_internal_set_hasUv1s(bool  value) ;

constexpr void __cordl_internal_set_hasUvs(bool  value) ;

constexpr void __cordl_internal_set_inputMeshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_subMeshes(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  value) ;

/// @brief Method .ctor, addr 0xadc9524, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::MeshRenderer*  input) ;

/// @brief Method .ctor, addr 0xadc9a58, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::Technie::PhysicsCreator::CuttableMesh*  inputMesh, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  newSubMeshes) ;

/// @brief Method .ctor, addr 0xadc920c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Mesh*  inputMesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CuttableMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CuttableMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CuttableMesh(CuttableMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CuttableMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CuttableMesh(CuttableMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30502};

/// @brief Field inputMeshRenderer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___inputMeshRenderer;

/// @brief Field hasUvs, offset: 0x18, size: 0x1, def value: None
 bool  ___hasUvs;

/// @brief Field hasUv1s, offset: 0x19, size: 0x1, def value: None
 bool  ___hasUv1s;

/// @brief Field hasColours, offset: 0x1a, size: 0x1, def value: None
 bool  ___hasColours;

/// @brief Field subMeshes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  ___subMeshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::CuttableMesh, ___inputMeshRenderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CuttableMesh, ___hasUvs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CuttableMesh, ___hasUv1s) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CuttableMesh, ___hasColours) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CuttableMesh, ___subMeshes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::CuttableMesh) == 0x28, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
