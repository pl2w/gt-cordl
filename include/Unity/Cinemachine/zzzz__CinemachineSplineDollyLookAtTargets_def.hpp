#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDollyLookAtTargets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineSplineDollyLookAtTargets)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineSplineDollyLookAtTargets_Item;
}
namespace GlobalNamespace {
struct CinemachineSplineDollyLookAtTargets_LerpItem;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineSplineDolly;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineSplineDollyLookAtTargets;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets*, "Unity.Cinemachine", "CinemachineSplineDollyLookAtTargets");
// [ExecuteAlways]
// [SaveDuringPlay]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)1)]
// [AddComponentMenu("Cinemachine/Procedural/Rotation Control/Cinemachine Spline Dolly LookAt Targets")]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineSplineDollyLookAtTargets.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineSplineDollyLookAtTargets
class CORDL_TYPE CinemachineSplineDollyLookAtTargets : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using Item = ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item;

using LerpItem = ::GlobalNamespace::CinemachineSplineDollyLookAtTargets_LerpItem;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field Targets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Targets, put=__cordl_internal_set_Targets)) ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*  Targets;

/// @brief Method GetGetSplineAndDolly, addr 0xaea6dd4, size 0x120, virtual false, abstract: false, final false
inline bool GetGetSplineAndDolly(::by_ref<::UnityEngine::Splines::SplineContainer*>  spline, ::by_ref<::Unity::Cinemachine::CinemachineSplineDolly*>  dolly) ;

/// @brief Method MutateCameraState, addr 0xaea6efc, size 0x29c, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets* New_ctor() ;

/// @brief Method Reset, addr 0xaea6ce0, size 0xa8, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>* const& __cordl_internal_get_Targets() const;

constexpr ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*& __cordl_internal_get_Targets() ;

constexpr void __cordl_internal_set_Targets(::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*  value) ;

/// @brief Method .ctor, addr 0xaea7228, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xaea6d88, size 0x4c, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaea6ef4, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineDollyLookAtTargets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineDollyLookAtTargets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineSplineDollyLookAtTargets(CinemachineSplineDollyLookAtTargets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineDollyLookAtTargets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineSplineDollyLookAtTargets(CinemachineSplineDollyLookAtTargets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22247};

/// [Tooltip("LookAt targets for the camera at specific positions on the Spline")]
/// @brief Field Targets, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Splines::SplineData_1<::GlobalNamespace::CinemachineSplineDollyLookAtTargets_Item>*  ___Targets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets, ___Targets) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineSplineDollyLookAtTargets) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
