#pragma once
// IWYU pragma private; include "Pathfinding/Util/ListPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListPool_1)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding::Util {
template<typename T>
class ListPool_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Pathfinding::Util::ListPool_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::Util::ListPool_1, "Pathfinding.Util", "ListPool`1");
// Dependencies System.Object
namespace Pathfinding::Util {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.Util.ListPool`1<T>
class CORDL_TYPE ListPool_1 : public ::System::Object {
public:
// Declarations
/// @brief Field inPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_inPool, put=setStaticF_inPool)) ::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<T>*>*  inPool;

/// @brief Field largePool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_largePool, put=setStaticF_largePool)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  largePool;

/// @brief Field pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  pool;

/// @brief Method Claim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<T>* Claim() ;

/// @brief Method Claim, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<T>* Claim(int32_t  capacity) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method FindCandidate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t FindCandidate(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  pool, int32_t  capacity) ;

/// @brief Method GetSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetSize() ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Release(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Release(::by_ref<::System::Collections::Generic::List_1<T>*>  list) ;

/// @brief Method Warmup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Warmup(int32_t  count, int32_t  size) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<T>*>* getStaticF_inPool() ;

static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>* getStaticF_largePool() ;

static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>* getStaticF_pool() ;

static inline void setStaticF_inPool(::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<T>*>*  value) ;

static inline void setStaticF_largePool(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  value) ;

static inline void setStaticF_pool(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListPool_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListPool_1(ListPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListPool_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListPool_1(ListPool_1 const& ) = delete;

/// @brief Field LargeThreshold offset 0xffffffff size 0x4
static constexpr int32_t  LargeThreshold{static_cast<int32_t>(0x1388)};

/// @brief Field MaxCapacitySearchLength offset 0xffffffff size 0x4
static constexpr int32_t  MaxCapacitySearchLength{static_cast<int32_t>(0x8)};

/// @brief Field MaxLargePoolSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxLargePoolSize{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::Util
