#pragma once
// IWYU pragma private; include "GlobalNamespace/RotateXform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RotateXform_Mode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotateXform)
namespace GlobalNamespace {
struct RotateXform_Mode;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RotateXform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotateXform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotateXform*, "", "RotateXform");
// Dependencies RotateXform::Mode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotateXform
class CORDL_TYPE RotateXform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::GlobalNamespace::RotateXform_Mode;

/// @brief Field mode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::RotateXform_Mode  mode;

/// @brief Field speed, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) ::UnityEngine::Vector3  speed;

/// @brief Field speedFactor, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_speedFactor, put=__cordl_internal_set_speedFactor)) float_t  speedFactor;

/// @brief Field xform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_xform, put=__cordl_internal_set_xform)) ::UnityW<::UnityEngine::Transform>  xform;

static inline ::GlobalNamespace::RotateXform* New_ctor() ;

/// @brief Method Update, addr 0x5d094d4, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::RotateXform_Mode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::RotateXform_Mode& __cordl_internal_get_mode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_speed() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_speed() ;

constexpr float_t const& __cordl_internal_get_speedFactor() const;

constexpr float_t& __cordl_internal_get_speedFactor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_xform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_xform() ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::RotateXform_Mode  value) ;

constexpr void __cordl_internal_set_speed(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_speedFactor(float_t  value) ;

constexpr void __cordl_internal_set_xform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5d095f4, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotateXform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotateXform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotateXform(RotateXform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotateXform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotateXform(RotateXform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{450};

/// @brief Field xform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___xform;

/// @brief Field speed, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___speed;

/// @brief Field mode, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::RotateXform_Mode  ___mode;

/// @brief Field speedFactor, offset: 0x38, size: 0x4, def value: None
 float_t  ___speedFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotateXform, ___xform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateXform, ___speed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateXform, ___mode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotateXform, ___speedFactor) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotateXform) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
