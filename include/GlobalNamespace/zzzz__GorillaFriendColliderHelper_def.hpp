#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFriendColliderHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaFriendColliderHelper_FriendColliderPair_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaFriendColliderHelper)
namespace GlobalNamespace {
struct GorillaFriendColliderHelper_FriendColliderPair;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaFriendColliderHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaFriendColliderHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaFriendColliderHelper*, "", "GorillaFriendColliderHelper");
// Dependencies GorillaFriendColliderHelper::FriendColliderPair, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaFriendColliderHelper
class CORDL_TYPE GorillaFriendColliderHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FriendColliderPair = ::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::GorillaFriendColliderHelper>  Instance;

/// @brief Field MappedFriendColliders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MappedFriendColliders, put=__cordl_internal_set_MappedFriendColliders)) ::ArrayW<::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair>  MappedFriendColliders;

/// @brief Method Awake, addr 0x5aadb74, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindFriendCollider, addr 0x5aadbcc, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaFriendCollider> FindFriendCollider(::StringW  search) ;

/// @brief Method FindJoinCollider, addr 0x5aadc6c, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> FindJoinCollider(::StringW  search) ;

static inline ::GlobalNamespace::GorillaFriendColliderHelper* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair> const& __cordl_internal_get_MappedFriendColliders() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair>& __cordl_internal_get_MappedFriendColliders() ;

constexpr void __cordl_internal_set_MappedFriendColliders(::ArrayW<::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair>  value) ;

/// @brief Method .ctor, addr 0x5aadd0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaFriendColliderHelper> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::GorillaFriendColliderHelper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaFriendColliderHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaFriendColliderHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaFriendColliderHelper(GorillaFriendColliderHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaFriendColliderHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaFriendColliderHelper(GorillaFriendColliderHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3277};

/// @brief Field MappedFriendColliders, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaFriendColliderHelper_FriendColliderPair>  ___MappedFriendColliders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaFriendColliderHelper, ___MappedFriendColliders) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaFriendColliderHelper) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
