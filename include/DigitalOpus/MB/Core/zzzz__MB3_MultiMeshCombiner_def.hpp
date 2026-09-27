#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MultiMeshCombiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MultiMeshCombiner)
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
struct MB2_ValidationLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner_GenerateUV2Delegate;
}
namespace DigitalOpus::MB::Core {
class MB3_MultiMeshCombiner_CombinedMesh;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_MultiMeshCombiner;
}
namespace DigitalOpus::MB::Core {
class MB3_MultiMeshCombiner_CombinedMesh;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*, "DigitalOpus.MB.Core", "MB3_MultiMeshCombiner");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*, "DigitalOpus.MB.Core", "MB3_MultiMeshCombiner/CombinedMesh");
// Dependencies DigitalOpus.MB.Core.MB3_MeshCombiner, UnityEngine.GameObject
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MultiMeshCombiner
class CORDL_TYPE MB3_MultiMeshCombiner : public ::DigitalOpus::MB::Core::MB3_MeshCombiner {
public:
// Declarations
using CombinedMesh = ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh;

 __declspec(property(get=get_LOG_LEVEL, put=set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _maxVertsInMesh, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxVertsInMesh, put=__cordl_internal_set__maxVertsInMesh)) int32_t  _maxVertsInMesh;

/// @brief Field empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_empty, put=setStaticF_empty)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  empty;

/// @brief Field emptyIDs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_emptyIDs, put=setStaticF_emptyIDs)) ::ArrayW<int32_t>  emptyIDs;

 __declspec(property(get=get_maxVertsInMesh, put=set_maxVertsInMesh)) int32_t  maxVertsInMesh;

/// @brief Field meshCombiners, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshCombiners, put=__cordl_internal_set_meshCombiners)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*  meshCombiners;

/// @brief Field obj2MeshCombinerMap, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_obj2MeshCombinerMap, put=__cordl_internal_set_obj2MeshCombinerMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*  obj2MeshCombinerMap;

 __declspec(property(get=get_validationLevel, put=set_validationLevel)) ::DigitalOpus::MB::Core::MB2_ValidationLevel  validationLevel;

/// @brief Method AddDeleteGameObjects, addr 0x9db8948, size 0x1f0, virtual true, abstract: false, final false
inline bool AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource) ;

/// @brief Method AddDeleteGameObjectsByID, addr 0x9db8b38, size 0x4fc, virtual true, abstract: false, final false
inline bool AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource) ;

/// @brief Method Apply, addr 0x9db7f60, size 0x60, virtual true, abstract: false, final false
inline bool Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapeFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x9db7fc0, size 0x28c, virtual true, abstract: false, final false
inline bool Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  uv5, bool  uv6, bool  uv7, bool  uv8, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method Apply, addr 0x9db7d54, size 0x20c, virtual true, abstract: false, final false
inline bool Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod) ;

/// @brief Method CheckIntegrity, addr 0x9dbbc54, size 0xc0, virtual true, abstract: false, final false
inline void CheckIntegrity() ;

/// @brief Method ClearBuffers, addr 0x9dbb5d8, size 0xcc, virtual true, abstract: false, final false
inline void ClearBuffers() ;

/// @brief Method ClearMesh, addr 0x9dbb6a4, size 0x30, virtual true, abstract: false, final false
inline void ClearMesh() ;

/// @brief Method ClearMesh, addr 0x9dbb6d4, size 0x30, virtual true, abstract: false, final false
inline void ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method CombinedMeshContains, addr 0x9db7bc0, size 0x6c, virtual true, abstract: false, final false
inline bool CombinedMeshContains(::UnityEngine::GameObject*  go) ;

/// @brief Method DestroyMesh, addr 0x9dbb7a0, size 0x1c0, virtual true, abstract: false, final false
inline void DestroyMesh() ;

/// @brief Method DestroyMeshEditor, addr 0x9dbb960, size 0x1a0, virtual true, abstract: false, final false
inline void DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method GetLightmapIndex, addr 0x9db7b28, size 0x98, virtual true, abstract: false, final false
inline int32_t GetLightmapIndex() ;

/// @brief Method GetMaterialsOnTargetRenderer, addr 0x9dbbb00, size 0x154, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GetMaterialsOnTargetRenderer() ;

/// @brief Method GetNumObjectsInCombined, addr 0x9db79cc, size 0x50, virtual true, abstract: false, final false
inline int32_t GetNumObjectsInCombined() ;

/// @brief Method GetObjectsInCombined, addr 0x9db7a1c, size 0x10c, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetObjectsInCombined() ;

static inline ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner* New_ctor() ;

/// @brief Method UpdateGameObjects, addr 0x9db8420, size 0x5c, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method UpdateGameObjects, addr 0x9db847c, size 0x4cc, virtual true, abstract: false, final false
inline bool UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo) ;

/// @brief Method UpdateSkinnedMeshApproximateBounds, addr 0x9db824c, size 0x9c, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBounds() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBones, addr 0x9db82e8, size 0x9c, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBoundsFromBones() ;

/// @brief Method UpdateSkinnedMeshApproximateBoundsFromBounds, addr 0x9db8384, size 0x9c, virtual true, abstract: false, final false
inline void UpdateSkinnedMeshApproximateBoundsFromBounds() ;

/// @brief Method _DisposeRuntimeCreated, addr 0x9dbb704, size 0x9c, virtual true, abstract: false, final false
inline void _DisposeRuntimeCreated() ;

constexpr int32_t const& __cordl_internal_get__maxVertsInMesh() const;

constexpr int32_t& __cordl_internal_get__maxVertsInMesh() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>* const& __cordl_internal_get_meshCombiners() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*& __cordl_internal_get_meshCombiners() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>* const& __cordl_internal_get_obj2MeshCombinerMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*& __cordl_internal_get_obj2MeshCombinerMap() ;

constexpr void __cordl_internal_set__maxVertsInMesh(int32_t  value) ;

constexpr void __cordl_internal_set_meshCombiners(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*  value) ;

constexpr void __cordl_internal_set_obj2MeshCombinerMap(::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*  value) ;

/// @brief Method _bakeStep1, addr 0x9dba21c, size 0xd98, virtual false, abstract: false, final false
inline bool _bakeStep1(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource) ;

/// @brief Method .ctor, addr 0x9dbbd14, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _distributeAmongBakers, addr 0x9db98c0, size 0x95c, virtual false, abstract: false, final false
inline void _distributeAmongBakers(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs) ;

/// @brief Method _setMBValues, addr 0x9dbb280, size 0x358, virtual false, abstract: false, final false
inline void _setMBValues(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  targ) ;

/// @brief Method _validate, addr 0x9db90e0, size 0x7e0, virtual false, abstract: false, final false
inline bool _validate(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs) ;

/// @brief Method _validateTextureBakeResults, addr 0x9db7c2c, size 0x128, virtual false, abstract: false, final false
inline bool _validateTextureBakeResults() ;

static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> getStaticF_empty() ;

static inline ::ArrayW<int32_t> getStaticF_emptyIDs() ;

/// @brief Method get_LOG_LEVEL, addr 0x9db76e0, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_LogLevel get_LOG_LEVEL() ;

/// @brief Method get_maxVertsInMesh, addr 0x9db7848, size 0x8, virtual false, abstract: false, final false
inline int32_t get_maxVertsInMesh() ;

/// @brief Method get_validationLevel, addr 0x9db7840, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_ValidationLevel get_validationLevel() ;

static inline void setStaticF_empty(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

static inline void setStaticF_emptyIDs(::ArrayW<int32_t>  value) ;

/// @brief Method set_LOG_LEVEL, addr 0x9db76e8, size 0xb0, virtual true, abstract: false, final false
inline void set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

/// @brief Method set_maxVertsInMesh, addr 0x9db7850, size 0x17c, virtual false, abstract: false, final false
inline void set_maxVertsInMesh(int32_t  value) ;

/// @brief Method set_validationLevel, addr 0x9db7798, size 0xa8, virtual true, abstract: false, final false
inline void set_validationLevel(::DigitalOpus::MB::Core::MB2_ValidationLevel  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MultiMeshCombiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MultiMeshCombiner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MultiMeshCombiner(MB3_MultiMeshCombiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MultiMeshCombiner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MultiMeshCombiner(MB3_MultiMeshCombiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22728};

/// @brief Field obj2MeshCombinerMap, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*  ___obj2MeshCombinerMap;

/// [SerializeField]
/// @brief Field meshCombiners, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*  ___meshCombiners;

/// [SerializeField]
/// @brief Field _maxVertsInMesh, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____maxVertsInMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner, ___obj2MeshCombinerMap) == 0x90, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner, ___meshCombiners) == 0x98, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner, ____maxVertsInMesh) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner) == 0xa8, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MultiMeshCombiner/CombinedMesh
class CORDL_TYPE MB3_MultiMeshCombiner_CombinedMesh : public ::System::Object {
public:
// Declarations
/// @brief Field combinedMesh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_combinedMesh, put=__cordl_internal_set_combinedMesh)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  combinedMesh;

/// @brief Field extraSpace, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_extraSpace, put=__cordl_internal_set_extraSpace)) int32_t  extraSpace;

/// @brief Field gosToAdd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gosToAdd, put=__cordl_internal_set_gosToAdd)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gosToAdd;

/// @brief Field gosToDelete, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gosToDelete, put=__cordl_internal_set_gosToDelete)) ::System::Collections::Generic::List_1<int32_t>*  gosToDelete;

/// @brief Field gosToUpdate, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gosToUpdate, put=__cordl_internal_set_gosToUpdate)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gosToUpdate;

/// @brief Field isDirty, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDirty, put=__cordl_internal_set_isDirty)) bool  isDirty;

/// @brief Field numVertsInListToAdd, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_numVertsInListToAdd, put=__cordl_internal_set_numVertsInListToAdd)) int32_t  numVertsInListToAdd;

/// @brief Field numVertsInListToDelete, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_numVertsInListToDelete, put=__cordl_internal_set_numVertsInListToDelete)) int32_t  numVertsInListToDelete;

static inline ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh* New_ctor(int32_t  maxNumVertsInMesh, ::UnityEngine::GameObject*  resultSceneObject, ::DigitalOpus::MB::Core::MB2_LogLevel  ll) ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& __cordl_internal_get_combinedMesh() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& __cordl_internal_get_combinedMesh() ;

constexpr int32_t const& __cordl_internal_get_extraSpace() const;

constexpr int32_t& __cordl_internal_get_extraSpace() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gosToAdd() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gosToAdd() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_gosToDelete() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_gosToDelete() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gosToUpdate() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gosToUpdate() ;

constexpr bool const& __cordl_internal_get_isDirty() const;

constexpr bool& __cordl_internal_get_isDirty() ;

constexpr int32_t const& __cordl_internal_get_numVertsInListToAdd() const;

constexpr int32_t& __cordl_internal_get_numVertsInListToAdd() ;

constexpr int32_t const& __cordl_internal_get_numVertsInListToDelete() const;

constexpr int32_t& __cordl_internal_get_numVertsInListToDelete() ;

constexpr void __cordl_internal_set_combinedMesh(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value) ;

constexpr void __cordl_internal_set_extraSpace(int32_t  value) ;

constexpr void __cordl_internal_set_gosToAdd(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_gosToDelete(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_gosToUpdate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_isDirty(bool  value) ;

constexpr void __cordl_internal_set_numVertsInListToAdd(int32_t  value) ;

constexpr void __cordl_internal_set_numVertsInListToDelete(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dbb0ec, size 0x194, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxNumVertsInMesh, ::UnityEngine::GameObject*  resultSceneObject, ::DigitalOpus::MB::Core::MB2_LogLevel  ll) ;

/// @brief Method isEmpty, addr 0x9dbbeac, size 0x1b8, virtual false, abstract: false, final false
inline bool isEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MultiMeshCombiner_CombinedMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MultiMeshCombiner_CombinedMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MultiMeshCombiner_CombinedMesh(MB3_MultiMeshCombiner_CombinedMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MultiMeshCombiner_CombinedMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MultiMeshCombiner_CombinedMesh(MB3_MultiMeshCombiner_CombinedMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22727};

/// @brief Field combinedMesh, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  ___combinedMesh;

/// @brief Field extraSpace, offset: 0x18, size: 0x4, def value: None
 int32_t  ___extraSpace;

/// @brief Field numVertsInListToDelete, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___numVertsInListToDelete;

/// @brief Field numVertsInListToAdd, offset: 0x20, size: 0x4, def value: None
 int32_t  ___numVertsInListToAdd;

/// @brief Field gosToAdd, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___gosToAdd;

/// @brief Field gosToDelete, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___gosToDelete;

/// @brief Field gosToUpdate, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___gosToUpdate;

/// @brief Field isDirty, offset: 0x40, size: 0x1, def value: None
 bool  ___isDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh, ___combinedMesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh, ___extraSpace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh, ___numVertsInListToDelete) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh, ___numVertsInListToAdd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh, ___gosToAdd) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh, ___gosToDelete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh, ___gosToUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh, ___isDirty) == 0x40, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh) == 0x48, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
