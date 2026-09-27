#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/UI/ImageColorAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__ColorAffordanceReceiver_def.hpp"
CORDL_MODULE_EXPORT(ImageColorAffordanceReceiver)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI {
class ImageColorAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.UI", "ImageColorAffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/UI/Image Color Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.UI.ImageColorAffordanceReceiver.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.UI.ImageColorAffordanceReceiver
class CORDL_TYPE ImageColorAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver {
public:
// Declarations
 __declspec(property(get=get_canvasGroup, put=set_canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>  canvasGroup;

 __declspec(property(get=get_ignoreAlpha, put=set_ignoreAlpha)) bool  ignoreAlpha;

 __declspec(property(get=get_image, put=set_image)) ::UnityW<::UnityEngine::UI::Image>  image;

/// @brief Field m_CanvasGroup, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CanvasGroup, put=__cordl_internal_set_m_CanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>  m_CanvasGroup;

/// @brief Field m_HasCanvasGroup, offset 0xc2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasCanvasGroup, put=__cordl_internal_set_m_HasCanvasGroup)) bool  m_HasCanvasGroup;

/// @brief Field m_HasImage, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasImage, put=__cordl_internal_set_m_HasImage)) bool  m_HasImage;

/// @brief Field m_IgnoreAlpha, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreAlpha, put=__cordl_internal_set_m_IgnoreAlpha)) bool  m_IgnoreAlpha;

/// @brief Field m_Image, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Image, put=__cordl_internal_set_m_Image)) ::UnityW<::UnityEngine::UI::Image>  m_Image;

/// @brief Method GetCurrentValueForCapture, addr 0xb4da38c, size 0x74, virtual true, abstract: false, final false
inline ::UnityEngine::Color GetCurrentValueForCapture() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4da22c, size 0xd0, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(::UnityEngine::Color  newValue) ;

/// @brief Method OnEnable, addr 0xb4da17c, size 0xb0, virtual true, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_m_CanvasGroup() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_m_CanvasGroup() ;

constexpr bool const& __cordl_internal_get_m_HasCanvasGroup() const;

constexpr bool& __cordl_internal_get_m_HasCanvasGroup() ;

constexpr bool const& __cordl_internal_get_m_HasImage() const;

constexpr bool& __cordl_internal_get_m_HasImage() ;

constexpr bool const& __cordl_internal_get_m_IgnoreAlpha() const;

constexpr bool& __cordl_internal_get_m_IgnoreAlpha() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_Image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_Image() ;

constexpr void __cordl_internal_set_m_CanvasGroup(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_m_HasCanvasGroup(bool  value) ;

constexpr void __cordl_internal_set_m_HasImage(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreAlpha(bool  value) ;

constexpr void __cordl_internal_set_m_Image(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0xb4da400, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_canvasGroup, addr 0xb4da15c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::CanvasGroup> get_canvasGroup() ;

/// @brief Method get_ignoreAlpha, addr 0xb4da16c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreAlpha() ;

/// @brief Method get_image, addr 0xb4da14c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Image> get_image() ;

/// @brief Method set_canvasGroup, addr 0xb4da164, size 0x8, virtual false, abstract: false, final false
inline void set_canvasGroup(::UnityEngine::CanvasGroup*  value) ;

/// @brief Method set_ignoreAlpha, addr 0xb4da174, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreAlpha(bool  value) ;

/// @brief Method set_image, addr 0xb4da154, size 0x8, virtual false, abstract: false, final false
inline void set_image(::UnityEngine::UI::Image*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ImageColorAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ImageColorAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ImageColorAffordanceReceiver(ImageColorAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ImageColorAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ImageColorAffordanceReceiver(ImageColorAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11751};

/// [Tooltip("Image to apply the color to.")]
/// [SerializeField]
/// @brief Field m_Image, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___m_Image;

/// [Tooltip("If set, alpha changes will be applied to the CanvasGroup rather than the Image.")]
/// [SerializeField]
/// @brief Field m_CanvasGroup, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___m_CanvasGroup;

/// [Tooltip("Ignore alpha changes in color theme.")]
/// [SerializeField]
/// @brief Field m_IgnoreAlpha, offset: 0xc0, size: 0x1, def value: None
 bool  ___m_IgnoreAlpha;

/// @brief Field m_HasImage, offset: 0xc1, size: 0x1, def value: None
 bool  ___m_HasImage;

/// @brief Field m_HasCanvasGroup, offset: 0xc2, size: 0x1, def value: None
 bool  ___m_HasCanvasGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_Image) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_CanvasGroup) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_IgnoreAlpha) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_HasImage) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver, ___m_HasCanvasGroup) == 0xc2, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI::ImageColorAffordanceReceiver) == 0xc8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::UI
