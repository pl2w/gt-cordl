#pragma once
// IWYU pragma private; include "GlobalNamespace/OnTapHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OnTapHandler)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class OnTapHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnTapHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnTapHandler*, "", "OnTapHandler");
// Dependencies Tappable
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnTapHandler
class CORDL_TYPE OnTapHandler : public ::GlobalNamespace::Tappable {
public:
// Declarations
/// @brief Field OnGrabEvents, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabEvents, put=__cordl_internal_set_OnGrabEvents)) ::UnityEngine::Events::UnityEvent*  OnGrabEvents;

/// @brief Field OnReleaseEvents, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReleaseEvents, put=__cordl_internal_set_OnReleaseEvents)) ::UnityEngine::Events::UnityEvent*  OnReleaseEvents;

/// @brief Field OnTapEvents, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTapEvents, put=__cordl_internal_set_OnTapEvents)) ::UnityEngine::Events::UnityEvent*  OnTapEvents;

static inline ::GlobalNamespace::OnTapHandler* New_ctor() ;

/// @brief Method OnGrabLocal, addr 0x570e100, size 0x14, virtual true, abstract: false, final false
inline void OnGrabLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

/// @brief Method OnReleaseLocal, addr 0x570e114, size 0x14, virtual true, abstract: false, final false
inline void OnReleaseLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

/// @brief Method OnTapLocal, addr 0x570e0ec, size 0x14, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnGrabEvents() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnGrabEvents() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnReleaseEvents() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnReleaseEvents() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTapEvents() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTapEvents() ;

constexpr void __cordl_internal_set_OnGrabEvents(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnReleaseEvents(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnTapEvents(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x570e128, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnTapHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnTapHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnTapHandler(OnTapHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnTapHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnTapHandler(OnTapHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1168};

/// [SerializeField]
/// @brief Field OnTapEvents, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTapEvents;

/// [SerializeField]
/// @brief Field OnGrabEvents, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnGrabEvents;

/// [SerializeField]
/// @brief Field OnReleaseEvents, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnReleaseEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnTapHandler, ___OnTapEvents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTapHandler, ___OnGrabEvents) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTapHandler, ___OnReleaseEvents) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnTapHandler) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
