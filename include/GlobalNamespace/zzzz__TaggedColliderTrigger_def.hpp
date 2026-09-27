#pragma once
// IWYU pragma private; include "GlobalNamespace/TaggedColliderTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "GlobalNamespace/zzzz__UnityTag_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TaggedColliderTrigger)
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class TaggedColliderTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TaggedColliderTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TaggedColliderTrigger*, "", "TaggedColliderTrigger");
// Dependencies TimeSince, UnityEngine.MonoBehaviour, UnityTag
namespace GlobalNamespace {
// Is value type: false
// CS Name: TaggedColliderTrigger
class CORDL_TYPE TaggedColliderTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _sinceLastEnter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sinceLastEnter, put=__cordl_internal_set__sinceLastEnter)) ::GlobalNamespace::TimeSince  _sinceLastEnter;

/// @brief Field _sinceLastExit, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__sinceLastExit, put=__cordl_internal_set__sinceLastExit)) ::GlobalNamespace::TimeSince  _sinceLastExit;

/// @brief Field enterHysteresis, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_enterHysteresis, put=__cordl_internal_set_enterHysteresis)) float_t  enterHysteresis;

/// @brief Field exitHysteresis, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_exitHysteresis, put=__cordl_internal_set_exitHysteresis)) float_t  exitHysteresis;

/// @brief Field onEnter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnter, put=__cordl_internal_set_onEnter)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*  onEnter;

/// @brief Field onExit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onExit, put=__cordl_internal_set_onExit)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*  onExit;

/// @brief Field tag, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_tag, put=__cordl_internal_set_tag)) ::GlobalNamespace::UnityTag  tag;

static inline ::GlobalNamespace::TaggedColliderTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5a21638, size 0xa0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5a216d8, size 0xa0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sinceLastEnter() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sinceLastEnter() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sinceLastExit() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sinceLastExit() ;

constexpr float_t const& __cordl_internal_get_enterHysteresis() const;

constexpr float_t& __cordl_internal_get_enterHysteresis() ;

constexpr float_t const& __cordl_internal_get_exitHysteresis() const;

constexpr float_t& __cordl_internal_get_exitHysteresis() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_onEnter() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_onEnter() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_onExit() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_onExit() ;

constexpr ::GlobalNamespace::UnityTag const& __cordl_internal_get_tag() const;

constexpr ::GlobalNamespace::UnityTag& __cordl_internal_get_tag() ;

constexpr void __cordl_internal_set__sinceLastEnter(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set__sinceLastExit(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_enterHysteresis(float_t  value) ;

constexpr void __cordl_internal_set_exitHysteresis(float_t  value) ;

constexpr void __cordl_internal_set_onEnter(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_onExit(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_tag(::GlobalNamespace::UnityTag  value) ;

/// @brief Method .ctor, addr 0x5a21778, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TaggedColliderTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TaggedColliderTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TaggedColliderTrigger(TaggedColliderTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TaggedColliderTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TaggedColliderTrigger(TaggedColliderTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2844};

/// @brief Field tag, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::UnityTag  ___tag;

/// @brief Field onEnter, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*  ___onEnter;

/// @brief Field onExit, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*  ___onExit;

/// @brief Field enterHysteresis, offset: 0x38, size: 0x4, def value: None
 float_t  ___enterHysteresis;

/// @brief Field exitHysteresis, offset: 0x3c, size: 0x4, def value: None
 float_t  ___exitHysteresis;

/// @brief Field _sinceLastEnter, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sinceLastEnter;

/// @brief Field _sinceLastExit, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sinceLastExit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TaggedColliderTrigger, ___tag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TaggedColliderTrigger, ___onEnter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TaggedColliderTrigger, ___onExit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TaggedColliderTrigger, ___enterHysteresis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TaggedColliderTrigger, ___exitHysteresis) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TaggedColliderTrigger, ____sinceLastEnter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TaggedColliderTrigger, ____sinceLastExit) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TaggedColliderTrigger) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
