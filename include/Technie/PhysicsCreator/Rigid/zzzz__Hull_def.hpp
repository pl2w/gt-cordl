#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Rigid/Hull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Technie/PhysicsCreator/zzzz__BoxDef_def.hpp"
#include "Technie/PhysicsCreator/zzzz__BoxFitMethod_def.hpp"
#include "Technie/PhysicsCreator/zzzz__CapsuleDef_def.hpp"
#include "Technie/PhysicsCreator/zzzz__HullType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Hull)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator {
class IHull;
}
namespace Technie::PhysicsCreator {
class Sphere;
}
namespace Technie::PhysicsCreator {
class Triangle;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Rigid::Hull*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Rigid::Hull*, "Technie.PhysicsCreator.Rigid", "Hull");
// Dependencies System.Object, Technie.PhysicsCreator.BoxDef, Technie.PhysicsCreator.BoxFitMethod, Technie.PhysicsCreator.CapsuleDef, Technie.PhysicsCreator.HullType, UnityEngine.Color, UnityEngine.Mesh, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Technie::PhysicsCreator::Rigid {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Rigid.Hull
class CORDL_TYPE Hull : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CachedTriangleVertices, put=set_CachedTriangleVertices)) ::ArrayW<::UnityEngine::Vector3>  CachedTriangleVertices;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NumSelectedTriangles)) int32_t  NumSelectedTriangles;

/// @brief Field autoMeshes, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoMeshes, put=__cordl_internal_set_autoMeshes)) ::ArrayW<::UnityW<::UnityEngine::Mesh>>  autoMeshes;

/// @brief Field boxFitMethod, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_boxFitMethod, put=__cordl_internal_set_boxFitMethod)) ::Technie::PhysicsCreator::BoxFitMethod  boxFitMethod;

/// @brief Field cachedTriangleVertices, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedTriangleVertices, put=__cordl_internal_set_cachedTriangleVertices)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  cachedTriangleVertices;

/// @brief Field collisionBox, offset 0x60, size 0x34 
 __declspec(property(get=__cordl_internal_get_collisionBox, put=__cordl_internal_set_collisionBox)) ::Technie::PhysicsCreator::BoxDef  collisionBox;

/// @brief Field collisionCapsule, offset 0xd0, size 0x34 
 __declspec(property(get=__cordl_internal_get_collisionCapsule, put=__cordl_internal_set_collisionCapsule)) ::Technie::PhysicsCreator::CapsuleDef  collisionCapsule;

/// @brief Field collisionMesh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionMesh, put=__cordl_internal_set_collisionMesh)) ::UnityW<::UnityEngine::Mesh>  collisionMesh;

/// @brief Field collisionSphere, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionSphere, put=__cordl_internal_set_collisionSphere)) ::Technie::PhysicsCreator::Sphere*  collisionSphere;

/// @brief Field colour, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_colour, put=__cordl_internal_set_colour)) ::UnityEngine::Color  colour;

/// @brief Field enableInflation, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableInflation, put=__cordl_internal_set_enableInflation)) bool  enableInflation;

/// @brief Field faceAsBoxRotation, offset 0xc0, size 0x10 
 __declspec(property(get=__cordl_internal_get_faceAsBoxRotation, put=__cordl_internal_set_faceAsBoxRotation)) ::UnityEngine::Quaternion  faceAsBoxRotation;

/// @brief Field faceBoxCenter, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_faceBoxCenter, put=__cordl_internal_set_faceBoxCenter)) ::UnityEngine::Vector3  faceBoxCenter;

/// @brief Field faceBoxSize, offset 0xb4, size 0xc 
 __declspec(property(get=__cordl_internal_get_faceBoxSize, put=__cordl_internal_set_faceBoxSize)) ::UnityEngine::Vector3  faceBoxSize;

/// @brief Field faceCollisionMesh, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_faceCollisionMesh, put=__cordl_internal_set_faceCollisionMesh)) ::UnityW<::UnityEngine::Mesh>  faceCollisionMesh;

/// @brief Field hasColliderError, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasColliderError, put=__cordl_internal_set_hasColliderError)) bool  hasColliderError;

/// @brief Field inflationAmount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_inflationAmount, put=__cordl_internal_set_inflationAmount)) float_t  inflationAmount;

/// @brief Field isChildCollider, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_isChildCollider, put=__cordl_internal_set_isChildCollider)) bool  isChildCollider;

/// @brief Field isTrigger, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTrigger, put=__cordl_internal_set_isTrigger)) bool  isTrigger;

/// @brief Field isVisible, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isVisible, put=__cordl_internal_set_isVisible)) bool  isVisible;

/// @brief Field material, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::PhysicsMaterial>  material;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field noInputError, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_noInputError, put=__cordl_internal_set_noInputError)) bool  noInputError;

/// @brief Field numColliderFaces, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_numColliderFaces, put=__cordl_internal_set_numColliderFaces)) int32_t  numColliderFaces;

/// @brief Field selectedFaces, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedFaces, put=__cordl_internal_set_selectedFaces)) ::System::Collections::Generic::List_1<int32_t>*  selectedFaces;

/// @brief Field type, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Technie::PhysicsCreator::HullType  type;

/// @brief Convert operator to "::Technie::PhysicsCreator::IHull"
constexpr operator  ::Technie::PhysicsCreator::IHull*() noexcept;

/// @brief Method AddToSelection, addr 0xadd9b48, size 0xf0, virtual false, abstract: false, final false
inline void AddToSelection(int32_t  newTriangleIndex, ::UnityEngine::Mesh*  srcMesh) ;

/// @brief Method CalcPrimaryAxis, addr 0xaddba4c, size 0x4a4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CalcPrimaryAxis(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, bool  snapToAxies) ;

/// @brief Method CalcRequiredArea, addr 0xaddbef0, size 0x250, virtual false, abstract: false, final false
static inline float_t CalcRequiredArea(float_t  angleDeg, ::UnityEngine::Vector3  primaryAxis, ::UnityEngine::Vector3  primaryUp, ::ArrayW<::UnityEngine::Vector3>  vertices, ::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max, ::by_ref<::UnityEngine::Quaternion>  outBasis) ;

/// @brief Method ClearSelectedFaces, addr 0xadd9ad8, size 0x70, virtual true, abstract: false, final true
inline void ClearSelectedFaces() ;

/// @brief Method Contains, addr 0xaddc140, size 0x1d0, virtual false, abstract: false, final false
static inline bool Contains(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  list, ::UnityEngine::Vector3  p) ;

/// @brief Method ContainsAutoMesh, addr 0xadd2730, size 0xc4, virtual false, abstract: false, final false
inline bool ContainsAutoMesh(::UnityEngine::Mesh*  m) ;

/// @brief Method Destroy, addr 0xadcdacc, size 0x4, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method ExtractUniqueVertices, addr 0xaddb704, size 0x348, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> ExtractUniqueVertices(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

/// @brief Method FindConvexHull, addr 0xadc357c, size 0x94, virtual false, abstract: false, final false
inline void FindConvexHull(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  hullVertices, ::by_ref<::ArrayW<int32_t>>  hullIndices, bool  showErrorInLog) ;

/// @brief Method FindSelectedTriangles, addr 0xadc549c, size 0x348, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Triangle*>* FindSelectedTriangles(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

/// @brief Method FindTriangles, addr 0xadc6658, size 0x478, virtual false, abstract: false, final false
inline void FindTriangles(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  hullVertices, ::by_ref<::ArrayW<int32_t>>  hullIndices) ;

/// @brief Method GenerateCollisionMesh, addr 0xadd9d88, size 0x11d8, virtual false, abstract: false, final false
inline void GenerateCollisionMesh(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::ArrayW<::UnityEngine::Mesh*>  autoHulls, float_t  faceThickness) ;

/// @brief Method GenerateConvexHull, addr 0xaddaf60, size 0x280, virtual false, abstract: false, final false
inline void GenerateConvexHull(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, ::UnityEngine::Mesh*  destMesh) ;

/// @brief Method GenerateFace, addr 0xaddb1e0, size 0x524, virtual false, abstract: false, final false
inline void GenerateFace(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices, float_t  faceThickness) ;

/// @brief Method GetSelectedFaceIndex, addr 0xadd9d30, size 0x58, virtual false, abstract: false, final false
inline int32_t GetSelectedFaceIndex(int32_t  index) ;

/// @brief Method GetSelectedFaces, addr 0xadc88a8, size 0x50, virtual true, abstract: false, final true
inline ::ArrayW<int32_t> GetSelectedFaces() ;

/// @brief Method GetSelectedVertices, addr 0xadc41dc, size 0x458, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetSelectedVertices(::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

/// @brief Method IsTriangleSelected, addr 0xadd9a80, size 0x58, virtual true, abstract: false, final true
inline bool IsTriangleSelected(int32_t  triIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Mesh*  targetMesh) ;

static inline ::Technie::PhysicsCreator::Rigid::Hull* New_ctor() ;

/// @brief Method RemoveFromSelection, addr 0xadd9c38, size 0x70, virtual false, abstract: false, final false
inline void RemoveFromSelection(int32_t  existingTriangleIndex, ::UnityEngine::Mesh*  srcMesh) ;

/// @brief Method SetSelectedFaces, addr 0xadd9ca8, size 0x88, virtual true, abstract: false, final true
inline void SetSelectedFaces(::System::Collections::Generic::List_1<int32_t>*  newSelectedFaceIndices, ::UnityEngine::Mesh*  srcMesh) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>> const& __cordl_internal_get_autoMeshes() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Mesh>>& __cordl_internal_get_autoMeshes() ;

constexpr ::Technie::PhysicsCreator::BoxFitMethod const& __cordl_internal_get_boxFitMethod() const;

constexpr ::Technie::PhysicsCreator::BoxFitMethod& __cordl_internal_get_boxFitMethod() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_cachedTriangleVertices() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_cachedTriangleVertices() ;

constexpr ::Technie::PhysicsCreator::BoxDef const& __cordl_internal_get_collisionBox() const;

constexpr ::Technie::PhysicsCreator::BoxDef& __cordl_internal_get_collisionBox() ;

constexpr ::Technie::PhysicsCreator::CapsuleDef const& __cordl_internal_get_collisionCapsule() const;

constexpr ::Technie::PhysicsCreator::CapsuleDef& __cordl_internal_get_collisionCapsule() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_collisionMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_collisionMesh() ;

constexpr ::Technie::PhysicsCreator::Sphere* const& __cordl_internal_get_collisionSphere() const;

constexpr ::Technie::PhysicsCreator::Sphere*& __cordl_internal_get_collisionSphere() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colour() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colour() ;

constexpr bool const& __cordl_internal_get_enableInflation() const;

constexpr bool& __cordl_internal_get_enableInflation() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_faceAsBoxRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_faceAsBoxRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_faceBoxCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_faceBoxCenter() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_faceBoxSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_faceBoxSize() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_faceCollisionMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_faceCollisionMesh() ;

constexpr bool const& __cordl_internal_get_hasColliderError() const;

constexpr bool& __cordl_internal_get_hasColliderError() ;

constexpr float_t const& __cordl_internal_get_inflationAmount() const;

constexpr float_t& __cordl_internal_get_inflationAmount() ;

constexpr bool const& __cordl_internal_get_isChildCollider() const;

constexpr bool& __cordl_internal_get_isChildCollider() ;

constexpr bool const& __cordl_internal_get_isTrigger() const;

constexpr bool& __cordl_internal_get_isTrigger() ;

constexpr bool const& __cordl_internal_get_isVisible() const;

constexpr bool& __cordl_internal_get_isVisible() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_material() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr bool const& __cordl_internal_get_noInputError() const;

constexpr bool& __cordl_internal_get_noInputError() ;

constexpr int32_t const& __cordl_internal_get_numColliderFaces() const;

constexpr int32_t& __cordl_internal_get_numColliderFaces() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_selectedFaces() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_selectedFaces() ;

constexpr ::Technie::PhysicsCreator::HullType const& __cordl_internal_get_type() const;

constexpr ::Technie::PhysicsCreator::HullType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_autoMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>>  value) ;

constexpr void __cordl_internal_set_boxFitMethod(::Technie::PhysicsCreator::BoxFitMethod  value) ;

constexpr void __cordl_internal_set_cachedTriangleVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_collisionBox(::Technie::PhysicsCreator::BoxDef  value) ;

constexpr void __cordl_internal_set_collisionCapsule(::Technie::PhysicsCreator::CapsuleDef  value) ;

constexpr void __cordl_internal_set_collisionMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_collisionSphere(::Technie::PhysicsCreator::Sphere*  value) ;

constexpr void __cordl_internal_set_colour(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_enableInflation(bool  value) ;

constexpr void __cordl_internal_set_faceAsBoxRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_faceBoxCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_faceBoxSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_faceCollisionMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_hasColliderError(bool  value) ;

constexpr void __cordl_internal_set_inflationAmount(float_t  value) ;

constexpr void __cordl_internal_set_isChildCollider(bool  value) ;

constexpr void __cordl_internal_set_isTrigger(bool  value) ;

constexpr void __cordl_internal_set_isVisible(bool  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_noInputError(bool  value) ;

constexpr void __cordl_internal_set_numColliderFaces(int32_t  value) ;

constexpr void __cordl_internal_set_selectedFaces(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_type(::Technie::PhysicsCreator::HullType  value) ;

/// @brief Method .ctor, addr 0xadcd8c4, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CachedTriangleVertices, addr 0xadd99c0, size 0x50, virtual true, abstract: false, final true
inline ::ArrayW<::UnityEngine::Vector3> get_CachedTriangleVertices() ;

/// @brief Method get_Name, addr 0xadd9970, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_NumSelectedTriangles, addr 0xadd9978, size 0x48, virtual true, abstract: false, final true
inline int32_t get_NumSelectedTriangles() ;

/// @brief Convert to "::Technie::PhysicsCreator::IHull"
constexpr ::Technie::PhysicsCreator::IHull* i___Technie__PhysicsCreator__IHull() noexcept;

/// @brief Method set_CachedTriangleVertices, addr 0xadd9a10, size 0x70, virtual true, abstract: false, final true
inline void set_CachedTriangleVertices(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hull", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Hull(Hull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hull", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hull(Hull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30535};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field isVisible, offset: 0x18, size: 0x1, def value: None
 bool  ___isVisible;

/// @brief Field type, offset: 0x1c, size: 0x4, def value: None
 ::Technie::PhysicsCreator::HullType  ___type;

/// @brief Field colour, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___colour;

/// @brief Field material, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___material;

/// @brief Field enableInflation, offset: 0x38, size: 0x1, def value: None
 bool  ___enableInflation;

/// @brief Field inflationAmount, offset: 0x3c, size: 0x4, def value: None
 float_t  ___inflationAmount;

/// @brief Field boxFitMethod, offset: 0x40, size: 0x4, def value: None
 ::Technie::PhysicsCreator::BoxFitMethod  ___boxFitMethod;

/// @brief Field isTrigger, offset: 0x44, size: 0x1, def value: None
 bool  ___isTrigger;

/// @brief Field isChildCollider, offset: 0x45, size: 0x1, def value: None
 bool  ___isChildCollider;

/// [SerializeField]
/// @brief Field selectedFaces, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___selectedFaces;

/// @brief Field cachedTriangleVertices, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___cachedTriangleVertices;

/// @brief Field collisionMesh, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___collisionMesh;

/// @brief Field collisionBox, offset: 0x60, size: 0x34, def value: None
 ::Technie::PhysicsCreator::BoxDef  ___collisionBox;

/// @brief Field collisionSphere, offset: 0x98, size: 0x8, def value: None
 ::Technie::PhysicsCreator::Sphere*  ___collisionSphere;

/// @brief Field faceCollisionMesh, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___faceCollisionMesh;

/// @brief Field faceBoxCenter, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___faceBoxCenter;

/// @brief Field faceBoxSize, offset: 0xb4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___faceBoxSize;

/// @brief Field faceAsBoxRotation, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___faceAsBoxRotation;

/// @brief Field collisionCapsule, offset: 0xd0, size: 0x34, def value: None
 ::Technie::PhysicsCreator::CapsuleDef  ___collisionCapsule;

/// @brief Field autoMeshes, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Mesh>>  ___autoMeshes;

/// @brief Field hasColliderError, offset: 0x110, size: 0x1, def value: None
 bool  ___hasColliderError;

/// @brief Field numColliderFaces, offset: 0x114, size: 0x4, def value: None
 int32_t  ___numColliderFaces;

/// @brief Field noInputError, offset: 0x118, size: 0x1, def value: None
 bool  ___noInputError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___isVisible) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___type) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___colour) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___enableInflation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___inflationAmount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___boxFitMethod) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___isTrigger) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___isChildCollider) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___selectedFaces) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___cachedTriangleVertices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___collisionMesh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___collisionBox) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___collisionSphere) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___faceCollisionMesh) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___faceBoxCenter) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___faceBoxSize) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___faceAsBoxRotation) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___collisionCapsule) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___autoMeshes) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___hasColliderError) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___numColliderFaces) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Rigid::Hull, ___noInputError) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Rigid::Hull) == 0x120, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::Rigid
