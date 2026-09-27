#pragma once
// IWYU pragma private; include "GlobalNamespace/GeodeAtmTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GeodeAtmTrigger)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GeodeAtmTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GeodeAtmTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GeodeAtmTrigger*, "", "GeodeAtmTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GeodeAtmTrigger
class CORDL_TYPE GeodeAtmTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnTrigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTrigger, put=__cordl_internal_set_OnTrigger)) ::UnityEngine::Events::UnityEvent*  OnTrigger;

static inline ::GlobalNamespace::GeodeAtmTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5780284, size 0x14, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTrigger() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTrigger() ;

constexpr void __cordl_internal_set_OnTrigger(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5780298, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeodeAtmTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeodeAtmTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeodeAtmTrigger(GeodeAtmTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeodeAtmTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeodeAtmTrigger(GeodeAtmTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1400};

/// [SerializeField]
/// @brief Field OnTrigger, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GeodeAtmTrigger, ___OnTrigger) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GeodeAtmTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
