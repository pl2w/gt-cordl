#pragma once
// IWYU pragma private; include "Oculus/Interaction/UIThemeManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__UITheme_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIThemeManager)
namespace Oculus::Interaction {
class UITheme;
}
// Forward declare root types
namespace Oculus::Interaction {
class UIThemeManager;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UIThemeManager*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UIThemeManager*, "Oculus.Interaction", "UIThemeManager");
// Dependencies Oculus.Interaction.UITheme, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UIThemeManager
class CORDL_TYPE UIThemeManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentThemeIndex)) int32_t  CurrentThemeIndex;

 __declspec(property(get=get_Themes)) ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>>  Themes;

/// @brief Field _currentThemeIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentThemeIndex, put=__cordl_internal_set__currentThemeIndex)) int32_t  _currentThemeIndex;

/// @brief Field _themes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__themes, put=__cordl_internal_set__themes)) ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>>  _themes;

/// @brief Method ApplyCurrentTheme, addr 0xa42b528, size 0x8, virtual false, abstract: false, final false
inline void ApplyCurrentTheme() ;

/// @brief Method ApplyTheme, addr 0xa42ac30, size 0x8f8, virtual false, abstract: false, final false
inline void ApplyTheme(int32_t  index) ;

static inline ::Oculus::Interaction::UIThemeManager* New_ctor() ;

/// @brief Method Start, addr 0xa42ac28, size 0x8, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get__currentThemeIndex() const;

constexpr int32_t& __cordl_internal_get__currentThemeIndex() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>> const& __cordl_internal_get__themes() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>>& __cordl_internal_get__themes() ;

constexpr void __cordl_internal_set__currentThemeIndex(int32_t  value) ;

constexpr void __cordl_internal_set__themes(::ArrayW<::UnityW<::Oculus::Interaction::UITheme>>  value) ;

/// @brief Method .ctor, addr 0xa42b530, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentThemeIndex, addr 0xa42ac20, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentThemeIndex() ;

/// @brief Method get_Themes, addr 0xa42ac18, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>> get_Themes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIThemeManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIThemeManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIThemeManager(UIThemeManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIThemeManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIThemeManager(UIThemeManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28253};

/// [SerializeField]
/// @brief Field _themes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>>  ____themes;

/// [SerializeField]
/// @brief Field _currentThemeIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ____currentThemeIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UIThemeManager, ____themes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UIThemeManager, ____currentThemeIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UIThemeManager) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
