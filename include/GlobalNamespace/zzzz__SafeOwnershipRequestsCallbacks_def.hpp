#pragma once
// IWYU pragma private; include "GlobalNamespace/SafeOwnershipRequestsCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SafeOwnershipRequestsCallbacks)
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
// Forward declare root types
namespace GlobalNamespace {
class SafeOwnershipRequestsCallbacks;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SafeOwnershipRequestsCallbacks*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SafeOwnershipRequestsCallbacks*, "", "SafeOwnershipRequestsCallbacks");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SafeOwnershipRequestsCallbacks
class CORDL_TYPE SafeOwnershipRequestsCallbacks : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _requestableOwnershipGuard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestableOwnershipGuard, put=__cordl_internal_set__requestableOwnershipGuard)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  _requestableOwnershipGuard;

/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr operator  ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept;

/// @brief Method Awake, addr 0x58f9d04, size 0x1c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IRequestableOwnershipGuardCallbacks.OnMasterClientAssistedTakeoverRequest, addr 0x58f9d30, size 0x8, virtual true, abstract: false, final true
inline bool IRequestableOwnershipGuardCallbacks_OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method IRequestableOwnershipGuardCallbacks.OnMyCreatorLeft, addr 0x58f9d38, size 0x4, virtual true, abstract: false, final true
inline void IRequestableOwnershipGuardCallbacks_OnMyCreatorLeft() ;

/// @brief Method IRequestableOwnershipGuardCallbacks.OnMyOwnerLeft, addr 0x58f9d2c, size 0x4, virtual true, abstract: false, final true
inline void IRequestableOwnershipGuardCallbacks_OnMyOwnerLeft() ;

/// @brief Method IRequestableOwnershipGuardCallbacks.OnOwnershipRequest, addr 0x58f9d24, size 0x8, virtual true, abstract: false, final true
inline bool IRequestableOwnershipGuardCallbacks_OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method IRequestableOwnershipGuardCallbacks.OnOwnershipTransferred, addr 0x58f9d20, size 0x4, virtual true, abstract: false, final true
inline void IRequestableOwnershipGuardCallbacks_OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

static inline ::GlobalNamespace::SafeOwnershipRequestsCallbacks* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get__requestableOwnershipGuard() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get__requestableOwnershipGuard() ;

constexpr void __cordl_internal_set__requestableOwnershipGuard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

/// @brief Method .ctor, addr 0x58f9d3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeOwnershipRequestsCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeOwnershipRequestsCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeOwnershipRequestsCallbacks(SafeOwnershipRequestsCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeOwnershipRequestsCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeOwnershipRequestsCallbacks(SafeOwnershipRequestsCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2138};

/// [SerializeField]
/// @brief Field _requestableOwnershipGuard, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ____requestableOwnershipGuard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SafeOwnershipRequestsCallbacks, ____requestableOwnershipGuard) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SafeOwnershipRequestsCallbacks) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
