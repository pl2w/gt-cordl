#pragma once
// IWYU pragma private; include "GlobalNamespace/YorickLook.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(YorickLook)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class YorickLook;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::YorickLook*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::YorickLook*, "", "YorickLook");
// Dependencies UnityEngine.MonoBehaviour, VRRig
namespace GlobalNamespace {
// Is value type: false
// CS Name: YorickLook
class CORDL_TYPE YorickLook : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field leftEye, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftEye, put=__cordl_internal_set_leftEye)) ::UnityW<::UnityEngine::Transform>  leftEye;

/// @brief Field lookAtAngleDegrees, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookAtAngleDegrees, put=__cordl_internal_set_lookAtAngleDegrees)) float_t  lookAtAngleDegrees;

/// @brief Field lookRadius, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookRadius, put=__cordl_internal_set_lookRadius)) float_t  lookRadius;

/// @brief Field lookTarget, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookTarget, put=__cordl_internal_set_lookTarget)) ::UnityW<::UnityEngine::Transform>  lookTarget;

/// @brief Field overlapRigs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapRigs, put=__cordl_internal_set_overlapRigs)) ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  overlapRigs;

/// @brief Field rightEye, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightEye, put=__cordl_internal_set_rightEye)) ::UnityW<::UnityEngine::Transform>  rightEye;

/// @brief Field rigs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigs, put=__cordl_internal_set_rigs)) ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  rigs;

/// @brief Field rotSpeed, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotSpeed, put=__cordl_internal_set_rotSpeed)) float_t  rotSpeed;

/// @brief Method Awake, addr 0x57764f8, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5776550, size 0xa20, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::YorickLook* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftEye() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftEye() ;

constexpr float_t const& __cordl_internal_get_lookAtAngleDegrees() const;

constexpr float_t& __cordl_internal_get_lookAtAngleDegrees() ;

constexpr float_t const& __cordl_internal_get_lookRadius() const;

constexpr float_t& __cordl_internal_get_lookRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lookTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lookTarget() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> const& __cordl_internal_get_overlapRigs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>& __cordl_internal_get_overlapRigs() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightEye() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightEye() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> const& __cordl_internal_get_rigs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>& __cordl_internal_get_rigs() ;

constexpr float_t const& __cordl_internal_get_rotSpeed() const;

constexpr float_t& __cordl_internal_get_rotSpeed() ;

constexpr void __cordl_internal_set_leftEye(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lookAtAngleDegrees(float_t  value) ;

constexpr void __cordl_internal_set_lookRadius(float_t  value) ;

constexpr void __cordl_internal_set_lookTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_overlapRigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value) ;

constexpr void __cordl_internal_set_rightEye(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value) ;

constexpr void __cordl_internal_set_rotSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x5776f70, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YorickLook() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YorickLook", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YorickLook(YorickLook && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YorickLook", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YorickLook(YorickLook const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1374};

/// @brief Field leftEye, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftEye;

/// @brief Field rightEye, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightEye;

/// @brief Field lookTarget, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lookTarget;

/// @brief Field lookRadius, offset: 0x38, size: 0x4, def value: None
 float_t  ___lookRadius;

/// @brief Field rigs, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  ___rigs;

/// @brief Field overlapRigs, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  ___overlapRigs;

/// @brief Field rotSpeed, offset: 0x50, size: 0x4, def value: None
 float_t  ___rotSpeed;

/// @brief Field lookAtAngleDegrees, offset: 0x54, size: 0x4, def value: None
 float_t  ___lookAtAngleDegrees;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::YorickLook, ___leftEye) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::YorickLook, ___rightEye) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::YorickLook, ___lookTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::YorickLook, ___lookRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::YorickLook, ___rigs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::YorickLook, ___overlapRigs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::YorickLook, ___rotSpeed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::YorickLook, ___lookAtAngleDegrees) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::YorickLook) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
