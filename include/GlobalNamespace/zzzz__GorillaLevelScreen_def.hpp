#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaLevelScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaLevelScreen)
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaLevelScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaLevelScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaLevelScreen*, "", "GorillaLevelScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaLevelScreen
class CORDL_TYPE GorillaLevelScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field badMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_badMaterial, put=__cordl_internal_set_badMaterial)) ::UnityW<::UnityEngine::Material>  badMaterial;

/// @brief Field goodMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_goodMaterial, put=__cordl_internal_set_goodMaterial)) ::UnityW<::UnityEngine::Material>  goodMaterial;

/// @brief Field myText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myText, put=__cordl_internal_set_myText)) ::UnityW<::UnityEngine::UI::Text>  myText;

/// @brief Field startingText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingText, put=__cordl_internal_set_startingText)) ::StringW  startingText;

/// @brief Method Awake, addr 0x5919b38, size 0x9c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaLevelScreen* New_ctor() ;

/// @brief Method UpdateText, addr 0x590ecd8, size 0x138, virtual false, abstract: false, final false
inline void UpdateText(::StringW  newText, bool  setToGoodMaterial) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_badMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_badMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_goodMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_goodMaterial() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_myText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_myText() ;

constexpr ::StringW const& __cordl_internal_get_startingText() const;

constexpr ::StringW& __cordl_internal_get_startingText() ;

constexpr void __cordl_internal_set_badMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_goodMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_startingText(::StringW  value) ;

/// @brief Method .ctor, addr 0x5919bd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaLevelScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaLevelScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaLevelScreen(GorillaLevelScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaLevelScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaLevelScreen(GorillaLevelScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2195};

/// @brief Field startingText, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___startingText;

/// @brief Field goodMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___goodMaterial;

/// @brief Field badMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___badMaterial;

/// @brief Field myText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___myText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaLevelScreen, ___startingText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaLevelScreen, ___goodMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaLevelScreen, ___badMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaLevelScreen, ___myText) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaLevelScreen) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
