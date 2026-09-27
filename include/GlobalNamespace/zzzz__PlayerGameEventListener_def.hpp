#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGameEventListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerGameEvents_EventType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerGameEventListener)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerGameEventListener;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerGameEventListener*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerGameEventListener*, "", "PlayerGameEventListener");
// Dependencies PlayerGameEvents::EventType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerGameEventListener
class CORDL_TYPE PlayerGameEventListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cooldownEnd, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__cooldownEnd, put=__cordl_internal_set__cooldownEnd)) float_t  _cooldownEnd;

/// @brief Field cooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field eventType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventType, put=__cordl_internal_set_eventType)) ::GlobalNamespace::PlayerGameEvents_EventType  eventType;

/// @brief Field filter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_filter, put=__cordl_internal_set_filter)) ::StringW  filter;

/// @brief Field onGameEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onGameEvent, put=__cordl_internal_set_onGameEvent)) ::UnityEngine::Events::UnityEvent*  onGameEvent;

/// @brief Field onGameEventCounted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onGameEventCounted, put=__cordl_internal_set_onGameEventCounted)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onGameEventCounted;

static inline ::GlobalNamespace::PlayerGameEventListener* New_ctor() ;

/// @brief Method OnDisable, addr 0x5626768, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56263c8, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGameEventTriggered, addr 0x5627ee8, size 0x8, virtual false, abstract: false, final false
inline void OnGameEventTriggered(::StringW  eventName) ;

/// @brief Method OnGameEventTriggered, addr 0x5627ef0, size 0xe0, virtual false, abstract: false, final false
inline void OnGameEventTriggered(::StringW  eventName, int32_t  count) ;

/// @brief Method OnGameMoveEventTriggered, addr 0x5627e80, size 0x68, virtual false, abstract: false, final false
inline void OnGameMoveEventTriggered(float_t  distance, float_t  speed) ;

/// @brief Method SubscribeToEvents, addr 0x56263cc, size 0x39c, virtual false, abstract: false, final false
inline void SubscribeToEvents() ;

/// @brief Method UnsubscribeFromEvents, addr 0x562676c, size 0x39c, virtual false, abstract: false, final false
inline void UnsubscribeFromEvents() ;

constexpr float_t const& __cordl_internal_get__cooldownEnd() const;

constexpr float_t& __cordl_internal_get__cooldownEnd() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr ::GlobalNamespace::PlayerGameEvents_EventType const& __cordl_internal_get_eventType() const;

constexpr ::GlobalNamespace::PlayerGameEvents_EventType& __cordl_internal_get_eventType() ;

constexpr ::StringW const& __cordl_internal_get_filter() const;

constexpr ::StringW& __cordl_internal_get_filter() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onGameEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onGameEvent() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onGameEventCounted() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onGameEventCounted() ;

constexpr void __cordl_internal_set__cooldownEnd(float_t  value) ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_eventType(::GlobalNamespace::PlayerGameEvents_EventType  value) ;

constexpr void __cordl_internal_set_filter(::StringW  value) ;

constexpr void __cordl_internal_set_onGameEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onGameEventCounted(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5627fd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerGameEventListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerGameEventListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerGameEventListener(PlayerGameEventListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerGameEventListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerGameEventListener(PlayerGameEventListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{593};

/// [SerializeField]
/// @brief Field eventType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::PlayerGameEvents_EventType  ___eventType;

/// [Tooltip("Cooldown in seconds")]
/// [SerializeField]
/// @brief Field filter, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___filter;

/// [SerializeField]
/// @brief Field cooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ___cooldown;

/// [SerializeField]
/// @brief Field onGameEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onGameEvent;

/// [SerializeField]
/// @brief Field onGameEventCounted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onGameEventCounted;

/// @brief Field _cooldownEnd, offset: 0x48, size: 0x4, def value: None
 float_t  ____cooldownEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerGameEventListener, ___eventType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGameEventListener, ___filter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGameEventListener, ___cooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGameEventListener, ___onGameEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGameEventListener, ___onGameEventCounted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerGameEventListener, ____cooldownEnd) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerGameEventListener) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
