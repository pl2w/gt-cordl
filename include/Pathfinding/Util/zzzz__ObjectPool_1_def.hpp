#pragma once
// IWYU pragma private; include "Pathfinding/Util/ObjectPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectPool_1)
// Forward declare root types
namespace Pathfinding::Util {
template<typename T>
class ObjectPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pathfinding::Util::ObjectPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::ObjectPool_1, "Pathfinding.Util", "ObjectPool`1");
// Dependencies System.Object
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.ObjectPool`1<T>
class CORDL_TYPE ObjectPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Method Claim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T Claim() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Release(::by_ref<T>  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_1(ObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_1(ObjectPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21465};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
