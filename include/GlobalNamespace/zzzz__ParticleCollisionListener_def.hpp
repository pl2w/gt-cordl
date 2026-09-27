#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleCollisionListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ParticleCollisionListener)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct ParticleCollisionEvent;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleCollisionListener;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParticleCollisionListener*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleCollisionListener*, "", "ParticleCollisionListener");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleCollisionListener
class CORDL_TYPE ParticleCollisionListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _events, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  _events;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::ParticleSystem>  target;

/// @brief Method Awake, addr 0x5a1f5fc, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ParticleCollisionListener* New_ctor() ;

/// @brief Method OnCollisionEvent, addr 0x5a1f678, size 0x4, virtual true, abstract: false, final false
inline void OnCollisionEvent(::UnityEngine::ParticleCollisionEvent  ev) ;

/// @brief Method OnParticleCollision, addr 0x5a1f67c, size 0xc8, virtual false, abstract: false, final false
inline void OnParticleCollision(::UnityEngine::GameObject*  other) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* const& __cordl_internal_get__events() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*& __cordl_internal_get__events() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set__events(::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5a1f744, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleCollisionListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleCollisionListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleCollisionListener(ParticleCollisionListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleCollisionListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleCollisionListener(ParticleCollisionListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2836};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___target;

/// [SerializeReference]
/// @brief Field _events, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>*  ____events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleCollisionListener, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleCollisionListener, ____events) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleCollisionListener) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
