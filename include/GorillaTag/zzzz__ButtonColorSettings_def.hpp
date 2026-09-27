#pragma once
// IWYU pragma private; include "GorillaTag/ButtonColorSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ButtonColorSettings)
// Forward declare root types
namespace GorillaTag {
class ButtonColorSettings;
}
// Write type traits
MARK_REF_T(::GorillaTag::ButtonColorSettings*);
DEFINE_IL2CPP_CLASS(::GorillaTag::ButtonColorSettings*, "GorillaTag", "ButtonColorSettings");
// [CreateAssetMenu(fileName = "GorillaButtonColorSettings", menuName = "ScriptableObjects/GorillaButtonColorSettings", order = 0)]
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ButtonColorSettings
class CORDL_TYPE ButtonColorSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field PressedColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_PressedColor, put=__cordl_internal_set_PressedColor)) ::UnityEngine::Color  PressedColor;

/// @brief Field PressedTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_PressedTime, put=__cordl_internal_set_PressedTime)) float_t  PressedTime;

/// @brief Field UnpressedColor, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_UnpressedColor, put=__cordl_internal_set_UnpressedColor)) ::UnityEngine::Color  UnpressedColor;

static inline ::GorillaTag::ButtonColorSettings* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_PressedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_PressedColor() ;

constexpr float_t const& __cordl_internal_get_PressedTime() const;

constexpr float_t& __cordl_internal_get_PressedTime() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_UnpressedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_UnpressedColor() ;

constexpr void __cordl_internal_set_PressedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_PressedTime(float_t  value) ;

constexpr void __cordl_internal_set_UnpressedColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x5d348c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonColorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonColorSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonColorSettings(ButtonColorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonColorSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonColorSettings(ButtonColorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4647};

/// @brief Field UnpressedColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___UnpressedColor;

/// @brief Field PressedColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___PressedColor;

/// [Tooltip("Optional\nThe time the change will be in effect")]
/// @brief Field PressedTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___PressedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::ButtonColorSettings, ___UnpressedColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ButtonColorSettings, ___PressedColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ButtonColorSettings, ___PressedTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::ButtonColorSettings) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag
