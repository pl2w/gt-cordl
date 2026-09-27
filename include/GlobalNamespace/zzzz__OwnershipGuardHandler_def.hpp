#pragma once
// IWYU pragma private; include "GlobalNamespace/OwnershipGuardHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(OwnershipGuardHandler)
namespace Photon::Pun {
class IPunOwnershipCallbacks;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OwnershipGuardHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OwnershipGuardHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OwnershipGuardHandler*, "", "OwnershipGuardHandler");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OwnershipGuardHandler
class CORDL_TYPE OwnershipGuardHandler : public ::System::Object {
public:
// Declarations
/// @brief Field callbackInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_callbackInstance, put=setStaticF_callbackInstance)) ::GlobalNamespace::OwnershipGuardHandler*  callbackInstance;

/// @brief Field guardedViews, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_guardedViews, put=setStaticF_guardedViews)) ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  guardedViews;

/// @brief Convert operator to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr operator  ::Photon::Pun::IPunOwnershipCallbacks*() noexcept;

static inline ::GlobalNamespace::OwnershipGuardHandler* New_ctor() ;

/// @brief Method Photon.Pun.IPunOwnershipCallbacks.OnOwnershipRequest, addr 0x5ab1ac8, size 0x4, virtual true, abstract: false, final true
inline void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer) ;

/// @brief Method Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransferFailed, addr 0x5ab1acc, size 0x4, virtual true, abstract: false, final true
inline void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransferFailed(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  senderOfFailedRequest) ;

/// @brief Method Photon.Pun.IPunOwnershipCallbacks.OnOwnershipTransfered, addr 0x5ab199c, size 0x12c, virtual true, abstract: false, final true
inline void Photon_Pun_IPunOwnershipCallbacks_OnOwnershipTransfered(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method RegisterView, addr 0x5ab1690, size 0x108, virtual false, abstract: false, final false
static inline void RegisterView(::Photon::Pun::PhotonView*  view) ;

/// @brief Method RegisterViews, addr 0x5ab1798, size 0xa0, virtual false, abstract: false, final false
static inline void RegisterViews(::ArrayW<::Photon::Pun::PhotonView*>  photonViews) ;

/// @brief Method RemoveView, addr 0x5ab1838, size 0xc4, virtual false, abstract: false, final false
static inline void RemoveView(::Photon::Pun::PhotonView*  view) ;

/// @brief Method RemoveViews, addr 0x5ab18fc, size 0xa0, virtual false, abstract: false, final false
static inline void RemoveViews(::ArrayW<::Photon::Pun::PhotonView*>  photonViews) ;

/// @brief Method .ctor, addr 0x5ab1688, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OwnershipGuardHandler* getStaticF_callbackInstance() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>* getStaticF_guardedViews() ;

/// @brief Convert to "::Photon::Pun::IPunOwnershipCallbacks"
constexpr ::Photon::Pun::IPunOwnershipCallbacks* i___Photon__Pun__IPunOwnershipCallbacks() noexcept;

static inline void setStaticF_callbackInstance(::GlobalNamespace::OwnershipGuardHandler*  value) ;

static inline void setStaticF_guardedViews(::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OwnershipGuardHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OwnershipGuardHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OwnershipGuardHandler(OwnershipGuardHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OwnershipGuardHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OwnershipGuardHandler(OwnershipGuardHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3288};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OwnershipGuardHandler) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
