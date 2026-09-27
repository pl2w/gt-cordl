#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcadeMachineJoystick_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArcadeMachine)
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace GlobalNamespace {
struct ArcadeButtons;
}
namespace GlobalNamespace {
class ArcadeGame;
}
namespace GlobalNamespace {
class CallLimiter;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcadeMachine;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArcadeMachine*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArcadeMachine*, "", "ArcadeMachine");
// [NetworkBehaviourWeaved(128)]
// Dependencies ArcadeMachineJoystick, NetworkComponent, Photon.Realtime.Player
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcadeMachine
class CORDL_TYPE ArcadeMachine : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
/// [Networked]
/// [Capacity(128)]
/// [NetworkedWeaved(0, 128)]
/// @brief [NetworkedWeavedArray(128, 1, typeof(Fusion.ElementReaderWriterByte))]
 __declspec(property(get=get_Data)) ::Fusion::NetworkArray_1<uint8_t>  Data;

/// @brief Field _Data, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::ArrayW<uint8_t>  _Data;

/// @brief Field arcadeGame, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_arcadeGame, put=__cordl_internal_set_arcadeGame)) ::UnityW<::GlobalNamespace::ArcadeGame>  arcadeGame;

/// @brief Field arcadeGameInstance, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_arcadeGameInstance, put=__cordl_internal_set_arcadeGameInstance)) ::UnityW<::GlobalNamespace::ArcadeGame>  arcadeGameInstance;

/// @brief Field audioSource, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field audioSourcePriority, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioSourcePriority, put=__cordl_internal_set_audioSourcePriority)) int32_t  audioSourcePriority;

/// @brief Field buttonsStateValue, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonsStateValue, put=__cordl_internal_set_buttonsStateValue)) int32_t  buttonsStateValue;

/// @brief Field networkSynchronized, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_networkSynchronized, put=__cordl_internal_set_networkSynchronized)) bool  networkSynchronized;

/// @brief Field playerIdleTimeouts, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerIdleTimeouts, put=__cordl_internal_set_playerIdleTimeouts)) ::ArrayW<float_t>  playerIdleTimeouts;

/// @brief Field playersPerJoystick, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersPerJoystick, put=__cordl_internal_set_playersPerJoystick)) ::ArrayW<::Photon::Realtime::Player*>  playersPerJoystick;

/// @brief Field screen, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_screen, put=__cordl_internal_set_screen)) ::UnityW<::UnityEngine::Renderer>  screen;

/// @brief Field soundCallLimit, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundCallLimit, put=__cordl_internal_set_soundCallLimit)) ::GlobalNamespace::CallLimiter*  soundCallLimit;

/// @brief Field sticks, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sticks, put=__cordl_internal_set_sticks)) ::ArrayW<::UnityW<::GlobalNamespace::ArcadeMachineJoystick>>  sticks;

/// [PunRPC]
/// @brief Method ArcadeGameInstance_OnPlaySound_RPC, addr 0x56d2b48, size 0xdc, virtual false, abstract: false, final false
inline void ArcadeGameInstance_OnPlaySound_RPC(int32_t  id, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Awake, addr 0x56d278c, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x56d2f30, size 0xd0, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x56d3000, size 0xa4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method IsControllerInUse, addr 0x56d2c34, size 0x9c, virtual false, abstract: false, final false
inline bool IsControllerInUse(int32_t  player) ;

/// @brief Method IsPlayerLocallyControlled, addr 0x56d260c, size 0x38, virtual false, abstract: false, final false
inline bool IsPlayerLocallyControlled(int32_t  player) ;

static inline ::GlobalNamespace::ArcadeMachine* New_ctor() ;

/// @brief Method OnDisable, addr 0x56d2a74, size 0xd4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56d2950, size 0x124, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnJoystickStateChange, addr 0x56d2c24, size 0x10, virtual false, abstract: false, final false
inline void OnJoystickStateChange(int32_t  player, ::GlobalNamespace::ArcadeButtons  buttons) ;

/// @brief Method PlaySound, addr 0x56d2470, size 0x188, virtual false, abstract: false, final false
inline void PlaySound(int32_t  soundId, int32_t  priority) ;

/// @brief Method ReadDataFusion, addr 0x56d2df8, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x56d2e00, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadPlayerDataPUN, addr 0x56d2e04, size 0x44, virtual false, abstract: false, final false
inline void ReadPlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Start, addr 0x56d27f0, size 0x160, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method WriteDataFusion, addr 0x56d2df4, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x56d2dfc, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WritePlayerDataPUN, addr 0x56d2e48, size 0x44, virtual false, abstract: false, final false
inline void WritePlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__Data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__Data() ;

constexpr ::UnityW<::GlobalNamespace::ArcadeGame> const& __cordl_internal_get_arcadeGame() const;

constexpr ::UnityW<::GlobalNamespace::ArcadeGame>& __cordl_internal_get_arcadeGame() ;

constexpr ::UnityW<::GlobalNamespace::ArcadeGame> const& __cordl_internal_get_arcadeGameInstance() const;

constexpr ::UnityW<::GlobalNamespace::ArcadeGame>& __cordl_internal_get_arcadeGameInstance() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr int32_t const& __cordl_internal_get_audioSourcePriority() const;

constexpr int32_t& __cordl_internal_get_audioSourcePriority() ;

constexpr int32_t const& __cordl_internal_get_buttonsStateValue() const;

constexpr int32_t& __cordl_internal_get_buttonsStateValue() ;

constexpr bool const& __cordl_internal_get_networkSynchronized() const;

constexpr bool& __cordl_internal_get_networkSynchronized() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_playerIdleTimeouts() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_playerIdleTimeouts() ;

constexpr ::ArrayW<::Photon::Realtime::Player*> const& __cordl_internal_get_playersPerJoystick() const;

constexpr ::ArrayW<::Photon::Realtime::Player*>& __cordl_internal_get_playersPerJoystick() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_screen() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_screen() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_soundCallLimit() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_soundCallLimit() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ArcadeMachineJoystick>> const& __cordl_internal_get_sticks() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ArcadeMachineJoystick>>& __cordl_internal_get_sticks() ;

constexpr void __cordl_internal_set__Data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_arcadeGame(::UnityW<::GlobalNamespace::ArcadeGame>  value) ;

constexpr void __cordl_internal_set_arcadeGameInstance(::UnityW<::GlobalNamespace::ArcadeGame>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_audioSourcePriority(int32_t  value) ;

constexpr void __cordl_internal_set_buttonsStateValue(int32_t  value) ;

constexpr void __cordl_internal_set_networkSynchronized(bool  value) ;

constexpr void __cordl_internal_set_playerIdleTimeouts(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_playersPerJoystick(::ArrayW<::Photon::Realtime::Player*>  value) ;

constexpr void __cordl_internal_set_screen(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_soundCallLimit(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_sticks(::ArrayW<::UnityW<::GlobalNamespace::ArcadeMachineJoystick>>  value) ;

/// @brief Method .ctor, addr 0x56d2e8c, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x56d2cd0, size 0x124, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<uint8_t> get_Data() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcadeMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcadeMachine(ArcadeMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcadeMachine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcadeMachine(ArcadeMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1061};

/// [SerializeField]
/// @brief Field arcadeGame, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArcadeGame>  ___arcadeGame;

/// [SerializeField]
/// @brief Field sticks, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ArcadeMachineJoystick>>  ___sticks;

/// [SerializeField]
/// @brief Field screen, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___screen;

/// [SerializeField]
/// @brief Field networkSynchronized, offset: 0xb8, size: 0x1, def value: None
 bool  ___networkSynchronized;

/// [SerializeField]
/// @brief Field soundCallLimit, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___soundCallLimit;

/// @brief Field buttonsStateValue, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___buttonsStateValue;

/// @brief Field audioSource, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field audioSourcePriority, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___audioSourcePriority;

/// @brief Field arcadeGameInstance, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArcadeGame>  ___arcadeGameInstance;

/// @brief Field playersPerJoystick, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::Photon::Realtime::Player*>  ___playersPerJoystick;

/// @brief Field playerIdleTimeouts, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___playerIdleTimeouts;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 128)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___arcadeGame) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___sticks) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___screen) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___networkSynchronized) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___soundCallLimit) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___buttonsStateValue) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___audioSource) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___audioSourcePriority) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___arcadeGameInstance) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___playersPerJoystick) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ___playerIdleTimeouts) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeMachine, ____Data) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArcadeMachine) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
