#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimEventsGeneric.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AnimEventsGeneric)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimEventsGeneric;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimEventsGeneric*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimEventsGeneric*, "", "AnimEventsGeneric");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimEventsGeneric
class CORDL_TYPE AnimEventsGeneric : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field event1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_event1, put=__cordl_internal_set_event1)) ::UnityEngine::Events::UnityEvent*  event1;

/// @brief Field event10, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_event10, put=__cordl_internal_set_event10)) ::UnityEngine::Events::UnityEvent*  event10;

/// @brief Field event2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_event2, put=__cordl_internal_set_event2)) ::UnityEngine::Events::UnityEvent*  event2;

/// @brief Field event3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_event3, put=__cordl_internal_set_event3)) ::UnityEngine::Events::UnityEvent*  event3;

/// @brief Field event4, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_event4, put=__cordl_internal_set_event4)) ::UnityEngine::Events::UnityEvent*  event4;

/// @brief Field event5, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_event5, put=__cordl_internal_set_event5)) ::UnityEngine::Events::UnityEvent*  event5;

/// @brief Field event6, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_event6, put=__cordl_internal_set_event6)) ::UnityEngine::Events::UnityEvent*  event6;

/// @brief Field event7, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_event7, put=__cordl_internal_set_event7)) ::UnityEngine::Events::UnityEvent*  event7;

/// @brief Field event8, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_event8, put=__cordl_internal_set_event8)) ::UnityEngine::Events::UnityEvent*  event8;

/// @brief Field event9, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_event9, put=__cordl_internal_set_event9)) ::UnityEngine::Events::UnityEvent*  event9;

/// @brief Method Event1, addr 0x5744c28, size 0x18, virtual false, abstract: false, final false
inline void Event1() ;

/// @brief Method Event10, addr 0x5744d00, size 0x18, virtual false, abstract: false, final false
inline void Event10() ;

/// @brief Method Event2, addr 0x5744c40, size 0x18, virtual false, abstract: false, final false
inline void Event2() ;

/// @brief Method Event3, addr 0x5744c58, size 0x18, virtual false, abstract: false, final false
inline void Event3() ;

/// @brief Method Event4, addr 0x5744c70, size 0x18, virtual false, abstract: false, final false
inline void Event4() ;

/// @brief Method Event5, addr 0x5744c88, size 0x18, virtual false, abstract: false, final false
inline void Event5() ;

/// @brief Method Event6, addr 0x5744ca0, size 0x18, virtual false, abstract: false, final false
inline void Event6() ;

/// @brief Method Event7, addr 0x5744cb8, size 0x18, virtual false, abstract: false, final false
inline void Event7() ;

/// @brief Method Event8, addr 0x5744cd0, size 0x18, virtual false, abstract: false, final false
inline void Event8() ;

/// @brief Method Event9, addr 0x5744ce8, size 0x18, virtual false, abstract: false, final false
inline void Event9() ;

static inline ::GlobalNamespace::AnimEventsGeneric* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event1() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event1() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event10() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event10() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event2() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event2() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event3() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event3() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event4() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event4() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event5() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event5() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event6() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event6() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event7() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event7() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event8() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event8() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_event9() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_event9() ;

constexpr void __cordl_internal_set_event1(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event10(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event2(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event3(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event4(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event5(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event6(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event7(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event8(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_event9(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5744d18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimEventsGeneric() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimEventsGeneric", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimEventsGeneric(AnimEventsGeneric && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimEventsGeneric", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimEventsGeneric(AnimEventsGeneric const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1260};

/// [SerializeField]
/// @brief Field event1, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event1;

/// [SerializeField]
/// @brief Field event2, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event2;

/// [SerializeField]
/// @brief Field event3, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event3;

/// [SerializeField]
/// @brief Field event4, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event4;

/// [SerializeField]
/// @brief Field event5, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event5;

/// [SerializeField]
/// @brief Field event6, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event6;

/// [SerializeField]
/// @brief Field event7, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event7;

/// [SerializeField]
/// @brief Field event8, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event8;

/// [SerializeField]
/// @brief Field event9, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event9;

/// [SerializeField]
/// @brief Field event10, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___event10;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event7) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event8) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event9) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimEventsGeneric, ___event10) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimEventsGeneric) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
