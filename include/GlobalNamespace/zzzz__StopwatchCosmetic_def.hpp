#pragma once
// IWYU pragma private; include "GlobalNamespace/StopwatchCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StopwatchCosmetic)
namespace GlobalNamespace {
class PhotonEvent;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class StopwatchFace;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class StopwatchCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StopwatchCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StopwatchCosmetic*, "", "StopwatchCosmetic");
// Dependencies TransferrableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: StopwatchCosmetic
class CORDL_TYPE StopwatchCosmetic : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field _activated, offset 0x348, size 0x1 
 __declspec(property(get=__cordl_internal_get__activated, put=__cordl_internal_set__activated)) bool  _activated;

/// @brief Field _activeTimeElapsed, offset 0x344, size 0x4 
 __declspec(property(get=__cordl_internal_get__activeTimeElapsed, put=__cordl_internal_set__activeTimeElapsed)) float_t  _activeTimeElapsed;

/// @brief Field _isActivating, offset 0x340, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActivating, put=__cordl_internal_set__isActivating)) bool  _isActivating;

/// @brief Field _photonID, offset 0x34c, size 0x4 
 __declspec(property(get=__cordl_internal_get__photonID, put=__cordl_internal_set__photonID)) int32_t  _photonID;

/// @brief Field _watchFace, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get__watchFace, put=__cordl_internal_set__watchFace)) ::UnityW<::GlobalNamespace::StopwatchFace>  _watchFace;

/// @brief Field _watchReset, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get__watchReset, put=__cordl_internal_set__watchReset)) ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  _watchReset;

/// @brief Field _watchToggle, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get__watchToggle, put=__cordl_internal_set__watchToggle)) ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  _watchToggle;

 __declspec(property(get=get_activeTimeElapsed)) float_t  activeTimeElapsed;

/// @brief Field disableActivation, offset 0x360, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableActivation, put=__cordl_internal_set_disableActivation)) bool  disableActivation;

/// @brief Field disableDeactivation, offset 0x361, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableDeactivation, put=__cordl_internal_set_disableDeactivation)) bool  disableDeactivation;

/// @brief Field gWatchResetRPC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gWatchResetRPC, put=setStaticF_gWatchResetRPC)) ::GlobalNamespace::PhotonEvent*  gWatchResetRPC;

/// @brief Field gWatchToggleRPC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gWatchToggleRPC, put=setStaticF_gWatchToggleRPC)) ::GlobalNamespace::PhotonEvent*  gWatchToggleRPC;

 __declspec(property(get=get_isActivating)) bool  isActivating;

/// @brief Method Awake, addr 0x5790b58, size 0x234, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanActivate, addr 0x579183c, size 0x10, virtual true, abstract: false, final false
inline bool CanActivate() ;

/// @brief Method CanDeactivate, addr 0x579184c, size 0x10, virtual true, abstract: false, final false
inline bool CanDeactivate() ;

/// @brief Method FetchMyViewID, addr 0x5790e9c, size 0x200, virtual false, abstract: false, final false
inline bool FetchMyViewID(::by_ref<int32_t>  viewID) ;

static inline ::GlobalNamespace::StopwatchCosmetic* New_ctor() ;

/// @brief Method OnActivate, addr 0x57915e8, size 0x54, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDeactivate, addr 0x579163c, size 0x200, virtual true, abstract: false, final false
inline void OnDeactivate() ;

/// @brief Method OnDisable, addr 0x579109c, size 0xe0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5790d8c, size 0x110, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnWatchReset, addr 0x579132c, size 0x15c, virtual false, abstract: false, final false
inline void OnWatchReset(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnWatchToggle, addr 0x579117c, size 0x1b0, virtual false, abstract: false, final false
inline void OnWatchToggle(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method PollActivated, addr 0x5791488, size 0x18, virtual false, abstract: false, final false
inline bool PollActivated() ;

/// @brief Method TriggeredLateUpdate, addr 0x57914a0, size 0x148, virtual true, abstract: false, final false
inline void TriggeredLateUpdate() ;

constexpr bool const& __cordl_internal_get__activated() const;

constexpr bool& __cordl_internal_get__activated() ;

constexpr float_t const& __cordl_internal_get__activeTimeElapsed() const;

constexpr float_t& __cordl_internal_get__activeTimeElapsed() ;

constexpr bool const& __cordl_internal_get__isActivating() const;

constexpr bool& __cordl_internal_get__isActivating() ;

constexpr int32_t const& __cordl_internal_get__photonID() const;

constexpr int32_t& __cordl_internal_get__photonID() ;

constexpr ::UnityW<::GlobalNamespace::StopwatchFace> const& __cordl_internal_get__watchFace() const;

constexpr ::UnityW<::GlobalNamespace::StopwatchFace>& __cordl_internal_get__watchFace() ;

constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>* const& __cordl_internal_get__watchReset() const;

constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*& __cordl_internal_get__watchReset() ;

constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>* const& __cordl_internal_get__watchToggle() const;

constexpr ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*& __cordl_internal_get__watchToggle() ;

constexpr bool const& __cordl_internal_get_disableActivation() const;

constexpr bool& __cordl_internal_get_disableActivation() ;

constexpr bool const& __cordl_internal_get_disableDeactivation() const;

constexpr bool& __cordl_internal_get_disableDeactivation() ;

constexpr void __cordl_internal_set__activated(bool  value) ;

constexpr void __cordl_internal_set__activeTimeElapsed(float_t  value) ;

constexpr void __cordl_internal_set__isActivating(bool  value) ;

constexpr void __cordl_internal_set__photonID(int32_t  value) ;

constexpr void __cordl_internal_set__watchFace(::UnityW<::GlobalNamespace::StopwatchFace>  value) ;

constexpr void __cordl_internal_set__watchReset(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  value) ;

constexpr void __cordl_internal_set__watchToggle(::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  value) ;

constexpr void __cordl_internal_set_disableActivation(bool  value) ;

constexpr void __cordl_internal_set_disableDeactivation(bool  value) ;

/// @brief Method .ctor, addr 0x579185c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::PhotonEvent* getStaticF_gWatchResetRPC() ;

static inline ::GlobalNamespace::PhotonEvent* getStaticF_gWatchToggleRPC() ;

/// @brief Method get_activeTimeElapsed, addr 0x5790b50, size 0x8, virtual false, abstract: false, final false
inline float_t get_activeTimeElapsed() ;

/// @brief Method get_isActivating, addr 0x5790b48, size 0x8, virtual false, abstract: false, final false
inline bool get_isActivating() ;

static inline void setStaticF_gWatchResetRPC(::GlobalNamespace::PhotonEvent*  value) ;

static inline void setStaticF_gWatchToggleRPC(::GlobalNamespace::PhotonEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StopwatchCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StopwatchCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StopwatchCosmetic(StopwatchCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StopwatchCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StopwatchCosmetic(StopwatchCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1447};

/// [SerializeField]
/// @brief Field _watchFace, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::StopwatchFace>  ____watchFace;

/// [Space]
/// @brief Field _isActivating, offset: 0x340, size: 0x1, def value: None
 bool  ____isActivating;

/// @brief Field _activeTimeElapsed, offset: 0x344, size: 0x4, def value: None
 float_t  ____activeTimeElapsed;

/// @brief Field _activated, offset: 0x348, size: 0x1, def value: None
 bool  ____activated;

/// [Space]
/// @brief Field _photonID, offset: 0x34c, size: 0x4, def value: None
 int32_t  ____photonID;

/// @brief Field _watchToggle, offset: 0x350, size: 0x8, def value: None
 ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  ____watchToggle;

/// @brief Field _watchReset, offset: 0x358, size: 0x8, def value: None
 ::System::Action_4<int32_t,int32_t,::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*  ____watchReset;

/// [DebugOption]
/// @brief Field disableActivation, offset: 0x360, size: 0x1, def value: None
 bool  ___disableActivation;

/// [DebugOption]
/// @brief Field disableDeactivation, offset: 0x361, size: 0x1, def value: None
 bool  ___disableDeactivation;

/// @brief Size padding 0x398 - 0x368 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ____watchFace) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ____isActivating) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ____activeTimeElapsed) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ____activated) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ____photonID) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ____watchToggle) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ____watchReset) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ___disableActivation) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StopwatchCosmetic, ___disableDeactivation) == 0x361, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StopwatchCosmetic) == 0x398, "Size mismatch!");

} // namespace end def GlobalNamespace
