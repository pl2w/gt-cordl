#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderSmallMonkeTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderSmallMonkeTrigger)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderSmallMonkeTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger*, "GorillaTagScripts.Builder", "BuilderSmallMonkeTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderSmallMonkeTrigger
class CORDL_TYPE BuilderSmallMonkeTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TriggeredThisFrame)) bool  TriggeredThisFrame;

/// @brief Field hasCheckedZone, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCheckedZone, put=__cordl_internal_set_hasCheckedZone)) bool  hasCheckedZone;

/// @brief Field ignoreScale, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreScale, put=__cordl_internal_set_ignoreScale)) bool  ignoreScale;

/// @brief Field lastTriggeredFrame, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggeredFrame, put=__cordl_internal_set_lastTriggeredFrame)) int32_t  lastTriggeredFrame;

/// @brief Field onPlayerEnteredTrigger, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlayerEnteredTrigger, put=__cordl_internal_set_onPlayerEnteredTrigger)) ::System::Action_1<int32_t>*  onPlayerEnteredTrigger;

/// @brief Field onTriggerFirstEntered, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTriggerFirstEntered, put=__cordl_internal_set_onTriggerFirstEntered)) ::System::Action*  onTriggerFirstEntered;

/// @brief Field onTriggerLastExited, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTriggerLastExited, put=__cordl_internal_set_onTriggerLastExited)) ::System::Action*  onTriggerLastExited;

 __declspec(property(get=get_overlapCount)) int32_t  overlapCount;

/// @brief Field overlappingColliders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlappingColliders, put=__cordl_internal_set_overlappingColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  overlappingColliders;

static inline ::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5c32d28, size 0x440, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c33168, size 0x9c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method ValidateOverlappingColliders, addr 0x5c26738, size 0x3ec, virtual false, abstract: false, final false
inline void ValidateOverlappingColliders() ;

constexpr bool const& __cordl_internal_get_hasCheckedZone() const;

constexpr bool& __cordl_internal_get_hasCheckedZone() ;

constexpr bool const& __cordl_internal_get_ignoreScale() const;

constexpr bool& __cordl_internal_get_ignoreScale() ;

constexpr int32_t const& __cordl_internal_get_lastTriggeredFrame() const;

constexpr int32_t& __cordl_internal_get_lastTriggeredFrame() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_onPlayerEnteredTrigger() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_onPlayerEnteredTrigger() ;

constexpr ::System::Action* const& __cordl_internal_get_onTriggerFirstEntered() const;

constexpr ::System::Action*& __cordl_internal_get_onTriggerFirstEntered() ;

constexpr ::System::Action* const& __cordl_internal_get_onTriggerLastExited() const;

constexpr ::System::Action*& __cordl_internal_get_onTriggerLastExited() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_overlappingColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_overlappingColliders() ;

constexpr void __cordl_internal_set_hasCheckedZone(bool  value) ;

constexpr void __cordl_internal_set_ignoreScale(bool  value) ;

constexpr void __cordl_internal_set_lastTriggeredFrame(int32_t  value) ;

constexpr void __cordl_internal_set_onPlayerEnteredTrigger(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onTriggerFirstEntered(::System::Action*  value) ;

constexpr void __cordl_internal_set_onTriggerLastExited(::System::Action*  value) ;

constexpr void __cordl_internal_set_overlappingColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

/// @brief Method .ctor, addr 0x5c33204, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPlayerEnteredTrigger, addr 0x5c2b660, size 0xb0, virtual false, abstract: false, final false
inline void add_onPlayerEnteredTrigger(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onTriggerFirstEntered, addr 0x5c22e64, size 0x9c, virtual false, abstract: false, final false
inline void add_onTriggerFirstEntered(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onTriggerLastExited, addr 0x5c22f00, size 0x9c, virtual false, abstract: false, final false
inline void add_onTriggerLastExited(::System::Action*  value) ;

/// @brief Method get_TriggeredThisFrame, addr 0x5c32d08, size 0x20, virtual false, abstract: false, final false
inline bool get_TriggeredThisFrame() ;

/// @brief Method get_overlapCount, addr 0x5c26b24, size 0x48, virtual false, abstract: false, final false
inline int32_t get_overlapCount() ;

/// [CompilerGenerated]
/// @brief Method remove_onPlayerEnteredTrigger, addr 0x5c2b8e4, size 0xb0, virtual false, abstract: false, final false
inline void remove_onPlayerEnteredTrigger(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onTriggerFirstEntered, addr 0x5c230b8, size 0x9c, virtual false, abstract: false, final false
inline void remove_onTriggerFirstEntered(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onTriggerLastExited, addr 0x5c23154, size 0x9c, virtual false, abstract: false, final false
inline void remove_onTriggerLastExited(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSmallMonkeTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSmallMonkeTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSmallMonkeTrigger(BuilderSmallMonkeTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSmallMonkeTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSmallMonkeTrigger(BuilderSmallMonkeTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4177};

/// @brief Field lastTriggeredFrame, offset: 0x20, size: 0x4, def value: None
 int32_t  ___lastTriggeredFrame;

/// @brief Field overlappingColliders, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___overlappingColliders;

/// [CompilerGenerated]
/// @brief Field onPlayerEnteredTrigger, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___onPlayerEnteredTrigger;

/// [CompilerGenerated]
/// @brief Field onTriggerFirstEntered, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___onTriggerFirstEntered;

/// [CompilerGenerated]
/// @brief Field onTriggerLastExited, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___onTriggerLastExited;

/// @brief Field hasCheckedZone, offset: 0x48, size: 0x1, def value: None
 bool  ___hasCheckedZone;

/// @brief Field ignoreScale, offset: 0x49, size: 0x1, def value: None
 bool  ___ignoreScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger, ___lastTriggeredFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger, ___overlappingColliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger, ___onPlayerEnteredTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger, ___onTriggerFirstEntered) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger, ___onTriggerLastExited) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger, ___hasCheckedZone) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger, ___ignoreScale) == 0x49, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
