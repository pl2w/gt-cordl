#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OneEuroFilterPropertyBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OneEuroFilterPropertyBlock)
// Forward declare root types
namespace Oculus::Interaction::Input {
struct OneEuroFilterPropertyBlock;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock, "Oculus.Interaction.Input", "OneEuroFilterPropertyBlock");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Input.OneEuroFilterPropertyBlock
struct CORDL_TYPE OneEuroFilterPropertyBlock {
public:
// Declarations
 __declspec(property(get=get_Beta)) float_t  Beta;

 __declspec(property(get=get_DCutoff)) float_t  DCutoff;

 __declspec(property(get=get_MinCutoff)) float_t  MinCutoff;

/// @brief Method .ctor, addr 0xa514cbc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  minCutoff, float_t  beta) ;

/// @brief Method .ctor, addr 0xa514cb0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  minCutoff, float_t  beta, float_t  dCutoff) ;

/// @brief Method get_Beta, addr 0xa514c88, size 0x8, virtual false, abstract: false, final false
inline float_t get_Beta() ;

/// @brief Method get_DCutoff, addr 0xa514c90, size 0x8, virtual false, abstract: false, final false
inline float_t get_DCutoff() ;

/// @brief Method get_Default, addr 0xa513b5c, size 0x10, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock get_Default() ;

/// @brief Method get_DefaultBeta, addr 0xa514ca0, size 0x8, virtual false, abstract: false, final false
static inline float_t get_DefaultBeta() ;

/// @brief Method get_DefaultDCutoff, addr 0xa514ca8, size 0x8, virtual false, abstract: false, final false
static inline float_t get_DefaultDCutoff() ;

/// @brief Method get_DefaultMinCutoff, addr 0xa514c98, size 0x8, virtual false, abstract: false, final false
static inline float_t get_DefaultMinCutoff() ;

/// @brief Method get_MinCutoff, addr 0xa514c80, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinCutoff() ;

// Ctor Parameters []
// @brief default ctor
constexpr OneEuroFilterPropertyBlock() ;

// Ctor Parameters [CppParam { name: "_minCutoff", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_beta", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dCutoff", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OneEuroFilterPropertyBlock(float_t  _minCutoff, float_t  _beta, float_t  _dCutoff) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [SerializeField]
/// [Tooltip("Decrease min cutoff until jitter is eliminated")]
/// @brief Field _minCutoff, offset: 0x0, size: 0x4, def value: None
 float_t  _minCutoff;

/// [SerializeField]
/// [Tooltip("Increase beta from zero to reduce lag")]
/// @brief Field _beta, offset: 0x4, size: 0x4, def value: None
 float_t  _beta;

/// [SerializeField]
/// [Tooltip("Smaller values of dCutoff smooth more but slow accuracy")]
/// @brief Field _dCutoff, offset: 0x8, size: 0x4, def value: None
 float_t  _dCutoff;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock, _minCutoff) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock, _beta) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock, _dCutoff) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock) == 0xc, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
