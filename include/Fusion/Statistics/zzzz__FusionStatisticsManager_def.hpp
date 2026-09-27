#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatisticsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FusionStatisticsManager)
namespace Fusion::Statistics {
class FusionStatisticsSnapshot;
}
namespace Fusion::Statistics {
class NetworkObjectStatisticsManager;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatisticsManager*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatisticsManager*, "Fusion.Statistics", "FusionStatisticsManager");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatisticsManager
class CORDL_TYPE FusionStatisticsManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CompleteSnapshot)) ::Fusion::Statistics::FusionStatisticsSnapshot*  CompleteSnapshot;

 __declspec(property(get=get_ObjectStatisticsManager)) ::Fusion::Statistics::NetworkObjectStatisticsManager*  ObjectStatisticsManager;

 __declspec(property(get=get_PendingSnapshot)) ::Fusion::Statistics::FusionStatisticsSnapshot*  PendingSnapshot;

/// @brief Field _currentTickSnapshot, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTickSnapshot, put=__cordl_internal_set__currentTickSnapshot)) ::Fusion::Statistics::FusionStatisticsSnapshot*  _currentTickSnapshot;

/// @brief Field _objectStatisticsManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectStatisticsManager, put=__cordl_internal_set__objectStatisticsManager)) ::Fusion::Statistics::NetworkObjectStatisticsManager*  _objectStatisticsManager;

/// @brief Field _previousTickSnapshot, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__previousTickSnapshot, put=__cordl_internal_set__previousTickSnapshot)) ::Fusion::Statistics::FusionStatisticsSnapshot*  _previousTickSnapshot;

/// [Conditional("DEBUG")]
/// @brief Method FinishPendingSnapshot, addr 0x601f3e0, size 0x44, virtual false, abstract: false, final false
inline void FinishPendingSnapshot() ;

static inline ::Fusion::Statistics::FusionStatisticsManager* New_ctor() ;

constexpr ::Fusion::Statistics::FusionStatisticsSnapshot* const& __cordl_internal_get__currentTickSnapshot() const;

constexpr ::Fusion::Statistics::FusionStatisticsSnapshot*& __cordl_internal_get__currentTickSnapshot() ;

constexpr ::Fusion::Statistics::NetworkObjectStatisticsManager* const& __cordl_internal_get__objectStatisticsManager() const;

constexpr ::Fusion::Statistics::NetworkObjectStatisticsManager*& __cordl_internal_get__objectStatisticsManager() ;

constexpr ::Fusion::Statistics::FusionStatisticsSnapshot* const& __cordl_internal_get__previousTickSnapshot() const;

constexpr ::Fusion::Statistics::FusionStatisticsSnapshot*& __cordl_internal_get__previousTickSnapshot() ;

constexpr void __cordl_internal_set__currentTickSnapshot(::Fusion::Statistics::FusionStatisticsSnapshot*  value) ;

constexpr void __cordl_internal_set__objectStatisticsManager(::Fusion::Statistics::NetworkObjectStatisticsManager*  value) ;

constexpr void __cordl_internal_set__previousTickSnapshot(::Fusion::Statistics::FusionStatisticsSnapshot*  value) ;

/// @brief Method .ctor, addr 0x601f1b8, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CompleteSnapshot, addr 0x601f1a0, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Statistics::FusionStatisticsSnapshot* get_CompleteSnapshot() ;

/// @brief Method get_ObjectStatisticsManager, addr 0x601f1b0, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Statistics::NetworkObjectStatisticsManager* get_ObjectStatisticsManager() ;

/// @brief Method get_PendingSnapshot, addr 0x601f1a8, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Statistics::FusionStatisticsSnapshot* get_PendingSnapshot() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatisticsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatisticsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatisticsManager(FusionStatisticsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatisticsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatisticsManager(FusionStatisticsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19431};

/// @brief Field _currentTickSnapshot, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Statistics::FusionStatisticsSnapshot*  ____currentTickSnapshot;

/// @brief Field _previousTickSnapshot, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Statistics::FusionStatisticsSnapshot*  ____previousTickSnapshot;

/// @brief Field _objectStatisticsManager, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Statistics::NetworkObjectStatisticsManager*  ____objectStatisticsManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatisticsManager, ____currentTickSnapshot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsManager, ____previousTickSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatisticsManager, ____objectStatisticsManager) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatisticsManager) == 0x28, "Size mismatch!");

} // namespace end def Fusion::Statistics
