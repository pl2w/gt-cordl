#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteProximityTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonkeVoteProximityTrigger)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeVoteProximityTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeVoteProximityTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteProximityTrigger*, "", "MonkeVoteProximityTrigger");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeVoteProximityTrigger
class CORDL_TYPE MonkeVoteProximityTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field OnEnter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnter, put=__cordl_internal_set_OnEnter)) ::System::Action*  OnEnter;

/// @brief Field <isPlayerNearby>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPlayerNearby_k__BackingField, put=__cordl_internal_set__isPlayerNearby_k__BackingField)) bool  _isPlayerNearby_k__BackingField;

 __declspec(property(get=get_isPlayerNearby, put=set_isPlayerNearby)) bool  isPlayerNearby;

/// @brief Field retriggerDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_retriggerDelay, put=__cordl_internal_set_retriggerDelay)) float_t  retriggerDelay;

/// @brief Field triggerTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerTime, put=__cordl_internal_set_triggerTime)) float_t  triggerTime;

static inline ::GlobalNamespace::MonkeVoteProximityTrigger* New_ctor() ;

/// @brief Method OnBoxExited, addr 0x56239b4, size 0x8, virtual true, abstract: false, final false
inline void OnBoxExited() ;

/// @brief Method OnBoxTriggered, addr 0x5623950, size 0x64, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr ::System::Action* const& __cordl_internal_get_OnEnter() const;

constexpr ::System::Action*& __cordl_internal_get_OnEnter() ;

constexpr bool const& __cordl_internal_get__isPlayerNearby_k__BackingField() const;

constexpr bool& __cordl_internal_get__isPlayerNearby_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_retriggerDelay() const;

constexpr float_t& __cordl_internal_get_retriggerDelay() ;

constexpr float_t const& __cordl_internal_get_triggerTime() const;

constexpr float_t& __cordl_internal_get_triggerTime() ;

constexpr void __cordl_internal_set_OnEnter(::System::Action*  value) ;

constexpr void __cordl_internal_set__isPlayerNearby_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_retriggerDelay(float_t  value) ;

constexpr void __cordl_internal_set_triggerTime(float_t  value) ;

/// @brief Method .ctor, addr 0x56239bc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnEnter, addr 0x5623808, size 0x9c, virtual false, abstract: false, final false
inline void add_OnEnter(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_isPlayerNearby, addr 0x5623940, size 0x8, virtual false, abstract: false, final false
inline bool get_isPlayerNearby() ;

/// [CompilerGenerated]
/// @brief Method remove_OnEnter, addr 0x56238a4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnEnter(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isPlayerNearby, addr 0x5623948, size 0x8, virtual false, abstract: false, final false
inline void set_isPlayerNearby(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteProximityTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteProximityTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeVoteProximityTrigger(MonkeVoteProximityTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeVoteProximityTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeVoteProximityTrigger(MonkeVoteProximityTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{584};

/// [CompilerGenerated]
/// @brief Field OnEnter, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnEnter;

/// [CompilerGenerated]
/// @brief Field <isPlayerNearby>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____isPlayerNearby_k__BackingField;

/// @brief Field triggerTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___triggerTime;

/// @brief Field retriggerDelay, offset: 0x30, size: 0x4, def value: None
 float_t  ___retriggerDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteProximityTrigger, ___OnEnter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteProximityTrigger, ____isPlayerNearby_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteProximityTrigger, ___triggerTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteProximityTrigger, ___retriggerDelay) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteProximityTrigger) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
