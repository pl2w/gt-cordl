#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBadge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRBadge)
namespace GlobalNamespace {
struct GRBadge_BadgeState;
}
namespace GlobalNamespace {
class GRBadge__RetractCoroutine_d__25;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class NetPlayer;
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
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GRBadge;
}
namespace GlobalNamespace {
class GRBadge__RetractCoroutine_d__25;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBadge*);
MARK_REF_T(::GlobalNamespace::GRBadge__RetractCoroutine_d__25*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBadge*, "", "GRBadge");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBadge__RetractCoroutine_d__25*, "", "GRBadge/<RetractCoroutine>d__25");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBadge
class CORDL_TYPE GRBadge : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BadgeState = ::GlobalNamespace::GRBadge_BadgeState;

using _RetractCoroutine_d__25 = ::GlobalNamespace::GRBadge__RetractCoroutine_d__25;

/// @brief Field actorNr, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorNr, put=__cordl_internal_set_actorNr)) int32_t  actorNr;

/// @brief Field audioSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field badgeAttachSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeAttachSound, put=__cordl_internal_set_badgeAttachSound)) ::UnityW<::UnityEngine::AudioClip>  badgeAttachSound;

/// @brief Field badgeAttachSoundVolume, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_badgeAttachSoundVolume, put=__cordl_internal_set_badgeAttachSoundVolume)) float_t  badgeAttachSoundVolume;

/// @brief Field badgeMesh, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeMesh, put=__cordl_internal_set_badgeMesh)) ::UnityW<::UnityEngine::MeshRenderer>  badgeMesh;

/// @brief Field dispenserIndex, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_dispenserIndex, put=__cordl_internal_set_dispenserIndex)) int32_t  dispenserIndex;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field lastRedeemedPoints, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRedeemedPoints, put=__cordl_internal_set_lastRedeemedPoints)) int32_t  lastRedeemedPoints;

/// @brief Field playerLevel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLevel, put=__cordl_internal_set_playerLevel)) ::UnityW<::TMPro::TMP_Text>  playerLevel;

/// @brief Field playerName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::UnityW<::TMPro::TMP_Text>  playerName;

/// @brief Field playerTitle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTitle, put=__cordl_internal_set_playerTitle)) ::UnityW<::TMPro::TMP_Text>  playerTitle;

/// @brief Field retractCoroutine, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_retractCoroutine, put=__cordl_internal_set_retractCoroutine)) ::UnityEngine::Coroutine*  retractCoroutine;

/// @brief Field retractSpeed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractSpeed, put=__cordl_internal_set_retractSpeed)) float_t  retractSpeed;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method Hide, addr 0x5871abc, size 0x84, virtual false, abstract: false, final false
inline void Hide() ;

/// @brief Method IsAttachedToPlayer, addr 0x5871bc4, size 0x20, virtual false, abstract: false, final false
inline bool IsAttachedToPlayer() ;

static inline ::GlobalNamespace::GRBadge* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58716a8, size 0xec, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x58716a0, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x587165c, size 0x44, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58716a4, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method PlayAttachFx, addr 0x5871c5c, size 0xac, virtual false, abstract: false, final false
inline void PlayAttachFx() ;

/// @brief Method RefreshText, addr 0x5871934, size 0x188, virtual false, abstract: false, final false
inline void RefreshText(::GlobalNamespace::NetPlayer*  player) ;

/// [IteratorStateMachine(typeof(GRBadge::<RetractCoroutine>d__25))]
/// @brief Method RetractCoroutine, addr 0x5871d08, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RetractCoroutine() ;

/// @brief Method Setup, addr 0x5871794, size 0x1a0, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::NetPlayer*  player, int32_t  index) ;

/// @brief Method StartRetracting, addr 0x5871be4, size 0x78, virtual false, abstract: false, final false
inline void StartRetracting() ;

/// @brief Method UnHide, addr 0x5871b40, size 0x84, virtual false, abstract: false, final false
inline void UnHide() ;

constexpr int32_t const& __cordl_internal_get_actorNr() const;

constexpr int32_t& __cordl_internal_get_actorNr() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_badgeAttachSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_badgeAttachSound() ;

constexpr float_t const& __cordl_internal_get_badgeAttachSoundVolume() const;

constexpr float_t& __cordl_internal_get_badgeAttachSoundVolume() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_badgeMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_badgeMesh() ;

constexpr int32_t const& __cordl_internal_get_dispenserIndex() const;

constexpr int32_t& __cordl_internal_get_dispenserIndex() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr int32_t const& __cordl_internal_get_lastRedeemedPoints() const;

constexpr int32_t& __cordl_internal_get_lastRedeemedPoints() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerLevel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerLevel() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerName() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerName() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerTitle() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_retractCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_retractCoroutine() ;

constexpr float_t const& __cordl_internal_get_retractSpeed() const;

constexpr float_t& __cordl_internal_get_retractSpeed() ;

constexpr void __cordl_internal_set_actorNr(int32_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_badgeAttachSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_badgeAttachSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_badgeMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_dispenserIndex(int32_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_lastRedeemedPoints(int32_t  value) ;

constexpr void __cordl_internal_set_playerLevel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerName(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_playerTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_retractCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_retractSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x5871d9c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBadge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBadge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBadge(GRBadge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBadge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBadge(GRBadge const& ) = delete;

/// @brief Field RESTORE_BADGE_TO_DOCK_WINDOW offset 0xffffffff size 0x4
static constexpr float_t  RESTORE_BADGE_TO_DOCK_WINDOW{static_cast<float_t>(60.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1885};

/// [SerializeField]
/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// [SerializeField]
/// @brief Field playerName, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerName;

/// [SerializeField]
/// @brief Field playerTitle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerTitle;

/// [SerializeField]
/// @brief Field playerLevel, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerLevel;

/// [SerializeField]
/// @brief Field badgeMesh, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___badgeMesh;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field retractSpeed, offset: 0x50, size: 0x4, def value: None
 float_t  ___retractSpeed;

/// [SerializeField]
/// @brief Field badgeAttachSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___badgeAttachSound;

/// [SerializeField]
/// @brief Field badgeAttachSoundVolume, offset: 0x60, size: 0x4, def value: None
 float_t  ___badgeAttachSoundVolume;

/// [SerializeField]
/// @brief Field dispenserIndex, offset: 0x64, size: 0x4, def value: None
 int32_t  ___dispenserIndex;

/// @brief Field actorNr, offset: 0x68, size: 0x4, def value: None
 int32_t  ___actorNr;

/// @brief Field retractCoroutine, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___retractCoroutine;

/// @brief Field lastRedeemedPoints, offset: 0x78, size: 0x4, def value: None
 int32_t  ___lastRedeemedPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBadge, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___playerName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___playerTitle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___playerLevel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___badgeMesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___audioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___retractSpeed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___badgeAttachSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___badgeAttachSoundVolume) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___dispenserIndex) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___actorNr) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___retractCoroutine) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge, ___lastRedeemedPoints) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBadge) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBadge/<RetractCoroutine>d__25
class CORDL_TYPE GRBadge__RetractCoroutine_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GRBadge>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5871db8, size 0x2bc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GRBadge__RetractCoroutine_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5872074, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x587207c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x58720b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5871db4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GRBadge> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GRBadge>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRBadge>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5871d74, size 0x28, virtual false, abstract: false, final false
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
constexpr GRBadge__RetractCoroutine_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBadge__RetractCoroutine_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBadge__RetractCoroutine_d__25(GRBadge__RetractCoroutine_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBadge__RetractCoroutine_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBadge__RetractCoroutine_d__25(GRBadge__RetractCoroutine_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1884};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBadge>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBadge__RetractCoroutine_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge__RetractCoroutine_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBadge__RetractCoroutine_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBadge__RetractCoroutine_d__25) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
