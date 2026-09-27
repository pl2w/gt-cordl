#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_RotationType_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_TranslationType_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionEvent)
namespace GlobalNamespace {
struct LocomotionEvent_RotationType;
}
namespace GlobalNamespace {
struct LocomotionEvent_TranslationType;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
struct LocomotionEvent;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Locomotion::LocomotionEvent);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionEvent, "Oculus.Interaction.Locomotion", "LocomotionEvent");
// Dependencies Oculus.Interaction.Locomotion.LocomotionEvent::RotationType, Oculus.Interaction.Locomotion.LocomotionEvent::TranslationType, UnityEngine.Pose
namespace Oculus::Interaction::Locomotion {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.LocomotionEvent
struct CORDL_TYPE LocomotionEvent {
public:
// Declarations
using RotationType = ::GlobalNamespace::LocomotionEvent_RotationType;

using TranslationType = ::GlobalNamespace::LocomotionEvent_TranslationType;

 __declspec(property(get=get_EventId)) uint64_t  EventId;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Rotation)) ::GlobalNamespace::LocomotionEvent_RotationType  Rotation;

 __declspec(property(get=get_Translation)) ::GlobalNamespace::LocomotionEvent_TranslationType  Translation;

/// @brief Field _nextEventId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nextEventId, put=setStaticF__nextEventId)) uint64_t  _nextEventId;

/// @brief Method .ctor, addr 0xa4c5aa4, size 0x98, virtual false, abstract: false, final false
inline void _ctor(int32_t  identifier, ::UnityEngine::Pose  pose, ::GlobalNamespace::LocomotionEvent_TranslationType  translationType, ::GlobalNamespace::LocomotionEvent_RotationType  rotationType) ;

/// @brief Method .ctor, addr 0xa4c6468, size 0x110, virtual false, abstract: false, final false
inline void _ctor(int32_t  identifier, ::UnityEngine::Vector3  position, ::GlobalNamespace::LocomotionEvent_TranslationType  translationType) ;

/// @brief Method .ctor, addr 0xa4c6578, size 0x118, virtual false, abstract: false, final false
inline void _ctor(int32_t  identifier, ::UnityEngine::Quaternion  rotation, ::GlobalNamespace::LocomotionEvent_RotationType  rotationType) ;

static inline uint64_t getStaticF__nextEventId() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_EventId, addr 0xa4c6460, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_EventId() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Identifier, addr 0xa4c6434, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Pose, addr 0xa4c643c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_Pose() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Rotation, addr 0xa4c6458, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LocomotionEvent_RotationType get_Rotation() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Translation, addr 0xa4c6450, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LocomotionEvent_TranslationType get_Translation() ;

static inline void setStaticF__nextEventId(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocomotionEvent() ;

// Ctor Parameters [CppParam { name: "_Identifier_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Pose_k__BackingField", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Translation_k__BackingField", ty: "::GlobalNamespace::LocomotionEvent_TranslationType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::GlobalNamespace::LocomotionEvent_RotationType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr LocomotionEvent(int32_t  _Identifier_k__BackingField, ::UnityEngine::Pose  _Pose_k__BackingField, ::GlobalNamespace::LocomotionEvent_TranslationType  _Translation_k__BackingField, ::GlobalNamespace::LocomotionEvent_RotationType  _Rotation_k__BackingField, uint64_t  _EventId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16263};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [CompilerGenerated]
/// @brief Field <Identifier>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _Identifier_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Pose>k__BackingField, offset: 0x4, size: 0x1c, def value: None
 ::UnityEngine::Pose  _Pose_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Translation>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::LocomotionEvent_TranslationType  _Translation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Rotation>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::LocomotionEvent_RotationType  _Rotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EventId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 uint64_t  _EventId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEvent, _Identifier_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEvent, _Pose_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEvent, _Translation_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEvent, _Rotation_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionEvent, _EventId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionEvent) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
