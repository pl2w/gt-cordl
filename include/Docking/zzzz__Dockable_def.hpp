#pragma once
// IWYU pragma private; include "Docking/Dockable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Dockable)
namespace Docking {
class Dock;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Docking {
class Dockable;
}
// Write type traits
MARK_REF_T(::Docking::Dockable*);
DEFINE_IL2CPP_CLASS(::Docking::Dockable*, "Docking", "Dockable");
// Dependencies UnityEngine.MonoBehaviour
namespace Docking {
// Is value type: false
// CS Name: Docking.Dockable
class CORDL_TYPE Dockable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentDock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentDock, put=__cordl_internal_set_currentDock)) ::UnityW<::Docking::Dock>  currentDock;

/// @brief Field potentialDock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_potentialDock, put=__cordl_internal_set_potentialDock)) ::UnityW<::Docking::Dock>  potentialDock;

/// @brief Field rotate, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotate, put=__cordl_internal_set_rotate)) bool  rotate;

/// @brief Field undockTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_undockTime, put=__cordl_internal_set_undockTime)) float_t  undockTime;

/// @brief Method Dock, addr 0x5ddcbf8, size 0x170, virtual true, abstract: false, final false
inline void Dock() ;

/// @brief Method LateUpdate, addr 0x5ddce14, size 0x134, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Docking::Dockable* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5ddcab0, size 0x64, virtual true, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5ddcb14, size 0xe4, virtual true, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method UnDock, addr 0x5ddcd68, size 0xac, virtual true, abstract: false, final false
inline void UnDock() ;

constexpr ::UnityW<::Docking::Dock> const& __cordl_internal_get_currentDock() const;

constexpr ::UnityW<::Docking::Dock>& __cordl_internal_get_currentDock() ;

constexpr ::UnityW<::Docking::Dock> const& __cordl_internal_get_potentialDock() const;

constexpr ::UnityW<::Docking::Dock>& __cordl_internal_get_potentialDock() ;

constexpr bool const& __cordl_internal_get_rotate() const;

constexpr bool& __cordl_internal_get_rotate() ;

constexpr float_t const& __cordl_internal_get_undockTime() const;

constexpr float_t& __cordl_internal_get_undockTime() ;

constexpr void __cordl_internal_set_currentDock(::UnityW<::Docking::Dock>  value) ;

constexpr void __cordl_internal_set_potentialDock(::UnityW<::Docking::Dock>  value) ;

constexpr void __cordl_internal_set_rotate(bool  value) ;

constexpr void __cordl_internal_set_undockTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5ddcf48, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dockable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dockable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dockable(Dockable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dockable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dockable(Dockable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5109};

/// @brief Field currentDock, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Docking::Dock>  ___currentDock;

/// @brief Field potentialDock, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Docking::Dock>  ___potentialDock;

/// @brief Field undockTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___undockTime;

/// @brief Field rotate, offset: 0x34, size: 0x1, def value: None
 bool  ___rotate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Docking::Dockable, ___currentDock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Docking::Dockable, ___potentialDock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Docking::Dockable, ___undockTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Docking::Dockable, ___rotate) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Docking::Dockable) == 0x38, "Size mismatch!");

} // namespace end def Docking
