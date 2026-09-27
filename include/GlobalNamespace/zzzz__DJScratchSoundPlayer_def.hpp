#pragma once
// IWYU pragma private; include "GlobalNamespace/DJScratchSoundPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DJScratchSoundPlayer)
namespace GlobalNamespace {
class DJScratchtable;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
struct ScratchSoundType;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class DJScratchSoundPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DJScratchSoundPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DJScratchSoundPlayer*, "", "DJScratchSoundPlayer");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DJScratchSoundPlayer
class CORDL_TYPE DJScratchSoundPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field _events, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field myRig, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field scratchBack, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scratchBack, put=__cordl_internal_set_scratchBack)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  scratchBack;

/// @brief Field scratchForward, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scratchForward, put=__cordl_internal_set_scratchForward)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  scratchForward;

/// @brief Field scratchPause, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_scratchPause, put=__cordl_internal_set_scratchPause)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  scratchPause;

/// @brief Field scratchResume, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scratchResume, put=__cordl_internal_set_scratchResume)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  scratchResume;

/// @brief Field scratchTableLeft, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_scratchTableLeft, put=__cordl_internal_set_scratchTableLeft)) ::UnityW<::GlobalNamespace::DJScratchtable>  scratchTableLeft;

/// @brief Field scratchTableRight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_scratchTableRight, put=__cordl_internal_set_scratchTableRight)) ::UnityW<::GlobalNamespace::DJScratchtable>  scratchTableRight;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

static inline ::GlobalNamespace::DJScratchSoundPlayer* New_ctor() ;

/// @brief Method OnDespawn, addr 0x564b93c, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x564bb40, size 0x134, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x564b940, size 0x200, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayEvent, addr 0x564bee4, size 0x174, virtual false, abstract: false, final false
inline void OnPlayEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnSpawn, addr 0x564bc74, size 0x6c, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Play, addr 0x564bce0, size 0x118, virtual false, abstract: false, final false
inline void Play(::GlobalNamespace::ScratchSoundType  type, bool  isLeft) ;

/// @brief Method PlayLocal, addr 0x564bdf8, size 0xec, virtual false, abstract: false, final false
inline void PlayLocal(::GlobalNamespace::ScratchSoundType  type, bool  isLeft) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_scratchBack() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_scratchBack() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_scratchForward() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_scratchForward() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_scratchPause() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_scratchPause() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_scratchResume() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_scratchResume() ;

constexpr ::UnityW<::GlobalNamespace::DJScratchtable> const& __cordl_internal_get_scratchTableLeft() const;

constexpr ::UnityW<::GlobalNamespace::DJScratchtable>& __cordl_internal_get_scratchTableLeft() ;

constexpr ::UnityW<::GlobalNamespace::DJScratchtable> const& __cordl_internal_get_scratchTableRight() const;

constexpr ::UnityW<::GlobalNamespace::DJScratchtable>& __cordl_internal_get_scratchTableRight() ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_scratchBack(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_scratchForward(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_scratchPause(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_scratchResume(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_scratchTableLeft(::UnityW<::GlobalNamespace::DJScratchtable>  value) ;

constexpr void __cordl_internal_set_scratchTableRight(::UnityW<::GlobalNamespace::DJScratchtable>  value) ;

/// @brief Method .ctor, addr 0x564c0e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x564b92c, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x564b91c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x564b934, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x564b924, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DJScratchSoundPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DJScratchSoundPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DJScratchSoundPlayer(DJScratchSoundPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DJScratchSoundPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DJScratchSoundPlayer(DJScratchSoundPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{707};

/// [SerializeField]
/// @brief Field scratchForward, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___scratchForward;

/// [SerializeField]
/// @brief Field scratchBack, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___scratchBack;

/// [SerializeField]
/// @brief Field scratchPause, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___scratchPause;

/// [SerializeField]
/// @brief Field scratchResume, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___scratchResume;

/// [SerializeField]
/// @brief Field scratchTableLeft, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DJScratchtable>  ___scratchTableLeft;

/// [SerializeField]
/// @brief Field scratchTableRight, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DJScratchtable>  ___scratchTableRight;

/// @brief Field _events, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field myRig, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x64, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ___scratchForward) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ___scratchBack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ___scratchPause) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ___scratchResume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ___scratchTableLeft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ___scratchTableRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ____events) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ___myRig) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ____IsSpawned_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DJScratchSoundPlayer, ____CosmeticSelectedSide_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DJScratchSoundPlayer) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
