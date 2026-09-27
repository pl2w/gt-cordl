#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/PoseableMannequin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTPosRotConstraints_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PoseableMannequin)
namespace GlobalNamespace {
struct GorillaPosRotConstraint;
}
namespace GorillaNetworking::Store {
class PoseableMannequin__SaveLocalPlayerPose_d__22;
}
namespace GorillaNetworking::Store {
class PoseableMannequin___c;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class PoseableMannequin;
}
namespace GorillaNetworking::Store {
class PoseableMannequin__SaveLocalPlayerPose_d__22;
}
namespace GorillaNetworking::Store {
class PoseableMannequin___c;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::PoseableMannequin*);
MARK_REF_T(::GorillaNetworking::Store::PoseableMannequin__SaveLocalPlayerPose_d__22*);
MARK_REF_T(::GorillaNetworking::Store::PoseableMannequin___c*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::PoseableMannequin*, "GorillaNetworking.Store", "PoseableMannequin");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::PoseableMannequin__SaveLocalPlayerPose_d__22*, "GorillaNetworking.Store", "PoseableMannequin/<SaveLocalPlayerPose>d__22");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::PoseableMannequin___c*, "GorillaNetworking.Store", "PoseableMannequin/<>c");
// Dependencies GTPosRotConstraints, UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.PoseableMannequin
class CORDL_TYPE PoseableMannequin : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SaveLocalPlayerPose_d__22 = ::GorillaNetworking::Store::PoseableMannequin__SaveLocalPlayerPose_d__22;

using __c = ::GorillaNetworking::Store::PoseableMannequin___c;

/// @brief Field BakedColliderMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BakedColliderMesh, put=__cordl_internal_set_BakedColliderMesh)) ::UnityW<::UnityEngine::Mesh>  BakedColliderMesh;

/// @brief Field cosmeticConstraints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticConstraints, put=__cordl_internal_set_cosmeticConstraints)) ::ArrayW<::UnityW<::GlobalNamespace::GTPosRotConstraints>>  cosmeticConstraints;

/// @brief Field prefabAssetName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabAssetName, put=__cordl_internal_set_prefabAssetName)) ::StringW  prefabAssetName;

/// @brief Field prefabAssetPath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabAssetPath, put=__cordl_internal_set_prefabAssetPath)) ::StringW  prefabAssetPath;

/// @brief Field prefabFolderPath, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabFolderPath, put=__cordl_internal_set_prefabFolderPath)) ::StringW  prefabFolderPath;

/// @brief Field skinnedMeshCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMeshCollider, put=__cordl_internal_set_skinnedMeshCollider)) ::UnityW<::UnityEngine::MeshCollider>  skinnedMeshCollider;

/// @brief Field skinnedMeshRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMeshRenderer, put=__cordl_internal_set_skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedMeshRenderer;

/// @brief Field staticGorillaMesh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticGorillaMesh, put=__cordl_internal_set_staticGorillaMesh)) ::UnityW<::UnityEngine::MeshFilter>  staticGorillaMesh;

/// @brief Field staticGorillaMeshCollider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticGorillaMeshCollider, put=__cordl_internal_set_staticGorillaMeshCollider)) ::UnityW<::UnityEngine::MeshCollider>  staticGorillaMeshCollider;

/// @brief Field staticGorillaMeshRenderer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticGorillaMeshRenderer, put=__cordl_internal_set_staticGorillaMeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  staticGorillaMeshRenderer;

/// @brief Method BakeAndSaveMeshInPath, addr 0x5cb24c4, size 0x4, virtual false, abstract: false, final false
inline void BakeAndSaveMeshInPath(::StringW  meshPath) ;

/// @brief Method BakeSkinnedMesh, addr 0x5cb2478, size 0x4c, virtual false, abstract: false, final false
inline void BakeSkinnedMesh() ;

/// @brief Method CreasteTestClip, addr 0x5cb2864, size 0x4, virtual false, abstract: false, final false
inline void CreasteTestClip() ;

/// @brief Method FindBone, addr 0x5cb27cc, size 0x98, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> FindBone(::StringW  boneName) ;

/// @brief Method GetMeshPathFromPrefabPath, addr 0x5cb2438, size 0x40, virtual false, abstract: false, final false
inline ::StringW GetMeshPathFromPrefabPath(::StringW  prefabPath) ;

/// @brief Method GetPrefabPathFromCurrentPrefabStage, addr 0x5cb23f8, size 0x40, virtual false, abstract: false, final false
inline ::StringW GetPrefabPathFromCurrentPrefabStage() ;

/// @brief Method HookupCosmeticConstraints, addr 0x5cb26a4, size 0x128, virtual false, abstract: false, final false
inline void HookupCosmeticConstraints() ;

/// @brief Method LoadPoseOntoMannequin, addr 0x5cb2e04, size 0x4, virtual false, abstract: false, final false
inline void LoadPoseOntoMannequin(::UnityEngine::AnimationClip*  clip, float_t  frameTime) ;

static inline ::GorillaNetworking::Store::PoseableMannequin* New_ctor() ;

/// @brief Method OnValidate, addr 0x5cb2e08, size 0x4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.Store.PoseableMannequin::<SaveLocalPlayerPose>d__22))]
/// @brief Method SaveLocalPlayerPose, addr 0x5cb2888, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SaveLocalPlayerPose() ;

/// @brief Method SerializeOutBonesFromSkinnedMesh, addr 0x5cb2908, size 0x4, virtual false, abstract: false, final false
inline void SerializeOutBonesFromSkinnedMesh(::UnityEngine::SkinnedMeshRenderer*  paramSkinnedMeshRenderer) ;

/// @brief Method SerializeVRRig, addr 0x5cb2868, size 0x20, virtual false, abstract: false, final false
inline void SerializeVRRig() ;

/// @brief Method SetCurvesForBone, addr 0x5cb290c, size 0x4f4, virtual false, abstract: false, final false
inline void SetCurvesForBone(::UnityEngine::SkinnedMeshRenderer*  paramSkinnedMeshRenderer, ::UnityEngine::AnimationClip*  clip, ::UnityEngine::Transform*  bone) ;

/// @brief Method Start, addr 0x5cb2324, size 0xd4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateGTPosRotConstraints, addr 0x5cb2550, size 0x154, virtual false, abstract: false, final false
inline void UpdateGTPosRotConstraints() ;

/// @brief Method UpdatePrefabWithAnimationClip, addr 0x5cb2e00, size 0x4, virtual false, abstract: false, final false
inline void UpdatePrefabWithAnimationClip(::StringW  AnimationFileName) ;

/// @brief Method UpdateSkinnedMeshCollider, addr 0x5cb2530, size 0x20, virtual false, abstract: false, final false
inline void UpdateSkinnedMeshCollider() ;

/// @brief Method UpdateStaticMeshMannequin, addr 0x5cb24c8, size 0x68, virtual false, abstract: false, final false
inline void UpdateStaticMeshMannequin() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_BakedColliderMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_BakedColliderMesh() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTPosRotConstraints>> const& __cordl_internal_get_cosmeticConstraints() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GTPosRotConstraints>>& __cordl_internal_get_cosmeticConstraints() ;

constexpr ::StringW const& __cordl_internal_get_prefabAssetName() const;

constexpr ::StringW& __cordl_internal_get_prefabAssetName() ;

constexpr ::StringW const& __cordl_internal_get_prefabAssetPath() const;

constexpr ::StringW& __cordl_internal_get_prefabAssetPath() ;

constexpr ::StringW const& __cordl_internal_get_prefabFolderPath() const;

constexpr ::StringW& __cordl_internal_get_prefabFolderPath() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_skinnedMeshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_skinnedMeshCollider() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinnedMeshRenderer() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_staticGorillaMesh() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_staticGorillaMesh() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_staticGorillaMeshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_staticGorillaMeshCollider() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_staticGorillaMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_staticGorillaMeshRenderer() ;

constexpr void __cordl_internal_set_BakedColliderMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_cosmeticConstraints(::ArrayW<::UnityW<::GlobalNamespace::GTPosRotConstraints>>  value) ;

constexpr void __cordl_internal_set_prefabAssetName(::StringW  value) ;

constexpr void __cordl_internal_set_prefabAssetPath(::StringW  value) ;

constexpr void __cordl_internal_set_prefabFolderPath(::StringW  value) ;

constexpr void __cordl_internal_set_skinnedMeshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set_skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_staticGorillaMesh(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_staticGorillaMeshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set_staticGorillaMeshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5cb2e0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseableMannequin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseableMannequin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseableMannequin(PoseableMannequin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseableMannequin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseableMannequin(PoseableMannequin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4446};

/// @brief Field skinnedMeshRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinnedMeshRenderer;

/// [FormerlySerializedAs("meshCollider")]
/// @brief Field skinnedMeshCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___skinnedMeshCollider;

/// @brief Field cosmeticConstraints, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GTPosRotConstraints>>  ___cosmeticConstraints;

/// @brief Field BakedColliderMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___BakedColliderMesh;

/// [SerializeField]
/// [FormerlySerializedAs("liveAssetPath")]
/// @brief Field prefabAssetPath, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___prefabAssetPath;

/// [SerializeField]
/// @brief Field prefabFolderPath, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___prefabFolderPath;

/// [SerializeField]
/// @brief Field prefabAssetName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___prefabAssetName;

/// @brief Field staticGorillaMesh, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___staticGorillaMesh;

/// @brief Field staticGorillaMeshCollider, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___staticGorillaMeshCollider;

/// @brief Field staticGorillaMeshRenderer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___staticGorillaMeshRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___skinnedMeshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___skinnedMeshCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___cosmeticConstraints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___BakedColliderMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___prefabAssetPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___prefabFolderPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___prefabAssetName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___staticGorillaMesh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___staticGorillaMeshCollider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin, ___staticGorillaMeshRenderer) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::PoseableMannequin) == 0x70, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.PoseableMannequin/<SaveLocalPlayerPose>d__22
class CORDL_TYPE PoseableMannequin__SaveLocalPlayerPose_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cb2ee8, size 0x58, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::Store::PoseableMannequin__SaveLocalPlayerPose_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cb2f40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cb2f48, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cb2f80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cb2ee4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5cb28e0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseableMannequin__SaveLocalPlayerPose_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseableMannequin__SaveLocalPlayerPose_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseableMannequin__SaveLocalPlayerPose_d__22(PoseableMannequin__SaveLocalPlayerPose_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseableMannequin__SaveLocalPlayerPose_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseableMannequin__SaveLocalPlayerPose_d__22(PoseableMannequin__SaveLocalPlayerPose_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4445};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin__SaveLocalPlayerPose_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::PoseableMannequin__SaveLocalPlayerPose_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::PoseableMannequin__SaveLocalPlayerPose_d__22) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.PoseableMannequin/<>c
class CORDL_TYPE PoseableMannequin___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::Store::PoseableMannequin___c*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Action_1<::GlobalNamespace::GorillaPosRotConstraint>*  __9__17_0;

static inline ::GorillaNetworking::Store::PoseableMannequin___c* New_ctor() ;

/// @brief Method <UpdateGTPosRotConstraints>b__17_0, addr 0x5cb2e84, size 0x60, virtual false, abstract: false, final false
inline void _UpdateGTPosRotConstraints_b__17_0(::GlobalNamespace::GorillaPosRotConstraint  c) ;

/// @brief Method .ctor, addr 0x5cb2e7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::Store::PoseableMannequin___c* getStaticF___9() ;

static inline ::System::Action_1<::GlobalNamespace::GorillaPosRotConstraint>* getStaticF___9__17_0() ;

static inline void setStaticF___9(::GorillaNetworking::Store::PoseableMannequin___c*  value) ;

static inline void setStaticF___9__17_0(::System::Action_1<::GlobalNamespace::GorillaPosRotConstraint>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PoseableMannequin___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PoseableMannequin___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseableMannequin___c(PoseableMannequin___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseableMannequin___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseableMannequin___c(PoseableMannequin___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::Store::PoseableMannequin___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
