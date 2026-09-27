#pragma once
// IWYU pragma private; include "GlobalNamespace/ITouchScreenStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITouchScreenStation)
namespace GlobalNamespace {
class SIScreenRegion;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ITouchScreenStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ITouchScreenStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ITouchScreenStation*, "", "ITouchScreenStation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ITouchScreenStation
class CORDL_TYPE ITouchScreenStation {
public:
// Declarations
 __declspec(property(get=get_ScreenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  ScreenRegion;

 __declspec(property(get=get_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Method AddButton, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton) ;

/// @brief Method TouchscreenButtonPressed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr) ;

/// @brief Method TouchscreenToggleButtonPressed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn) ;

/// @brief Method get_ScreenRegion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::GlobalNamespace::SIScreenRegion> get_ScreenRegion() ;

/// @brief Method get_gameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> get_gameObject() ;

// Ctor Parameters [CppParam { name: "", ty: "ITouchScreenStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITouchScreenStation(ITouchScreenStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{376};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
