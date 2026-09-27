#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRScaleValueProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRScaleValueProvider)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct ScaleMode;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRScaleValueProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRScaleValueProvider");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRScaleValueProvider
class CORDL_TYPE IXRScaleValueProvider {
public:
// Declarations
 __declspec(property(get=get_scaleMode, put=set_scaleMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  scaleMode;

 __declspec(property(get=get_scaleValue)) float_t  scaleValue;

/// @brief Method get_scaleMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode get_scaleMode() ;

/// @brief Method get_scaleValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_scaleValue() ;

/// @brief Method set_scaleMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_scaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRScaleValueProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRScaleValueProvider(IXRScaleValueProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11437};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
