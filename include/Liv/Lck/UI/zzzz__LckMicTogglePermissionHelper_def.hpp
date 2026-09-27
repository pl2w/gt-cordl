#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckMicTogglePermissionHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckMicTogglePermissionHelper)
namespace Liv::Lck::Tablet {
class LCKCameraController;
}
namespace Liv::Lck::UI {
class LckButtonColors;
}
namespace Liv::Lck::UI {
class LckToggle;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckMicTogglePermissionHelper;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckMicTogglePermissionHelper*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckMicTogglePermissionHelper*, "Liv.Lck.UI", "LckMicTogglePermissionHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckMicTogglePermissionHelper
class CORDL_TYPE LckMicTogglePermissionHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::Liv::Lck::Tablet::LCKCameraController>  _controller;

/// @brief Field _hasMicPermission, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasMicPermission, put=__cordl_internal_set__hasMicPermission)) bool  _hasMicPermission;

/// @brief Field _micLckToggle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__micLckToggle, put=__cordl_internal_set__micLckToggle)) ::UnityW<::Liv::Lck::UI::LckToggle>  _micLckToggle;

/// @brief Field _micToggle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__micToggle, put=__cordl_internal_set__micToggle)) ::UnityW<::UnityEngine::UI::Toggle>  _micToggle;

/// @brief Field _micToggleIcon, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__micToggleIcon, put=__cordl_internal_set__micToggleIcon)) ::UnityW<::UnityEngine::UI::Image>  _micToggleIcon;

/// @brief Field _noMicPermissionColors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__noMicPermissionColors, put=__cordl_internal_set__noMicPermissionColors)) ::UnityW<::Liv::Lck::UI::LckButtonColors>  _noMicPermissionColors;

/// @brief Field _noMicPermissionIcon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__noMicPermissionIcon, put=__cordl_internal_set__noMicPermissionIcon)) ::UnityW<::UnityEngine::Sprite>  _noMicPermissionIcon;

/// @brief Field _permissionAskCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__permissionAskCount, put=setStaticF__permissionAskCount)) int32_t  _permissionAskCount;

/// @brief Method CheckForMicPermission, addr 0x9d4d258, size 0x334, virtual false, abstract: false, final false
inline void CheckForMicPermission(bool  toggleValue) ;

static inline ::Liv::Lck::UI::LckMicTogglePermissionHelper* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x9d4db30, size 0x1c8, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method PermissionCallbacks_PermissionDenied, addr 0x9d4d7c0, size 0x100, virtual false, abstract: false, final false
inline void PermissionCallbacks_PermissionDenied(::StringW  permissionName) ;

/// @brief Method PermissionCallbacks_PermissionGranted, addr 0x9d4d58c, size 0x1b0, virtual false, abstract: false, final false
inline void PermissionCallbacks_PermissionGranted(::StringW  permissionName) ;

/// @brief Method SetMicPermissionOffVisuals, addr 0x9d4d134, size 0x48, virtual false, abstract: false, final false
inline void SetMicPermissionOffVisuals() ;

/// @brief Method SetMicPermissionOnVisuals, addr 0x9d4d73c, size 0x40, virtual false, abstract: false, final false
inline void SetMicPermissionOnVisuals() ;

/// @brief Method SetToggleIconAlpha, addr 0x9d4da70, size 0x50, virtual false, abstract: false, final false
inline void SetToggleIconAlpha(float_t  alpha) ;

/// @brief Method Start, addr 0x9d4cd14, size 0x214, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UserSelectedDontShowAgain, addr 0x9d4d1d8, size 0x80, virtual false, abstract: false, final false
inline bool UserSelectedDontShowAgain() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LCKCameraController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LCKCameraController>& __cordl_internal_get__controller() ;

constexpr bool const& __cordl_internal_get__hasMicPermission() const;

constexpr bool& __cordl_internal_get__hasMicPermission() ;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle> const& __cordl_internal_get__micLckToggle() const;

constexpr ::UnityW<::Liv::Lck::UI::LckToggle>& __cordl_internal_get__micLckToggle() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__micToggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__micToggle() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__micToggleIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__micToggleIcon() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors> const& __cordl_internal_get__noMicPermissionColors() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButtonColors>& __cordl_internal_get__noMicPermissionColors() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__noMicPermissionIcon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__noMicPermissionIcon() ;

constexpr void __cordl_internal_set__controller(::UnityW<::Liv::Lck::Tablet::LCKCameraController>  value) ;

constexpr void __cordl_internal_set__hasMicPermission(bool  value) ;

constexpr void __cordl_internal_set__micLckToggle(::UnityW<::Liv::Lck::UI::LckToggle>  value) ;

constexpr void __cordl_internal_set__micToggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__micToggleIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__noMicPermissionColors(::UnityW<::Liv::Lck::UI::LckButtonColors>  value) ;

constexpr void __cordl_internal_set__noMicPermissionIcon(::UnityW<::UnityEngine::Sprite>  value) ;

/// @brief Method .ctor, addr 0x9d4dcf8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__permissionAskCount() ;

static inline void setStaticF__permissionAskCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMicTogglePermissionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMicTogglePermissionHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMicTogglePermissionHelper(LckMicTogglePermissionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMicTogglePermissionHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMicTogglePermissionHelper(LckMicTogglePermissionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24913};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LCKCameraController>  ____controller;

/// [SerializeField]
/// @brief Field _noMicPermissionColors, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButtonColors>  ____noMicPermissionColors;

/// [SerializeField]
/// @brief Field _noMicPermissionIcon, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____noMicPermissionIcon;

/// [SerializeField]
/// @brief Field _micLckToggle, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckToggle>  ____micLckToggle;

/// [SerializeField]
/// @brief Field _micToggle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____micToggle;

/// [SerializeField]
/// @brief Field _micToggleIcon, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____micToggleIcon;

/// @brief Field _hasMicPermission, offset: 0x50, size: 0x1, def value: None
 bool  ____hasMicPermission;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckMicTogglePermissionHelper, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckMicTogglePermissionHelper, ____noMicPermissionColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckMicTogglePermissionHelper, ____noMicPermissionIcon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckMicTogglePermissionHelper, ____micLckToggle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckMicTogglePermissionHelper, ____micToggle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckMicTogglePermissionHelper, ____micToggleIcon) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckMicTogglePermissionHelper, ____hasMicPermission) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckMicTogglePermissionHelper) == 0x58, "Size mismatch!");

} // namespace end def Liv::Lck::UI
