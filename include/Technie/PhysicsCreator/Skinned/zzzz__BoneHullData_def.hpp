#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/BoneHullData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__ColliderType_def.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__HullType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BoneHullData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator {
class IHull;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator::Skinned {
class BoneHullData;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Skinned::BoneHullData*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Skinned::BoneHullData*, "Technie.PhysicsCreator.Skinned", "BoneHullData");
// Dependencies System.Object, Technie.PhysicsCreator.Skinned.ColliderType, Technie.PhysicsCreator.Skinned.HullType, UnityEngine.Color
namespace Technie::PhysicsCreator::Skinned {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Skinned.BoneHullData
class CORDL_TYPE BoneHullData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CachedTriangleVertices, put=set_CachedTriangleVertices)) ::ArrayW<::UnityEngine::Vector3>  CachedTriangleVertices;

 __declspec(property(get=get_MaxThreshold)) float_t  MaxThreshold;

 __declspec(property(get=get_MinThreshold)) float_t  MinThreshold;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NumSelectedTriangles)) int32_t  NumSelectedTriangles;

/// @brief Field cachedTriangleVertices, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedTriangleVertices, put=__cordl_internal_set_cachedTriangleVertices)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  cachedTriangleVertices;

/// @brief Field colliderType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_colliderType, put=__cordl_internal_set_colliderType)) ::Technie::PhysicsCreator::Skinned::ColliderType  colliderType;

/// @brief Field hullMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hullMesh, put=__cordl_internal_set_hullMesh)) ::UnityW<::UnityEngine::Mesh>  hullMesh;

/// @brief Field isTrigger, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTrigger, put=__cordl_internal_set_isTrigger)) bool  isTrigger;

/// @brief Field material, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::PhysicsMaterial>  material;

/// @brief Field maxThreshold, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxThreshold, put=__cordl_internal_set_maxThreshold)) float_t  maxThreshold;

/// @brief Field minThreshold, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_minThreshold, put=__cordl_internal_set_minThreshold)) float_t  minThreshold;

/// @brief Field previewColour, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_previewColour, put=__cordl_internal_set_previewColour)) ::UnityEngine::Color  previewColour;

/// @brief Field selectedFaces, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectedFaces, put=__cordl_internal_set_selectedFaces)) ::System::Collections::Generic::List_1<int32_t>*  selectedFaces;

/// @brief Field targetBoneName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetBoneName, put=__cordl_internal_set_targetBoneName)) ::StringW  targetBoneName;

/// @brief Field type, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Technie::PhysicsCreator::Skinned::HullType  type;

/// @brief Convert operator to "::Technie::PhysicsCreator::IHull"
constexpr operator  ::Technie::PhysicsCreator::IHull*() noexcept;

/// @brief Method AddToSelection, addr 0xadd8870, size 0xf0, virtual false, abstract: false, final false
inline void AddToSelection(int32_t  newTriangleIndex, ::UnityEngine::Mesh*  srcMesh) ;

/// @brief Method ClearSelectedFaces, addr 0xadd89e8, size 0x7c, virtual true, abstract: false, final true
inline void ClearSelectedFaces() ;

/// @brief Method GetCachedTriangleVertices, addr 0xadd8b08, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetCachedTriangleVertices() ;

/// @brief Method GetSelectedFaces, addr 0xadd8820, size 0x50, virtual true, abstract: false, final true
inline ::ArrayW<int32_t> GetSelectedFaces() ;

/// @brief Method IsTriangleSelected, addr 0xadd8518, size 0x218, virtual true, abstract: false, final true
inline bool IsTriangleSelected(int32_t  triIndex, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Mesh*  targetMesh) ;

static inline ::Technie::PhysicsCreator::Skinned::BoneHullData* New_ctor() ;

/// @brief Method RemoveFromSelection, addr 0xadd8960, size 0x70, virtual false, abstract: false, final false
inline void RemoveFromSelection(int32_t  existingTriangleIndex, ::UnityEngine::Mesh*  srcMesh) ;

/// @brief Method SetMaxThreshold, addr 0xadd89d8, size 0x8, virtual false, abstract: false, final false
inline void SetMaxThreshold(float_t  newMaxThreshold) ;

/// @brief Method SetMinThreshold, addr 0xadd89d0, size 0x8, virtual false, abstract: false, final false
inline void SetMinThreshold(float_t  newMinThreshold) ;

/// @brief Method SetSelectedFaces, addr 0xadd8a64, size 0xa4, virtual true, abstract: false, final true
inline void SetSelectedFaces(::System::Collections::Generic::List_1<int32_t>*  newSelectedFaceIndices, ::UnityEngine::Mesh*  srcMesh) ;

/// @brief Method SetThresholds, addr 0xadd89e0, size 0x8, virtual false, abstract: false, final false
inline void SetThresholds(float_t  newMinThreshold, float_t  newMaxThreshold, ::UnityEngine::SkinnedMeshRenderer*  renderer, ::UnityEngine::Mesh*  targetMesh) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_cachedTriangleVertices() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_cachedTriangleVertices() ;

constexpr ::Technie::PhysicsCreator::Skinned::ColliderType const& __cordl_internal_get_colliderType() const;

constexpr ::Technie::PhysicsCreator::Skinned::ColliderType& __cordl_internal_get_colliderType() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_hullMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_hullMesh() ;

constexpr bool const& __cordl_internal_get_isTrigger() const;

constexpr bool& __cordl_internal_get_isTrigger() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_material() ;

constexpr float_t const& __cordl_internal_get_maxThreshold() const;

constexpr float_t& __cordl_internal_get_maxThreshold() ;

constexpr float_t const& __cordl_internal_get_minThreshold() const;

constexpr float_t& __cordl_internal_get_minThreshold() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_previewColour() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_previewColour() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_selectedFaces() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_selectedFaces() ;

constexpr ::StringW const& __cordl_internal_get_targetBoneName() const;

constexpr ::StringW& __cordl_internal_get_targetBoneName() ;

constexpr ::Technie::PhysicsCreator::Skinned::HullType const& __cordl_internal_get_type() const;

constexpr ::Technie::PhysicsCreator::Skinned::HullType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_cachedTriangleVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_colliderType(::Technie::PhysicsCreator::Skinned::ColliderType  value) ;

constexpr void __cordl_internal_set_hullMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_isTrigger(bool  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_maxThreshold(float_t  value) ;

constexpr void __cordl_internal_set_minThreshold(float_t  value) ;

constexpr void __cordl_internal_set_previewColour(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_selectedFaces(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_targetBoneName(::StringW  value) ;

constexpr void __cordl_internal_set_type(::Technie::PhysicsCreator::Skinned::HullType  value) ;

/// @brief Method .ctor, addr 0xadd8b58, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CachedTriangleVertices, addr 0xadd8458, size 0x50, virtual true, abstract: false, final true
inline ::ArrayW<::UnityEngine::Vector3> get_CachedTriangleVertices() ;

/// @brief Method get_MaxThreshold, addr 0xadd8408, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxThreshold() ;

/// @brief Method get_MinThreshold, addr 0xadd8400, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinThreshold() ;

/// @brief Method get_Name, addr 0xadd83f8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Method get_NumSelectedTriangles, addr 0xadd8410, size 0x48, virtual true, abstract: false, final true
inline int32_t get_NumSelectedTriangles() ;

/// @brief Convert to "::Technie::PhysicsCreator::IHull"
constexpr ::Technie::PhysicsCreator::IHull* i___Technie__PhysicsCreator__IHull() noexcept;

/// @brief Method set_CachedTriangleVertices, addr 0xadd84a8, size 0x70, virtual true, abstract: false, final true
inline void set_CachedTriangleVertices(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoneHullData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoneHullData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoneHullData(BoneHullData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoneHullData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoneHullData(BoneHullData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30526};

/// @brief Field targetBoneName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___targetBoneName;

/// @brief Field type, offset: 0x18, size: 0x4, def value: None
 ::Technie::PhysicsCreator::Skinned::HullType  ___type;

/// @brief Field colliderType, offset: 0x1c, size: 0x4, def value: None
 ::Technie::PhysicsCreator::Skinned::ColliderType  ___colliderType;

/// @brief Field previewColour, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___previewColour;

/// @brief Field hullMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___hullMesh;

/// @brief Field material, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___material;

/// @brief Field isTrigger, offset: 0x40, size: 0x1, def value: None
 bool  ___isTrigger;

/// [SerializeField]
/// @brief Field minThreshold, offset: 0x44, size: 0x4, def value: None
 float_t  ___minThreshold;

/// [SerializeField]
/// @brief Field maxThreshold, offset: 0x48, size: 0x4, def value: None
 float_t  ___maxThreshold;

/// [SerializeField]
/// @brief Field selectedFaces, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___selectedFaces;

/// @brief Field cachedTriangleVertices, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___cachedTriangleVertices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___targetBoneName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___colliderType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___previewColour) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___hullMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___material) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___isTrigger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___minThreshold) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___maxThreshold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___selectedFaces) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::BoneHullData, ___cachedTriangleVertices) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Skinned::BoneHullData) == 0x60, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::Skinned
