#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityBase)
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityBase*, "", "GRAbilityBase");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityBase
class CORDL_TYPE GRAbilityBase : public ::System::Object {
public:
// Declarations
/// @brief Field agent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field anim, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field animator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field attributes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field head, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::UnityW<::UnityEngine::Transform>  head;

/// @brief Field lineOfSight, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineOfSight, put=__cordl_internal_set_lineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight;

/// @brief Field rb, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field root, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityW<::UnityEngine::Transform>  root;

/// @brief Field startTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) double_t  startTime;

/// @brief Field stopTime, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopTime, put=__cordl_internal_set_stopTime)) double_t  stopTime;

/// @brief Field walkableArea, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_walkableArea, put=__cordl_internal_set_walkableArea)) int32_t  walkableArea;

/// @brief Method GetAbilityTime, addr 0x5867260, size 0x10, virtual false, abstract: false, final false
inline float_t GetAbilityTime(double_t  currTime) ;

/// @brief Method GetRange, addr 0x5867548, size 0x8, virtual true, abstract: false, final false
inline float_t GetRange() ;

/// @brief Method IsCoolDownOver, addr 0x5867048, size 0x8, virtual true, abstract: false, final false
inline bool IsCoolDownOver() ;

/// @brief Method IsCoolDownOver, addr 0x5867510, size 0x38, virtual false, abstract: false, final false
inline bool IsCoolDownOver(float_t  coolDown) ;

/// @brief Method IsDone, addr 0x5867270, size 0x8, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityBase* New_ctor() ;

/// @brief Method OnStart, addr 0x5867030, size 0x4, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x5867034, size 0x4, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnThink, addr 0x5867038, size 0x4, virtual true, abstract: false, final false
inline void OnThink(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x5867044, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5867040, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method OnUpdateShared, addr 0x586703c, size 0x4, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method PlayAnim, addr 0x58672f4, size 0x21c, virtual true, abstract: false, final false
inline void PlayAnim(::StringW  animName, float_t  blendTime, float_t  speed) ;

/// @brief Method Setup, addr 0x5867050, size 0x1c0, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

/// @brief Method Start, addr 0x5867210, size 0x28, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Stop, addr 0x5867238, size 0x28, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Think, addr 0x5867278, size 0xc, virtual false, abstract: false, final false
inline void Think(float_t  dt) ;

/// @brief Method UpdateAuthority, addr 0x5867284, size 0x38, virtual false, abstract: false, final false
inline void UpdateAuthority(float_t  dt) ;

/// @brief Method UpdateRemote, addr 0x58672bc, size 0x38, virtual false, abstract: false, final false
inline void UpdateRemote(float_t  dt) ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_head() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_head() ;

constexpr ::GlobalNamespace::GRSenseLineOfSight* const& __cordl_internal_get_lineOfSight() const;

constexpr ::GlobalNamespace::GRSenseLineOfSight*& __cordl_internal_get_lineOfSight() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root() ;

constexpr double_t const& __cordl_internal_get_startTime() const;

constexpr double_t& __cordl_internal_get_startTime() ;

constexpr double_t const& __cordl_internal_get_stopTime() const;

constexpr double_t& __cordl_internal_get_stopTime() ;

constexpr int32_t const& __cordl_internal_get_walkableArea() const;

constexpr int32_t& __cordl_internal_get_walkableArea() ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_head(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startTime(double_t  value) ;

constexpr void __cordl_internal_set_stopTime(double_t  value) ;

constexpr void __cordl_internal_set_walkableArea(int32_t  value) ;

/// @brief Method .ctor, addr 0x5867550, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityBase(GRAbilityBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityBase(GRAbilityBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1846};

/// @brief Field agent, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgent>  ___agent;

/// @brief Field entity, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field anim, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field animator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field root, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___root;

/// @brief Field head, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___head;

/// @brief Field audioSource, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field lineOfSight, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseLineOfSight*  ___lineOfSight;

/// @brief Field rb, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field attributes, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// [ReadOnly]
/// @brief Field startTime, offset: 0x60, size: 0x8, def value: None
 double_t  ___startTime;

/// [ReadOnly]
/// @brief Field stopTime, offset: 0x68, size: 0x8, def value: None
 double_t  ___stopTime;

/// @brief Field walkableArea, offset: 0x70, size: 0x4, def value: None
 int32_t  ___walkableArea;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___agent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___entity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___anim) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___root) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___head) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___audioSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___lineOfSight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___rb) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___attributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___startTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___stopTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityBase, ___walkableArea) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityBase) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
