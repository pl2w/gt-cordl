#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyScale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRBodyScale)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class IXRBodyTransformation;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRMovableBody;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyScale;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "XRBodyScale");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyScale
class CORDL_TYPE XRBodyScale : public ::System::Object {
public:
// Declarations
/// @brief Field <uniformScale>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__uniformScale_k__BackingField, put=__cordl_internal_set__uniformScale_k__BackingField)) float_t  _uniformScale_k__BackingField;

 __declspec(property(get=get_uniformScale, put=set_uniformScale)) float_t  uniformScale;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*() noexcept;

/// @brief Method Apply, addr 0xb449e9c, size 0x104, virtual true, abstract: false, final false
inline void Apply(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale* New_ctor() ;

constexpr float_t const& __cordl_internal_get__uniformScale_k__BackingField() const;

constexpr float_t& __cordl_internal_get__uniformScale_k__BackingField() ;

constexpr void __cordl_internal_set__uniformScale_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0xb449fa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_uniformScale, addr 0xb449e8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_uniformScale() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation* i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyTransformation() noexcept;

/// [CompilerGenerated]
/// @brief Method set_uniformScale, addr 0xb449e94, size 0x8, virtual false, abstract: false, final false
inline void set_uniformScale(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBodyScale() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBodyScale", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBodyScale(XRBodyScale && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBodyScale", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBodyScale(XRBodyScale const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11345};

/// [CompilerGenerated]
/// @brief Field <uniformScale>k__BackingField, offset: 0x10, size: 0x4, def value: None
 float_t  ____uniformScale_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale, ____uniformScale_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyScale) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion
