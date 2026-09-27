#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBrainEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineMixerEventsBase_def.hpp"
CORDL_MODULE_EXPORT(CinemachineBrainEvents)
namespace Unity::Cinemachine {
class CinemachineBrain;
}
namespace Unity::Cinemachine {
class CinemachineCore_BrainEvent;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineBrainEvents;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineBrainEvents*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBrainEvents*, "Unity.Cinemachine", "CinemachineBrainEvents");
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Brain Events")]
// [SaveDuringPlay]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineBrainEvents.html")]
// Dependencies Unity.Cinemachine.CinemachineMixerEventsBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineBrainEvents
class CORDL_TYPE CinemachineBrainEvents : public ::Unity::Cinemachine::CinemachineMixerEventsBase {
public:
// Declarations
/// @brief Field Brain, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Brain, put=__cordl_internal_set_Brain)) ::UnityW<::Unity::Cinemachine::CinemachineBrain>  Brain;

/// @brief Field BrainUpdatedEvent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_BrainUpdatedEvent, put=__cordl_internal_set_BrainUpdatedEvent)) ::Unity::Cinemachine::CinemachineCore_BrainEvent*  BrainUpdatedEvent;

/// @brief Method GetMixer, addr 0xaede278, size 0x8, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineMixer* GetMixer() ;

static inline ::Unity::Cinemachine::CinemachineBrainEvents* New_ctor() ;

/// @brief Method OnCameraUpdated, addr 0xaede930, size 0xac, virtual false, abstract: false, final false
inline void OnCameraUpdated(::Unity::Cinemachine::CinemachineBrain*  brain) ;

/// @brief Method OnDisable, addr 0xaede638, size 0xd8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaede280, size 0x178, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain> const& __cordl_internal_get_Brain() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineBrain>& __cordl_internal_get_Brain() ;

constexpr ::Unity::Cinemachine::CinemachineCore_BrainEvent* const& __cordl_internal_get_BrainUpdatedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_BrainEvent*& __cordl_internal_get_BrainUpdatedEvent() ;

constexpr void __cordl_internal_set_Brain(::UnityW<::Unity::Cinemachine::CinemachineBrain>  value) ;

constexpr void __cordl_internal_set_BrainUpdatedEvent(::Unity::Cinemachine::CinemachineCore_BrainEvent*  value) ;

/// @brief Method .ctor, addr 0xaede9dc, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBrainEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBrainEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineBrainEvents(CinemachineBrainEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBrainEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineBrainEvents(CinemachineBrainEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22452};

/// [Tooltip("This is the CinemachineBrain emitting the events.  If null and the current GameObject has a CinemachineBrain component, that component will be used.")]
/// @brief Field Brain, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineBrain>  ___Brain;

/// [Tooltip("This event will fire after the brain updates its Camera.")]
/// @brief Field BrainUpdatedEvent, offset: 0x50, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_BrainEvent*  ___BrainUpdatedEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineBrainEvents, ___Brain) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBrainEvents, ___BrainUpdatedEvent) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineBrainEvents) == 0x58, "Size mismatch!");

} // namespace end def Unity::Cinemachine
