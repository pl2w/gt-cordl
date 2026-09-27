#pragma once
// IWYU pragma private; include "GlobalNamespace/LifeCycleEventTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LifeCycleEventTrigger)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class LifeCycleEventTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LifeCycleEventTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LifeCycleEventTrigger*, "", "LifeCycleEventTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LifeCycleEventTrigger
class CORDL_TYPE LifeCycleEventTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _onAwake, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onAwake, put=__cordl_internal_set__onAwake)) ::UnityEngine::Events::UnityEvent*  _onAwake;

/// @brief Field _onDestroy, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__onDestroy, put=__cordl_internal_set__onDestroy)) ::UnityEngine::Events::UnityEvent*  _onDestroy;

/// @brief Field _onDisable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onDisable, put=__cordl_internal_set__onDisable)) ::UnityEngine::Events::UnityEvent*  _onDisable;

/// @brief Field _onEnable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onEnable, put=__cordl_internal_set__onEnable)) ::UnityEngine::Events::UnityEvent*  _onEnable;

/// @brief Field _onStart, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStart, put=__cordl_internal_set__onStart)) ::UnityEngine::Events::UnityEvent*  _onStart;

/// @brief Method Awake, addr 0x5a1d794, size 0x14, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::LifeCycleEventTrigger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a1d7e4, size 0x14, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5a1d7d0, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a1d7bc, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x5a1d7a8, size 0x14, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onAwake() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onAwake() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onDestroy() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onDestroy() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onDisable() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onDisable() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onEnable() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onEnable() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStart() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStart() ;

constexpr void __cordl_internal_set__onAwake(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onDestroy(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onDisable(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onEnable(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onStart(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5a1d7f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LifeCycleEventTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LifeCycleEventTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LifeCycleEventTrigger(LifeCycleEventTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LifeCycleEventTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LifeCycleEventTrigger(LifeCycleEventTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2823};

/// [SerializeField]
/// @brief Field _onAwake, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onAwake;

/// [SerializeField]
/// @brief Field _onStart, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStart;

/// [SerializeField]
/// @brief Field _onEnable, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onEnable;

/// [SerializeField]
/// @brief Field _onDisable, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onDisable;

/// [SerializeField]
/// @brief Field _onDestroy, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onDestroy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LifeCycleEventTrigger, ____onAwake) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LifeCycleEventTrigger, ____onStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LifeCycleEventTrigger, ____onEnable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LifeCycleEventTrigger, ____onDisable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LifeCycleEventTrigger, ____onDestroy) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LifeCycleEventTrigger) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
