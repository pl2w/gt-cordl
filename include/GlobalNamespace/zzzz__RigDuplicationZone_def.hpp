#pragma once
// IWYU pragma private; include "GlobalNamespace/RigDuplicationZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RigDisplacementZone_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RigDuplicationZone)
namespace GlobalNamespace {
class RigDuplicationZone_RigDuplicationZoneAction;
}
namespace GlobalNamespace {
class VRRig;
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RigDuplicationZone;
}
namespace GlobalNamespace {
class RigDuplicationZone_RigDuplicationZoneAction;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigDuplicationZone*);
MARK_REF_T(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigDuplicationZone*, "", "RigDuplicationZone");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction*, "", "RigDuplicationZone/RigDuplicationZoneAction");
// Dependencies RigDisplacementZone
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigDuplicationZone
class CORDL_TYPE RigDuplicationZone : public ::GlobalNamespace::RigDisplacementZone {
public:
// Declarations
using RigDuplicationZoneAction = ::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction;

 __declspec(property(get=get_Id)) ::StringW  Id;

/// @brief Field OnEnabled, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEnabled, put=setStaticF_OnEnabled)) ::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction*  OnEnabled;

/// @brief Field id, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field otherZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherZone, put=__cordl_internal_set_otherZone)) ::UnityW<::GlobalNamespace::RigDuplicationZone>  otherZone;

/// @brief Field seeSwapFromZone, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_seeSwapFromZone, put=__cordl_internal_set_seeSwapFromZone)) ::UnityW<::GlobalNamespace::RigDuplicationZone>  seeSwapFromZone;

/// @brief Method GetDisplacementForRig, addr 0x57414a0, size 0x180, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetDisplacementForRig(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  undisplacedPosition) ;

/// @brief Method IsDisplacingRig, addr 0x5741620, size 0x18, virtual true, abstract: false, final false
inline bool IsDisplacingRig(::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::RigDuplicationZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x57412cc, size 0x80, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5741104, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RigDuplicationZone_OnEnabled, addr 0x574134c, size 0xb0, virtual false, abstract: false, final false
inline void RigDuplicationZone_OnEnabled(::GlobalNamespace::RigDuplicationZone*  z) ;

/// @brief Method SetOtherZone, addr 0x57413fc, size 0xa4, virtual false, abstract: false, final false
inline void SetOtherZone(::GlobalNamespace::RigDuplicationZone*  z) ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::UnityW<::GlobalNamespace::RigDuplicationZone> const& __cordl_internal_get_otherZone() const;

constexpr ::UnityW<::GlobalNamespace::RigDuplicationZone>& __cordl_internal_get_otherZone() ;

constexpr ::UnityW<::GlobalNamespace::RigDuplicationZone> const& __cordl_internal_get_seeSwapFromZone() const;

constexpr ::UnityW<::GlobalNamespace::RigDuplicationZone>& __cordl_internal_get_seeSwapFromZone() ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_otherZone(::UnityW<::GlobalNamespace::RigDuplicationZone>  value) ;

constexpr void __cordl_internal_set_seeSwapFromZone(::UnityW<::GlobalNamespace::RigDuplicationZone>  value) ;

/// @brief Method .ctor, addr 0x5741638, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnEnabled, addr 0x5740f8c, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnEnabled(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction*  value) ;

static inline ::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction* getStaticF_OnEnabled() ;

/// @brief Method get_Id, addr 0x57410fc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Id() ;

/// [CompilerGenerated]
/// @brief Method remove_OnEnabled, addr 0x5741044, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnEnabled(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction*  value) ;

static inline void setStaticF_OnEnabled(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigDuplicationZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigDuplicationZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigDuplicationZone(RigDuplicationZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigDuplicationZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigDuplicationZone(RigDuplicationZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1249};

/// @brief Field otherZone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigDuplicationZone>  ___otherZone;

/// [SerializeField]
/// @brief Field id, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___id;

/// [Tooltip("Leave blank for a regular duplication zone. For a portal effect, set this to the zone from which players looking at this zone should see its contents swapped")]
/// [SerializeField]
/// @brief Field seeSwapFromZone, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigDuplicationZone>  ___seeSwapFromZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigDuplicationZone, ___otherZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigDuplicationZone, ___id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigDuplicationZone, ___seeSwapFromZone) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigDuplicationZone) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigDuplicationZone/RigDuplicationZoneAction
class CORDL_TYPE RigDuplicationZone_RigDuplicationZoneAction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5741654, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::RigDuplicationZone*  z, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5741674, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5741640, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::RigDuplicationZone*  z) ;

static inline ::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x57411c4, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigDuplicationZone_RigDuplicationZoneAction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigDuplicationZone_RigDuplicationZoneAction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigDuplicationZone_RigDuplicationZoneAction(RigDuplicationZone_RigDuplicationZoneAction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigDuplicationZone_RigDuplicationZoneAction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigDuplicationZone_RigDuplicationZoneAction(RigDuplicationZone_RigDuplicationZoneAction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1248};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RigDuplicationZone_RigDuplicationZoneAction) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
