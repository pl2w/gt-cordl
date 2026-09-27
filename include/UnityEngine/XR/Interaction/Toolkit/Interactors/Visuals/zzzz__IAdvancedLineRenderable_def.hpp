#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/IAdvancedLineRenderable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAdvancedLineRenderable)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class ILineRenderable;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class IAdvancedLineRenderable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "IAdvancedLineRenderable");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.IAdvancedLineRenderable
class CORDL_TYPE IAdvancedLineRenderable {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*() noexcept;

/// @brief Method GetLineOriginAndDirection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetLineOriginAndDirection(::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction) ;

/// @brief Method GetLinePoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetLinePoints(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints, ::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride) ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable* i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__ILineRenderable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAdvancedLineRenderable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAdvancedLineRenderable(IAdvancedLineRenderable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11489};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
