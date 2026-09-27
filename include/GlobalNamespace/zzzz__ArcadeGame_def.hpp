#pragma once
// IWYU pragma private; include "GlobalNamespace/ArcadeGame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArcadeGame)
namespace GlobalNamespace {
struct ArcadeButtons;
}
namespace GlobalNamespace {
class ArcadeMachine;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::IO {
class MemoryStream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class ArcadeGame;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArcadeGame*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArcadeGame*, "", "ArcadeGame");
// Dependencies ArcadeButtons, UnityEngine.AudioClip, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArcadeGame
class CORDL_TYPE ArcadeGame : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field NetStateBufferSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NetStateBufferSize, put=setStaticF_NetStateBufferSize)) int32_t  NetStateBufferSize;

/// @brief Field Scale, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) ::UnityEngine::Vector2  Scale;

/// @brief Field audioClips, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClips, put=__cordl_internal_set_audioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  audioClips;

/// @brief Field machine, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_machine, put=__cordl_internal_set_machine)) ::UnityW<::GlobalNamespace::ArcadeMachine>  machine;

/// @brief Field memoryStreamsInitialized, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_memoryStreamsInitialized, put=__cordl_internal_set_memoryStreamsInitialized)) bool  memoryStreamsInitialized;

/// @brief Field netStateBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_netStateBuffer, put=__cordl_internal_set_netStateBuffer)) ::ArrayW<uint8_t>  netStateBuffer;

/// @brief Field netStateBufferAlt, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_netStateBufferAlt, put=__cordl_internal_set_netStateBufferAlt)) ::ArrayW<uint8_t>  netStateBufferAlt;

/// @brief Field netStateMemStream, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_netStateMemStream, put=__cordl_internal_set_netStateMemStream)) ::System::IO::MemoryStream*  netStateMemStream;

/// @brief Field netStateMemStreamAlt, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_netStateMemStreamAlt, put=__cordl_internal_set_netStateMemStreamAlt)) ::System::IO::MemoryStream*  netStateMemStreamAlt;

/// @brief Field playerInputs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerInputs, put=__cordl_internal_set_playerInputs)) ::ArrayW<::GlobalNamespace::ArcadeButtons>  playerInputs;

/// @brief Method Awake, addr 0x56d201c, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonDown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method ButtonUp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method GetNetworkState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> GetNetworkState() ;

/// @brief Method InitializeMemoryStreams, addr 0x56d2020, size 0xb8, virtual false, abstract: false, final false
inline void InitializeMemoryStreams() ;

/// @brief Method IsPlayerLocallyControlled, addr 0x56d25f8, size 0x14, virtual false, abstract: false, final false
inline bool IsPlayerLocallyControlled(int32_t  player) ;

static inline ::GlobalNamespace::ArcadeGame* New_ctor() ;

/// @brief Method OnInputStateChange, addr 0x56d2118, size 0xe0, virtual false, abstract: false, final false
inline void OnInputStateChange(int32_t  player, ::GlobalNamespace::ArcadeButtons  buttons) ;

/// @brief Method OnTimeout, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTimeout() ;

/// @brief Method PlaySound, addr 0x56d245c, size 0x14, virtual false, abstract: false, final false
inline void PlaySound(int32_t  clipId, int32_t  prio) ;

/// @brief Method ReadPlayerDataPUN, addr 0x56d2644, size 0x4, virtual true, abstract: false, final false
inline void ReadPlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetMachine, addr 0x56d20d8, size 0x8, virtual false, abstract: false, final false
inline void SetMachine(::GlobalNamespace::ArcadeMachine*  machine) ;

/// @brief Method SetNetworkState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetNetworkState(::ArrayW<uint8_t>  obj) ;

/// @brief Method SwapNetStateBuffersAndStreams, addr 0x56d2400, size 0x5c, virtual false, abstract: false, final false
inline void SwapNetStateBuffersAndStreams() ;

/// @brief Method UnwrapNetState, addr 0x56d22e8, size 0x118, virtual false, abstract: false, final false
static inline ::System::Object* UnwrapNetState(::ArrayW<uint8_t>  b) ;

/// @brief Method WrapNetState, addr 0x56d21f8, size 0xf0, virtual false, abstract: false, final false
static inline void WrapNetState(::System::Object*  ns, ::System::IO::MemoryStream*  stream) ;

/// @brief Method WritePlayerDataPUN, addr 0x56d2648, size 0x4, virtual true, abstract: false, final false
inline void WritePlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_Scale() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_Scale() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_audioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_audioClips() ;

constexpr ::UnityW<::GlobalNamespace::ArcadeMachine> const& __cordl_internal_get_machine() const;

constexpr ::UnityW<::GlobalNamespace::ArcadeMachine>& __cordl_internal_get_machine() ;

constexpr bool const& __cordl_internal_get_memoryStreamsInitialized() const;

constexpr bool& __cordl_internal_get_memoryStreamsInitialized() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_netStateBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_netStateBuffer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_netStateBufferAlt() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_netStateBufferAlt() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_netStateMemStream() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_netStateMemStream() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_netStateMemStreamAlt() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_netStateMemStreamAlt() ;

constexpr ::ArrayW<::GlobalNamespace::ArcadeButtons> const& __cordl_internal_get_playerInputs() const;

constexpr ::ArrayW<::GlobalNamespace::ArcadeButtons>& __cordl_internal_get_playerInputs() ;

constexpr void __cordl_internal_set_Scale(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_machine(::UnityW<::GlobalNamespace::ArcadeMachine>  value) ;

constexpr void __cordl_internal_set_memoryStreamsInitialized(bool  value) ;

constexpr void __cordl_internal_set_netStateBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_netStateBufferAlt(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_netStateMemStream(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_netStateMemStreamAlt(::System::IO::MemoryStream*  value) ;

constexpr void __cordl_internal_set_playerInputs(::ArrayW<::GlobalNamespace::ArcadeButtons>  value) ;

/// @brief Method .ctor, addr 0x56d264c, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getButtonState, addr 0x56d20e0, size 0x38, virtual false, abstract: false, final false
inline bool getButtonState(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

static inline int32_t getStaticF_NetStateBufferSize() ;

static inline void setStaticF_NetStateBufferSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArcadeGame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArcadeGame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArcadeGame(ArcadeGame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArcadeGame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArcadeGame(ArcadeGame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1060};

/// [SerializeField]
/// @brief Field Scale, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___Scale;

/// @brief Field playerInputs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ArcadeButtons>  ___playerInputs;

/// @brief Field audioClips, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___audioClips;

/// @brief Field machine, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArcadeMachine>  ___machine;

/// @brief Field netStateBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___netStateBuffer;

/// @brief Field netStateBufferAlt, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___netStateBufferAlt;

/// @brief Field netStateMemStream, offset: 0x50, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___netStateMemStream;

/// @brief Field netStateMemStreamAlt, offset: 0x58, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___netStateMemStreamAlt;

/// @brief Field memoryStreamsInitialized, offset: 0x60, size: 0x1, def value: None
 bool  ___memoryStreamsInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___Scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___playerInputs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___audioClips) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___machine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___netStateBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___netStateBufferAlt) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___netStateMemStream) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___netStateMemStreamAlt) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArcadeGame, ___memoryStreamsInitialized) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArcadeGame) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
