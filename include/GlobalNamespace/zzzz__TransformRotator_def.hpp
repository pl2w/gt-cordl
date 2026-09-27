#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformRotator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformRotator)
namespace GlobalNamespace {
struct TransformRotator__Start_d__5;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformRotator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransformRotator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformRotator*, "", "TransformRotator");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformRotator
class CORDL_TYPE TransformRotator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__5 = ::GlobalNamespace::TransformRotator__Start_d__5;

/// @brief Field anchor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::System::DateTime  anchor;

/// @brief Field axis, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_axis, put=__cordl_internal_set_axis)) ::UnityEngine::Vector3  axis;

/// @brief Field baseRotation, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_baseRotation, put=__cordl_internal_set_baseRotation)) ::UnityEngine::Quaternion  baseRotation;

/// @brief Field degreesPerSecond, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_degreesPerSecond, put=__cordl_internal_set_degreesPerSecond)) float_t  degreesPerSecond;

/// @brief Field sinAmp, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_sinAmp, put=__cordl_internal_set_sinAmp)) float_t  sinAmp;

/// @brief Method LateUpdate, addr 0x5b3a538, size 0x100, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TransformRotator* New_ctor() ;

/// [AsyncStateMachine(typeof(TransformRotator::<Start>d__5))]
/// @brief Method Start, addr 0x5b3a490, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateRotation, addr 0x5b3a638, size 0xf0, virtual false, abstract: false, final false
inline void UpdateRotation(double_t  t) ;

constexpr ::System::DateTime const& __cordl_internal_get_anchor() const;

constexpr ::System::DateTime& __cordl_internal_get_anchor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_axis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_axis() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_baseRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_baseRotation() ;

constexpr float_t const& __cordl_internal_get_degreesPerSecond() const;

constexpr float_t& __cordl_internal_get_degreesPerSecond() ;

constexpr float_t const& __cordl_internal_get_sinAmp() const;

constexpr float_t& __cordl_internal_get_sinAmp() ;

constexpr void __cordl_internal_set_anchor(::System::DateTime  value) ;

constexpr void __cordl_internal_set_axis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_baseRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_degreesPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_sinAmp(float_t  value) ;

/// @brief Method .ctor, addr 0x5b3a728, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformRotator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformRotator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformRotator(TransformRotator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformRotator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformRotator(TransformRotator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3694};

/// [SerializeField]
/// @brief Field axis, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___axis;

/// [SerializeField]
/// @brief Field degreesPerSecond, offset: 0x2c, size: 0x4, def value: None
 float_t  ___degreesPerSecond;

/// [SerializeField]
/// @brief Field sinAmp, offset: 0x30, size: 0x4, def value: None
 float_t  ___sinAmp;

/// @brief Field baseRotation, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___baseRotation;

/// @brief Field anchor, offset: 0x48, size: 0x8, def value: None
 ::System::DateTime  ___anchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformRotator, ___axis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformRotator, ___degreesPerSecond) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformRotator, ___sinAmp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformRotator, ___baseRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformRotator, ___anchor) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformRotator) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
