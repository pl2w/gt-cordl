#pragma once
// IWYU pragma private; include "Pathfinding/PathPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathPool)
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Pathfinding {
class PathPool;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathPool*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathPool*, "Pathfinding", "PathPool");
// Dependencies Pathfinding.Path, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathPool
class CORDL_TYPE PathPool : public ::System::Object {
public:
// Declarations
/// @brief Field pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::Pathfinding::Path*>*>*  pool;

/// @brief Field totalCreated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_totalCreated, put=setStaticF_totalCreated)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  totalCreated;

/// @brief Method GetPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Pathfinding::Path*> && ::cordl_internals::default_constructor_constraint<T>)
static inline T GetPath() ;

/// @brief Method GetSize, addr 0x5e630a8, size 0xb8, virtual false, abstract: false, final false
static inline int32_t GetSize(::System::Type*  type) ;

/// @brief Method GetTotalCreated, addr 0x5e63008, size 0xa0, virtual false, abstract: false, final false
static inline int32_t GetTotalCreated(::System::Type*  type) ;

/// @brief Method Pool, addr 0x5e62c30, size 0x3d8, virtual false, abstract: false, final false
static inline void Pool(::Pathfinding::Path*  path) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::Pathfinding::Path*>*>* getStaticF_pool() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* getStaticF_totalCreated() ;

static inline void setStaticF_pool(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::Pathfinding::Path*>*>*  value) ;

static inline void setStaticF_totalCreated(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathPool(PathPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathPool(PathPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21259};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::PathPool) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
