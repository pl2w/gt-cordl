#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKCameraModeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__CameraMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LCKCameraModeHelper)
namespace Liv::Lck::Tablet {
class LCKSettingsButtonsController;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LCKCameraModeHelper;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LCKCameraModeHelper*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LCKCameraModeHelper*, "Liv.Lck.Tablet", "LCKCameraModeHelper");
// Dependencies Liv.Lck.Tablet.CameraMode, UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LCKCameraModeHelper
class CORDL_TYPE LCKCameraModeHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cameraMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraMode, put=__cordl_internal_set__cameraMode)) ::Liv::Lck::Tablet::CameraMode  _cameraMode;

/// @brief Field _settingsButtonsController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsButtonsController, put=__cordl_internal_set__settingsButtonsController)) ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>  _settingsButtonsController;

static inline ::Liv::Lck::Tablet::LCKCameraModeHelper* New_ctor() ;

/// @brief Method SetCameraMode, addr 0x9d57360, size 0x24, virtual false, abstract: false, final false
inline void SetCameraMode(bool  isSelected) ;

constexpr ::Liv::Lck::Tablet::CameraMode const& __cordl_internal_get__cameraMode() const;

constexpr ::Liv::Lck::Tablet::CameraMode& __cordl_internal_get__cameraMode() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController> const& __cordl_internal_get__settingsButtonsController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>& __cordl_internal_get__settingsButtonsController() ;

constexpr void __cordl_internal_set__cameraMode(::Liv::Lck::Tablet::CameraMode  value) ;

constexpr void __cordl_internal_set__settingsButtonsController(::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>  value) ;

/// @brief Method .ctor, addr 0x9d5759c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKCameraModeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKCameraModeHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKCameraModeHelper(LCKCameraModeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKCameraModeHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKCameraModeHelper(LCKCameraModeHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24932};

/// [SerializeField]
/// @brief Field _cameraMode, offset: 0x20, size: 0x4, def value: None
 ::Liv::Lck::Tablet::CameraMode  ____cameraMode;

/// [SerializeField]
/// @brief Field _settingsButtonsController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>  ____settingsButtonsController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraModeHelper, ____cameraMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraModeHelper, ____settingsButtonsController) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LCKCameraModeHelper) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
