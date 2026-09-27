#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/OverlayController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OverlayController)
namespace GlobalNamespace {
struct OverlayController__LoadTexture_d__12;
}
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck::GorillaTag {
class GtScreenButton;
}
namespace Liv::Lck::GorillaTag {
struct ScheduledDuration;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class OverlayController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::OverlayController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::OverlayController*, "Liv.Lck.GorillaTag", "OverlayController");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.OverlayController
class CORDL_TYPE OverlayController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadTexture_d__12 = ::GlobalNamespace::OverlayController__LoadTexture_d__12;

/// @brief Field _defaultOnScheduls, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultOnScheduls, put=__cordl_internal_set__defaultOnScheduls)) ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*  _defaultOnScheduls;

/// @brief Field _horizontalOverlayTexture, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__horizontalOverlayTexture, put=__cordl_internal_set__horizontalOverlayTexture)) ::UnityW<::UnityEngine::Texture>  _horizontalOverlayTexture;

/// @brief Field _isOverlayEnabled, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOverlayEnabled, put=__cordl_internal_set__isOverlayEnabled)) bool  _isOverlayEnabled;

/// @brief Field _overlayButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlayButton, put=__cordl_internal_set__overlayButton)) ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  _overlayButton;

/// @brief Field _qckController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__qckController, put=__cordl_internal_set__qckController)) ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  _qckController;

/// @brief Field _verticalOverlayTexture, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__verticalOverlayTexture, put=__cordl_internal_set__verticalOverlayTexture)) ::UnityW<::UnityEngine::Texture>  _verticalOverlayTexture;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.OverlayController::<LoadTexture>d__12))]
/// @brief Method LoadTexture, addr 0x9d314c8, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>* LoadTexture(::StringW  url) ;

static inline ::Liv::Lck::GorillaTag::OverlayController* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d31230, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d311a0, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHorizontalModeChanged, addr 0x9d314b4, size 0x4, virtual false, abstract: false, final false
inline void OnHorizontalModeChanged(bool  value) ;

/// @brief Method SetOverlayEnabled, addr 0x9d314b0, size 0x4, virtual false, abstract: false, final false
inline void SetOverlayEnabled(bool  value) ;

/// @brief Method Start, addr 0x9d312c0, size 0x1f0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleOverlay, addr 0x9d314b8, size 0x10, virtual false, abstract: false, final false
inline void ToggleOverlay() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>* const& __cordl_internal_get__defaultOnScheduls() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*& __cordl_internal_get__defaultOnScheduls() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__horizontalOverlayTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__horizontalOverlayTexture() ;

constexpr bool const& __cordl_internal_get__isOverlayEnabled() const;

constexpr bool& __cordl_internal_get__isOverlayEnabled() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton> const& __cordl_internal_get__overlayButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>& __cordl_internal_get__overlayButton() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& __cordl_internal_get__qckController() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& __cordl_internal_get__qckController() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__verticalOverlayTexture() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__verticalOverlayTexture() ;

constexpr void __cordl_internal_set__defaultOnScheduls(::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*  value) ;

constexpr void __cordl_internal_set__horizontalOverlayTexture(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set__isOverlayEnabled(bool  value) ;

constexpr void __cordl_internal_set__overlayButton(::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  value) ;

constexpr void __cordl_internal_set__qckController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value) ;

constexpr void __cordl_internal_set__verticalOverlayTexture(::UnityW<::UnityEngine::Texture>  value) ;

/// @brief Method .ctor, addr 0x9d315d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OverlayController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OverlayController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OverlayController(OverlayController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OverlayController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OverlayController(OverlayController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29676};

/// [Header("Dependencies")]
/// [SerializeField]
/// @brief Field _qckController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  ____qckController;

/// [SerializeField]
/// @brief Field _overlayButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  ____overlayButton;

/// [SerializeField]
/// @brief Field _defaultOnScheduls, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*  ____defaultOnScheduls;

/// [Header("Overlay Settings")]
/// [SerializeField]
/// @brief Field _horizontalOverlayTexture, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____horizontalOverlayTexture;

/// [SerializeField]
/// @brief Field _verticalOverlayTexture, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____verticalOverlayTexture;

/// @brief Field _isOverlayEnabled, offset: 0x48, size: 0x1, def value: None
 bool  ____isOverlayEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::OverlayController, ____qckController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::OverlayController, ____overlayButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::OverlayController, ____defaultOnScheduls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::OverlayController, ____horizontalOverlayTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::OverlayController, ____verticalOverlayTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::OverlayController, ____isOverlayEnabled) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::OverlayController) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
