#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandFilterParameterBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandFilterParameterBlock)
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandFilterParameterBlock;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandFilterParameterBlock*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandFilterParameterBlock*, "Oculus.Interaction.Input", "HandFilterParameterBlock");
// [CreateAssetMenu(menuName = "Meta/Interaction/SDK/Input/Hand Filter Parameters")]
// Dependencies Oculus.Interaction.Input.OneEuroFilterPropertyBlock, UnityEngine.ScriptableObject
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandFilterParameterBlock
class CORDL_TYPE HandFilterParameterBlock : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field fingerRotationParameters, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_fingerRotationParameters, put=__cordl_internal_set_fingerRotationParameters)) ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  fingerRotationParameters;

/// @brief Field frequency, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frequency, put=__cordl_internal_set_frequency)) float_t  frequency;

/// @brief Field wristPositionParameters, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_wristPositionParameters, put=__cordl_internal_set_wristPositionParameters)) ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  wristPositionParameters;

/// @brief Field wristRotationParameters, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_wristRotationParameters, put=__cordl_internal_set_wristRotationParameters)) ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  wristRotationParameters;

static inline ::Oculus::Interaction::Input::HandFilterParameterBlock* New_ctor() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& __cordl_internal_get_fingerRotationParameters() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& __cordl_internal_get_fingerRotationParameters() ;

constexpr float_t const& __cordl_internal_get_frequency() const;

constexpr float_t& __cordl_internal_get_frequency() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& __cordl_internal_get_wristPositionParameters() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& __cordl_internal_get_wristPositionParameters() ;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& __cordl_internal_get_wristRotationParameters() const;

constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& __cordl_internal_get_wristRotationParameters() ;

constexpr void __cordl_internal_set_fingerRotationParameters(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value) ;

constexpr void __cordl_internal_set_frequency(float_t  value) ;

constexpr void __cordl_internal_set_wristPositionParameters(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value) ;

constexpr void __cordl_internal_set_wristRotationParameters(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value) ;

/// @brief Method .ctor, addr 0xa513a40, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandFilterParameterBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandFilterParameterBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandFilterParameterBlock(HandFilterParameterBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandFilterParameterBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandFilterParameterBlock(HandFilterParameterBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16515};

/// [Header("One Euro Filter Parameters")]
/// [SerializeField]
/// [Tooltip("Smoothing for wrist position")]
/// @brief Field wristPositionParameters, offset: 0x18, size: 0xc, def value: None
 ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  ___wristPositionParameters;

/// [SerializeField]
/// [Tooltip("Smoothing for wrist rotation")]
/// @brief Field wristRotationParameters, offset: 0x24, size: 0xc, def value: None
 ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  ___wristRotationParameters;

/// [SerializeField]
/// [Tooltip("Smoothing for finger rotation")]
/// @brief Field fingerRotationParameters, offset: 0x30, size: 0xc, def value: None
 ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  ___fingerRotationParameters;

/// [SerializeField]
/// [Tooltip("Frequency (in frames per sec)")]
/// @brief Field frequency, offset: 0x3c, size: 0x4, def value: None
 float_t  ___frequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandFilterParameterBlock, ___wristPositionParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandFilterParameterBlock, ___wristRotationParameters) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandFilterParameterBlock, ___fingerRotationParameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandFilterParameterBlock, ___frequency) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandFilterParameterBlock) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
