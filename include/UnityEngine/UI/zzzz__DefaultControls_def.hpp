#pragma once
// IWYU pragma private; include "UnityEngine/UI/DefaultControls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultControls)
namespace GlobalNamespace {
struct DefaultControls_Resources;
}
namespace System {
class Type;
}
namespace UnityEngine::UI {
class DefaultControls_DefaultRuntimeFactory;
}
namespace UnityEngine::UI {
class DefaultControls_IFactoryControls;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class DefaultControls;
}
namespace UnityEngine::UI {
class DefaultControls_DefaultRuntimeFactory;
}
namespace UnityEngine::UI {
class DefaultControls_IFactoryControls;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::DefaultControls*);
MARK_REF_T(::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*);
MARK_REF_T(::UnityEngine::UI::DefaultControls_IFactoryControls*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::DefaultControls*, "UnityEngine.UI", "DefaultControls");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*, "UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::DefaultControls_IFactoryControls*, "UnityEngine.UI", "DefaultControls/IFactoryControls");
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.DefaultControls
class CORDL_TYPE DefaultControls : public ::System::Object {
public:
// Declarations
using Resources = ::GlobalNamespace::DefaultControls_Resources;

using DefaultRuntimeFactory = ::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory;

using IFactoryControls = ::UnityEngine::UI::DefaultControls_IFactoryControls;

/// @brief Field m_CurrentFactory, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_CurrentFactory, put=setStaticF_m_CurrentFactory)) ::UnityEngine::UI::DefaultControls_IFactoryControls*  m_CurrentFactory;

/// @brief Field s_DefaultSelectableColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_DefaultSelectableColor, put=setStaticF_s_DefaultSelectableColor)) ::UnityEngine::Color  s_DefaultSelectableColor;

/// @brief Field s_ImageElementSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ImageElementSize, put=setStaticF_s_ImageElementSize)) ::UnityEngine::Vector2  s_ImageElementSize;

/// @brief Field s_PanelColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_PanelColor, put=setStaticF_s_PanelColor)) ::UnityEngine::Color  s_PanelColor;

/// @brief Field s_TextColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_TextColor, put=setStaticF_s_TextColor)) ::UnityEngine::Color  s_TextColor;

/// @brief Field s_ThickElementSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ThickElementSize, put=setStaticF_s_ThickElementSize)) ::UnityEngine::Vector2  s_ThickElementSize;

/// @brief Field s_ThinElementSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ThinElementSize, put=setStaticF_s_ThinElementSize)) ::UnityEngine::Vector2  s_ThinElementSize;

/// @brief Method CreateButton, addr 0xb7012e4, size 0x40c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateButton(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateDropdown, addr 0xb70327c, size 0x1318, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateDropdown(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateImage, addr 0xb701888, size 0x134, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateImage(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateInputField, addr 0xb702c34, size 0x648, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateInputField(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreatePanel, addr 0xb700c98, size 0x2bc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreatePanel(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateRawImage, addr 0xb7019bc, size 0x134, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateRawImage(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateScrollView, addr 0xb704800, size 0x91c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateScrollView(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateScrollbar, addr 0xb7021e8, size 0x4a8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateScrollbar(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateSlider, addr 0xb701af0, size 0x6f8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateSlider(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateText, addr 0xb7016f0, size 0x198, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateText(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateToggle, addr 0xb702690, size 0x5a4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateToggle(::GlobalNamespace::DefaultControls_Resources  resources) ;

/// @brief Method CreateUIElementRoot, addr 0xb7006f0, size 0x160, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateUIElementRoot(::StringW  name, ::UnityEngine::Vector2  size, /* [ParamArray] */ ::ArrayW<::System::Type*>  components) ;

/// @brief Method CreateUIObject, addr 0xb700850, size 0x128, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateUIObject(::StringW  name, ::UnityEngine::GameObject*  parent, /* [ParamArray] */ ::ArrayW<::System::Type*>  components) ;

/// @brief Method SetDefaultColorTransitionValues, addr 0xb700b54, size 0x60, virtual false, abstract: false, final false
static inline void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable*  slider) ;

/// @brief Method SetDefaultTextValues, addr 0xb700a78, size 0xdc, virtual false, abstract: false, final false
static inline void SetDefaultTextValues(::UnityEngine::UI::Text*  lbl) ;

/// @brief Method SetLayerRecursively, addr 0xb700bb4, size 0xe4, virtual false, abstract: false, final false
static inline void SetLayerRecursively(::UnityEngine::GameObject*  go, int32_t  layer) ;

/// @brief Method SetParentAndAlign, addr 0xb700978, size 0x100, virtual false, abstract: false, final false
static inline void SetParentAndAlign(::UnityEngine::GameObject*  child, ::UnityEngine::GameObject*  parent) ;

static inline ::UnityEngine::UI::DefaultControls_IFactoryControls* getStaticF_m_CurrentFactory() ;

static inline ::UnityEngine::Color getStaticF_s_DefaultSelectableColor() ;

static inline ::UnityEngine::Vector2 getStaticF_s_ImageElementSize() ;

static inline ::UnityEngine::Color getStaticF_s_PanelColor() ;

static inline ::UnityEngine::Color getStaticF_s_TextColor() ;

static inline ::UnityEngine::Vector2 getStaticF_s_ThickElementSize() ;

static inline ::UnityEngine::Vector2 getStaticF_s_ThinElementSize() ;

/// @brief Method get_factory, addr 0xb700698, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::UI::DefaultControls_IFactoryControls* get_factory() ;

static inline void setStaticF_m_CurrentFactory(::UnityEngine::UI::DefaultControls_IFactoryControls*  value) ;

static inline void setStaticF_s_DefaultSelectableColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_ImageElementSize(::UnityEngine::Vector2  value) ;

static inline void setStaticF_s_PanelColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_TextColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_ThickElementSize(::UnityEngine::Vector2  value) ;

static inline void setStaticF_s_ThinElementSize(::UnityEngine::Vector2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultControls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultControls", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultControls(DefaultControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultControls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultControls(DefaultControls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26010};

/// @brief Field kThickHeight offset 0xffffffff size 0x4
static constexpr float_t  kThickHeight{static_cast<float_t>(30.0f)};

/// @brief Field kThinHeight offset 0xffffffff size 0x4
static constexpr float_t  kThinHeight{static_cast<float_t>(20.0f)};

/// @brief Field kWidth offset 0xffffffff size 0x4
static constexpr float_t  kWidth{static_cast<float_t>(160.0f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::DefaultControls) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
class CORDL_TYPE DefaultControls_DefaultRuntimeFactory : public ::System::Object {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::UnityEngine::UI::DefaultControls_IFactoryControls*  Default;

/// @brief Convert operator to "::UnityEngine::UI::DefaultControls_IFactoryControls"
constexpr operator  ::UnityEngine::UI::DefaultControls_IFactoryControls*() noexcept;

/// @brief Method CreateGameObject, addr 0xb705200, size 0x6c, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> CreateGameObject(::StringW  name, /* [ParamArray] */ ::ArrayW<::System::Type*>  components) ;

static inline ::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory* New_ctor() ;

/// @brief Method .ctor, addr 0xb70526c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UI::DefaultControls_IFactoryControls* getStaticF_Default() ;

/// @brief Convert to "::UnityEngine::UI::DefaultControls_IFactoryControls"
constexpr ::UnityEngine::UI::DefaultControls_IFactoryControls* i___UnityEngine__UI__DefaultControls_IFactoryControls() noexcept;

static inline void setStaticF_Default(::UnityEngine::UI::DefaultControls_IFactoryControls*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultControls_DefaultRuntimeFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultControls_DefaultRuntimeFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultControls_DefaultRuntimeFactory(DefaultControls_DefaultRuntimeFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultControls_DefaultRuntimeFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultControls_DefaultRuntimeFactory(DefaultControls_DefaultRuntimeFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Dependencies 
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.DefaultControls/IFactoryControls
class CORDL_TYPE DefaultControls_IFactoryControls {
public:
// Declarations
/// @brief Method CreateGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> CreateGameObject(::StringW  name, /* [ParamArray] */ ::ArrayW<::System::Type*>  components) ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultControls_IFactoryControls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultControls_IFactoryControls(DefaultControls_IFactoryControls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
