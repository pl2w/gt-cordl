#pragma once
// IWYU pragma private; include "GlobalNamespace/Firework.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Firework)
namespace GlobalNamespace {
class Firework___c;
}
namespace GlobalNamespace {
class FireworksController;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Firework;
}
namespace GlobalNamespace {
class Firework___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Firework*);
MARK_REF_T(::GlobalNamespace::Firework___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Firework*, "", "Firework");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Firework___c*, "", "Firework/<>c");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem
namespace GlobalNamespace {
// Is value type: false
// CS Name: Firework
class CORDL_TYPE Firework : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::Firework___c;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::GlobalNamespace::FireworksController>  _controller;

/// @brief Field colorOrigin, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorOrigin, put=__cordl_internal_set_colorOrigin)) ::UnityEngine::Color  colorOrigin;

/// @brief Field colorTarget, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_colorTarget, put=__cordl_internal_set_colorTarget)) ::UnityEngine::Color  colorTarget;

/// @brief Field doExplosion, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_doExplosion, put=__cordl_internal_set_doExplosion)) bool  doExplosion;

/// @brief Field doTrail, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_doTrail, put=__cordl_internal_set_doTrail)) bool  doTrail;

/// @brief Field doTrailAudio, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_doTrailAudio, put=__cordl_internal_set_doTrailAudio)) bool  doTrailAudio;

/// @brief Field explosions, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_explosions, put=__cordl_internal_set_explosions)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  explosions;

/// @brief Field origin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::UnityW<::UnityEngine::Transform>  origin;

/// @brief Field sourceOrigin, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceOrigin, put=__cordl_internal_set_sourceOrigin)) ::UnityW<::UnityEngine::AudioSource>  sourceOrigin;

/// @brief Field sourceTarget, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceTarget, put=__cordl_internal_set_sourceTarget)) ::UnityW<::UnityEngine::AudioSource>  sourceTarget;

/// @brief Field target, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field trail, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_trail, put=__cordl_internal_set_trail)) ::UnityW<::UnityEngine::ParticleSystem>  trail;

/// @brief Method Launch, addr 0x5b22490, size 0xb0, virtual false, abstract: false, final false
inline void Launch() ;

static inline ::GlobalNamespace::Firework* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5b22c28, size 0x90, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5b22ecc, size 0x98, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnValidate, addr 0x5b22990, size 0x298, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::UnityW<::GlobalNamespace::FireworksController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::GlobalNamespace::FireworksController>& __cordl_internal_get__controller() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorOrigin() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorOrigin() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colorTarget() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colorTarget() ;

constexpr bool const& __cordl_internal_get_doExplosion() const;

constexpr bool& __cordl_internal_get_doExplosion() ;

constexpr bool const& __cordl_internal_get_doTrail() const;

constexpr bool& __cordl_internal_get_doTrail() ;

constexpr bool const& __cordl_internal_get_doTrailAudio() const;

constexpr bool& __cordl_internal_get_doTrailAudio() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_explosions() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_explosions() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_origin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_origin() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_sourceOrigin() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_sourceOrigin() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_sourceTarget() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_sourceTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_trail() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_trail() ;

constexpr void __cordl_internal_set__controller(::UnityW<::GlobalNamespace::FireworksController>  value) ;

constexpr void __cordl_internal_set_colorOrigin(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorTarget(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_doExplosion(bool  value) ;

constexpr void __cordl_internal_set_doTrail(bool  value) ;

constexpr void __cordl_internal_set_doTrailAudio(bool  value) ;

constexpr void __cordl_internal_set_explosions(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_origin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_sourceOrigin(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_sourceTarget(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_trail(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5b22f64, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Firework() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Firework", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Firework(Firework && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Firework", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Firework(Firework const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3614};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FireworksController>  ____controller;

/// [Space]
/// @brief Field origin, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___origin;

/// @brief Field target, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [Space]
/// @brief Field colorOrigin, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorOrigin;

/// @brief Field colorTarget, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___colorTarget;

/// [Space]
/// @brief Field sourceOrigin, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___sourceOrigin;

/// @brief Field sourceTarget, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___sourceTarget;

/// [Space]
/// @brief Field trail, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___trail;

/// [Space]
/// @brief Field explosions, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___explosions;

/// [Space]
/// @brief Field doTrail, offset: 0x78, size: 0x1, def value: None
 bool  ___doTrail;

/// @brief Field doTrailAudio, offset: 0x79, size: 0x1, def value: None
 bool  ___doTrailAudio;

/// @brief Field doExplosion, offset: 0x7a, size: 0x1, def value: None
 bool  ___doExplosion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Firework, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___origin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___target) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___colorOrigin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___colorTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___sourceOrigin) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___sourceTarget) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___trail) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___explosions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___doTrail) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___doTrailAudio) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Firework, ___doExplosion) == 0x7a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Firework) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Firework/<>c
class CORDL_TYPE Firework___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::Firework___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Func_2<::UnityW<::GlobalNamespace::Firework>,bool>*  __9__13_0;

static inline ::GlobalNamespace::Firework___c* New_ctor() ;

/// @brief Method <OnValidate>b__13_0, addr 0x5b23004, size 0x5c, virtual false, abstract: false, final false
inline bool _OnValidate_b__13_0(::GlobalNamespace::Firework*  x) ;

/// @brief Method .ctor, addr 0x5b22ffc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::Firework___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityW<::GlobalNamespace::Firework>,bool>* getStaticF___9__13_0() ;

static inline void setStaticF___9(::GlobalNamespace::Firework___c*  value) ;

static inline void setStaticF___9__13_0(::System::Func_2<::UnityW<::GlobalNamespace::Firework>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Firework___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Firework___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Firework___c(Firework___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Firework___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Firework___c(Firework___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3613};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Firework___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
