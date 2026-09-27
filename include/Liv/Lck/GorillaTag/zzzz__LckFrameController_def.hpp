#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/LckFrameController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckFrameController)
namespace GlobalNamespace {
struct LckFrameController__LoadAndApplyTextures_d__13;
}
namespace GlobalNamespace {
struct LckFrameController__LoadTexture_d__14;
}
namespace GlobalNamespace {
struct LckFrameController__Start_d__8;
}
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck::GorillaTag {
class GtScreenButton;
}
namespace Liv::Lck::GorillaTag {
class LckOverlayFrameLayer;
}
namespace Liv::Lck::GorillaTag {
struct ScheduledDuration;
}
namespace Liv::Lck::Rendering {
class LckCompositionProfile;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class LckFrameController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::LckFrameController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::LckFrameController*, "Liv.Lck.GorillaTag", "LckFrameController");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.LckFrameController
class CORDL_TYPE LckFrameController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadAndApplyTextures_d__13 = ::GlobalNamespace::LckFrameController__LoadAndApplyTextures_d__13;

using _LoadTexture_d__14 = ::GlobalNamespace::LckFrameController__LoadTexture_d__14;

using _Start_d__8 = ::GlobalNamespace::LckFrameController__Start_d__8;

/// @brief Field _compositionProfile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__compositionProfile, put=__cordl_internal_set__compositionProfile)) ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  _compositionProfile;

/// @brief Field _defaultOnSchedules, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultOnSchedules, put=__cordl_internal_set__defaultOnSchedules)) ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*  _defaultOnSchedules;

/// @brief Field _horizontalOverlayUrl, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__horizontalOverlayUrl, put=__cordl_internal_set__horizontalOverlayUrl)) ::StringW  _horizontalOverlayUrl;

/// @brief Field _overlayButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlayButton, put=__cordl_internal_set__overlayButton)) ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  _overlayButton;

/// @brief Field _overlayLayer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlayLayer, put=__cordl_internal_set__overlayLayer)) ::Liv::Lck::GorillaTag::LckOverlayFrameLayer*  _overlayLayer;

/// @brief Field _overlayLayerName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlayLayerName, put=__cordl_internal_set__overlayLayerName)) ::StringW  _overlayLayerName;

/// @brief Field _qckController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__qckController, put=__cordl_internal_set__qckController)) ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  _qckController;

/// @brief Field _verticalOverlayUrl, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__verticalOverlayUrl, put=__cordl_internal_set__verticalOverlayUrl)) ::StringW  _verticalOverlayUrl;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.LckFrameController::<LoadAndApplyTextures>d__13))]
/// @brief Method LoadAndApplyTextures, addr 0x9d3014c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadAndApplyTextures() ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.LckFrameController::<LoadTexture>d__14))]
/// @brief Method LoadTexture, addr 0x9d30224, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture>>* LoadTexture(::StringW  url) ;

static inline ::Liv::Lck::GorillaTag::LckFrameController* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d2ff50, size 0x168, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnHorizontalModeChanged, addr 0x9d300b8, size 0x1c, virtual false, abstract: false, final false
inline void OnHorizontalModeChanged(bool  isHorizontal) ;

/// @brief Method SetOverlayEnabled, addr 0x9d300d4, size 0x58, virtual false, abstract: false, final false
inline void SetOverlayEnabled(bool  value) ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.LckFrameController::<Start>d__8))]
/// @brief Method Start, addr 0x9d2fea8, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleOverlay, addr 0x9d3012c, size 0x20, virtual false, abstract: false, final false
inline void ToggleOverlay() ;

constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile> const& __cordl_internal_get__compositionProfile() const;

constexpr ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>& __cordl_internal_get__compositionProfile() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>* const& __cordl_internal_get__defaultOnSchedules() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*& __cordl_internal_get__defaultOnSchedules() ;

constexpr ::StringW const& __cordl_internal_get__horizontalOverlayUrl() const;

constexpr ::StringW& __cordl_internal_get__horizontalOverlayUrl() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton> const& __cordl_internal_get__overlayButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>& __cordl_internal_get__overlayButton() ;

constexpr ::Liv::Lck::GorillaTag::LckOverlayFrameLayer* const& __cordl_internal_get__overlayLayer() const;

constexpr ::Liv::Lck::GorillaTag::LckOverlayFrameLayer*& __cordl_internal_get__overlayLayer() ;

constexpr ::StringW const& __cordl_internal_get__overlayLayerName() const;

constexpr ::StringW& __cordl_internal_get__overlayLayerName() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& __cordl_internal_get__qckController() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& __cordl_internal_get__qckController() ;

constexpr ::StringW const& __cordl_internal_get__verticalOverlayUrl() const;

constexpr ::StringW& __cordl_internal_get__verticalOverlayUrl() ;

constexpr void __cordl_internal_set__compositionProfile(::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  value) ;

constexpr void __cordl_internal_set__defaultOnSchedules(::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*  value) ;

constexpr void __cordl_internal_set__horizontalOverlayUrl(::StringW  value) ;

constexpr void __cordl_internal_set__overlayButton(::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  value) ;

constexpr void __cordl_internal_set__overlayLayer(::Liv::Lck::GorillaTag::LckOverlayFrameLayer*  value) ;

constexpr void __cordl_internal_set__overlayLayerName(::StringW  value) ;

constexpr void __cordl_internal_set__qckController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value) ;

constexpr void __cordl_internal_set__verticalOverlayUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d3030c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckFrameController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckFrameController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckFrameController(LckFrameController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckFrameController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckFrameController(LckFrameController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29673};

/// [SerializeField]
/// @brief Field _compositionProfile, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Rendering::LckCompositionProfile>  ____compositionProfile;

/// [SerializeField]
/// @brief Field _qckController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  ____qckController;

/// [SerializeField]
/// @brief Field _overlayButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  ____overlayButton;

/// [Header("Configuration")]
/// [Tooltip("The name of the Overlay Frame Layer as defined in the Composition Profile.")]
/// [SerializeField]
/// @brief Field _overlayLayerName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____overlayLayerName;

/// [SerializeField]
/// @brief Field _defaultOnSchedules, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::GorillaTag::ScheduledDuration>*  ____defaultOnSchedules;

/// [Header("Runtime Texture URLs (Optional)")]
/// [SerializeField]
/// @brief Field _horizontalOverlayUrl, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____horizontalOverlayUrl;

/// [SerializeField]
/// @brief Field _verticalOverlayUrl, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____verticalOverlayUrl;

/// @brief Field _overlayLayer, offset: 0x58, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::LckOverlayFrameLayer*  ____overlayLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::LckFrameController, ____compositionProfile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::LckFrameController, ____qckController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::LckFrameController, ____overlayButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::LckFrameController, ____overlayLayerName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::LckFrameController, ____defaultOnSchedules) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::LckFrameController, ____horizontalOverlayUrl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::LckFrameController, ____verticalOverlayUrl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::LckFrameController, ____overlayLayer) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::LckFrameController) == 0x60, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
