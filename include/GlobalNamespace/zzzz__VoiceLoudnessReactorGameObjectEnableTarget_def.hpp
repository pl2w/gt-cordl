#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorGameObjectEnableTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VoiceLoudnessReactorGameObjectEnableTarget)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceLoudnessReactorGameObjectEnableTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*, "", "VoiceLoudnessReactorGameObjectEnableTarget");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceLoudnessReactorGameObjectEnableTarget
class CORDL_TYPE VoiceLoudnessReactorGameObjectEnableTarget : public ::System::Object {
public:
// Declarations
/// @brief Field GameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_GameObject, put=__cordl_internal_set_GameObject)) ::UnityW<::UnityEngine::GameObject>  GameObject;

/// @brief Field Scale, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Scale, put=__cordl_internal_set_Scale)) float_t  Scale;

/// @brief Field Threshold, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Threshold, put=__cordl_internal_set_Threshold)) float_t  Threshold;

/// @brief Field TurnOnAtThreshhold, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_TurnOnAtThreshhold, put=__cordl_internal_set_TurnOnAtThreshhold)) bool  TurnOnAtThreshhold;

/// @brief Field UseSmoothedLoudness, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseSmoothedLoudness, put=__cordl_internal_set_UseSmoothedLoudness)) bool  UseSmoothedLoudness;

static inline ::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_GameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_GameObject() ;

constexpr float_t const& __cordl_internal_get_Scale() const;

constexpr float_t& __cordl_internal_get_Scale() ;

constexpr float_t const& __cordl_internal_get_Threshold() const;

constexpr float_t& __cordl_internal_get_Threshold() ;

constexpr bool const& __cordl_internal_get_TurnOnAtThreshhold() const;

constexpr bool& __cordl_internal_get_TurnOnAtThreshhold() ;

constexpr bool const& __cordl_internal_get_UseSmoothedLoudness() const;

constexpr bool& __cordl_internal_get_UseSmoothedLoudness() ;

constexpr void __cordl_internal_set_GameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_Scale(float_t  value) ;

constexpr void __cordl_internal_set_Threshold(float_t  value) ;

constexpr void __cordl_internal_set_TurnOnAtThreshhold(bool  value) ;

constexpr void __cordl_internal_set_UseSmoothedLoudness(bool  value) ;

/// @brief Method .ctor, addr 0x5b410ac, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceLoudnessReactorGameObjectEnableTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorGameObjectEnableTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceLoudnessReactorGameObjectEnableTarget(VoiceLoudnessReactorGameObjectEnableTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceLoudnessReactorGameObjectEnableTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceLoudnessReactorGameObjectEnableTarget(VoiceLoudnessReactorGameObjectEnableTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3722};

/// @brief Field GameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___GameObject;

/// @brief Field Threshold, offset: 0x18, size: 0x4, def value: None
 float_t  ___Threshold;

/// @brief Field TurnOnAtThreshhold, offset: 0x1c, size: 0x1, def value: None
 bool  ___TurnOnAtThreshhold;

/// @brief Field UseSmoothedLoudness, offset: 0x1d, size: 0x1, def value: None
 bool  ___UseSmoothedLoudness;

/// @brief Field Scale, offset: 0x20, size: 0x4, def value: None
 float_t  ___Scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget, ___GameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget, ___Threshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget, ___TurnOnAtThreshhold) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget, ___UseSmoothedLoudness) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget, ___Scale) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
