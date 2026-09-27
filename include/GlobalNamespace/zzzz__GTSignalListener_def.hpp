#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSignalListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTSignalID_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTSignalListener)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class GTSignalListener;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTSignalListener*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTSignalListener*, "", "GTSignalListener");
// Dependencies GTSignalID, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTSignalListener
class CORDL_TYPE GTSignalListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _callLimits, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__callLimits, put=__cordl_internal_set__callLimits)) ::GlobalNamespace::CallLimiter*  _callLimits;

/// @brief Field <rigActorID>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__rigActorID_k__BackingField, put=__cordl_internal_set__rigActorID_k__BackingField)) int32_t  _rigActorID_k__BackingField;

/// @brief Field callUnityEvent, offset 0x37, size 0x1 
 __declspec(property(get=__cordl_internal_get_callUnityEvent, put=__cordl_internal_set_callUnityEvent)) bool  callUnityEvent;

/// @brief Field deafen, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_deafen, put=__cordl_internal_set_deafen)) bool  deafen;

/// @brief Field ignoreSelf, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreSelf, put=__cordl_internal_set_ignoreSelf)) bool  ignoreSelf;

/// @brief Field listenToSelfOnly, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_listenToSelfOnly, put=__cordl_internal_set_listenToSelfOnly)) bool  listenToSelfOnly;

/// @brief Field onSignalReceived, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSignalReceived, put=__cordl_internal_set_onSignalReceived)) ::UnityEngine::Events::UnityEvent*  onSignalReceived;

/// @brief Field rig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

 __declspec(property(get=get_rigActorID, put=set_rigActorID)) int32_t  rigActorID;

/// @brief Field signal, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_signal, put=__cordl_internal_set_signal)) ::GlobalNamespace::GTSignalID  signal;

/// @brief Method Awake, addr 0x594a7b8, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleSignalReceived, addr 0x594ad7c, size 0x4, virtual true, abstract: false, final false
inline void HandleSignalReceived(int32_t  sender, ::ArrayW<::System::Object*>  args) ;

/// @brief Method IsReady, addr 0x594ad44, size 0x2c, virtual true, abstract: false, final false
inline bool IsReady() ;

static inline ::GlobalNamespace::GTSignalListener* New_ctor() ;

/// @brief Method OnDisable, addr 0x594ab98, size 0x64, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x594a7c4, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnListenerAwake, addr 0x594ad70, size 0x4, virtual true, abstract: false, final false
inline void OnListenerAwake() ;

/// @brief Method OnListenerDisable, addr 0x594ad78, size 0x4, virtual true, abstract: false, final false
inline void OnListenerDisable() ;

/// @brief Method OnListenerEnable, addr 0x594ad74, size 0x4, virtual true, abstract: false, final false
inline void OnListenerEnable() ;

/// @brief Method RefreshActorID, addr 0x594a830, size 0xd4, virtual false, abstract: false, final false
inline void RefreshActorID() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get__callLimits() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get__callLimits() ;

constexpr int32_t const& __cordl_internal_get__rigActorID_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__rigActorID_k__BackingField() ;

constexpr bool const& __cordl_internal_get_callUnityEvent() const;

constexpr bool& __cordl_internal_get_callUnityEvent() ;

constexpr bool const& __cordl_internal_get_deafen() const;

constexpr bool& __cordl_internal_get_deafen() ;

constexpr bool const& __cordl_internal_get_ignoreSelf() const;

constexpr bool& __cordl_internal_get_ignoreSelf() ;

constexpr bool const& __cordl_internal_get_listenToSelfOnly() const;

constexpr bool& __cordl_internal_get_listenToSelfOnly() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onSignalReceived() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onSignalReceived() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::GlobalNamespace::GTSignalID const& __cordl_internal_get_signal() const;

constexpr ::GlobalNamespace::GTSignalID& __cordl_internal_get_signal() ;

constexpr void __cordl_internal_set__callLimits(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set__rigActorID_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_callUnityEvent(bool  value) ;

constexpr void __cordl_internal_set_deafen(bool  value) ;

constexpr void __cordl_internal_set_ignoreSelf(bool  value) ;

constexpr void __cordl_internal_set_listenToSelfOnly(bool  value) ;

constexpr void __cordl_internal_set_onSignalReceived(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_signal(::GlobalNamespace::GTSignalID  value) ;

/// @brief Method .ctor, addr 0x594ad80, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_rigActorID, addr 0x594a7a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_rigActorID() ;

/// [CompilerGenerated]
/// @brief Method set_rigActorID, addr 0x594a7b0, size 0x8, virtual false, abstract: false, final false
inline void set_rigActorID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSignalListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSignalListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSignalListener(GTSignalListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSignalListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSignalListener(GTSignalListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2291};

/// [Space]
/// @brief Field signal, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTSignalID  ___signal;

/// [Space]
/// @brief Field rig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// [CompilerGenerated]
/// @brief Field <rigActorID>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____rigActorID_k__BackingField;

/// [Space]
/// @brief Field deafen, offset: 0x34, size: 0x1, def value: None
 bool  ___deafen;

/// [FormerlySerializedAs("listenToRigOnly")]
/// @brief Field listenToSelfOnly, offset: 0x35, size: 0x1, def value: None
 bool  ___listenToSelfOnly;

/// @brief Field ignoreSelf, offset: 0x36, size: 0x1, def value: None
 bool  ___ignoreSelf;

/// [Space]
/// @brief Field callUnityEvent, offset: 0x37, size: 0x1, def value: None
 bool  ___callUnityEvent;

/// [Space]
/// [SerializeField]
/// @brief Field _callLimits, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ____callLimits;

/// [Space]
/// @brief Field onSignalReceived, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onSignalReceived;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTSignalListener, ___signal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalListener, ___rig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalListener, ____rigActorID_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalListener, ___deafen) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalListener, ___listenToSelfOnly) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalListener, ___ignoreSelf) == 0x36, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalListener, ___callUnityEvent) == 0x37, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalListener, ____callLimits) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTSignalListener, ___onSignalReceived) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTSignalListener) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
