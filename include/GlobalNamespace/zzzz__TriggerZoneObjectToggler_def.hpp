#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerZoneObjectToggler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TriggerZoneObjectToggler)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TriggerZoneObjectToggler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TriggerZoneObjectToggler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TriggerZoneObjectToggler*, "", "TriggerZoneObjectToggler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TriggerZoneObjectToggler
class CORDL_TYPE TriggerZoneObjectToggler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnEnter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnter, put=__cordl_internal_set_OnEnter)) ::UnityEngine::Events::UnityEvent*  OnEnter;

/// @brief Field OnExit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnExit, put=__cordl_internal_set_OnExit)) ::UnityEngine::Events::UnityEvent*  OnExit;

/// @brief Field ToggleObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToggleObject, put=__cordl_internal_set_ToggleObject)) ::UnityW<::UnityEngine::GameObject>  ToggleObject;

/// @brief Field TriggerName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerName, put=__cordl_internal_set_TriggerName)) ::StringW  TriggerName;

/// @brief Field _inTriggerZone, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__inTriggerZone, put=__cordl_internal_set__inTriggerZone)) bool  _inTriggerZone;

/// @brief Method Awake, addr 0x5df5d58, size 0x1c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleEnter, addr 0x5df5eb4, size 0x4c, virtual false, abstract: false, final false
inline void HandleEnter() ;

/// @brief Method HandleExit, addr 0x5df5dd4, size 0x48, virtual false, abstract: false, final false
inline void HandleExit() ;

/// @brief Method IsMatchingTrigger, addr 0x5df5e40, size 0x74, virtual false, abstract: false, final false
inline bool IsMatchingTrigger(::UnityEngine::Collider*  other) ;

static inline ::GlobalNamespace::TriggerZoneObjectToggler* New_ctor() ;

/// @brief Method OnDisable, addr 0x5df5d74, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x5df5e1c, size 0x24, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5df5f00, size 0x24, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnEnter() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnEnter() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnExit() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnExit() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ToggleObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ToggleObject() ;

constexpr ::StringW const& __cordl_internal_get_TriggerName() const;

constexpr ::StringW& __cordl_internal_get_TriggerName() ;

constexpr bool const& __cordl_internal_get__inTriggerZone() const;

constexpr bool& __cordl_internal_get__inTriggerZone() ;

constexpr void __cordl_internal_set_OnEnter(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnExit(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ToggleObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_TriggerName(::StringW  value) ;

constexpr void __cordl_internal_set__inTriggerZone(bool  value) ;

/// @brief Method .ctor, addr 0x5df5f24, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TriggerZoneObjectToggler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TriggerZoneObjectToggler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TriggerZoneObjectToggler(TriggerZoneObjectToggler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriggerZoneObjectToggler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriggerZoneObjectToggler(TriggerZoneObjectToggler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{493};

/// @brief Field TriggerName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TriggerName;

/// @brief Field ToggleObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ToggleObject;

/// @brief Field OnEnter, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnEnter;

/// @brief Field OnExit, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnExit;

/// @brief Field _inTriggerZone, offset: 0x40, size: 0x1, def value: None
 bool  ____inTriggerZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TriggerZoneObjectToggler, ___TriggerName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerZoneObjectToggler, ___ToggleObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerZoneObjectToggler, ___OnEnter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerZoneObjectToggler, ___OnExit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TriggerZoneObjectToggler, ____inTriggerZone) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TriggerZoneObjectToggler) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
