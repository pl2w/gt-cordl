#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityEventOnGrab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UnityEventOnGrab)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEventOnGrab;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityEventOnGrab*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityEventOnGrab*, "", "UnityEventOnGrab");
// [RequireComponent(typeof(TransferrableObject))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityEventOnGrab
class CORDL_TYPE UnityEventOnGrab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field onGrab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onGrab, put=__cordl_internal_set_onGrab)) ::UnityEngine::Events::UnityEvent*  onGrab;

/// @brief Field onRelease, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRelease, put=__cordl_internal_set_onRelease)) ::UnityEngine::Events::UnityEvent*  onRelease;

/// @brief Method Awake, addr 0x579534c, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::UnityEventOnGrab* New_ctor() ;

/// @brief Method OnDisable, addr 0x57954c4, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57954b0, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onGrab() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onGrab() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRelease() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRelease() ;

constexpr void __cordl_internal_set_onGrab(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onRelease(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x57954d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventOnGrab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventOnGrab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventOnGrab(UnityEventOnGrab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventOnGrab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventOnGrab(UnityEventOnGrab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1456};

/// [SerializeField]
/// @brief Field onGrab, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onGrab;

/// [SerializeField]
/// @brief Field onRelease, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onRelease;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityEventOnGrab, ___onGrab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityEventOnGrab, ___onRelease) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityEventOnGrab) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
