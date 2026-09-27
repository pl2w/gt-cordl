#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/MeshCutter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshCutter)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator {
class CuttableMesh;
}
namespace Technie::PhysicsCreator {
class CuttableSubMesh;
}
namespace Technie::PhysicsCreator {
struct VertexClassification;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class MeshCutter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::MeshCutter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::MeshCutter*, "Technie.PhysicsCreator", "MeshCutter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.MeshCutter
class CORDL_TYPE MeshCutter : public ::System::Object {
public:
// Declarations
/// @brief Field inputMesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputMesh, put=__cordl_internal_set_inputMesh)) ::Technie::PhysicsCreator::CuttableMesh*  inputMesh;

/// @brief Field outputBackSubMeshes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputBackSubMeshes, put=__cordl_internal_set_outputBackSubMeshes)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  outputBackSubMeshes;

/// @brief Field outputFrontSubMeshes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputFrontSubMeshes, put=__cordl_internal_set_outputFrontSubMeshes)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  outputFrontSubMeshes;

/// @brief Method CalcIntersection, addr 0xadcc398, size 0x23c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalcIntersection(::UnityEngine::Vector3  v0, ::UnityEngine::Vector3  v1, ::UnityEngine::Plane  plane, ::by_ref<float_t>  weight) ;

/// @brief Method Classify, addr 0xadcbe8c, size 0x48, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::VertexClassification Classify(::UnityEngine::Vector3  vertex, ::UnityEngine::Plane  cutPlane) ;

/// @brief Method ClosestPointOnPlane, addr 0xadcb760, size 0x34, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnPlane(::UnityEngine::Plane  plane, ::UnityEngine::Vector3  point) ;

/// @brief Method CountSides, addr 0xadcbed4, size 0x24, virtual false, abstract: false, final false
inline void CountSides(::Technie::PhysicsCreator::VertexClassification  c, ::by_ref<int32_t>  numFront, ::by_ref<int32_t>  numBehind) ;

/// @brief Method Cut, addr 0xadcb3b8, size 0x3a8, virtual false, abstract: false, final false
inline void Cut(::Technie::PhysicsCreator::CuttableMesh*  input, ::UnityEngine::Plane  worldCutPlane) ;

/// @brief Method Cut, addr 0xadcb794, size 0x634, virtual false, abstract: false, final false
inline void Cut(::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::UnityEngine::Plane  cutPlane) ;

/// @brief Method GetBackOutput, addr 0xadcbe28, size 0x64, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::CuttableMesh* GetBackOutput() ;

/// @brief Method GetFrontOutput, addr 0xadcbdc8, size 0x60, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::CuttableMesh* GetFrontOutput() ;

/// @brief Method KeepTriangle, addr 0xadcbef8, size 0x5c, virtual false, abstract: false, final false
inline void KeepTriangle(int32_t  i0, int32_t  i1, int32_t  i2, ::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::Technie::PhysicsCreator::CuttableSubMesh*  destSubMesh) ;

static inline ::Technie::PhysicsCreator::MeshCutter* New_ctor() ;

/// @brief Method SplitA, addr 0xadcbf54, size 0x1d0, virtual false, abstract: false, final false
inline void SplitA(int32_t  i0, int32_t  i1, int32_t  i2, ::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::UnityEngine::Plane  cutPlane, ::Technie::PhysicsCreator::CuttableSubMesh*  frontSubMesh, ::Technie::PhysicsCreator::CuttableSubMesh*  backSubMesh) ;

/// @brief Method SplitB, addr 0xadcc124, size 0x134, virtual false, abstract: false, final false
inline void SplitB(int32_t  i0, int32_t  i1, int32_t  i2, ::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::UnityEngine::Plane  cutPlane, ::Technie::PhysicsCreator::CuttableSubMesh*  frontSubMesh, ::Technie::PhysicsCreator::CuttableSubMesh*  backSubMesh) ;

/// @brief Method SplitBFlipped, addr 0xadcc258, size 0x140, virtual false, abstract: false, final false
inline void SplitBFlipped(int32_t  i0, int32_t  i1, int32_t  i2, ::Technie::PhysicsCreator::CuttableSubMesh*  inputSubMesh, ::UnityEngine::Plane  cutPlane, ::Technie::PhysicsCreator::CuttableSubMesh*  frontSubMesh, ::Technie::PhysicsCreator::CuttableSubMesh*  backSubMesh) ;

constexpr ::Technie::PhysicsCreator::CuttableMesh* const& __cordl_internal_get_inputMesh() const;

constexpr ::Technie::PhysicsCreator::CuttableMesh*& __cordl_internal_get_inputMesh() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* const& __cordl_internal_get_outputBackSubMeshes() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*& __cordl_internal_get_outputBackSubMeshes() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>* const& __cordl_internal_get_outputFrontSubMeshes() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*& __cordl_internal_get_outputFrontSubMeshes() ;

constexpr void __cordl_internal_set_inputMesh(::Technie::PhysicsCreator::CuttableMesh*  value) ;

constexpr void __cordl_internal_set_outputBackSubMeshes(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  value) ;

constexpr void __cordl_internal_set_outputFrontSubMeshes(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  value) ;

/// @brief Method .ctor, addr 0xadcb3b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshCutter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshCutter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshCutter(MeshCutter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshCutter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshCutter(MeshCutter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30505};

/// @brief Field inputMesh, offset: 0x10, size: 0x8, def value: None
 ::Technie::PhysicsCreator::CuttableMesh*  ___inputMesh;

/// @brief Field outputFrontSubMeshes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  ___outputFrontSubMeshes;

/// @brief Field outputBackSubMeshes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::CuttableSubMesh*>*  ___outputBackSubMeshes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::MeshCutter, ___inputMesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::MeshCutter, ___outputFrontSubMeshes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::MeshCutter, ___outputBackSubMeshes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::MeshCutter) == 0x28, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
