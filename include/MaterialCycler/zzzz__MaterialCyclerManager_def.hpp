#pragma once
// IWYU pragma private; include "MaterialCycler/MaterialCyclerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialCyclerManager)
namespace MaterialCycler {
class MaterialCycler;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonView;
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
struct Color;
}
// Forward declare root types
namespace MaterialCycler {
class MaterialCyclerManager;
}
// Write type traits
MARK_REF_T(::MaterialCycler::MaterialCyclerManager*);
DEFINE_IL2CPP_CLASS(::MaterialCycler::MaterialCyclerManager*, "MaterialCycler", "MaterialCyclerManager");
// [RequireComponent(typeof(Photon.Pun.PhotonView))]
// Dependencies UnityEngine.MonoBehaviour
namespace MaterialCycler {
// Is value type: false
// CS Name: MaterialCycler.MaterialCyclerManager
class CORDL_TYPE MaterialCyclerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_SyncTimeOut, put=set_SyncTimeOut)) float_t  SyncTimeOut;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::MaterialCycler::MaterialCyclerManager>  _Instance_k__BackingField;

/// @brief Field <SyncTimeOut>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__SyncTimeOut_k__BackingField, put=__cordl_internal_set__SyncTimeOut_k__BackingField)) float_t  _SyncTimeOut_k__BackingField;

/// @brief Field _currentMaterialIndexByKey, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentMaterialIndexByKey, put=__cordl_internal_set__currentMaterialIndexByKey)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  _currentMaterialIndexByKey;

/// @brief Field _cyclers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cyclers, put=__cordl_internal_set__cyclers)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::MaterialCycler::MaterialCycler>>*>*  _cyclers;

/// @brief Field _numMaterialsByKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__numMaterialsByKey, put=__cordl_internal_set__numMaterialsByKey)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  _numMaterialsByKey;

/// @brief Field _photonView, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__photonView, put=__cordl_internal_set__photonView)) ::UnityW<::Photon::Pun::PhotonView>  _photonView;

/// @brief Method Awake, addr 0x5cd21bc, size 0x17c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CycleKey, addr 0x5cd2338, size 0x19c, virtual false, abstract: false, final false
inline void CycleKey(int32_t  key) ;

static inline ::MaterialCycler::MaterialCyclerManager* New_ctor() ;

/// @brief Method PackColor, addr 0x5cd29c8, size 0x11c, virtual false, abstract: false, final false
static inline int32_t PackColor(::UnityEngine::Color  c) ;

/// @brief Method RPC_CycleKey, addr 0x5cd24d4, size 0x1b4, virtual false, abstract: false, final false
inline void RPC_CycleKey(int32_t  key, int32_t  index, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RPC_Synchronize, addr 0x5cd2860, size 0x168, virtual false, abstract: false, final false
inline void RPC_Synchronize(int32_t  key, int32_t  materialIndex, int32_t  colourPacked, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RegisterCycler, addr 0x5cd121c, size 0x368, virtual false, abstract: false, final false
inline void RegisterCycler(int32_t  key, ::MaterialCycler::MaterialCycler*  cycler) ;

/// @brief Method Synchronize, addr 0x5cd1d04, size 0x228, virtual false, abstract: false, final false
inline void Synchronize(int32_t  key, int32_t  materialIndex, ::UnityEngine::Color  c) ;

/// @brief Method UnPackColour, addr 0x5cd2ae4, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Color UnPackColour(int32_t  colourPacked) ;

/// @brief Method UnregisterCycler, addr 0x5cd15dc, size 0x130, virtual false, abstract: false, final false
inline void UnregisterCycler(::MaterialCycler::MaterialCycler*  cycler) ;

/// @brief Method UpdateMaterialCycler, addr 0x5cd2688, size 0x1d8, virtual false, abstract: false, final false
inline void UpdateMaterialCycler(int32_t  key, int32_t  materialIndex, ::UnityEngine::Color  colour) ;

constexpr float_t const& __cordl_internal_get__SyncTimeOut_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SyncTimeOut_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get__currentMaterialIndexByKey() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get__currentMaterialIndexByKey() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::MaterialCycler::MaterialCycler>>*>* const& __cordl_internal_get__cyclers() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::MaterialCycler::MaterialCycler>>*>*& __cordl_internal_get__cyclers() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get__numMaterialsByKey() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get__numMaterialsByKey() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get__photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get__photonView() ;

constexpr void __cordl_internal_set__SyncTimeOut_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__currentMaterialIndexByKey(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set__cyclers(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::MaterialCycler::MaterialCycler>>*>*  value) ;

constexpr void __cordl_internal_set__numMaterialsByKey(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set__photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

/// @brief Method .ctor, addr 0x5cd2b34, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::MaterialCycler::MaterialCyclerManager> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5cd210c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::MaterialCycler::MaterialCyclerManager> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_SyncTimeOut, addr 0x5cd21ac, size 0x8, virtual false, abstract: false, final false
inline float_t get_SyncTimeOut() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::MaterialCycler::MaterialCyclerManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5cd2154, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::MaterialCycler::MaterialCyclerManager*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SyncTimeOut, addr 0x5cd21b4, size 0x8, virtual false, abstract: false, final false
inline void set_SyncTimeOut(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialCyclerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialCyclerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialCyclerManager(MaterialCyclerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialCyclerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialCyclerManager(MaterialCyclerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4472};

/// [CompilerGenerated]
/// @brief Field <SyncTimeOut>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____SyncTimeOut_k__BackingField;

/// @brief Field _cyclers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::MaterialCycler::MaterialCycler>>*>*  ____cyclers;

/// @brief Field _numMaterialsByKey, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ____numMaterialsByKey;

/// @brief Field _currentMaterialIndexByKey, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ____currentMaterialIndexByKey;

/// @brief Field _photonView, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ____photonView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MaterialCycler::MaterialCyclerManager, ____SyncTimeOut_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCyclerManager, ____cyclers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCyclerManager, ____numMaterialsByKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCyclerManager, ____currentMaterialIndexByKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCyclerManager, ____photonView) == 0x40, "Offset mismatch!");

static_assert(sizeof(::MaterialCycler::MaterialCyclerManager) == 0x48, "Size mismatch!");

} // namespace end def MaterialCycler
