#pragma once
// IWYU pragma private; include "GorillaNetworking/SubCosmeticCycleController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubCosmeticCycleController)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GorillaNetworking {
class CosmeticCollectionDisplay;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GorillaNetworking {
class SubCosmeticCycleController;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::SubCosmeticCycleController*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::SubCosmeticCycleController*, "GorillaNetworking", "SubCosmeticCycleController");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.SubCosmeticCycleController
class CORDL_TYPE SubCosmeticCycleController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ActiveCollectable)) ::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem>  ActiveCollectable;

 __declspec(property(get=get_ActiveIndex)) int32_t  ActiveIndex;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Display)) ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>  Display;

 __declspec(property(get=get_HasAuthority)) bool  HasAuthority;

/// @brief Field display, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_display, put=__cordl_internal_set_display)) ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>  display;

/// @brief Field receiveSignalLimiter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_receiveSignalLimiter, put=__cordl_internal_set_receiveSignalLimiter)) ::GlobalNamespace::CallLimiter*  receiveSignalLimiter;

/// @brief Field syncBroadcastOverNetwork, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncBroadcastOverNetwork, put=__cordl_internal_set_syncBroadcastOverNetwork)) bool  syncBroadcastOverNetwork;

/// @brief Field syncCycleOverNetwork, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncCycleOverNetwork, put=__cordl_internal_set_syncCycleOverNetwork)) bool  syncCycleOverNetwork;

/// @brief Method BroadcastSignal, addr 0x5c7121c, size 0x44, virtual false, abstract: false, final false
inline void BroadcastSignal(int32_t  signal) ;

/// @brief Method BroadcastSignalLocal, addr 0x5c71260, size 0xfc, virtual false, abstract: false, final false
inline void BroadcastSignalLocal(int32_t  signal) ;

/// @brief Method CycleBackward, addr 0x5c70d80, size 0xc0, virtual false, abstract: false, final false
inline void CycleBackward() ;

/// @brief Method CycleForward, addr 0x5c70910, size 0x98, virtual false, abstract: false, final false
inline void CycleForward() ;

/// @brief Method CycleRandom, addr 0x5c70e40, size 0xa8, virtual false, abstract: false, final false
inline void CycleRandom() ;

/// @brief Method Equip, addr 0x5c70f60, size 0x58, virtual false, abstract: false, final false
inline void Equip(int32_t  canonicalIndex) ;

/// @brief Method EquipActive, addr 0x5c71010, size 0x70, virtual false, abstract: false, final false
inline void EquipActive() ;

/// @brief Method EquipAll, addr 0x5c710f0, size 0x40, virtual false, abstract: false, final false
inline void EquipAll() ;

/// @brief Method GetAppliedCosmeticID, addr 0x5c70894, size 0x7c, virtual false, abstract: false, final false
inline ::StringW GetAppliedCosmeticID() ;

/// @brief Method IsEquipped, addr 0x5c71170, size 0xac, virtual false, abstract: false, final false
inline bool IsEquipped(int32_t  canonicalIndex) ;

static inline ::GorillaNetworking::SubCosmeticCycleController* New_ctor() ;

/// @brief Method ReceiveNetworkSignal, addr 0x5c7163c, size 0x58, virtual false, abstract: false, final false
inline void ReceiveNetworkSignal(int32_t  signal) ;

/// @brief Method SendBroadcastSignalRPC, addr 0x5c7135c, size 0x2e0, virtual false, abstract: false, final false
inline void SendBroadcastSignalRPC(int32_t  signal) ;

/// @brief Method SendStateRPC, addr 0x5c709a8, size 0x3d8, virtual false, abstract: false, final false
inline void SendStateRPC() ;

/// @brief Method SetDisplayVisible, addr 0x5c70f38, size 0x28, virtual false, abstract: false, final false
inline void SetDisplayVisible(bool  visible) ;

/// @brief Method SetIndex, addr 0x5c70ee8, size 0x50, virtual false, abstract: false, final false
inline void SetIndex(int32_t  index) ;

/// @brief Method Unequip, addr 0x5c70fb8, size 0x58, virtual false, abstract: false, final false
inline void Unequip(int32_t  canonicalIndex) ;

/// @brief Method UnequipActive, addr 0x5c71080, size 0x70, virtual false, abstract: false, final false
inline void UnequipActive() ;

/// @brief Method UnequipAll, addr 0x5c71130, size 0x40, virtual false, abstract: false, final false
inline void UnequipAll() ;

constexpr ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay> const& __cordl_internal_get_display() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>& __cordl_internal_get_display() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_receiveSignalLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_receiveSignalLimiter() ;

constexpr bool const& __cordl_internal_get_syncBroadcastOverNetwork() const;

constexpr bool& __cordl_internal_get_syncBroadcastOverNetwork() ;

constexpr bool const& __cordl_internal_get_syncCycleOverNetwork() const;

constexpr bool& __cordl_internal_get_syncCycleOverNetwork() ;

constexpr void __cordl_internal_set_display(::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>  value) ;

constexpr void __cordl_internal_set_receiveSignalLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_syncBroadcastOverNetwork(bool  value) ;

constexpr void __cordl_internal_set_syncCycleOverNetwork(bool  value) ;

/// @brief Method .ctor, addr 0x5c717a4, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveCollectable, addr 0x5c70770, size 0x54, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::CosmeticsController_CosmeticItem> get_ActiveCollectable() ;

/// @brief Method get_ActiveIndex, addr 0x5c707c4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ActiveIndex() ;

/// @brief Method get_Count, addr 0x5c707dc, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Display, addr 0x5c706d0, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay> get_Display() ;

/// @brief Method get_HasAuthority, addr 0x5c707fc, size 0x98, virtual false, abstract: false, final false
inline bool get_HasAuthority() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubCosmeticCycleController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubCosmeticCycleController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubCosmeticCycleController(SubCosmeticCycleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubCosmeticCycleController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubCosmeticCycleController(SubCosmeticCycleController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4310};

/// [SerializeField]
/// @brief Field syncCycleOverNetwork, offset: 0x20, size: 0x1, def value: None
 bool  ___syncCycleOverNetwork;

/// [SerializeField]
/// @brief Field syncBroadcastOverNetwork, offset: 0x21, size: 0x1, def value: None
 bool  ___syncBroadcastOverNetwork;

/// @brief Field display, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticCollectionDisplay>  ___display;

/// @brief Field receiveSignalLimiter, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___receiveSignalLimiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::SubCosmeticCycleController, ___syncCycleOverNetwork) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SubCosmeticCycleController, ___syncBroadcastOverNetwork) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SubCosmeticCycleController, ___display) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::SubCosmeticCycleController, ___receiveSignalLimiter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::SubCosmeticCycleController) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking
