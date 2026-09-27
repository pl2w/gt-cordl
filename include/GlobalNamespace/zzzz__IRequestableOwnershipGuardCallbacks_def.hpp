#pragma once
// IWYU pragma private; include "GlobalNamespace/IRequestableOwnershipGuardCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRequestableOwnershipGuardCallbacks)
namespace GlobalNamespace {
class NetPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IRequestableOwnershipGuardCallbacks*, "", "IRequestableOwnershipGuardCallbacks");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IRequestableOwnershipGuardCallbacks
class CORDL_TYPE IRequestableOwnershipGuardCallbacks {
public:
// Declarations
/// @brief Method OnMasterClientAssistedTakeoverRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnMyCreatorLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnMyCreatorLeft() ;

/// @brief Method OnMyOwnerLeft, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnMyOwnerLeft() ;

/// @brief Method OnOwnershipRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnOwnershipTransferred, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

// Ctor Parameters [CppParam { name: "", ty: "IRequestableOwnershipGuardCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRequestableOwnershipGuardCallbacks(IRequestableOwnershipGuardCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{924};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
