#pragma once
// IWYU pragma private; include "GorillaTagScripts/DecorativeItemsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecorativeItemsManager)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class ZoneBasedObject;
}
namespace GorillaTagScripts {
class AttachPoint;
}
namespace GorillaTagScripts {
class DecorativeItem;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class DecorativeItemsManager;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::DecorativeItemsManager*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::DecorativeItemsManager*, "GorillaTagScripts", "DecorativeItemsManager");
// [NetworkBehaviourWeaved(1)]
// Dependencies NetworkComponent
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.DecorativeItemsManager
class CORDL_TYPE DecorativeItemsManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_Data, put=set_Data)) int32_t  Data;

/// @brief Field _Data, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) int32_t  _Data;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GorillaTagScripts::DecorativeItemsManager>  _instance;

/// @brief Field allHooks, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_allHooks, put=__cordl_internal_set_allHooks)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  allHooks;

/// @brief Field arrayIndex, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_arrayIndex, put=__cordl_internal_set_arrayIndex)) int32_t  arrayIndex;

/// @brief Field currentIndex, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field decorativeItemsContainer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_decorativeItemsContainer, put=__cordl_internal_set_decorativeItemsContainer)) ::UnityW<::UnityEngine::GameObject>  decorativeItemsContainer;

/// @brief Field itemsList, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemsList, put=__cordl_internal_set_itemsList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*  itemsList;

/// @brief Field lastIndex, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastIndex, put=__cordl_internal_set_lastIndex)) int32_t  lastIndex;

/// @brief Field nonRespawnableHooksContainer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonRespawnableHooksContainer, put=__cordl_internal_set_nonRespawnableHooksContainer)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  nonRespawnableHooksContainer;

/// @brief Field respawnableHooks, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_respawnableHooks, put=__cordl_internal_set_respawnableHooks)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  respawnableHooks;

/// @brief Field respawnableHooksContainer, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_respawnableHooksContainer, put=__cordl_internal_set_respawnableHooksContainer)) ::UnityW<::UnityEngine::GameObject>  respawnableHooksContainer;

/// @brief Field shouldRunUpdate, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldRunUpdate, put=__cordl_internal_set_shouldRunUpdate)) bool  shouldRunUpdate;

/// @brief Field wasInZone, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInZone, put=__cordl_internal_set_wasInZone)) bool  wasInZone;

/// @brief Field zone, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::UnityW<::GlobalNamespace::ZoneBasedObject>  zone;

/// @brief Method Awake, addr 0x5bb7658, size 0x648, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5bb925c, size 0x20, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5bb927c, size 0x24, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GorillaTagScripts::DecorativeItemsManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bb7ca0, size 0x38c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnRequestToRespawn, addr 0x5bb8e04, size 0xb8, virtual false, abstract: false, final false
inline void OnRequestToRespawn(::GorillaTagScripts::DecorativeItem*  item) ;

/// [Rpc]
/// @brief Method RPC_RespawnItem, addr 0x5bb8ba0, size 0x264, virtual false, abstract: false, final false
inline void RPC_RespawnItem(int32_t  index, ::UnityEngine::Vector3  _transformPos, ::UnityEngine::Quaternion  _transformRot, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(1, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_RespawnItem@Invoker, addr 0x5bb92a0, size 0x104, virtual false, abstract: false, final false
static inline void RPC_RespawnItem@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method RandomSpawn, addr 0x5bb8650, size 0x138, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> RandomSpawn() ;

/// @brief Method ReadDataFusion, addr 0x5bb8f7c, size 0x18, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5bb9044, size 0xbc, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RespawnItemRPC, addr 0x5bb8788, size 0xc0, virtual false, abstract: false, final false
inline void RespawnItemRPC(int32_t  index, ::UnityEngine::Vector3  _transformPos, ::UnityEngine::Quaternion  _transformRot, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RespawnItemShared, addr 0x5bb8848, size 0x358, virtual false, abstract: false, final false
inline void RespawnItemShared(int32_t  index, ::UnityEngine::Vector3  _transformPos, ::UnityEngine::Quaternion  _transformRot, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SpawnItem, addr 0x5bb829c, size 0x34c, virtual false, abstract: false, final false
inline void SpawnItem(int32_t  index) ;

/// @brief Method Update, addr 0x5bb802c, size 0x270, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateListPerFrame, addr 0x5bb85e8, size 0x68, virtual false, abstract: false, final false
inline int32_t UpdateListPerFrame() ;

/// @brief Method WriteDataFusion, addr 0x5bb8f74, size 0x8, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5bb8f94, size 0xb0, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr int32_t const& __cordl_internal_get__Data() const;

constexpr int32_t& __cordl_internal_get__Data() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>* const& __cordl_internal_get_allHooks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*& __cordl_internal_get_allHooks() ;

constexpr int32_t const& __cordl_internal_get_arrayIndex() const;

constexpr int32_t& __cordl_internal_get_arrayIndex() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_decorativeItemsContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_decorativeItemsContainer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::DecorativeItem>>* const& __cordl_internal_get_itemsList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*& __cordl_internal_get_itemsList() ;

constexpr int32_t const& __cordl_internal_get_lastIndex() const;

constexpr int32_t& __cordl_internal_get_lastIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_nonRespawnableHooksContainer() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_nonRespawnableHooksContainer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>* const& __cordl_internal_get_respawnableHooks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*& __cordl_internal_get_respawnableHooks() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_respawnableHooksContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_respawnableHooksContainer() ;

constexpr bool const& __cordl_internal_get_shouldRunUpdate() const;

constexpr bool& __cordl_internal_get_shouldRunUpdate() ;

constexpr bool const& __cordl_internal_get_wasInZone() const;

constexpr bool& __cordl_internal_get_wasInZone() ;

constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject> const& __cordl_internal_get_zone() const;

constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject>& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set__Data(int32_t  value) ;

constexpr void __cordl_internal_set_allHooks(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  value) ;

constexpr void __cordl_internal_set_arrayIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_decorativeItemsContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_itemsList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*  value) ;

constexpr void __cordl_internal_set_lastIndex(int32_t  value) ;

constexpr void __cordl_internal_set_nonRespawnableHooksContainer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_respawnableHooks(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  value) ;

constexpr void __cordl_internal_set_respawnableHooksContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_shouldRunUpdate(bool  value) ;

constexpr void __cordl_internal_set_wasInZone(bool  value) ;

constexpr void __cordl_internal_set_zone(::UnityW<::GlobalNamespace::ZoneBasedObject>  value) ;

/// @brief Method .ctor, addr 0x5bb9100, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getCurrentAttachPointByPosition, addr 0x5bb6ea8, size 0x194, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTagScripts::AttachPoint> getCurrentAttachPointByPosition(::UnityEngine::Vector3  _attachPoint) ;

static inline ::UnityW<::GorillaTagScripts::DecorativeItemsManager> getStaticF__instance() ;

/// @brief Method get_Data, addr 0x5bb8ebc, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_Data() ;

/// @brief Method get_Instance, addr 0x5bb7610, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTagScripts::DecorativeItemsManager> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GorillaTagScripts::DecorativeItemsManager>  value) ;

/// @brief Method set_Data, addr 0x5bb8f18, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecorativeItemsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecorativeItemsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecorativeItemsManager(DecorativeItemsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecorativeItemsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecorativeItemsManager(DecorativeItemsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3970};

/// @brief Field decorativeItemsContainer, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___decorativeItemsContainer;

/// @brief Field respawnableHooksContainer, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___respawnableHooksContainer;

/// @brief Field nonRespawnableHooksContainer, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___nonRespawnableHooksContainer;

/// @brief Field itemsList, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::DecorativeItem>>*  ___itemsList;

/// @brief Field respawnableHooks, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  ___respawnableHooks;

/// @brief Field allHooks, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::AttachPoint>>*  ___allHooks;

/// @brief Field lastIndex, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___lastIndex;

/// @brief Field currentIndex, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field arrayIndex, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___arrayIndex;

/// @brief Field shouldRunUpdate, offset: 0xdc, size: 0x1, def value: None
 bool  ___shouldRunUpdate;

/// @brief Field zone, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneBasedObject>  ___zone;

/// @brief Field wasInZone, offset: 0xe8, size: 0x1, def value: None
 bool  ___wasInZone;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xec, size: 0x4, def value: None
 int32_t  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___decorativeItemsContainer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___respawnableHooksContainer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___nonRespawnableHooksContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___itemsList) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___respawnableHooks) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___allHooks) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___lastIndex) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___currentIndex) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___arrayIndex) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___shouldRunUpdate) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___zone) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ___wasInZone) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::DecorativeItemsManager, ____Data) == 0xec, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::DecorativeItemsManager) == 0xf0, "Size mismatch!");

} // namespace end def GorillaTagScripts
