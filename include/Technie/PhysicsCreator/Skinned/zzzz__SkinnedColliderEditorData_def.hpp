#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/SkinnedColliderEditorData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Technie/PhysicsCreator/Skinned/zzzz__ColliderType_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinnedColliderEditorData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator::Skinned {
class BoneData;
}
namespace Technie::PhysicsCreator::Skinned {
class BoneHullData;
}
namespace Technie::PhysicsCreator::Skinned {
class SkinnedColliderRuntimeData;
}
namespace Technie::PhysicsCreator {
class Hash160;
}
namespace Technie::PhysicsCreator {
class IEditorData;
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
class Transform;
}
// Forward declare root types
namespace Technie::PhysicsCreator::Skinned {
class SkinnedColliderEditorData;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData*, "Technie.PhysicsCreator.Skinned", "SkinnedColliderEditorData");
// Dependencies Technie.PhysicsCreator.Skinned.ColliderType, UnityEngine.ScriptableObject
namespace Technie::PhysicsCreator::Skinned {
// Is value type: false
// CS Name: Technie.PhysicsCreator.Skinned.SkinnedColliderEditorData
class CORDL_TYPE SkinnedColliderEditorData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_CachedHash, put=set_CachedHash)) ::Technie::PhysicsCreator::Hash160*  CachedHash;

 __declspec(property(get=get_HasCachedData)) bool  HasCachedData;

 __declspec(property(get=get_HasSuppressMeshModificationWarning)) bool  HasSuppressMeshModificationWarning;

 __declspec(property(get=get_Hulls)) ::ArrayW<::Technie::PhysicsCreator::IHull*>  Hulls;

 __declspec(property(get=get_SourceMesh)) ::UnityW<::UnityEngine::Mesh>  SourceMesh;

/// @brief Field boneData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneData, put=__cordl_internal_set_boneData)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>*  boneData;

/// @brief Field boneHullData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_boneHullData, put=__cordl_internal_set_boneHullData)) ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>*  boneHullData;

/// @brief Field defaultAngularDamping, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultAngularDamping, put=__cordl_internal_set_defaultAngularDamping)) float_t  defaultAngularDamping;

/// @brief Field defaultAngularDrag, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultAngularDrag, put=__cordl_internal_set_defaultAngularDrag)) float_t  defaultAngularDrag;

/// @brief Field defaultColliderType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultColliderType, put=__cordl_internal_set_defaultColliderType)) ::Technie::PhysicsCreator::Skinned::ColliderType  defaultColliderType;

/// @brief Field defaultLinearDamping, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultLinearDamping, put=__cordl_internal_set_defaultLinearDamping)) float_t  defaultLinearDamping;

/// @brief Field defaultLinearDrag, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultLinearDrag, put=__cordl_internal_set_defaultLinearDrag)) float_t  defaultLinearDrag;

/// @brief Field defaultMass, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultMass, put=__cordl_internal_set_defaultMass)) float_t  defaultMass;

/// @brief Field defaultMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMaterial, put=__cordl_internal_set_defaultMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  defaultMaterial;

/// @brief Field lastModifiedFrame, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastModifiedFrame, put=__cordl_internal_set_lastModifiedFrame)) int32_t  lastModifiedFrame;

/// @brief Field runtimeData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_runtimeData, put=__cordl_internal_set_runtimeData)) ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData>  runtimeData;

/// @brief Field selectedBoneIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedBoneIndex, put=__cordl_internal_set_selectedBoneIndex)) int32_t  selectedBoneIndex;

/// @brief Field selectedHullIndex, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectedHullIndex, put=__cordl_internal_set_selectedHullIndex)) int32_t  selectedHullIndex;

/// @brief Field sourceMesh, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMesh, put=__cordl_internal_set_sourceMesh)) ::UnityW<::UnityEngine::Mesh>  sourceMesh;

/// @brief Field sourceMeshHash, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMeshHash, put=__cordl_internal_set_sourceMeshHash)) ::Technie::PhysicsCreator::Hash160*  sourceMeshHash;

/// @brief Field suppressMeshModificationWarning, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_suppressMeshModificationWarning, put=__cordl_internal_set_suppressMeshModificationWarning)) bool  suppressMeshModificationWarning;

/// @brief Convert operator to "::Technie::PhysicsCreator::IEditorData"
constexpr operator  ::Technie::PhysicsCreator::IEditorData*() noexcept;

/// @brief Method Add, addr 0xadd9668, size 0xac, virtual false, abstract: false, final false
inline void Add(::Technie::PhysicsCreator::Skinned::BoneData*  data) ;

/// @brief Method Add, addr 0xadd976c, size 0xac, virtual false, abstract: false, final false
inline void Add(::Technie::PhysicsCreator::Skinned::BoneHullData*  data) ;

/// @brief Method ClearSelection, addr 0xadd9060, size 0xc, virtual false, abstract: false, final false
inline void ClearSelection() ;

/// @brief Method GetBoneData, addr 0xadd916c, size 0xa0, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::Skinned::BoneData* GetBoneData(::UnityEngine::Transform*  bone) ;

/// @brief Method GetBoneData, addr 0xadd920c, size 0x158, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::Skinned::BoneData* GetBoneData(::StringW  boneName) ;

/// @brief Method GetBoneHullData, addr 0xadd9364, size 0xb8, virtual false, abstract: false, final false
inline ::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> GetBoneHullData(::UnityEngine::Transform*  bone) ;

/// @brief Method GetBoneHullData, addr 0xadd941c, size 0x240, virtual false, abstract: false, final false
inline ::ArrayW<::Technie::PhysicsCreator::Skinned::BoneHullData*> GetBoneHullData(::StringW  boneName) ;

/// @brief Method GetLastModifiedFrame, addr 0xadd9660, size 0x8, virtual false, abstract: false, final false
inline int32_t GetLastModifiedFrame() ;

/// @brief Method GetSelectedBone, addr 0xadd906c, size 0x80, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::Skinned::BoneData* GetSelectedBone() ;

/// @brief Method GetSelectedHull, addr 0xadd90ec, size 0x80, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::Skinned::BoneHullData* GetSelectedHull() ;

/// @brief Method MarkDirty, addr 0xadd8fc0, size 0x4, virtual false, abstract: false, final false
inline void MarkDirty() ;

static inline ::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData* New_ctor() ;

/// @brief Method Remove, addr 0xadd9714, size 0x58, virtual false, abstract: false, final false
inline void Remove(::Technie::PhysicsCreator::Skinned::BoneData*  data) ;

/// @brief Method Remove, addr 0xadd9818, size 0x58, virtual false, abstract: false, final false
inline void Remove(::Technie::PhysicsCreator::Skinned::BoneHullData*  data) ;

/// @brief Method SetAssetDirty, addr 0xadd965c, size 0x4, virtual true, abstract: false, final true
inline void SetAssetDirty() ;

/// @brief Method SetSelection, addr 0xadd8f24, size 0x9c, virtual false, abstract: false, final false
inline void SetSelection(::Technie::PhysicsCreator::Skinned::BoneData*  bone) ;

/// @brief Method SetSelection, addr 0xadd8fc4, size 0x9c, virtual false, abstract: false, final false
inline void SetSelection(::Technie::PhysicsCreator::Skinned::BoneHullData*  hull) ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>* const& __cordl_internal_get_boneData() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>*& __cordl_internal_get_boneData() ;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>* const& __cordl_internal_get_boneHullData() const;

constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>*& __cordl_internal_get_boneHullData() ;

constexpr float_t const& __cordl_internal_get_defaultAngularDamping() const;

constexpr float_t& __cordl_internal_get_defaultAngularDamping() ;

constexpr float_t const& __cordl_internal_get_defaultAngularDrag() const;

constexpr float_t& __cordl_internal_get_defaultAngularDrag() ;

constexpr ::Technie::PhysicsCreator::Skinned::ColliderType const& __cordl_internal_get_defaultColliderType() const;

constexpr ::Technie::PhysicsCreator::Skinned::ColliderType& __cordl_internal_get_defaultColliderType() ;

constexpr float_t const& __cordl_internal_get_defaultLinearDamping() const;

constexpr float_t& __cordl_internal_get_defaultLinearDamping() ;

constexpr float_t const& __cordl_internal_get_defaultLinearDrag() const;

constexpr float_t& __cordl_internal_get_defaultLinearDrag() ;

constexpr float_t const& __cordl_internal_get_defaultMass() const;

constexpr float_t& __cordl_internal_get_defaultMass() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_defaultMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_defaultMaterial() ;

constexpr int32_t const& __cordl_internal_get_lastModifiedFrame() const;

constexpr int32_t& __cordl_internal_get_lastModifiedFrame() ;

constexpr ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData> const& __cordl_internal_get_runtimeData() const;

constexpr ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData>& __cordl_internal_get_runtimeData() ;

constexpr int32_t const& __cordl_internal_get_selectedBoneIndex() const;

constexpr int32_t& __cordl_internal_get_selectedBoneIndex() ;

constexpr int32_t const& __cordl_internal_get_selectedHullIndex() const;

constexpr int32_t& __cordl_internal_get_selectedHullIndex() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_sourceMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_sourceMesh() ;

constexpr ::Technie::PhysicsCreator::Hash160* const& __cordl_internal_get_sourceMeshHash() const;

constexpr ::Technie::PhysicsCreator::Hash160*& __cordl_internal_get_sourceMeshHash() ;

constexpr bool const& __cordl_internal_get_suppressMeshModificationWarning() const;

constexpr bool& __cordl_internal_get_suppressMeshModificationWarning() ;

constexpr void __cordl_internal_set_boneData(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>*  value) ;

constexpr void __cordl_internal_set_boneHullData(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>*  value) ;

constexpr void __cordl_internal_set_defaultAngularDamping(float_t  value) ;

constexpr void __cordl_internal_set_defaultAngularDrag(float_t  value) ;

constexpr void __cordl_internal_set_defaultColliderType(::Technie::PhysicsCreator::Skinned::ColliderType  value) ;

constexpr void __cordl_internal_set_defaultLinearDamping(float_t  value) ;

constexpr void __cordl_internal_set_defaultLinearDrag(float_t  value) ;

constexpr void __cordl_internal_set_defaultMass(float_t  value) ;

constexpr void __cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_lastModifiedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_runtimeData(::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData>  value) ;

constexpr void __cordl_internal_set_selectedBoneIndex(int32_t  value) ;

constexpr void __cordl_internal_set_selectedHullIndex(int32_t  value) ;

constexpr void __cordl_internal_set_sourceMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_sourceMeshHash(::Technie::PhysicsCreator::Hash160*  value) ;

constexpr void __cordl_internal_set_suppressMeshModificationWarning(bool  value) ;

/// @brief Method .ctor, addr 0xadd9870, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CachedHash, addr 0xadd8e60, size 0x8, virtual true, abstract: false, final true
inline ::Technie::PhysicsCreator::Hash160* get_CachedHash() ;

/// @brief Method get_HasCachedData, addr 0xadd8e70, size 0x54, virtual true, abstract: false, final true
inline bool get_HasCachedData() ;

/// @brief Method get_HasSuppressMeshModificationWarning, addr 0xadd8f1c, size 0x8, virtual true, abstract: false, final true
inline bool get_HasSuppressMeshModificationWarning() ;

/// @brief Method get_Hulls, addr 0xadd8ecc, size 0x50, virtual true, abstract: false, final true
inline ::ArrayW<::Technie::PhysicsCreator::IHull*> get_Hulls() ;

/// @brief Method get_SourceMesh, addr 0xadd8ec4, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Mesh> get_SourceMesh() ;

/// @brief Convert to "::Technie::PhysicsCreator::IEditorData"
constexpr ::Technie::PhysicsCreator::IEditorData* i___Technie__PhysicsCreator__IEditorData() noexcept;

/// @brief Method set_CachedHash, addr 0xadd8e68, size 0x8, virtual true, abstract: false, final true
inline void set_CachedHash(::Technie::PhysicsCreator::Hash160*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnedColliderEditorData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnedColliderEditorData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnedColliderEditorData(SkinnedColliderEditorData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedColliderEditorData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnedColliderEditorData(SkinnedColliderEditorData const& ) = delete;

/// @brief Field INVALID_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_INDEX{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30533};

/// @brief Field runtimeData, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Technie::PhysicsCreator::Skinned::SkinnedColliderRuntimeData>  ___runtimeData;

/// @brief Field defaultMass, offset: 0x20, size: 0x4, def value: None
 float_t  ___defaultMass;

/// @brief Field defaultLinearDrag, offset: 0x24, size: 0x4, def value: None
 float_t  ___defaultLinearDrag;

/// @brief Field defaultAngularDrag, offset: 0x28, size: 0x4, def value: None
 float_t  ___defaultAngularDrag;

/// @brief Field defaultLinearDamping, offset: 0x2c, size: 0x4, def value: None
 float_t  ___defaultLinearDamping;

/// @brief Field defaultAngularDamping, offset: 0x30, size: 0x4, def value: None
 float_t  ___defaultAngularDamping;

/// @brief Field defaultMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___defaultMaterial;

/// @brief Field defaultColliderType, offset: 0x40, size: 0x4, def value: None
 ::Technie::PhysicsCreator::Skinned::ColliderType  ___defaultColliderType;

/// @brief Field boneData, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneData*>*  ___boneData;

/// @brief Field boneHullData, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::Skinned::BoneHullData*>*  ___boneHullData;

/// @brief Field selectedBoneIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___selectedBoneIndex;

/// @brief Field selectedHullIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___selectedHullIndex;

/// @brief Field lastModifiedFrame, offset: 0x60, size: 0x4, def value: None
 int32_t  ___lastModifiedFrame;

/// @brief Field sourceMesh, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___sourceMesh;

/// @brief Field sourceMeshHash, offset: 0x70, size: 0x8, def value: None
 ::Technie::PhysicsCreator::Hash160*  ___sourceMeshHash;

/// @brief Field suppressMeshModificationWarning, offset: 0x78, size: 0x1, def value: None
 bool  ___suppressMeshModificationWarning;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___runtimeData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___defaultMass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___defaultLinearDrag) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___defaultAngularDrag) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___defaultLinearDamping) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___defaultAngularDamping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___defaultMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___defaultColliderType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___boneData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___boneHullData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___selectedBoneIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___selectedHullIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___lastModifiedFrame) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___sourceMesh) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___sourceMeshHash) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData, ___suppressMeshModificationWarning) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::Skinned::SkinnedColliderEditorData) == 0x80, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::Skinned
