#pragma once
// IWYU pragma private; include "Fusion/Statistics/LagCompensationStatisticsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LagCompensationStatisticsManager)
namespace Fusion::Statistics {
class LagCompensationStatisticsSnapshot;
}
// Forward declare root types
namespace Fusion::Statistics {
class LagCompensationStatisticsManager;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::LagCompensationStatisticsManager*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::LagCompensationStatisticsManager*, "Fusion.Statistics", "LagCompensationStatisticsManager");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.LagCompensationStatisticsManager
class CORDL_TYPE LagCompensationStatisticsManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CompletedSnapshot)) ::Fusion::Statistics::LagCompensationStatisticsSnapshot*  CompletedSnapshot;

 __declspec(property(get=get_PendingSnapshot)) ::Fusion::Statistics::LagCompensationStatisticsSnapshot*  PendingSnapshot;

/// @brief Field _currentUpdateSnapshot, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentUpdateSnapshot, put=__cordl_internal_set__currentUpdateSnapshot)) ::Fusion::Statistics::LagCompensationStatisticsSnapshot*  _currentUpdateSnapshot;

/// @brief Field _previousUpdateSnapshot, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousUpdateSnapshot, put=__cordl_internal_set__previousUpdateSnapshot)) ::Fusion::Statistics::LagCompensationStatisticsSnapshot*  _previousUpdateSnapshot;

/// [Conditional("DEBUG")]
/// @brief Method FinishPendingSnapshot, addr 0x601fba0, size 0x40, virtual false, abstract: false, final false
inline void FinishPendingSnapshot() ;

static inline ::Fusion::Statistics::LagCompensationStatisticsManager* New_ctor() ;

constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot* const& __cordl_internal_get__currentUpdateSnapshot() const;

constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot*& __cordl_internal_get__currentUpdateSnapshot() ;

constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot* const& __cordl_internal_get__previousUpdateSnapshot() const;

constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot*& __cordl_internal_get__previousUpdateSnapshot() ;

constexpr void __cordl_internal_set__currentUpdateSnapshot(::Fusion::Statistics::LagCompensationStatisticsSnapshot*  value) ;

constexpr void __cordl_internal_set__previousUpdateSnapshot(::Fusion::Statistics::LagCompensationStatisticsSnapshot*  value) ;

/// @brief Method .ctor, addr 0x601fb08, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CompletedSnapshot, addr 0x601faf8, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Statistics::LagCompensationStatisticsSnapshot* get_CompletedSnapshot() ;

/// @brief Method get_PendingSnapshot, addr 0x601fb00, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Statistics::LagCompensationStatisticsSnapshot* get_PendingSnapshot() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationStatisticsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationStatisticsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LagCompensationStatisticsManager(LagCompensationStatisticsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationStatisticsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LagCompensationStatisticsManager(LagCompensationStatisticsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19433};

/// @brief Field _previousUpdateSnapshot, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Statistics::LagCompensationStatisticsSnapshot*  ____previousUpdateSnapshot;

/// @brief Field _currentUpdateSnapshot, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Statistics::LagCompensationStatisticsSnapshot*  ____currentUpdateSnapshot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsManager, ____previousUpdateSnapshot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::LagCompensationStatisticsManager, ____currentUpdateSnapshot) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::LagCompensationStatisticsManager) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Statistics
