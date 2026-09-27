#pragma once
// IWYU pragma private; include "Fusion/Statistics/BehaviourStatisticsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BehaviourStatisticsManager)
namespace Fusion::Statistics {
class BehaviourStatisticsSnapshot;
}
// Forward declare root types
namespace Fusion::Statistics {
class BehaviourStatisticsManager;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::BehaviourStatisticsManager*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::BehaviourStatisticsManager*, "Fusion.Statistics", "BehaviourStatisticsManager");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.BehaviourStatisticsManager
class CORDL_TYPE BehaviourStatisticsManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CompletedSnapshot)) ::Fusion::Statistics::BehaviourStatisticsSnapshot*  CompletedSnapshot;

 __declspec(property(get=get_PendingSnapshot)) ::Fusion::Statistics::BehaviourStatisticsSnapshot*  PendingSnapshot;

/// @brief Field _currentUpdateSnapshot, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentUpdateSnapshot, put=__cordl_internal_set__currentUpdateSnapshot)) ::Fusion::Statistics::BehaviourStatisticsSnapshot*  _currentUpdateSnapshot;

/// @brief Field _previousUpdateSnapshot, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousUpdateSnapshot, put=__cordl_internal_set__previousUpdateSnapshot)) ::Fusion::Statistics::BehaviourStatisticsSnapshot*  _previousUpdateSnapshot;

/// [Conditional("DEBUG")]
/// @brief Method FinishPendingSnapshot, addr 0x601f0bc, size 0x38, virtual false, abstract: false, final false
inline void FinishPendingSnapshot() ;

static inline ::Fusion::Statistics::BehaviourStatisticsManager* New_ctor() ;

constexpr ::Fusion::Statistics::BehaviourStatisticsSnapshot* const& __cordl_internal_get__currentUpdateSnapshot() const;

constexpr ::Fusion::Statistics::BehaviourStatisticsSnapshot*& __cordl_internal_get__currentUpdateSnapshot() ;

constexpr ::Fusion::Statistics::BehaviourStatisticsSnapshot* const& __cordl_internal_get__previousUpdateSnapshot() const;

constexpr ::Fusion::Statistics::BehaviourStatisticsSnapshot*& __cordl_internal_get__previousUpdateSnapshot() ;

constexpr void __cordl_internal_set__currentUpdateSnapshot(::Fusion::Statistics::BehaviourStatisticsSnapshot*  value) ;

constexpr void __cordl_internal_set__previousUpdateSnapshot(::Fusion::Statistics::BehaviourStatisticsSnapshot*  value) ;

/// @brief Method .ctor, addr 0x601f024, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CompletedSnapshot, addr 0x601f014, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Statistics::BehaviourStatisticsSnapshot* get_CompletedSnapshot() ;

/// @brief Method get_PendingSnapshot, addr 0x601f01c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Statistics::BehaviourStatisticsSnapshot* get_PendingSnapshot() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BehaviourStatisticsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BehaviourStatisticsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BehaviourStatisticsManager(BehaviourStatisticsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BehaviourStatisticsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BehaviourStatisticsManager(BehaviourStatisticsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19429};

/// @brief Field _previousUpdateSnapshot, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Statistics::BehaviourStatisticsSnapshot*  ____previousUpdateSnapshot;

/// @brief Field _currentUpdateSnapshot, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Statistics::BehaviourStatisticsSnapshot*  ____currentUpdateSnapshot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::BehaviourStatisticsManager, ____previousUpdateSnapshot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::BehaviourStatisticsManager, ____currentUpdateSnapshot) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::BehaviourStatisticsManager) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Statistics
