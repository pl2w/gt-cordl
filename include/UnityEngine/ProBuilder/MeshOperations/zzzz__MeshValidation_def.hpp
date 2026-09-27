#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshValidation)
namespace GlobalNamespace {
struct MeshValidation_AttributeValidationStrategy;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c__DisplayClass5_0;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct Triangle;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation*);
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*);
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0*);
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::MeshValidation*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass5_0");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation
class CORDL_TYPE MeshValidation : public ::System::Object {
public:
// Declarations
using AttributeValidationStrategy = ::GlobalNamespace::MeshValidation_AttributeValidationStrategy;

using __c = ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c;

using __c__DisplayClass10_0 = ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0;

using __c__DisplayClass5_0 = ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0;

/// [Extension]
/// @brief Method CollectFaceGroups, addr 0xb1041bc, size 0x3d4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face) ;

/// [Extension]
/// @brief Method ContainsDegenerateTriangles, addr 0xb103468, size 0x14, virtual false, abstract: false, final false
static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

/// [Extension]
/// @brief Method ContainsDegenerateTriangles, addr 0xb103878, size 0x158, virtual false, abstract: false, final false
static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face) ;

/// [Extension]
/// @brief Method ContainsDegenerateTriangles, addr 0xb10347c, size 0x3fc, virtual false, abstract: false, final false
static inline bool ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*  faces) ;

/// [Extension]
/// @brief Method ContainsNonContiguousTriangles, addr 0xb1039d0, size 0x138, virtual false, abstract: false, final false
static inline bool ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face) ;

/// @brief Method EnsureArraySize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureArraySize(::by_ref<::ArrayW<T>>  attribute, int32_t  expectedVertexCount, ::GlobalNamespace::MeshValidation_AttributeValidationStrategy  strategy, T  fill) ;

/// [Extension]
/// @brief Method EnsureFacesAreComposedOfContiguousTriangles, addr 0xb103b08, size 0x6b4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*  faces) ;

/// @brief Method EnsureListSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void EnsureListSize(::by_ref<::System::Collections::Generic::List_1<T>*>  attribute, int32_t  expectedVertexCount, ::GlobalNamespace::MeshValidation_AttributeValidationStrategy  strategy, T  fill) ;

/// @brief Method EnsureMeshIsValid, addr 0xb105948, size 0x160, virtual false, abstract: false, final false
static inline bool EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::by_ref<int32_t>  removedVertices) ;

/// @brief Method EnsureRealNumbers, addr 0xb105ca8, size 0x1c0, virtual false, abstract: false, final false
static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  attribute) ;

/// @brief Method EnsureRealNumbers, addr 0xb105e68, size 0x1cc, virtual false, abstract: false, final false
static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  attribute) ;

/// @brief Method EnsureRealNumbers, addr 0xb106034, size 0x1d0, virtual false, abstract: false, final false
static inline void EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*  attribute) ;

/// @brief Method EnsureValidAttributes, addr 0xb105aa8, size 0x200, virtual false, abstract: false, final false
static inline void EnsureValidAttributes(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

/// @brief Method RebuildEdges, addr 0xb1052e4, size 0x448, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*  edges, ::System::Collections::Generic::List_1<int32_t>*  removed) ;

/// @brief Method RebuildIndexes, addr 0xb104f00, size 0x3e4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<int32_t>* RebuildIndexes(::System::Collections::Generic::IEnumerable_1<int32_t>*  indices, ::System::Collections::Generic::List_1<int32_t>*  removed) ;

/// @brief Method RebuildSelectionIndexes, addr 0xb10572c, size 0x214, virtual false, abstract: false, final false
static inline void RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Face*>>  faces, ::by_ref<::ArrayW<::UnityEngine::ProBuilder::Edge>>  edges, ::by_ref<::ArrayW<int32_t>>  indices, ::System::Collections::Generic::IEnumerable_1<int32_t>*  removed) ;

/// @brief Method RemoveDegenerateTriangles, addr 0xb104598, size 0x968, virtual false, abstract: false, final false
static inline bool RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::List_1<int32_t>*  removed) ;

/// @brief Method RemoveUnusedVertices, addr 0xb101314, size 0x32c, virtual false, abstract: false, final false
static inline bool RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::List_1<int32_t>*  removed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshValidation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshValidation(MeshValidation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshValidation(MeshValidation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.ProBuilder.Triangle
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass5_0
class CORDL_TYPE MeshValidation___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*  __9__0;

/// @brief Field triangle, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_triangle, put=__cordl_internal_set_triangle)) ::UnityEngine::ProBuilder::Triangle  triangle;

static inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <CollectFaceGroups>b__0, addr 0xb106338, size 0x38, virtual false, abstract: false, final false
inline bool _CollectFaceGroups_b__0(::UnityEngine::ProBuilder::Triangle  x) ;

constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*& __cordl_internal_get___9__0() ;

constexpr ::UnityEngine::ProBuilder::Triangle const& __cordl_internal_get_triangle() const;

constexpr ::UnityEngine::ProBuilder::Triangle& __cordl_internal_get_triangle() ;

constexpr void __cordl_internal_set___9__0(::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*  value) ;

constexpr void __cordl_internal_set_triangle(::UnityEngine::ProBuilder::Triangle  value) ;

/// @brief Method .ctor, addr 0xb104590, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshValidation___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshValidation___c__DisplayClass5_0(MeshValidation___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshValidation___c__DisplayClass5_0(MeshValidation___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24363};

/// @brief Field triangle, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::ProBuilder::Triangle  ___triangle;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0, ___triangle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass5_0) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass10_0
class CORDL_TYPE MeshValidation___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field mesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  mesh;

static inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <RebuildSelectionIndexes>b__0, addr 0xb1062dc, size 0x5c, virtual false, abstract: false, final false
inline bool _RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face*  x) ;

constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_mesh() ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  value) ;

/// @brief Method .ctor, addr 0xb105940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshValidation___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshValidation___c__DisplayClass10_0(MeshValidation___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshValidation___c__DisplayClass10_0(MeshValidation___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24362};

/// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>  ___mesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0, ___mesh) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c
class CORDL_TYPE MeshValidation___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  __9__4_1;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  __9__7_0;

static inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* New_ctor() ;

/// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_0, addr 0xb106274, size 0x28, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_0(::UnityEngine::ProBuilder::Triangle  x) ;

/// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_1, addr 0xb10629c, size 0x28, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _EnsureFacesAreComposedOfContiguousTriangles_b__4_1(::UnityEngine::ProBuilder::Triangle  x) ;

/// @brief Method <RemoveUnusedVertices>b__7_0, addr 0xb1062c4, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* _RemoveUnusedVertices_b__7_0(::UnityEngine::ProBuilder::Face*  x) ;

/// @brief Method .ctor, addr 0xb10626c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__4_0() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__4_1() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

static inline void setStaticF___9__4_1(::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::ProBuilder::Face*,::System::Collections::Generic::IEnumerable_1<int32_t>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshValidation___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshValidation___c(MeshValidation___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshValidation___c(MeshValidation___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24361};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::MeshValidation___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
