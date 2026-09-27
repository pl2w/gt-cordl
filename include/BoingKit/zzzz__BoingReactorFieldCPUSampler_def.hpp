#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorFieldCPUSampler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingManager_UpdateMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoingReactorFieldCPUSampler)
namespace BoingKit {
class BoingReactorField;
}
// Forward declare root types
namespace BoingKit {
class BoingReactorFieldCPUSampler;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingReactorFieldCPUSampler*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingReactorFieldCPUSampler*, "BoingKit", "BoingReactorFieldCPUSampler");
// Dependencies BoingKit.BoingManager::UpdateMode, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingReactorFieldCPUSampler
class CORDL_TYPE BoingReactorFieldCPUSampler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PositionSampleMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_PositionSampleMultiplier, put=__cordl_internal_set_PositionSampleMultiplier)) float_t  PositionSampleMultiplier;

/// @brief Field ReactorField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReactorField, put=__cordl_internal_set_ReactorField)) ::UnityW<::BoingKit::BoingReactorField>  ReactorField;

/// @brief Field RotationSampleMultiplier, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotationSampleMultiplier, put=__cordl_internal_set_RotationSampleMultiplier)) float_t  RotationSampleMultiplier;

/// @brief Field UpdateMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateMode, put=__cordl_internal_set_UpdateMode)) ::GlobalNamespace::BoingManager_UpdateMode  UpdateMode;

/// @brief Field m_objPosition, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_objPosition, put=__cordl_internal_set_m_objPosition)) ::UnityEngine::Vector3  m_objPosition;

/// @brief Field m_objRotation, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_objRotation, put=__cordl_internal_set_m_objRotation)) ::UnityEngine::Quaternion  m_objRotation;

static inline ::BoingKit::BoingReactorFieldCPUSampler* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e20d28, size 0x58, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e20cd0, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Restore, addr 0x5e21144, size 0x4c, virtual false, abstract: false, final false
inline void Restore() ;

/// @brief Method SampleFromField, addr 0x5e20d80, size 0x23c, virtual false, abstract: false, final false
inline void SampleFromField() ;

constexpr float_t const& __cordl_internal_get_PositionSampleMultiplier() const;

constexpr float_t& __cordl_internal_get_PositionSampleMultiplier() ;

constexpr ::UnityW<::BoingKit::BoingReactorField> const& __cordl_internal_get_ReactorField() const;

constexpr ::UnityW<::BoingKit::BoingReactorField>& __cordl_internal_get_ReactorField() ;

constexpr float_t const& __cordl_internal_get_RotationSampleMultiplier() const;

constexpr float_t& __cordl_internal_get_RotationSampleMultiplier() ;

constexpr ::GlobalNamespace::BoingManager_UpdateMode const& __cordl_internal_get_UpdateMode() const;

constexpr ::GlobalNamespace::BoingManager_UpdateMode& __cordl_internal_get_UpdateMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_objPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_objPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_objRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_objRotation() ;

constexpr void __cordl_internal_set_PositionSampleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value) ;

constexpr void __cordl_internal_set_RotationSampleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_UpdateMode(::GlobalNamespace::BoingManager_UpdateMode  value) ;

constexpr void __cordl_internal_set_m_objPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_objRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0x5e21190, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingReactorFieldCPUSampler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorFieldCPUSampler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingReactorFieldCPUSampler(BoingReactorFieldCPUSampler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingReactorFieldCPUSampler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingReactorFieldCPUSampler(BoingReactorFieldCPUSampler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5203};

/// @brief Field ReactorField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::BoingKit::BoingReactorField>  ___ReactorField;

/// [Tooltip("Match this mode with how you update your object\'s transform.\n\nUpdate - Use this mode if you update your object\'s transform in Update(). This uses variable Time.detalTime. Use FixedUpdate if physics simulation becomes unstable.\n\nFixed Update - Use this mode if you update your object\'s transform in FixedUpdate(). This uses fixed Time.fixedDeltaTime. Also, use this mode if the game object is affected by Unity physics (i.e. has a rigid body component), which uses fixed updates.")]
/// @brief Field UpdateMode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::BoingManager_UpdateMode  ___UpdateMode;

/// [Range(0, 10)]
/// [Tooltip("Multiplier on positional samples from reactor field.\n1.0 means 100%.")]
/// @brief Field PositionSampleMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ___PositionSampleMultiplier;

/// [Range(0, 10)]
/// [Tooltip("Multiplier on rotational samples from reactor field.\n1.0 means 100%.")]
/// @brief Field RotationSampleMultiplier, offset: 0x30, size: 0x4, def value: None
 float_t  ___RotationSampleMultiplier;

/// @brief Field m_objPosition, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_objPosition;

/// @brief Field m_objRotation, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_objRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingReactorFieldCPUSampler, ___ReactorField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldCPUSampler, ___UpdateMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldCPUSampler, ___PositionSampleMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldCPUSampler, ___RotationSampleMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldCPUSampler, ___m_objPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingReactorFieldCPUSampler, ___m_objRotation) == 0x40, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingReactorFieldCPUSampler) == 0x50, "Size mismatch!");

} // namespace end def BoingKit
