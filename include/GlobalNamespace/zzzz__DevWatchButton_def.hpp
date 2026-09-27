#pragma once
// IWYU pragma private; include "GlobalNamespace/DevWatchButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DevWatchButton)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class DevWatchButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevWatchButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevWatchButton*, "", "DevWatchButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevWatchButton
class CORDL_TYPE DevWatchButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field SearchEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SearchEvent, put=__cordl_internal_set_SearchEvent)) ::UnityEngine::Events::UnityEvent*  SearchEvent;

static inline ::GlobalNamespace::DevWatchButton* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57ed3a8, size 0x18, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_SearchEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_SearchEvent() ;

constexpr void __cordl_internal_set_SearchEvent(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x57ed3c0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevWatchButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevWatchButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevWatchButton(DevWatchButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevWatchButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevWatchButton(DevWatchButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{178};

/// @brief Field SearchEvent, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___SearchEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevWatchButton, ___SearchEvent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevWatchButton) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
