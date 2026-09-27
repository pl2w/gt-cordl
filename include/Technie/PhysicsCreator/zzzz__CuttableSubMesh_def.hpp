#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/CuttableSubMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CuttableSubMesh)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class CuttableSubMesh;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::CuttableSubMesh*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::CuttableSubMesh*, "Technie.PhysicsCreator", "CuttableSubMesh");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.CuttableSubMesh
class CORDL_TYPE CuttableSubMesh : public ::System::Object {
public:
// Declarations
/// @brief Field colours, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_colours, put=__cordl_internal_set_colours)) ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  colours;

/// @brief Field normals, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_normals, put=__cordl_internal_set_normals)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  normals;

/// @brief Field uv1s, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv1s, put=__cordl_internal_set_uv1s)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uv1s;

/// @brief Field uvs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_uvs, put=__cordl_internal_set_uvs)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs;

/// @brief Field vertices, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertices, put=__cordl_internal_set_vertices)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices;

/// @brief Method Add, addr 0xadc9c54, size 0x78, virtual false, abstract: false, final false
inline void Add(::Technie::PhysicsCreator::CuttableSubMesh*  other) ;

/// @brief Method AddInterpolatedVertex, addr 0xadcadfc, size 0x5b4, virtual false, abstract: false, final false
inline void AddInterpolatedVertex(int32_t  i0, int32_t  i1, float_t  weight, ::Technie::PhysicsCreator::CuttableSubMesh*  srcMesh) ;

/// @brief Method AddTo, addr 0xadca6b8, size 0x114, virtual false, abstract: false, final false
inline void AddTo(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  destVertices, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  destNormals, ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  destColours, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  destUvs, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  destUv1s) ;

/// @brief Method CopyVertex, addr 0xadcaa1c, size 0x300, virtual false, abstract: false, final false
inline void CopyVertex(int32_t  srcIndex, ::Technie::PhysicsCreator::CuttableSubMesh*  srcMesh) ;

/// @brief Method GenIndices, addr 0xadca7cc, size 0xa0, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GenIndices() ;

/// @brief Method GetVertex, addr 0xadcad64, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVertex(int32_t  index) ;

/// @brief Method HasColours, addr 0xadcadcc, size 0x10, virtual false, abstract: false, final false
inline bool HasColours() ;

/// @brief Method HasNormals, addr 0xadcadbc, size 0x10, virtual false, abstract: false, final false
inline bool HasNormals() ;

/// @brief Method HasUv1, addr 0xadcadec, size 0x10, virtual false, abstract: false, final false
inline bool HasUv1() ;

/// @brief Method HasUvs, addr 0xadcaddc, size 0x10, virtual false, abstract: false, final false
inline bool HasUvs() ;

static inline ::Technie::PhysicsCreator::CuttableSubMesh* New_ctor(bool  hasNormals, bool  hasColours, bool  hasUvs, bool  hasUv1) ;

static inline ::Technie::PhysicsCreator::CuttableSubMesh* New_ctor(::ArrayW<int32_t>  indices, ::ArrayW<::UnityEngine::Vector3>  inputVertices, ::ArrayW<::UnityEngine::Vector3>  inputNormals, ::ArrayW<::UnityEngine::Color32>  inputColours, ::ArrayW<::UnityEngine::Vector2>  inputUvs, ::ArrayW<::UnityEngine::Vector2>  inputUv1) ;

/// @brief Method NumIndices, addr 0xadca670, size 0x48, virtual false, abstract: false, final false
inline int32_t NumIndices() ;

/// @brief Method NumVertices, addr 0xadcad1c, size 0x48, virtual false, abstract: false, final false
inline int32_t NumVertices() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>* const& __cordl_internal_get_colours() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color32>*& __cordl_internal_get_colours() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_normals() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_normals() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get_uv1s() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get_uv1s() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get_uvs() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get_uvs() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_vertices() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_vertices() ;

constexpr void __cordl_internal_set_colours(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  value) ;

constexpr void __cordl_internal_set_normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_uv1s(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_uvs(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0xadca86c, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(bool  hasNormals, bool  hasColours, bool  hasUvs, bool  hasUv1) ;

/// @brief Method .ctor, addr 0xadc95c0, size 0x498, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int32_t>  indices, ::ArrayW<::UnityEngine::Vector3>  inputVertices, ::ArrayW<::UnityEngine::Vector3>  inputNormals, ::ArrayW<::UnityEngine::Color32>  inputColours, ::ArrayW<::UnityEngine::Vector2>  inputUvs, ::ArrayW<::UnityEngine::Vector2>  inputUv1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CuttableSubMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CuttableSubMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CuttableSubMesh(CuttableSubMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CuttableSubMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CuttableSubMesh(CuttableSubMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30503};

/// @brief Field vertices, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___vertices;

/// @brief Field normals, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___normals;

/// @brief Field colours, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color32>*  ___colours;

/// @brief Field uvs, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ___uvs;

/// @brief Field uv1s, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ___uv1s;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::CuttableSubMesh, ___vertices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CuttableSubMesh, ___normals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CuttableSubMesh, ___colours) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CuttableSubMesh, ___uvs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::CuttableSubMesh, ___uv1s) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::CuttableSubMesh) == 0x38, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
