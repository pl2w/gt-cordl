#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/TouchscreenHoverFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TouchscreenHoverFilter)
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRHoverFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class TouchscreenHoverFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "TouchscreenHoverFilter");
// [AddComponentMenu("XR/AR/Touchscreen Hover Filter", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Filtering.TouchscreenHoverFilter.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.TouchscreenHoverFilter
class CORDL_TYPE TouchscreenHoverFilter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_canProcess)) bool  canProcess;

/// @brief Field m_ScreenTouchCountInput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScreenTouchCountInput, put=__cordl_internal_set_m_ScreenTouchCountInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  m_ScreenTouchCountInput;

 __declspec(property(get=get_screenTouchCountInput, put=set_screenTouchCountInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  screenTouchCountInput;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4a5274, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4a525c, size 0x18, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Process, addr 0xb4a528c, size 0xdc, virtual true, abstract: false, final true
inline bool Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* const& __cordl_internal_get_m_ScreenTouchCountInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*& __cordl_internal_get_m_ScreenTouchCountInput() ;

constexpr void __cordl_internal_set_m_ScreenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xb4a5368, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canProcess, addr 0xb4a5254, size 0x8, virtual true, abstract: false, final true
inline bool get_canProcess() ;

/// @brief Method get_screenTouchCountInput, addr 0xb4a51f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* get_screenTouchCountInput() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter* i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRHoverFilter() noexcept;

/// @brief Method set_screenTouchCountInput, addr 0xb4a51f8, size 0x5c, virtual false, abstract: false, final false
inline void set_screenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchscreenHoverFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchscreenHoverFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchscreenHoverFilter(TouchscreenHoverFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchscreenHoverFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchscreenHoverFilter(TouchscreenHoverFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11543};

/// [SerializeField]
/// @brief Field m_ScreenTouchCountInput, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  ___m_ScreenTouchCountInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter, ___m_ScreenTouchCountInput) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::TouchscreenHoverFilter) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
