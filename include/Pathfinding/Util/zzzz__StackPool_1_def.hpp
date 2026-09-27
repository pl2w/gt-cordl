#pragma once
// IWYU pragma private; include "Pathfinding/Util/StackPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StackPool_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace Pathfinding::Util {
template<typename T>
class StackPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pathfinding::Util::StackPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::StackPool_1, "Pathfinding.Util", "StackPool`1");
// Dependencies System.Object
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.StackPool`1<T>
class CORDL_TYPE StackPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<T>*>*  pool;

/// @brief Method Claim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Stack_1<T>* Claim() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method GetSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetSize() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Release(::System::Collections::Generic::Stack_1<T>*  stack) ;

/// @brief Method Warmup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Warmup(int32_t  count) ;

static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<T>*>* getStaticF_pool() ;

static inline void setStaticF_pool(::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StackPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StackPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StackPool_1(StackPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StackPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StackPool_1(StackPool_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21468};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
