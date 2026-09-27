#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshClipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphMask_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavmeshClipper)
namespace Pathfinding::Util {
class GraphTransform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace Pathfinding {
class NavmeshClipper;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavmeshClipper*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshClipper*, "Pathfinding", "NavmeshClipper");
// Dependencies Pathfinding.GraphMask, Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshClipper
class CORDL_TYPE NavmeshClipper : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field OnDisableCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnDisableCallback, put=setStaticF_OnDisableCallback)) ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  OnDisableCallback;

/// @brief Field OnEnableCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnEnableCallback, put=setStaticF_OnEnableCallback)) ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  OnEnableCallback;

/// @brief Field all, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_all, put=setStaticF_all)) ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>*  all;

/// @brief Field graphMask, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphMask, put=__cordl_internal_set_graphMask)) ::Pathfinding::GraphMask  graphMask;

/// @brief Field listIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_listIndex, put=__cordl_internal_set_listIndex)) int32_t  listIndex;

/// @brief Method AddEnableCallback, addr 0x5ea7458, size 0x190, virtual false, abstract: false, final false
static inline void AddEnableCallback(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  onEnable, ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  onDisable) ;

/// @brief Method ForceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ForceUpdate() ;

/// @brief Method GetBounds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Rect GetBounds(::Pathfinding::Util::GraphTransform*  transform) ;

static inline ::Pathfinding::NavmeshClipper* New_ctor() ;

/// @brief Method NotifyUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void NotifyUpdated() ;

/// @brief Method OnDisable, addr 0x5ea7904, size 0x18c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ea77d0, size 0x134, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveEnableCallback, addr 0x5ea75e8, size 0x190, virtual false, abstract: false, final false
static inline void RemoveEnableCallback(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  onEnable, ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  onDisable) ;

/// @brief Method RequiresUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool RequiresUpdate() ;

constexpr ::Pathfinding::GraphMask const& __cordl_internal_get_graphMask() const;

constexpr ::Pathfinding::GraphMask& __cordl_internal_get_graphMask() ;

constexpr int32_t const& __cordl_internal_get_listIndex() const;

constexpr int32_t& __cordl_internal_get_listIndex() ;

constexpr void __cordl_internal_set_graphMask(::Pathfinding::GraphMask  value) ;

constexpr void __cordl_internal_set_listIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ea73d8, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>* getStaticF_OnDisableCallback() ;

static inline ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>* getStaticF_OnEnableCallback() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>* getStaticF_all() ;

/// @brief Method get_allEnabled, addr 0x5ea7778, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>* get_allEnabled() ;

static inline void setStaticF_OnDisableCallback(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  value) ;

static inline void setStaticF_OnEnableCallback(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  value) ;

static inline void setStaticF_all(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshClipper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshClipper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshClipper(NavmeshClipper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshClipper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshClipper(NavmeshClipper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21378};

/// @brief Field listIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ___listIndex;

/// @brief Field graphMask, offset: 0x28, size: 0x4, def value: None
 ::Pathfinding::GraphMask  ___graphMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshClipper, ___listIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshClipper, ___graphMask) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshClipper) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
