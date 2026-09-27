#pragma once
// IWYU pragma private; include "GlobalNamespace/PostVRRigPhysicsSynch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PostVRRigPhysicsSynch)
namespace GlobalNamespace {
class AutoSyncTransforms;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PostVRRigPhysicsSynch;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PostVRRigPhysicsSynch*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PostVRRigPhysicsSynch*, "", "PostVRRigPhysicsSynch");
// [DefaultExecutionOrder(9999)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PostVRRigPhysicsSynch
class CORDL_TYPE PostVRRigPhysicsSynch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field k_syncList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_syncList, put=setStaticF_k_syncList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AutoSyncTransforms>>*  k_syncList;

/// @brief Method AddSyncTarget, addr 0x5ab23b4, size 0xd4, virtual false, abstract: false, final false
static inline void AddSyncTarget(::GlobalNamespace::AutoSyncTransforms*  body) ;

/// @brief Method LateUpdate, addr 0x5ab224c, size 0x168, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::PostVRRigPhysicsSynch* New_ctor() ;

/// @brief Method RemoveSyncTarget, addr 0x5ab2488, size 0x80, virtual false, abstract: false, final false
static inline void RemoveSyncTarget(::GlobalNamespace::AutoSyncTransforms*  body) ;

/// @brief Method .ctor, addr 0x5ab2508, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AutoSyncTransforms>>* getStaticF_k_syncList() ;

static inline void setStaticF_k_syncList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AutoSyncTransforms>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostVRRigPhysicsSynch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostVRRigPhysicsSynch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PostVRRigPhysicsSynch(PostVRRigPhysicsSynch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostVRRigPhysicsSynch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostVRRigPhysicsSynch(PostVRRigPhysicsSynch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3295};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PostVRRigPhysicsSynch) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
