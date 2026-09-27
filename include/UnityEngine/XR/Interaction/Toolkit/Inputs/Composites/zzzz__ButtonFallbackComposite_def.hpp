#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/ButtonFallbackComposite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/zzzz__FallbackComposite_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonFallbackComposite)
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
class ButtonFallbackComposite;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Composites", "ButtonFallbackComposite");
// [Preserve]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Inputs.Composites.FallbackComposite`1<TValue>
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Composites {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites.ButtonFallbackComposite
class CORDL_TYPE ButtonFallbackComposite : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::FallbackComposite_1<float_t> {
public:
// Declarations
/// @brief Field first, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) int32_t  first;

/// @brief Field second, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_second, put=__cordl_internal_set_second)) int32_t  second;

/// @brief Field third, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_third, put=__cordl_internal_set_third)) int32_t  third;

/// @brief Method EvaluateMagnitude, addr 0xb4cd24c, size 0xc, virtual true, abstract: false, final false
inline float_t EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// [Preserve]
/// @brief Method Initialize, addr 0xb4cd258, size 0x4, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite* New_ctor() ;

/// @brief Method ReadValue, addr 0xb4cd1a0, size 0xac, virtual true, abstract: false, final false
inline float_t ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>  context) ;

constexpr int32_t const& __cordl_internal_get_first() const;

constexpr int32_t& __cordl_internal_get_first() ;

constexpr int32_t const& __cordl_internal_get_second() const;

constexpr int32_t& __cordl_internal_get_second() ;

constexpr int32_t const& __cordl_internal_get_third() const;

constexpr int32_t& __cordl_internal_get_third() ;

constexpr void __cordl_internal_set_first(int32_t  value) ;

constexpr void __cordl_internal_set_second(int32_t  value) ;

constexpr void __cordl_internal_set_third(int32_t  value) ;

/// @brief Method .ctor, addr 0xb4cd2c4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonFallbackComposite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonFallbackComposite", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonFallbackComposite(ButtonFallbackComposite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonFallbackComposite", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonFallbackComposite(ButtonFallbackComposite const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11687};

/// [InputControl(layout = "Button")]
/// @brief Field first, offset: 0x10, size: 0x4, def value: None
 int32_t  ___first;

/// [InputControl(layout = "Button")]
/// @brief Field second, offset: 0x14, size: 0x4, def value: None
 int32_t  ___second;

/// [InputControl(layout = "Button")]
/// @brief Field third, offset: 0x18, size: 0x4, def value: None
 int32_t  ___third;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite, ___first) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite, ___second) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite, ___third) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Composites::ButtonFallbackComposite) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Composites
