#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignalRelay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourStatic_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTSignalRelay)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
class GTSignalListener;
}
namespace Photon::Realtime {
class IOnEventCallback;
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
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GTSignalRelay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTSignalRelay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSignalRelay*, "", "GTSignalRelay");
// Dependencies MonoBehaviourStatic`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTSignalRelay
class CORDL_TYPE GTSignalRelay : public ::GlobalNamespace::MonoBehaviourStatic_1<::UnityW<::GlobalNamespace::GTSignalRelay>> {
public:
// Declarations
/// @brief Field gActiveListeners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gActiveListeners, put=setStaticF_gActiveListeners)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  gActiveListeners;

/// @brief Field gListenerSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gListenerSet, put=setStaticF_gListenerSet)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  gListenerSet;

/// @brief Field gSignalIdToListeners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gSignalIdToListeners, put=setStaticF_gSignalIdToListeners)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>*  gSignalIdToListeners;

/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr operator  ::Photon::Realtime::IOnEventCallback*() noexcept;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitializeOnLoad, addr 0x594af88, size 0xc4, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

static inline ::GlobalNamespace::GTSignalRelay* New_ctor() ;

/// @brief Method OnDisable, addr 0x594aef4, size 0x94, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x594ae60, size 0x94, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Photon.Realtime.IOnEventCallback.OnEvent, addr 0x594b04c, size 0x2c8, virtual true, abstract: false, final true
inline void Photon_Realtime_IOnEventCallback_OnEvent(::ExitGames::Client::Photon::EventData*  eventData) ;

/// @brief Method Register, addr 0x594a904, size 0x294, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::GTSignalListener*  listener) ;

/// @brief Method Unregister, addr 0x594abfc, size 0x148, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::GTSignalListener*  listener) ;

/// @brief Method .ctor, addr 0x594b314, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>* getStaticF_gActiveListeners() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GTSignalListener>>* getStaticF_gListenerSet() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>* getStaticF_gSignalIdToListeners() ;

/// @brief Method get_ActiveListeners, addr 0x594ae08, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::GTSignalListener>>* get_ActiveListeners() ;

/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* i___Photon__Realtime__IOnEventCallback() noexcept;

static inline void setStaticF_gActiveListeners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  value) ;

static inline void setStaticF_gListenerSet(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::GTSignalListener>>*  value) ;

static inline void setStaticF_gSignalIdToListeners(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTSignalListener>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSignalRelay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSignalRelay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSignalRelay(GTSignalRelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSignalRelay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSignalRelay(GTSignalRelay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2292};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTSignalRelay) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
