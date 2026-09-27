#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorShiftDepthDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorShiftDepthDisplay)
namespace GlobalNamespace {
class GhostReactorShiftManager;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorShiftDepthDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorShiftDepthDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorShiftDepthDisplay*, "", "GhostReactorShiftDepthDisplay");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorShiftDepthDisplay
class CORDL_TYPE GhostReactorShiftDepthDisplay : public ::System::Object {
public:
// Declarations
/// @brief Field STATE_NAMES, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_STATE_NAMES, put=setStaticF_STATE_NAMES)) ::ArrayW<::StringW>  STATE_NAMES;

/// @brief Field cachedStringBuilder, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedStringBuilder, put=__cordl_internal_set_cachedStringBuilder)) ::System::Text::StringBuilder*  cachedStringBuilder;

/// @brief Field delveDeeperAnimators, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_delveDeeperAnimators, put=__cordl_internal_set_delveDeeperAnimators)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*  delveDeeperAnimators;

/// @brief Field delveDeeperAnims, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_delveDeeperAnims, put=__cordl_internal_set_delveDeeperAnims)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*  delveDeeperAnims;

/// @brief Field delveDeeperAudio, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_delveDeeperAudio, put=__cordl_internal_set_delveDeeperAudio)) ::UnityW<::UnityEngine::AudioSource>  delveDeeperAudio;

/// @brief Field delveDeeperButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_delveDeeperButton, put=__cordl_internal_set_delveDeeperButton)) ::UnityW<::UnityEngine::GameObject>  delveDeeperButton;

/// @brief Field delveDeeperNonspatializedAudio, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_delveDeeperNonspatializedAudio, put=__cordl_internal_set_delveDeeperNonspatializedAudio)) ::UnityW<::UnityEngine::AudioSource>  delveDeeperNonspatializedAudio;

/// @brief Field delveDeeperParticles, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_delveDeeperParticles, put=__cordl_internal_set_delveDeeperParticles)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  delveDeeperParticles;

/// @brief Field jumbotronRequirements, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumbotronRequirements, put=__cordl_internal_set_jumbotronRequirements)) ::UnityW<::TMPro::TMP_Text>  jumbotronRequirements;

/// @brief Field jumbotronRewards, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumbotronRewards, put=__cordl_internal_set_jumbotronRewards)) ::UnityW<::TMPro::TMP_Text>  jumbotronRewards;

/// @brief Field jumbotronState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumbotronState, put=__cordl_internal_set_jumbotronState)) ::UnityW<::TMPro::TMP_Text>  jumbotronState;

/// @brief Field jumbotronTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumbotronTime, put=__cordl_internal_set_jumbotronTime)) ::UnityW<::TMPro::TMP_Text>  jumbotronTime;

/// @brief Field jumbotronTitle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumbotronTitle, put=__cordl_internal_set_jumbotronTitle)) ::UnityW<::TMPro::TMP_Text>  jumbotronTitle;

/// @brief Field logoFrames, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_logoFrames, put=__cordl_internal_set_logoFrames)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  logoFrames;

/// @brief Field reactor, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field shiftManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftManager, put=__cordl_internal_set_shiftManager)) ::UnityW<::GlobalNamespace::GhostReactorShiftManager>  shiftManager;

/// @brief Method GetRewardXP, addr 0x586076c, size 0x24, virtual false, abstract: false, final false
inline int32_t GetRewardXP() ;

static inline ::GlobalNamespace::GhostReactorShiftDepthDisplay* New_ctor() ;

/// @brief Method RefreshDisplay, addr 0x5860790, size 0xd90, virtual false, abstract: false, final false
inline void RefreshDisplay() ;

/// @brief Method RefreshObjectives, addr 0x5861520, size 0x350, virtual false, abstract: false, final false
inline void RefreshObjectives() ;

/// @brief Method Setup, addr 0x5860638, size 0x4, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method StartDelveDeeperFX, addr 0x58618cc, size 0x2b0, virtual false, abstract: false, final false
inline void StartDelveDeeperFX() ;

/// @brief Method StopDelveDeeperFX, addr 0x586063c, size 0x130, virtual false, abstract: false, final false
inline void StopDelveDeeperFX() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_cachedStringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_cachedStringBuilder() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>* const& __cordl_internal_get_delveDeeperAnimators() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*& __cordl_internal_get_delveDeeperAnimators() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>* const& __cordl_internal_get_delveDeeperAnims() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*& __cordl_internal_get_delveDeeperAnims() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_delveDeeperAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_delveDeeperAudio() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_delveDeeperButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_delveDeeperButton() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_delveDeeperNonspatializedAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_delveDeeperNonspatializedAudio() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& __cordl_internal_get_delveDeeperParticles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& __cordl_internal_get_delveDeeperParticles() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_jumbotronRequirements() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_jumbotronRequirements() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_jumbotronRewards() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_jumbotronRewards() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_jumbotronState() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_jumbotronState() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_jumbotronTime() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_jumbotronTime() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_jumbotronTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_jumbotronTitle() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>* const& __cordl_internal_get_logoFrames() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*& __cordl_internal_get_logoFrames() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager> const& __cordl_internal_get_shiftManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager>& __cordl_internal_get_shiftManager() ;

constexpr void __cordl_internal_set_cachedStringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_delveDeeperAnimators(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*  value) ;

constexpr void __cordl_internal_set_delveDeeperAnims(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*  value) ;

constexpr void __cordl_internal_set_delveDeeperAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_delveDeeperButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_delveDeeperNonspatializedAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_delveDeeperParticles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value) ;

constexpr void __cordl_internal_set_jumbotronRequirements(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_jumbotronRewards(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_jumbotronState(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_jumbotronTime(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_jumbotronTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_logoFrames(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_shiftManager(::UnityW<::GlobalNamespace::GhostReactorShiftManager>  value) ;

/// @brief Method .ctor, addr 0x5861ba0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::StringW> getStaticF_STATE_NAMES() ;

static inline void setStaticF_STATE_NAMES(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorShiftDepthDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorShiftDepthDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorShiftDepthDisplay(GhostReactorShiftDepthDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorShiftDepthDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorShiftDepthDisplay(GhostReactorShiftDepthDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1828};

/// @brief Field shiftManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorShiftManager>  ___shiftManager;

/// @brief Field reactor, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// [SerializeField]
/// @brief Field jumbotronTitle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___jumbotronTitle;

/// [SerializeField]
/// @brief Field jumbotronState, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___jumbotronState;

/// [SerializeField]
/// @brief Field jumbotronTime, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___jumbotronTime;

/// [SerializeField]
/// @brief Field jumbotronRequirements, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___jumbotronRequirements;

/// [SerializeField]
/// @brief Field jumbotronRewards, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___jumbotronRewards;

/// [SerializeField]
/// @brief Field logoFrames, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_Text>>*  ___logoFrames;

/// [SerializeField]
/// @brief Field delveDeeperButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___delveDeeperButton;

/// [SerializeField]
/// @brief Field delveDeeperAudio, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___delveDeeperAudio;

/// [SerializeField]
/// @brief Field delveDeeperNonspatializedAudio, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___delveDeeperNonspatializedAudio;

/// [SerializeField]
/// @brief Field delveDeeperAnims, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animation>>*  ___delveDeeperAnims;

/// [SerializeField]
/// @brief Field delveDeeperAnimators, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Animator>>*  ___delveDeeperAnimators;

/// [SerializeField]
/// @brief Field delveDeeperParticles, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  ___delveDeeperParticles;

/// @brief Field cachedStringBuilder, offset: 0x80, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___cachedStringBuilder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___shiftManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___reactor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___jumbotronTitle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___jumbotronState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___jumbotronTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___jumbotronRequirements) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___jumbotronRewards) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___logoFrames) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___delveDeeperButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___delveDeeperAudio) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___delveDeeperNonspatializedAudio) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___delveDeeperAnims) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___delveDeeperAnimators) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___delveDeeperParticles) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorShiftDepthDisplay, ___cachedStringBuilder) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorShiftDepthDisplay) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
