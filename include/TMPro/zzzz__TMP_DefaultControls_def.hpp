#pragma once
// IWYU pragma private; include "TMPro/TMP_DefaultControls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_DefaultControls)
namespace GlobalNamespace {
struct TMP_DefaultControls_Resources;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro {
class TMP_DefaultControls;
}
// Write type traits
MARK_REF_T(::TMPro::TMP_DefaultControls*);
DEFINE_IL2CPP_CLASS(::TMPro::TMP_DefaultControls*, "TMPro", "TMP_DefaultControls");
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Component, UnityEngine.Vector2
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_DefaultControls
class CORDL_TYPE TMP_DefaultControls : public ::System::Object {
public:
// Declarations
using Resources = ::GlobalNamespace::TMP_DefaultControls_Resources;

/// @brief Field s_DefaultSelectableColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_DefaultSelectableColor, put=setStaticF_s_DefaultSelectableColor)) ::UnityEngine::Color  s_DefaultSelectableColor;

/// @brief Field s_TextColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_TextColor, put=setStaticF_s_TextColor)) ::UnityEngine::Color  s_TextColor;

/// @brief Field s_TextElementSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TextElementSize, put=setStaticF_s_TextElementSize)) ::UnityEngine::Vector2  s_TextElementSize;

/// @brief Field s_ThickElementSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ThickElementSize, put=setStaticF_s_ThickElementSize)) ::UnityEngine::Vector2  s_ThickElementSize;

/// @brief Field s_ThinElementSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ThinElementSize, put=setStaticF_s_ThinElementSize)) ::UnityEngine::Vector2  s_ThinElementSize;

/// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T AddComponent(::UnityEngine::GameObject*  go) ;

/// @brief Method CreateButton, addr 0xb3539ac, size 0x2c4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateButton(::GlobalNamespace::TMP_DefaultControls_Resources  resources) ;

/// @brief Method CreateDropdown, addr 0xb354370, size 0xe40, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateDropdown(::GlobalNamespace::TMP_DefaultControls_Resources  resources) ;

/// @brief Method CreateInputField, addr 0xb353d10, size 0x660, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateInputField(::GlobalNamespace::TMP_DefaultControls_Resources  resources) ;

/// @brief Method CreateScrollbar, addr 0xb3536e4, size 0x2c8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateScrollbar(::GlobalNamespace::TMP_DefaultControls_Resources  resources) ;

/// @brief Method CreateText, addr 0xb353c70, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateText(::GlobalNamespace::TMP_DefaultControls_Resources  resources) ;

/// @brief Method CreateUIElementRoot, addr 0xb3532b0, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateUIElementRoot(::StringW  name, ::UnityEngine::Vector2  size) ;

/// @brief Method CreateUIObject, addr 0xb353358, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> CreateUIObject(::StringW  name, ::UnityEngine::GameObject*  parent) ;

/// @brief Method SetDefaultColorTransitionValues, addr 0xb3535a0, size 0x60, virtual false, abstract: false, final false
static inline void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable*  slider) ;

/// @brief Method SetDefaultTextValues, addr 0xb353518, size 0x88, virtual false, abstract: false, final false
static inline void SetDefaultTextValues(::TMPro::TMP_Text*  lbl) ;

/// @brief Method SetLayerRecursively, addr 0xb353600, size 0xe4, virtual false, abstract: false, final false
static inline void SetLayerRecursively(::UnityEngine::GameObject*  go, int32_t  layer) ;

/// @brief Method SetParentAndAlign, addr 0xb353418, size 0x100, virtual false, abstract: false, final false
static inline void SetParentAndAlign(::UnityEngine::GameObject*  child, ::UnityEngine::GameObject*  parent) ;

static inline ::UnityEngine::Color getStaticF_s_DefaultSelectableColor() ;

static inline ::UnityEngine::Color getStaticF_s_TextColor() ;

static inline ::UnityEngine::Vector2 getStaticF_s_TextElementSize() ;

static inline ::UnityEngine::Vector2 getStaticF_s_ThickElementSize() ;

static inline ::UnityEngine::Vector2 getStaticF_s_ThinElementSize() ;

static inline void setStaticF_s_DefaultSelectableColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_TextColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_TextElementSize(::UnityEngine::Vector2  value) ;

static inline void setStaticF_s_ThickElementSize(::UnityEngine::Vector2  value) ;

static inline void setStaticF_s_ThinElementSize(::UnityEngine::Vector2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMP_DefaultControls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMP_DefaultControls", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_DefaultControls(TMP_DefaultControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_DefaultControls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_DefaultControls(TMP_DefaultControls const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22930};

/// @brief Field kThickHeight offset 0xffffffff size 0x4
static constexpr float_t  kThickHeight{static_cast<float_t>(30.0f)};

/// @brief Field kThinHeight offset 0xffffffff size 0x4
static constexpr float_t  kThinHeight{static_cast<float_t>(20.0f)};

/// @brief Field kWidth offset 0xffffffff size 0x4
static constexpr float_t  kWidth{static_cast<float_t>(160.0f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::TMP_DefaultControls) == 0x10, "Size mismatch!");

} // namespace end def TMPro
