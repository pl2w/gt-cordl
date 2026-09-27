#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointerEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PointerEventType_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEvent)
namespace Oculus::Interaction {
class IEvent;
}
namespace Oculus::Interaction {
struct PointerEventType;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
struct PointerEvent;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::PointerEvent);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointerEvent, "Oculus.Interaction", "PointerEvent");
// Dependencies Oculus.Interaction.PointerEventType, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.PointerEvent
struct CORDL_TYPE PointerEvent {
public:
// Declarations
 __declspec(property(get=get_Data)) ::System::Object*  Data;

 __declspec(property(get=get_EventId)) uint64_t  EventId;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Type)) ::Oculus::Interaction::PointerEventType  Type;

/// @brief Field _nextEventId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nextEventId, put=setStaticF__nextEventId)) uint64_t  _nextEventId;

/// @brief Convert operator to "::Oculus::Interaction::IEvent"
constexpr operator  ::Oculus::Interaction::IEvent*() ;

/// @brief Method .ctor, addr 0xa463988, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  identifier, ::Oculus::Interaction::PointerEventType  type, ::UnityEngine::Pose  pose, ::System::Object*  data) ;

static inline uint64_t getStaticF__nextEventId() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Data, addr 0xa46b0a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* get_Data() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_EventId, addr 0xa46b080, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_EventId() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Identifier, addr 0xa46b078, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Identifier() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Pose, addr 0xa46b090, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_Pose() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Type, addr 0xa46b088, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PointerEventType get_Type() ;

/// @brief Convert to "::Oculus::Interaction::IEvent"
constexpr ::Oculus::Interaction::IEvent* i___Oculus__Interaction__IEvent() ;

static inline void setStaticF__nextEventId(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PointerEvent() ;

// Ctor Parameters [CppParam { name: "_Identifier_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Type_k__BackingField", ty: "::Oculus::Interaction::PointerEventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Pose_k__BackingField", ty: "::UnityEngine::Pose", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Data_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr PointerEvent(int32_t  _Identifier_k__BackingField, uint64_t  _EventId_k__BackingField, ::Oculus::Interaction::PointerEventType  _Type_k__BackingField, ::UnityEngine::Pose  _Pose_k__BackingField, ::System::Object*  _Data_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [CompilerGenerated]
/// @brief Field <Identifier>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _Identifier_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EventId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 uint64_t  _EventId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::PointerEventType  _Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Pose>k__BackingField, offset: 0x14, size: 0x1c, def value: None
 ::UnityEngine::Pose  _Pose_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Data>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  _Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointerEvent, _Identifier_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointerEvent, _EventId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointerEvent, _Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointerEvent, _Pose_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointerEvent, _Data_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointerEvent) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
