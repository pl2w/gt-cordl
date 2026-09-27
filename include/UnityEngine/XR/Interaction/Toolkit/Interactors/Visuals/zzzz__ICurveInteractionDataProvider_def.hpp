#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/ICurveInteractionDataProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICurveInteractionDataProvider)
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
struct EndPointType;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class ICurveInteractionDataProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "ICurveInteractionDataProvider");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider
class CORDL_TYPE ICurveInteractionDataProvider {
public:
// Declarations
 __declspec(property(get=get_curveOrigin)) ::UnityW<::UnityEngine::Transform>  curveOrigin;

 __declspec(property(get=get_hasValidSelect)) bool  hasValidSelect;

 __declspec(property(get=get_isActive)) bool  isActive;

 __declspec(property(get=get_lastSamplePoint)) ::UnityEngine::Vector3  lastSamplePoint;

 __declspec(property(get=get_samplePoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  samplePoints;

/// @brief Method TryGetCurveEndNormal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType TryGetCurveEndNormal(::by_ref<::UnityEngine::Vector3>  endNormal, bool  snapToSelectedAttachIfAvailable) ;

/// @brief Method TryGetCurveEndPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType TryGetCurveEndPoint(::by_ref<::UnityEngine::Vector3>  endPoint, bool  snapToSelectedAttachIfAvailable, bool  snapToSnapVolumeIfAvailable) ;

/// @brief Method get_curveOrigin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Transform> get_curveOrigin() ;

/// @brief Method get_hasValidSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_hasValidSelect() ;

/// @brief Method get_isActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isActive() ;

/// @brief Method get_lastSamplePoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_lastSamplePoint() ;

/// @brief Method get_samplePoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_samplePoints() ;

// Ctor Parameters [CppParam { name: "", ty: "ICurveInteractionDataProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICurveInteractionDataProvider(ICurveInteractionDataProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
