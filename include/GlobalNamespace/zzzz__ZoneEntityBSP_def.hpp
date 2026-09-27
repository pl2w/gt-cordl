#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneEntityBSP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZoneEntityBSP)
namespace GlobalNamespace {
struct GTSubZone;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
struct GroupJoinZoneAB;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class ZoneDef;
}
namespace GlobalNamespace {
class ZoneEntityBSP_PlayerZoneChange;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ZoneEntityBSP;
}
namespace GlobalNamespace {
class ZoneEntityBSP_PlayerZoneChange;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneEntityBSP*);
MARK_REF_T(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneEntityBSP*, "", "ZoneEntityBSP");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*, "", "ZoneEntityBSP/PlayerZoneChange");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneEntityBSP
class CORDL_TYPE ZoneEntityBSP : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayerZoneChange = ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange;

 __declspec(property(get=get_GroupZone)) ::GlobalNamespace::GroupJoinZoneAB  GroupZone;

/// @brief Field _emitTelemetry, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__emitTelemetry, put=__cordl_internal_set__emitTelemetry)) bool  _emitTelemetry;

/// @brief Field _entityRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__entityRig, put=__cordl_internal_set__entityRig)) ::UnityW<::GlobalNamespace::VRRig>  _entityRig;

/// @brief Field currentNode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentNode, put=__cordl_internal_set_currentNode)) ::UnityW<::GlobalNamespace::ZoneDef>  currentNode;

 __declspec(property(get=get_currentSubZone)) ::GlobalNamespace::GTSubZone  currentSubZone;

 __declspec(property(get=get_currentZone)) ::GlobalNamespace::GTZone  currentZone;

 __declspec(property(get=get_entityRig)) ::UnityW<::GlobalNamespace::VRRig>  entityRig;

/// @brief Field isUpdateDisabled, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isUpdateDisabled, put=__cordl_internal_set_isUpdateDisabled)) bool  isUpdateDisabled;

/// @brief Field lastEnteredNode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastEnteredNode, put=__cordl_internal_set_lastEnteredNode)) ::UnityW<::GlobalNamespace::ZoneDef>  lastEnteredNode;

/// @brief Field lastExitedNode, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastExitedNode, put=__cordl_internal_set_lastExitedNode)) ::UnityW<::GlobalNamespace::ZoneDef>  lastExitedNode;

/// @brief Field onPlayerZoneChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPlayerZoneChange, put=setStaticF_onPlayerZoneChange)) ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*  onPlayerZoneChange;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method DisableZoneChanges, addr 0x5b4a3bc, size 0xc, virtual false, abstract: false, final false
inline void DisableZoneChanges() ;

/// @brief Method EnableZoneChanges, addr 0x5b4a3b4, size 0x8, virtual false, abstract: false, final false
inline void EnableZoneChanges() ;

static inline ::GlobalNamespace::ZoneEntityBSP* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b4a3a8, size 0xc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b4a39c, size 0xc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5b4a0f0, size 0x2ac, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5b4a0cc, size 0x24, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__emitTelemetry() const;

constexpr bool& __cordl_internal_get__emitTelemetry() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__entityRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__entityRig() ;

constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& __cordl_internal_get_currentNode() const;

constexpr ::UnityW<::GlobalNamespace::ZoneDef>& __cordl_internal_get_currentNode() ;

constexpr bool const& __cordl_internal_get_isUpdateDisabled() const;

constexpr bool& __cordl_internal_get_isUpdateDisabled() ;

constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& __cordl_internal_get_lastEnteredNode() const;

constexpr ::UnityW<::GlobalNamespace::ZoneDef>& __cordl_internal_get_lastEnteredNode() ;

constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& __cordl_internal_get_lastExitedNode() const;

constexpr ::UnityW<::GlobalNamespace::ZoneDef>& __cordl_internal_get_lastExitedNode() ;

constexpr void __cordl_internal_set__emitTelemetry(bool  value) ;

constexpr void __cordl_internal_set__entityRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_currentNode(::UnityW<::GlobalNamespace::ZoneDef>  value) ;

constexpr void __cordl_internal_set_isUpdateDisabled(bool  value) ;

constexpr void __cordl_internal_set_lastEnteredNode(::UnityW<::GlobalNamespace::ZoneDef>  value) ;

constexpr void __cordl_internal_set_lastExitedNode(::UnityW<::GlobalNamespace::ZoneDef>  value) ;

/// @brief Method .ctor, addr 0x5b4a3c8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPlayerZoneChange, addr 0x5b49f0c, size 0xb8, virtual false, abstract: false, final false
static inline void add_onPlayerZoneChange(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*  value) ;

static inline ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange* getStaticF_onPlayerZoneChange() ;

/// @brief Method get_GroupZone, addr 0x5b4a0b4, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::GroupJoinZoneAB get_GroupZone() ;

/// @brief Method get_currentSubZone, addr 0x5b4a09c, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTSubZone get_currentSubZone() ;

/// @brief Method get_currentZone, addr 0x5b4a084, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone get_currentZone() ;

/// @brief Method get_entityRig, addr 0x5b4a07c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_entityRig() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_onPlayerZoneChange, addr 0x5b49fc4, size 0xb8, virtual false, abstract: false, final false
static inline void remove_onPlayerZoneChange(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*  value) ;

static inline void setStaticF_onPlayerZoneChange(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneEntityBSP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneEntityBSP", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneEntityBSP(ZoneEntityBSP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneEntityBSP", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneEntityBSP(ZoneEntityBSP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3741};

/// [Space]
/// [SerializeField]
/// @brief Field _emitTelemetry, offset: 0x20, size: 0x1, def value: None
 bool  ____emitTelemetry;

/// [Space]
/// [SerializeField]
/// @brief Field _entityRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____entityRig;

/// [Space]
/// @brief Field currentNode, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneDef>  ___currentNode;

/// @brief Field lastEnteredNode, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneDef>  ___lastEnteredNode;

/// @brief Field lastExitedNode, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneDef>  ___lastExitedNode;

/// @brief Field isUpdateDisabled, offset: 0x48, size: 0x1, def value: None
 bool  ___isUpdateDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneEntityBSP, ____emitTelemetry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneEntityBSP, ____entityRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneEntityBSP, ___currentNode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneEntityBSP, ___lastEnteredNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneEntityBSP, ___lastExitedNode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneEntityBSP, ___isUpdateDisabled) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneEntityBSP) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneEntityBSP/PlayerZoneChange
class CORDL_TYPE ZoneEntityBSP_PlayerZoneChange : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b4a4f8, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GTZone  fromZone, ::GlobalNamespace::GTZone  toZone, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b4a5a8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b4a4e4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GTZone  fromZone, ::GlobalNamespace::GTZone  toZone) ;

static inline ::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b4a3d8, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneEntityBSP_PlayerZoneChange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneEntityBSP_PlayerZoneChange", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneEntityBSP_PlayerZoneChange(ZoneEntityBSP_PlayerZoneChange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneEntityBSP_PlayerZoneChange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneEntityBSP_PlayerZoneChange(ZoneEntityBSP_PlayerZoneChange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3740};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ZoneEntityBSP_PlayerZoneChange) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
