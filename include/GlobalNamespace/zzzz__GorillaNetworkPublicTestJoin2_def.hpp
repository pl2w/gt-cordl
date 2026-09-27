#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkPublicTestJoin2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaLevelScreen_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaNetworkPublicTestJoin2)
namespace GlobalNamespace {
class GorillaNetworkPublicTestJoin2__GracePeriod_d__16;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaNetworking {
class PhotonNetworkController;
}
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaNetworkPublicTestJoin2;
}
namespace GlobalNamespace {
class GorillaNetworkPublicTestJoin2__GracePeriod_d__16;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaNetworkPublicTestJoin2*);
MARK_REF_T(::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaNetworkPublicTestJoin2*, "", "GorillaNetworkPublicTestJoin2");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16*, "", "GorillaNetworkPublicTestJoin2/<GracePeriod>d__16");
// Dependencies GorillaLevelScreen, GorillaTriggerBox, UnityEngine.GameObject, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaNetworkPublicTestJoin2
class CORDL_TYPE GorillaNetworkPublicTestJoin2 : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
using _GracePeriod_d__16 = ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16;

/// @brief Field componentTarget, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentTarget, put=__cordl_internal_set_componentTarget)) ::UnityW<::UnityEngine::GameObject>  componentTarget;

/// @brief Field componentTypeToAdd, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentTypeToAdd, put=__cordl_internal_set_componentTypeToAdd)) ::StringW  componentTypeToAdd;

/// @brief Field fotVew, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_fotVew, put=__cordl_internal_set_fotVew)) ::UnityW<::Photon::Pun::PhotonView>  fotVew;

/// @brief Field gameModeName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeName, put=__cordl_internal_set_gameModeName)) ::StringW  gameModeName;

/// @brief Field joinScreens, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinScreens, put=__cordl_internal_set_joinScreens)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>  joinScreens;

/// @brief Field lastPosition, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field leaveScreens, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_leaveScreens, put=__cordl_internal_set_leaveScreens)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>  leaveScreens;

/// @brief Field makeSureThisIsDisabled, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsDisabled, put=__cordl_internal_set_makeSureThisIsDisabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureThisIsDisabled;

/// @brief Field makeSureThisIsEnabled, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_makeSureThisIsEnabled, put=__cordl_internal_set_makeSureThisIsEnabled)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  makeSureThisIsEnabled;

/// @brief Field othsTosPosition, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_othsTosPosition, put=__cordl_internal_set_othsTosPosition)) ::UnityW<::UnityEngine::Transform>  othsTosPosition;

/// @brief Field photonNetworkController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonNetworkController, put=__cordl_internal_set_photonNetworkController)) ::UnityW<::GorillaNetworking::PhotonNetworkController>  photonNetworkController;

/// @brief Field tempRig, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempRig, put=__cordl_internal_set_tempRig)) ::UnityW<::GlobalNamespace::VRRig>  tempRig;

/// @brief Field tosPition, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_tosPition, put=__cordl_internal_set_tosPition)) ::UnityW<::UnityEngine::Transform>  tosPition;

/// @brief Field waiting, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_waiting, put=__cordl_internal_set_waiting)) bool  waiting;

/// @brief Method Awake, addr 0x5aadfe0, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(GorillaNetworkPublicTestJoin2::<GracePeriod>d__16))]
/// @brief Method GracePeriod, addr 0x5aae544, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GracePeriod() ;

/// @brief Method LateUpdate, addr 0x5aadfe4, size 0x560, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaNetworkPublicTestJoin2* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_componentTarget() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_componentTarget() ;

constexpr ::StringW const& __cordl_internal_get_componentTypeToAdd() const;

constexpr ::StringW& __cordl_internal_get_componentTypeToAdd() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_fotVew() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_fotVew() ;

constexpr ::StringW const& __cordl_internal_get_gameModeName() const;

constexpr ::StringW& __cordl_internal_get_gameModeName() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>> const& __cordl_internal_get_joinScreens() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>& __cordl_internal_get_joinScreens() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>> const& __cordl_internal_get_leaveScreens() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>& __cordl_internal_get_leaveScreens() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureThisIsDisabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureThisIsDisabled() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_makeSureThisIsEnabled() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_makeSureThisIsEnabled() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_othsTosPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_othsTosPosition() ;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController> const& __cordl_internal_get_photonNetworkController() const;

constexpr ::UnityW<::GorillaNetworking::PhotonNetworkController>& __cordl_internal_get_photonNetworkController() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_tempRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_tempRig() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tosPition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tosPition() ;

constexpr bool const& __cordl_internal_get_waiting() const;

constexpr bool& __cordl_internal_get_waiting() ;

constexpr void __cordl_internal_set_componentTarget(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_componentTypeToAdd(::StringW  value) ;

constexpr void __cordl_internal_set_fotVew(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_gameModeName(::StringW  value) ;

constexpr void __cordl_internal_set_joinScreens(::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leaveScreens(::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>  value) ;

constexpr void __cordl_internal_set_makeSureThisIsDisabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_makeSureThisIsEnabled(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_othsTosPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_photonNetworkController(::UnityW<::GorillaNetworking::PhotonNetworkController>  value) ;

constexpr void __cordl_internal_set_tempRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_tosPition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_waiting(bool  value) ;

/// @brief Method .ctor, addr 0x5aae5d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkPublicTestJoin2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkPublicTestJoin2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkPublicTestJoin2(GorillaNetworkPublicTestJoin2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkPublicTestJoin2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkPublicTestJoin2(GorillaNetworkPublicTestJoin2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3281};

/// @brief Field makeSureThisIsDisabled, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureThisIsDisabled;

/// @brief Field makeSureThisIsEnabled, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___makeSureThisIsEnabled;

/// @brief Field gameModeName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___gameModeName;

/// @brief Field photonNetworkController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PhotonNetworkController>  ___photonNetworkController;

/// @brief Field componentTypeToAdd, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___componentTypeToAdd;

/// @brief Field componentTarget, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___componentTarget;

/// @brief Field joinScreens, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>  ___joinScreens;

/// @brief Field leaveScreens, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaLevelScreen>>  ___leaveScreens;

/// @brief Field tosPition, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tosPition;

/// @brief Field othsTosPosition, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___othsTosPosition;

/// @brief Field fotVew, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___fotVew;

/// @brief Field waiting, offset: 0x78, size: 0x1, def value: None
 bool  ___waiting;

/// @brief Field lastPosition, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field tempRig, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___tempRig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___makeSureThisIsDisabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___makeSureThisIsEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___gameModeName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___photonNetworkController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___componentTypeToAdd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___componentTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___joinScreens) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___leaveScreens) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___tosPition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___othsTosPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___fotVew) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___waiting) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___lastPosition) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2, ___tempRig) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaNetworkPublicTestJoin2) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaNetworkPublicTestJoin2/<GracePeriod>d__16
class CORDL_TYPE GorillaNetworkPublicTestJoin2__GracePeriod_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaNetworkPublicTestJoin2>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5aae5e4, size 0x838, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5aaee1c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5aaee24, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5aaee5c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5aae5e0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaNetworkPublicTestJoin2> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaNetworkPublicTestJoin2>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaNetworkPublicTestJoin2>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5aae5b0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkPublicTestJoin2__GracePeriod_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkPublicTestJoin2__GracePeriod_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNetworkPublicTestJoin2__GracePeriod_d__16(GorillaNetworkPublicTestJoin2__GracePeriod_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNetworkPublicTestJoin2__GracePeriod_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNetworkPublicTestJoin2__GracePeriod_d__16(GorillaNetworkPublicTestJoin2__GracePeriod_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3280};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaNetworkPublicTestJoin2>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaNetworkPublicTestJoin2__GracePeriod_d__16) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
