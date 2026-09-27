#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorTransformRotationTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceLoudnessReactorTransformRotationTarget)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactorTransformRotationTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*, "", "VoiceLoudnessReactorTransformRotationTarget");
// Dependencies System.Object, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactorTransformRotationTarget
class CORDL_TYPE VoiceLoudnessReactorTransformRotationTarget : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Initial, put=set_Initial)) ::UnityEngine::Quaternion  Initial;

/// @brief Field Max, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Max, put=__cordl_internal_set_Max)) ::UnityEngine::Quaternion  Max;

/// @brief Field Scale, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) float_t  Scale;

/// @brief Field UseSmoothedLoudness, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseSmoothedLoudness, put=__cordl_internal_set_UseSmoothedLoudness)) bool  UseSmoothedLoudness;

/// @brief Field initial, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_initial, put=__cordl_internal_set_initial)) ::UnityEngine::Quaternion  initial;

/// @brief Field transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

static inline ::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget* New_ctor() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_Max() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_Max() ;

constexpr float_t const& __cordl_internal_get_Scale() const;

constexpr float_t& __cordl_internal_get_Scale() ;

constexpr bool const& __cordl_internal_get_UseSmoothedLoudness() const;

constexpr bool& __cordl_internal_get_UseSmoothedLoudness() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initial() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initial() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_Max(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_Scale(float_t  value) ;

constexpr void __cordl_internal_set_UseSmoothedLoudness(bool  value) ;

constexpr void __cordl_internal_set_initial(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5b4100c, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Initial, addr 0x5b40ff4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Initial() ;

/// @brief Method set_Initial, addr 0x5b41000, size 0xc, virtual false, abstract: false, final false
inline void set_Initial(::UnityEngine::Quaternion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactorTransformRotationTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorTransformRotationTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactorTransformRotationTarget(VoiceLoudnessReactorTransformRotationTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorTransformRotationTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactorTransformRotationTarget(VoiceLoudnessReactorTransformRotationTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3720};

/// @brief Field transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

/// @brief Field initial, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initial;

/// @brief Field Max, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___Max;

/// @brief Field Scale, offset: 0x38, size: 0x4, def value: None
 float_t  ___Scale;

/// @brief Field UseSmoothedLoudness, offset: 0x3c, size: 0x1, def value: None
 bool  ___UseSmoothedLoudness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget, ___initial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget, ___Max) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget, ___Scale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget, ___UseSmoothedLoudness) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
