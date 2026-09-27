#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineConfiner_Mode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineConfiner)
namespace GlobalNamespace {
struct CinemachineConfiner_Mode;
}
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineConfiner2D;
}
namespace Unity::Cinemachine {
class CinemachineConfiner3D;
}
namespace Unity::Cinemachine {
class CinemachineConfiner_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineConfiner;
}
namespace Unity::Cinemachine {
class CinemachineConfiner_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineConfiner*);
MARK_REF_T(::Unity::Cinemachine::CinemachineConfiner_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineConfiner*, "Unity.Cinemachine", "CinemachineConfiner");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineConfiner_VcamExtraState*, "Unity.Cinemachine", "CinemachineConfiner/VcamExtraState");
// [Obsolete("CinemachineConfiner has been deprecated. Use CinemachineConfiner2D or CinemachineConfiner3D instead")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// Dependencies Unity.Cinemachine.CinemachineConfiner::Mode, Unity.Cinemachine.CinemachineExtension
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineConfiner
class CORDL_TYPE CinemachineConfiner : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using Mode = ::GlobalNamespace::CinemachineConfiner_Mode;

using VcamExtraState = ::Unity::Cinemachine::CinemachineConfiner_VcamExtraState;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field m_BoundingShape2D, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoundingShape2D, put=__cordl_internal_set_m_BoundingShape2D)) ::UnityW<::UnityEngine::Collider2D>  m_BoundingShape2D;

/// @brief Field m_BoundingShape2DCache, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoundingShape2DCache, put=__cordl_internal_set_m_BoundingShape2DCache)) ::UnityW<::UnityEngine::Collider2D>  m_BoundingShape2DCache;

/// @brief Field m_BoundingVolume, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoundingVolume, put=__cordl_internal_set_m_BoundingVolume)) ::UnityW<::UnityEngine::Collider>  m_BoundingVolume;

/// @brief Field m_ConfineMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ConfineMode, put=__cordl_internal_set_m_ConfineMode)) ::GlobalNamespace::CinemachineConfiner_Mode  m_ConfineMode;

/// @brief Field m_ConfineScreenEdges, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ConfineScreenEdges, put=__cordl_internal_set_m_ConfineScreenEdges)) bool  m_ConfineScreenEdges;

/// @brief Field m_Damping, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Damping, put=__cordl_internal_set_m_Damping)) float_t  m_Damping;

/// @brief Field m_PathCache, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PathCache, put=__cordl_internal_set_m_PathCache)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  m_PathCache;

/// @brief Field m_PathTotalPointCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PathTotalPointCount, put=__cordl_internal_set_m_PathTotalPointCount)) int32_t  m_PathTotalPointCount;

/// @brief Method CameraWasDisplaced, addr 0xaeca918, size 0x18, virtual false, abstract: false, final false
inline bool CameraWasDisplaced(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method ConfineOrthoCameraToScreenEdges, addr 0xaecad08, size 0x3f4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ConfineOrthoCameraToScreenEdges(::by_ref<::Unity::Cinemachine::CameraState>  state) ;

/// @brief Method ConfinePoint, addr 0xaecb0fc, size 0x360, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ConfinePoint(::UnityEngine::Vector3  camPos) ;

/// @brief Method ConnectToVcam, addr 0xaeca9f4, size 0x8, virtual true, abstract: false, final false
inline void ConnectToVcam(bool  connect) ;

/// @brief Method GetCameraDisplacementDistance, addr 0xaeca930, size 0x68, virtual false, abstract: false, final false
inline float_t GetCameraDisplacementDistance(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetMaxDampTime, addr 0xaecab1c, size 0x8, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method InvalidateCache, addr 0xaecb460, size 0x28, virtual false, abstract: false, final false
inline void InvalidateCache() ;

/// [Obsolete("Please use InvalidateCache() instead")]
/// @brief Method InvalidatePathCache, addr 0xaecb45c, size 0x4, virtual false, abstract: false, final false
inline void InvalidatePathCache() ;

static inline ::Unity::Cinemachine::CinemachineConfiner* New_ctor() ;

/// @brief Method OnValidate, addr 0xaeca9dc, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xaecab24, size 0x1e4, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaeca998, size 0x44, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method UpgradeToCm3, addr 0xaecbc64, size 0x3c, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineConfiner2D*  c) ;

/// @brief Method UpgradeToCm3, addr 0xaecbc44, size 0x20, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineConfiner3D*  c) ;

/// @brief Method UpgradeToCm3_GetTargetType, addr 0xaecbbbc, size 0x88, virtual false, abstract: false, final false
inline ::System::Type* UpgradeToCm3_GetTargetType() ;

/// @brief Method ValidatePathCache, addr 0xaecb488, size 0x734, virtual false, abstract: false, final false
inline bool ValidatePathCache() ;

constexpr ::UnityW<::UnityEngine::Collider2D> const& __cordl_internal_get_m_BoundingShape2D() const;

constexpr ::UnityW<::UnityEngine::Collider2D>& __cordl_internal_get_m_BoundingShape2D() ;

constexpr ::UnityW<::UnityEngine::Collider2D> const& __cordl_internal_get_m_BoundingShape2DCache() const;

constexpr ::UnityW<::UnityEngine::Collider2D>& __cordl_internal_get_m_BoundingShape2DCache() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_BoundingVolume() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_BoundingVolume() ;

constexpr ::GlobalNamespace::CinemachineConfiner_Mode const& __cordl_internal_get_m_ConfineMode() const;

constexpr ::GlobalNamespace::CinemachineConfiner_Mode& __cordl_internal_get_m_ConfineMode() ;

constexpr bool const& __cordl_internal_get_m_ConfineScreenEdges() const;

constexpr bool& __cordl_internal_get_m_ConfineScreenEdges() ;

constexpr float_t const& __cordl_internal_get_m_Damping() const;

constexpr float_t& __cordl_internal_get_m_Damping() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>* const& __cordl_internal_get_m_PathCache() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*& __cordl_internal_get_m_PathCache() ;

constexpr int32_t const& __cordl_internal_get_m_PathTotalPointCount() const;

constexpr int32_t& __cordl_internal_get_m_PathTotalPointCount() ;

constexpr void __cordl_internal_set_m_BoundingShape2D(::UnityW<::UnityEngine::Collider2D>  value) ;

constexpr void __cordl_internal_set_m_BoundingShape2DCache(::UnityW<::UnityEngine::Collider2D>  value) ;

constexpr void __cordl_internal_set_m_BoundingVolume(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_m_ConfineMode(::GlobalNamespace::CinemachineConfiner_Mode  value) ;

constexpr void __cordl_internal_set_m_ConfineScreenEdges(bool  value) ;

constexpr void __cordl_internal_set_m_Damping(float_t  value) ;

constexpr void __cordl_internal_set_m_PathCache(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  value) ;

constexpr void __cordl_internal_set_m_PathTotalPointCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xaecbca0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xaeca9fc, size 0x120, virtual false, abstract: false, final false
inline bool get_IsValid() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineConfiner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineConfiner(CinemachineConfiner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineConfiner(CinemachineConfiner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22398};

/// [Tooltip("The confiner can operate using a 2D bounding shape or a 3D bounding volume")]
/// @brief Field m_ConfineMode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineConfiner_Mode  ___m_ConfineMode;

/// [Tooltip("The volume within which the camera is to be contained")]
/// @brief Field m_BoundingVolume, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___m_BoundingVolume;

/// [Tooltip("The 2D shape within which the camera is to be contained")]
/// @brief Field m_BoundingShape2D, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider2D>  ___m_BoundingShape2D;

/// @brief Field m_BoundingShape2DCache, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider2D>  ___m_BoundingShape2DCache;

/// [Tooltip("If camera is orthographic, screen edges will be confined to the volume.  If not checked, then only the camera center will be confined")]
/// @brief Field m_ConfineScreenEdges, offset: 0x50, size: 0x1, def value: None
 bool  ___m_ConfineScreenEdges;

/// [Tooltip("How gradually to return the camera to the bounding volume if it goes beyond the borders.  Higher numbers are more gradual.")]
/// [Range(0, 10)]
/// @brief Field m_Damping, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_Damping;

/// @brief Field m_PathCache, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  ___m_PathCache;

/// @brief Field m_PathTotalPointCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ___m_PathTotalPointCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner, ___m_ConfineMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner, ___m_BoundingVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner, ___m_BoundingShape2D) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner, ___m_BoundingShape2DCache) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner, ___m_ConfineScreenEdges) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner, ___m_Damping) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner, ___m_PathCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner, ___m_PathTotalPointCount) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineConfiner) == 0x68, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineConfiner/VcamExtraState
class CORDL_TYPE CinemachineConfiner_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field ConfinerDisplacement, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ConfinerDisplacement, put=__cordl_internal_set_ConfinerDisplacement)) float_t  ConfinerDisplacement;

/// @brief Field PreviousDisplacement, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousDisplacement, put=__cordl_internal_set_PreviousDisplacement)) ::UnityEngine::Vector3  PreviousDisplacement;

static inline ::Unity::Cinemachine::CinemachineConfiner_VcamExtraState* New_ctor() ;

constexpr float_t const& __cordl_internal_get_ConfinerDisplacement() const;

constexpr float_t& __cordl_internal_get_ConfinerDisplacement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousDisplacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousDisplacement() ;

constexpr void __cordl_internal_set_ConfinerDisplacement(float_t  value) ;

constexpr void __cordl_internal_set_PreviousDisplacement(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xaecbcb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineConfiner_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineConfiner_VcamExtraState(CinemachineConfiner_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineConfiner_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineConfiner_VcamExtraState(CinemachineConfiner_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22397};

/// @brief Field PreviousDisplacement, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousDisplacement;

/// @brief Field ConfinerDisplacement, offset: 0x24, size: 0x4, def value: None
 float_t  ___ConfinerDisplacement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner_VcamExtraState, ___PreviousDisplacement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineConfiner_VcamExtraState, ___ConfinerDisplacement) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineConfiner_VcamExtraState) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
