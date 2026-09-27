#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityFlashed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityFlashed)
namespace GlobalNamespace {
class AnimationData;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityFlashed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityFlashed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityFlashed*, "", "GRAbilityFlashed");
// Dependencies GRAbilityBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityFlashed
class CORDL_TYPE GRAbilityFlashed : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field behaviorEndTime, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorEndTime, put=__cordl_internal_set_behaviorEndTime)) double_t  behaviorEndTime;

/// @brief Field flashAnimationIndex, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashAnimationIndex, put=__cordl_internal_set_flashAnimationIndex)) int32_t  flashAnimationIndex;

/// @brief Field flashAnimations, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_flashAnimations, put=__cordl_internal_set_flashAnimations)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  flashAnimations;

/// @brief Field stunTime, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_stunTime, put=__cordl_internal_set_stunTime)) float_t  stunTime;

/// @brief Method IsDone, addr 0x586c868, size 0x24, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityFlashed* New_ctor() ;

/// @brief Method OnStart, addr 0x586c654, size 0x1dc, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586c830, size 0x38, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method SetStunTime, addr 0x586c64c, size 0x8, virtual false, abstract: false, final false
inline void SetStunTime(float_t  time) ;

/// @brief Method Setup, addr 0x586c648, size 0x4, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr double_t const& __cordl_internal_get_behaviorEndTime() const;

constexpr double_t& __cordl_internal_get_behaviorEndTime() ;

constexpr int32_t const& __cordl_internal_get_flashAnimationIndex() const;

constexpr int32_t& __cordl_internal_get_flashAnimationIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& __cordl_internal_get_flashAnimations() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& __cordl_internal_get_flashAnimations() ;

constexpr float_t const& __cordl_internal_get_stunTime() const;

constexpr float_t& __cordl_internal_get_stunTime() ;

constexpr void __cordl_internal_set_behaviorEndTime(double_t  value) ;

constexpr void __cordl_internal_set_flashAnimationIndex(int32_t  value) ;

constexpr void __cordl_internal_set_flashAnimations(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value) ;

constexpr void __cordl_internal_set_stunTime(float_t  value) ;

/// @brief Method .ctor, addr 0x586c88c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityFlashed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityFlashed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityFlashed(GRAbilityFlashed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityFlashed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityFlashed(GRAbilityFlashed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1862};

/// @brief Field flashAnimations, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  ___flashAnimations;

/// @brief Field flashAnimationIndex, offset: 0x80, size: 0x4, def value: None
 int32_t  ___flashAnimationIndex;

/// @brief Field behaviorEndTime, offset: 0x88, size: 0x8, def value: None
 double_t  ___behaviorEndTime;

/// @brief Field stunTime, offset: 0x90, size: 0x4, def value: None
 float_t  ___stunTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityFlashed, ___flashAnimations) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityFlashed, ___flashAnimationIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityFlashed, ___behaviorEndTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityFlashed, ___stunTime) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityFlashed) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
