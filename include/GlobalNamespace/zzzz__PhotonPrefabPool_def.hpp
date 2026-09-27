#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonPrefabPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PrefabType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonPrefabPool)
namespace GlobalNamespace {
class ITickSystemPre;
}
namespace GlobalNamespace {
struct PrefabType;
}
namespace Photon::Pun {
class IPunPrefabPoolVerify;
}
namespace Photon::Pun {
class IPunPrefabPool;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Voice::Unity {
class RemoteVoiceLink;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PhotonPrefabPool;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonPrefabPool*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonPrefabPool*, "", "PhotonPrefabPool");
// Dependencies PrefabType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonPrefabPool
class CORDL_TYPE PhotonPrefabPool : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=ITickSystemPre_get_PreTickRunning, put=ITickSystemPre_set_PreTickRunning)) bool  ITickSystemPre_PreTickRunning;

/// @brief Field <ITickSystemPre.PreTickRunning>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPre_PreTickRunning_k__BackingField)) bool  _ITickSystemPre_PreTickRunning_k__BackingField;

/// @brief Field m_invalidCreatePool, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_invalidCreatePool, put=__cordl_internal_set_m_invalidCreatePool)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  m_invalidCreatePool;

/// @brief Field m_m_invalidCreatePoolLookup, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_m_invalidCreatePoolLookup, put=__cordl_internal_set_m_m_invalidCreatePoolLookup)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  m_m_invalidCreatePoolLookup;

/// @brief Field netInstantiedObjects, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_netInstantiedObjects, put=__cordl_internal_set_netInstantiedObjects)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  netInstantiedObjects;

/// @brief Field networkPrefabs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkPrefabs, put=__cordl_internal_set_networkPrefabs)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::PrefabType>*  networkPrefabs;

/// @brief Field networkPrefabsData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkPrefabsData, put=__cordl_internal_set_networkPrefabsData)) ::ArrayW<::GlobalNamespace::PrefabType>  networkPrefabsData;

/// @brief Field objectsQueued, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsQueued, put=__cordl_internal_set_objectsQueued)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  objectsQueued;

/// @brief Field objectsWaiting, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsWaiting, put=__cordl_internal_set_objectsWaiting)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  objectsWaiting;

/// @brief Field queueBeingProcssed, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_queueBeingProcssed, put=__cordl_internal_set_queueBeingProcssed)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  queueBeingProcssed;

/// @brief Field tempViews, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempViews, put=__cordl_internal_set_tempViews)) ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  tempViews;

/// @brief Field waiting, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_waiting, put=__cordl_internal_set_waiting)) bool  waiting;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr operator  ::GlobalNamespace::ITickSystemPre*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunPrefabPool"
constexpr operator  ::Photon::Pun::IPunPrefabPool*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunPrefabPoolVerify"
constexpr operator  ::Photon::Pun::IPunPrefabPoolVerify*() noexcept;

/// @brief Method Awake, addr 0x58f5c5c, size 0xe8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckVOIPSettings, addr 0x58f6c58, size 0x300, virtual false, abstract: false, final false
inline void CheckVOIPSettings(::Photon::Voice::Unity::RemoteVoiceLink*  voiceLink) ;

/// @brief Method ITickSystemPre.PreTick, addr 0x58f67ec, size 0x278, virtual true, abstract: false, final true
inline void ITickSystemPre_PreTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPre.get_PreTickRunning, addr 0x58f5c4c, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPre_get_PreTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPre.set_PreTickRunning, addr 0x58f5c54, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPre_set_PreTickRunning(bool  value) ;

static inline ::GlobalNamespace::PhotonPrefabPool* New_ctor() ;

/// @brief Method OnLeftRoom, addr 0x58f6a64, size 0x1f4, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method Photon.Pun.IPunPrefabPoolVerify.Instantiate, addr 0x58f62c4, size 0x148, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> Photon_Pun_IPunPrefabPoolVerify_Instantiate(::UnityEngine::GameObject*  prefabInstance, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Photon.Pun.IPunPrefabPoolVerify.VerifyInstantiation, addr 0x58f5ee4, size 0x3e0, virtual true, abstract: false, final true
inline bool Photon_Pun_IPunPrefabPoolVerify_VerifyInstantiation(::Photon::Realtime::Player*  sender, ::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::ArrayW<int32_t>  viewIDs, ::by_ref<::UnityEngine::GameObject*>  prefab) ;

/// @brief Method Photon.Pun.IPunPrefabPool.Destroy, addr 0x58f6558, size 0x294, virtual true, abstract: false, final true
inline void Photon_Pun_IPunPrefabPool_Destroy(::UnityEngine::GameObject*  netObj) ;

/// @brief Method Photon.Pun.IPunPrefabPool.Instantiate, addr 0x58f640c, size 0x14c, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> Photon_Pun_IPunPrefabPool_Instantiate(::StringW  prefabId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Start, addr 0x58f5d44, size 0x1a0, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_invalidCreatePool() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_invalidCreatePool() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_m_invalidCreatePoolLookup() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_m_invalidCreatePoolLookup() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_netInstantiedObjects() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_netInstantiedObjects() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::PrefabType>* const& __cordl_internal_get_networkPrefabs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::PrefabType>*& __cordl_internal_get_networkPrefabs() ;

constexpr ::ArrayW<::GlobalNamespace::PrefabType> const& __cordl_internal_get_networkPrefabsData() const;

constexpr ::ArrayW<::GlobalNamespace::PrefabType>& __cordl_internal_get_networkPrefabsData() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsQueued() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsQueued() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsWaiting() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsWaiting() ;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_queueBeingProcssed() const;

constexpr ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_queueBeingProcssed() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>* const& __cordl_internal_get_tempViews() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*& __cordl_internal_get_tempViews() ;

constexpr bool const& __cordl_internal_get_waiting() const;

constexpr bool& __cordl_internal_get_waiting() ;

constexpr void __cordl_internal_set__ITickSystemPre_PreTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_invalidCreatePool(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_m_m_invalidCreatePoolLookup(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_netInstantiedObjects(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_networkPrefabs(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::PrefabType>*  value) ;

constexpr void __cordl_internal_set_networkPrefabsData(::ArrayW<::GlobalNamespace::PrefabType>  value) ;

constexpr void __cordl_internal_set_objectsQueued(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_objectsWaiting(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_queueBeingProcssed(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_tempViews(::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  value) ;

constexpr void __cordl_internal_set_waiting(bool  value) ;

/// @brief Method .ctor, addr 0x58f6f80, size 0x264, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* i___GlobalNamespace__ITickSystemPre() noexcept;

/// @brief Convert to "::Photon::Pun::IPunPrefabPool"
constexpr ::Photon::Pun::IPunPrefabPool* i___Photon__Pun__IPunPrefabPool() noexcept;

/// @brief Convert to "::Photon::Pun::IPunPrefabPoolVerify"
constexpr ::Photon::Pun::IPunPrefabPoolVerify* i___Photon__Pun__IPunPrefabPoolVerify() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonPrefabPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonPrefabPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonPrefabPool(PhotonPrefabPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonPrefabPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonPrefabPool(PhotonPrefabPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2130};

/// [CompilerGenerated]
/// @brief Field <ITickSystemPre.PreTickRunning>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____ITickSystemPre_PreTickRunning_k__BackingField;

/// [SerializeField]
/// @brief Field networkPrefabsData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PrefabType>  ___networkPrefabsData;

/// @brief Field networkPrefabs, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::PrefabType>*  ___networkPrefabs;

/// @brief Field objectsWaiting, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsWaiting;

/// @brief Field queueBeingProcssed, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::GameObject>>*  ___queueBeingProcssed;

/// @brief Field objectsQueued, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsQueued;

/// @brief Field netInstantiedObjects, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ___netInstantiedObjects;

/// @brief Field tempViews, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  ___tempViews;

/// @brief Field m_invalidCreatePool, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___m_invalidCreatePool;

/// @brief Field m_m_invalidCreatePoolLookup, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  ___m_m_invalidCreatePoolLookup;

/// @brief Field waiting, offset: 0x70, size: 0x1, def value: None
 bool  ___waiting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ____ITickSystemPre_PreTickRunning_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___networkPrefabsData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___networkPrefabs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___objectsWaiting) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___queueBeingProcssed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___objectsQueued) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___netInstantiedObjects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___tempViews) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___m_invalidCreatePool) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___m_m_invalidCreatePoolLookup) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonPrefabPool, ___waiting) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonPrefabPool) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
