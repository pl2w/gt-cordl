#pragma once
// IWYU pragma private; include "System/Linq/Set_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/zzzz__Set`1_Slot_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Set_1)
namespace GlobalNamespace {
template<typename TElement>
struct Set_1_Slot;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class Set_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Linq::Set_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Linq::Set_1, "System.Linq", "Set`1");
// Dependencies System.Linq.Set`1::Slot<TElement>, System.Object
namespace System::Linq {
// cpp template
template<typename TElement>
// Is value type: false
// CS Name: System.Linq.Set`1<TElement>
class CORDL_TYPE Set_1 : public ::System::Object {
public:
// Declarations
using Slot = ::GlobalNamespace::Set_1_Slot<TElement>;

/// @brief Field buckets, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buckets, put=__cordl_internal_set_buckets)) ::ArrayW<int32_t>  buckets;

/// @brief Field comparer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<TElement>*  comparer;

/// @brief Field count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field freeList, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_freeList, put=__cordl_internal_set_freeList)) int32_t  freeList;

/// @brief Field slots, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_slots, put=__cordl_internal_set_slots)) ::ArrayW<::GlobalNamespace::Set_1_Slot<TElement>>  slots;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Add(TElement  value) ;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Find(TElement  value, bool  add) ;

/// @brief Method InternalGetHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t InternalGetHashCode(TElement  value) ;

static inline ::System::Linq::Set_1<TElement>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>*  comparer) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(TElement  value) ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_buckets() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_buckets() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TElement>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TElement>*& __cordl_internal_get_comparer() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr int32_t const& __cordl_internal_get_freeList() const;

constexpr int32_t& __cordl_internal_get_freeList() ;

constexpr ::ArrayW<::GlobalNamespace::Set_1_Slot<TElement>> const& __cordl_internal_get_slots() const;

constexpr ::ArrayW<::GlobalNamespace::Set_1_Slot<TElement>>& __cordl_internal_get_slots() ;

constexpr void __cordl_internal_set_buckets(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TElement>*  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_freeList(int32_t  value) ;

constexpr void __cordl_internal_set_slots(::ArrayW<::GlobalNamespace::Set_1_Slot<TElement>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<TElement>*  comparer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Set_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Set_1(Set_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Set_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Set_1(Set_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23572};

/// @brief Field buckets, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___buckets;

/// @brief Field slots, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Set_1_Slot<TElement>>  ___slots;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field freeList, offset: 0x24, size: 0x4, def value: None
 int32_t  ___freeList;

/// @brief Field comparer, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<TElement>*  ___comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
