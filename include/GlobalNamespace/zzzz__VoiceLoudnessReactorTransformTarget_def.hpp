#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorTransformTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceLoudnessReactorTransformTarget)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactorTransformTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactorTransformTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactorTransformTarget*, "", "VoiceLoudnessReactorTransformTarget");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactorTransformTarget
class CORDL_TYPE VoiceLoudnessReactorTransformTarget : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Initial, put=set_Initial)) ::UnityEngine::Vector3  Initial;

/// @brief Field Max, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_Max, put=__cordl_internal_set_Max)) ::UnityEngine::Vector3  Max;

/// @brief Field Scale, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) float_t  Scale;

/// @brief Field UseSmoothedLoudness, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseSmoothedLoudness, put=__cordl_internal_set_UseSmoothedLoudness)) bool  UseSmoothedLoudness;

/// @brief Field initial, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_initial, put=__cordl_internal_set_initial)) ::UnityEngine::Vector3  initial;

/// @brief Field transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

static inline ::GlobalNamespace::VoiceLoudnessReactorTransformTarget* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Max() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Max() ;

constexpr float_t const& __cordl_internal_get_Scale() const;

constexpr float_t& __cordl_internal_get_Scale() ;

constexpr bool const& __cordl_internal_get_UseSmoothedLoudness() const;

constexpr bool& __cordl_internal_get_UseSmoothedLoudness() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initial() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initial() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_Max(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Scale(float_t  value) ;

constexpr void __cordl_internal_set_UseSmoothedLoudness(bool  value) ;

constexpr void __cordl_internal_set_initial(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5b40f8c, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Initial, addr 0x5b40f74, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Initial() ;

/// @brief Method set_Initial, addr 0x5b40f80, size 0xc, virtual false, abstract: false, final false
inline void set_Initial(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactorTransformTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorTransformTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactorTransformTarget(VoiceLoudnessReactorTransformTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorTransformTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactorTransformTarget(VoiceLoudnessReactorTransformTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3719};

/// @brief Field transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

/// @brief Field initial, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initial;

/// @brief Field Max, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Max;

/// @brief Field Scale, offset: 0x30, size: 0x4, def value: None
 float_t  ___Scale;

/// @brief Field UseSmoothedLoudness, offset: 0x34, size: 0x1, def value: None
 bool  ___UseSmoothedLoudness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformTarget, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformTarget, ___initial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformTarget, ___Max) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformTarget, ___Scale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorTransformTarget, ___UseSmoothedLoudness) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactorTransformTarget) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
