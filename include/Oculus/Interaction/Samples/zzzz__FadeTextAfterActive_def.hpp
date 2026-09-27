#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/FadeTextAfterActive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FadeTextAfterActive)
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class FadeTextAfterActive;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::FadeTextAfterActive*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::FadeTextAfterActive*, "Oculus.Interaction.Samples", "FadeTextAfterActive");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.FadeTextAfterActive
class CORDL_TYPE FadeTextAfterActive : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _fadeOutTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__fadeOutTime, put=__cordl_internal_set__fadeOutTime)) float_t  _fadeOutTime;

/// @brief Field _text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro>  _text;

/// @brief Field _timeLeft, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeLeft, put=__cordl_internal_set__timeLeft)) float_t  _timeLeft;

static inline ::Oculus::Interaction::Samples::FadeTextAfterActive* New_ctor() ;

/// @brief Method OnEnable, addr 0xa43750c, size 0xb0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0xa4375bc, size 0x114, virtual true, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__fadeOutTime() const;

constexpr float_t& __cordl_internal_get__fadeOutTime() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text() ;

constexpr float_t const& __cordl_internal_get__timeLeft() const;

constexpr float_t& __cordl_internal_get__timeLeft() ;

constexpr void __cordl_internal_set__fadeOutTime(float_t  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__timeLeft(float_t  value) ;

/// @brief Method .ctor, addr 0xa4376d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FadeTextAfterActive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FadeTextAfterActive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FadeTextAfterActive(FadeTextAfterActive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FadeTextAfterActive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FadeTextAfterActive(FadeTextAfterActive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28301};

/// [SerializeField]
/// @brief Field _fadeOutTime, offset: 0x20, size: 0x4, def value: None
 float_t  ____fadeOutTime;

/// [SerializeField]
/// @brief Field _text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____text;

/// @brief Field _timeLeft, offset: 0x30, size: 0x4, def value: None
 float_t  ____timeLeft;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::FadeTextAfterActive, ____fadeOutTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::FadeTextAfterActive, ____text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::FadeTextAfterActive, ____timeLeft) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::FadeTextAfterActive) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
