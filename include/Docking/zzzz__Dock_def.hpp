#pragma once
// IWYU pragma private; include "Docking/Dock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Dock)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Docking {
class Dock;
}
// Write type traits
MARK_REF_T(::Docking::Dock*);
DEFINE_IL2CPP_CLASS(::Docking::Dock*, "Docking", "Dock");
// Dependencies UnityEngine.MonoBehaviour
namespace Docking {
// Is value type: false
// CS Name: Docking.Dock
class CORDL_TYPE Dock : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ForceUndockTime)) float_t  ForceUndockTime;

 __declspec(property(get=get_Moveable)) bool  Moveable;

/// @brief Field OnDock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDock, put=__cordl_internal_set_OnDock)) ::UnityEngine::Events::UnityEvent*  OnDock;

/// @brief Field OnUnDock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUnDock, put=__cordl_internal_set_OnUnDock)) ::UnityEngine::Events::UnityEvent*  OnUnDock;

/// @brief Field forceUndockTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_forceUndockTime, put=__cordl_internal_set_forceUndockTime)) float_t  forceUndockTime;

/// @brief Field moveable, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_moveable, put=__cordl_internal_set_moveable)) bool  moveable;

static inline ::Docking::Dock* New_ctor() ;

/// @brief Method NotifyDocked, addr 0x5ddca80, size 0x14, virtual false, abstract: false, final false
inline void NotifyDocked() ;

/// @brief Method NotifyUnDocked, addr 0x5ddca94, size 0x14, virtual false, abstract: false, final false
inline void NotifyUnDocked() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnDock() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnDock() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnUnDock() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnUnDock() ;

constexpr float_t const& __cordl_internal_get_forceUndockTime() const;

constexpr float_t& __cordl_internal_get_forceUndockTime() ;

constexpr bool const& __cordl_internal_get_moveable() const;

constexpr bool& __cordl_internal_get_moveable() ;

constexpr void __cordl_internal_set_OnDock(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnUnDock(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_forceUndockTime(float_t  value) ;

constexpr void __cordl_internal_set_moveable(bool  value) ;

/// @brief Method .ctor, addr 0x5ddcaa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ForceUndockTime, addr 0x5ddca78, size 0x8, virtual false, abstract: false, final false
inline float_t get_ForceUndockTime() ;

/// @brief Method get_Moveable, addr 0x5ddca70, size 0x8, virtual false, abstract: false, final false
inline bool get_Moveable() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dock(Dock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dock(Dock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5108};

/// [SerializeField]
/// @brief Field moveable, offset: 0x20, size: 0x1, def value: None
 bool  ___moveable;

/// [SerializeField]
/// @brief Field forceUndockTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___forceUndockTime;

/// [SerializeField]
/// @brief Field OnDock, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnDock;

/// [SerializeField]
/// @brief Field OnUnDock, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnUnDock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Docking::Dock, ___moveable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Docking::Dock, ___forceUndockTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Docking::Dock, ___OnDock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Docking::Dock, ___OnUnDock) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Docking::Dock) == 0x38, "Size mismatch!");

} // namespace end def Docking
