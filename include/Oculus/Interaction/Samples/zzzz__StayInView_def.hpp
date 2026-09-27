#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/StayInView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StayInView)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class StayInView;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::StayInView*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::StayInView*, "Oculus.Interaction.Samples", "StayInView");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.StayInView
class CORDL_TYPE StayInView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _extraDistanceForward, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__extraDistanceForward, put=__cordl_internal_set__extraDistanceForward)) float_t  _extraDistanceForward;

/// @brief Field _eyeCenter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__eyeCenter, put=__cordl_internal_set__eyeCenter)) ::UnityW<::UnityEngine::Transform>  _eyeCenter;

/// @brief Field _zeroOutEyeHeight, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__zeroOutEyeHeight, put=__cordl_internal_set__zeroOutEyeHeight)) bool  _zeroOutEyeHeight;

static inline ::Oculus::Interaction::Samples::StayInView* New_ctor() ;

/// @brief Method Update, addr 0xa440b18, size 0x2c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__extraDistanceForward() const;

constexpr float_t& __cordl_internal_get__extraDistanceForward() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__eyeCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__eyeCenter() ;

constexpr bool const& __cordl_internal_get__zeroOutEyeHeight() const;

constexpr bool& __cordl_internal_get__zeroOutEyeHeight() ;

constexpr void __cordl_internal_set__extraDistanceForward(float_t  value) ;

constexpr void __cordl_internal_set__eyeCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__zeroOutEyeHeight(bool  value) ;

/// @brief Method .ctor, addr 0xa440dd8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StayInView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StayInView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StayInView(StayInView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StayInView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StayInView(StayInView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28350};

/// [SerializeField]
/// @brief Field _eyeCenter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____eyeCenter;

/// [SerializeField]
/// @brief Field _extraDistanceForward, offset: 0x28, size: 0x4, def value: None
 float_t  ____extraDistanceForward;

/// [SerializeField]
/// @brief Field _zeroOutEyeHeight, offset: 0x2c, size: 0x1, def value: None
 bool  ____zeroOutEyeHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::StayInView, ____eyeCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::StayInView, ____extraDistanceForward) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::StayInView, ____zeroOutEyeHeight) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::StayInView) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
