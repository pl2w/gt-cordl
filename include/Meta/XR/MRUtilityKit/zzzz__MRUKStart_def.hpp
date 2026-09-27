#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKStart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MRUKStart)
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class MRUKStart;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKStart*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKStart*, "Meta.XR.MRUtilityKit", "MRUKStart");
// [Obsolete("This class is now obsolete, please register events directly with the MRUK class", true)]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKStart
class CORDL_TYPE MRUKStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field roomCreatedEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomCreatedEvent, put=__cordl_internal_set_roomCreatedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  roomCreatedEvent;

/// @brief Field roomRemovedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomRemovedEvent, put=__cordl_internal_set_roomRemovedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  roomRemovedEvent;

/// @brief Field roomUpdatedEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomUpdatedEvent, put=__cordl_internal_set_roomUpdatedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  roomUpdatedEvent;

/// @brief Field sceneLoadedEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneLoadedEvent, put=__cordl_internal_set_sceneLoadedEvent)) ::UnityEngine::Events::UnityEvent*  sceneLoadedEvent;

static inline ::Meta::XR::MRUtilityKit::MRUKStart* New_ctor() ;

/// @brief Method Start, addr 0x9f3a234, size 0x350, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__4_0, addr 0x9f3a68c, size 0x14, virtual false, abstract: false, final false
inline void _Start_b__4_0() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__4_1, addr 0x9f3a6a0, size 0x60, virtual false, abstract: false, final false
inline void _Start_b__4_1(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__4_2, addr 0x9f3a700, size 0x60, virtual false, abstract: false, final false
inline void _Start_b__4_2(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__4_3, addr 0x9f3a760, size 0x60, virtual false, abstract: false, final false
inline void _Start_b__4_3(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& __cordl_internal_get_roomCreatedEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& __cordl_internal_get_roomCreatedEvent() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& __cordl_internal_get_roomRemovedEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& __cordl_internal_get_roomRemovedEvent() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& __cordl_internal_get_roomUpdatedEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& __cordl_internal_get_roomUpdatedEvent() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_sceneLoadedEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_sceneLoadedEvent() ;

constexpr void __cordl_internal_set_roomCreatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

constexpr void __cordl_internal_set_roomRemovedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

constexpr void __cordl_internal_set_roomUpdatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

constexpr void __cordl_internal_set_sceneLoadedEvent(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9f3a584, size 0x108, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKStart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKStart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKStart(MRUKStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKStart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKStart(MRUKStart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25893};

/// @brief Field sceneLoadedEvent, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___sceneLoadedEvent;

/// @brief Field roomCreatedEvent, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  ___roomCreatedEvent;

/// @brief Field roomUpdatedEvent, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  ___roomUpdatedEvent;

/// @brief Field roomRemovedEvent, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  ___roomRemovedEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKStart, ___sceneLoadedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKStart, ___roomCreatedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKStart, ___roomUpdatedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKStart, ___roomRemovedEvent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKStart) == 0x40, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
