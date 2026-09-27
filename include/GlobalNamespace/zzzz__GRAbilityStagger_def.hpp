#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityStagger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityStagger)
namespace GlobalNamespace {
class AnimationData;
}
namespace GlobalNamespace {
class GRAbilityInterpolatedMovement;
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityStagger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityStagger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityStagger*, "", "GRAbilityStagger");
// Dependencies GRAbilityBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityStagger
class CORDL_TYPE GRAbilityStagger : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field animData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_animData, put=__cordl_internal_set_animData)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  animData;

/// @brief Field animNameString, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_animNameString, put=__cordl_internal_set_animNameString)) ::StringW  animNameString;

/// @brief Field duration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field lastAnimIndex, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAnimIndex, put=__cordl_internal_set_lastAnimIndex)) int32_t  lastAnimIndex;

/// @brief Field staggerMovement, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_staggerMovement, put=__cordl_internal_set_staggerMovement)) ::GlobalNamespace::GRAbilityInterpolatedMovement*  staggerMovement;

/// @brief Field stunTime, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_stunTime, put=__cordl_internal_set_stunTime)) float_t  stunTime;

/// @brief Method GetAnimName, addr 0x58692bc, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetAnimName() ;

/// @brief Method IsDone, addr 0x586927c, size 0x2c, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityStagger* New_ctor() ;

/// @brief Method OnStart, addr 0x5869078, size 0x1cc, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x5869244, size 0x38, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x58692a8, size 0x14, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetStaggerVelocity, addr 0x5868f74, size 0xc0, virtual false, abstract: false, final false
inline void SetStaggerVelocity(::UnityEngine::Vector3  vel) ;

/// @brief Method SetStunTime, addr 0x5868f6c, size 0x8, virtual false, abstract: false, final false
inline void SetStunTime(float_t  time) ;

/// @brief Method Setup, addr 0x5869034, size 0x44, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& __cordl_internal_get_animData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& __cordl_internal_get_animData() ;

constexpr ::StringW const& __cordl_internal_get_animNameString() const;

constexpr ::StringW& __cordl_internal_get_animNameString() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr int32_t const& __cordl_internal_get_lastAnimIndex() const;

constexpr int32_t& __cordl_internal_get_lastAnimIndex() ;

constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement* const& __cordl_internal_get_staggerMovement() const;

constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement*& __cordl_internal_get_staggerMovement() ;

constexpr float_t const& __cordl_internal_get_stunTime() const;

constexpr float_t& __cordl_internal_get_stunTime() ;

constexpr void __cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value) ;

constexpr void __cordl_internal_set_animNameString(::StringW  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_lastAnimIndex(int32_t  value) ;

constexpr void __cordl_internal_set_staggerMovement(::GlobalNamespace::GRAbilityInterpolatedMovement*  value) ;

constexpr void __cordl_internal_set_stunTime(float_t  value) ;

/// @brief Method .ctor, addr 0x58692c4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityStagger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityStagger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityStagger(GRAbilityStagger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityStagger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityStagger(GRAbilityStagger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1855};

/// @brief Field duration, offset: 0x74, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field animData, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  ___animData;

/// @brief Field lastAnimIndex, offset: 0x80, size: 0x4, def value: None
 int32_t  ___lastAnimIndex;

/// @brief Field animNameString, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___animNameString;

/// @brief Field staggerMovement, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityInterpolatedMovement*  ___staggerMovement;

/// @brief Field stunTime, offset: 0x98, size: 0x4, def value: None
 float_t  ___stunTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityStagger, ___duration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityStagger, ___animData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityStagger, ___lastAnimIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityStagger, ___animNameString) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityStagger, ___staggerMovement) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityStagger, ___stunTime) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityStagger) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
