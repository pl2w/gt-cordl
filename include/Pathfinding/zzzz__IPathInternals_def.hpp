#pragma once
// IWYU pragma private; include "Pathfinding/IPathInternals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPathInternals)
namespace Pathfinding {
class PathHandler;
}
namespace Pathfinding {
struct PathLog;
}
namespace Pathfinding {
struct PathState;
}
// Forward declare root types
namespace Pathfinding {
class IPathInternals;
}
// Write type traits
MARK_REF_T(::Pathfinding::IPathInternals*);
DEFINE_IL2CPP_CLASS(::Pathfinding::IPathInternals*, "Pathfinding", "IPathInternals");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.IPathInternals
class CORDL_TYPE IPathInternals {
public:
// Declarations
 __declspec(property(get=get_PathHandler)) ::Pathfinding::PathHandler*  PathHandler;

 __declspec(property(get=get_Pooled, put=set_Pooled)) bool  Pooled;

/// @brief Method AdvanceState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AdvanceState(::Pathfinding::PathState  s) ;

/// @brief Method CalculateStep, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method Cleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Cleanup() ;

/// @brief Method DebugString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW DebugString(::Pathfinding::PathLog  logMode) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize() ;

/// @brief Method OnEnterPool, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEnterPool() ;

/// @brief Method Prepare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Prepare() ;

/// @brief Method PrepareBase, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PrepareBase(::Pathfinding::PathHandler*  handler) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method ReturnPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReturnPath() ;

/// @brief Method get_PathHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::PathHandler* get_PathHandler() ;

/// @brief Method get_Pooled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Pooled() ;

/// @brief Method set_Pooled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Pooled(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPathInternals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPathInternals(IPathInternals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
