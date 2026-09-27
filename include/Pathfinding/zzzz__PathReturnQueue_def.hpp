#pragma once
// IWYU pragma private; include "Pathfinding/PathReturnQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PathReturnQueue)
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding {
class PathReturnQueue;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathReturnQueue*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathReturnQueue*, "Pathfinding", "PathReturnQueue");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathReturnQueue
class CORDL_TYPE PathReturnQueue : public ::System::Object {
public:
// Declarations
/// @brief Field pathReturnQueue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathReturnQueue, put=__cordl_internal_set_pathReturnQueue)) ::System::Collections::Generic::Queue_1<::Pathfinding::Path*>*  pathReturnQueue;

/// @brief Field pathsClaimedSilentlyBy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathsClaimedSilentlyBy, put=__cordl_internal_set_pathsClaimedSilentlyBy)) ::System::Object*  pathsClaimedSilentlyBy;

/// @brief Method Enqueue, addr 0x5e65b6c, size 0x100, virtual false, abstract: false, final false
inline void Enqueue(::Pathfinding::Path*  path) ;

static inline ::Pathfinding::PathReturnQueue* New_ctor(::System::Object*  pathsClaimedSilentlyBy) ;

/// @brief Method ReturnPaths, addr 0x5e66714, size 0x3ac, virtual false, abstract: false, final false
inline void ReturnPaths(bool  timeSlice) ;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::Path*>* const& __cordl_internal_get_pathReturnQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::Path*>*& __cordl_internal_get_pathReturnQueue() ;

constexpr ::System::Object* const& __cordl_internal_get_pathsClaimedSilentlyBy() const;

constexpr ::System::Object*& __cordl_internal_get_pathsClaimedSilentlyBy() ;

constexpr void __cordl_internal_set_pathReturnQueue(::System::Collections::Generic::Queue_1<::Pathfinding::Path*>*  value) ;

constexpr void __cordl_internal_set_pathsClaimedSilentlyBy(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5e66678, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  pathsClaimedSilentlyBy) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathReturnQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathReturnQueue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathReturnQueue(PathReturnQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathReturnQueue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathReturnQueue(PathReturnQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21264};

/// @brief Field pathReturnQueue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Pathfinding::Path*>*  ___pathReturnQueue;

/// @brief Field pathsClaimedSilentlyBy, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___pathsClaimedSilentlyBy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathReturnQueue, ___pathReturnQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathReturnQueue, ___pathsClaimedSilentlyBy) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathReturnQueue) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
