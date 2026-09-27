#pragma once
// IWYU pragma private; include "GlobalNamespace/WeightedList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WeightedList_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class WeightedList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::WeightedList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::WeightedList_1, "", "WeightedList`1");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WeightedList`1<T>
class CORDL_TYPE WeightedList_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief [TupleElementNames(new[] { "Item", "Weight" })]
 __declspec(property(get=get_Item)) ::System::ValueTuple_2<T,float_t>  Item[];

 __declspec(property(get=get_Items)) ::System::Collections::Generic::List_1<T>*  Items;

/// @brief Field cumulativeWeights, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cumulativeWeights, put=__cordl_internal_set_cumulativeWeights)) ::System::Collections::Generic::List_1<float_t>*  cumulativeWeights;

/// @brief Field items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_items, put=__cordl_internal_set_items)) ::System::Collections::Generic::List_1<T>*  items;

/// @brief Field totalWeight, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalWeight, put=__cordl_internal_set_totalWeight)) float_t  totalWeight;

/// @brief Field weights, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_weights, put=__cordl_internal_set_weights)) ::System::Collections::Generic::List_1<float_t>*  weights;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T  item, float_t  weight) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetRandomIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetRandomIndex() ;

/// @brief Method GetRandomItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetRandomItem() ;

static inline ::GlobalNamespace::WeightedList_1<T>* New_ctor() ;

/// @brief Method RecalculateCumulativeWeights, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RecalculateCumulativeWeights() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(T  item) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_cumulativeWeights() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_cumulativeWeights() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_items() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_items() ;

constexpr float_t const& __cordl_internal_get_totalWeight() const;

constexpr float_t& __cordl_internal_get_totalWeight() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_weights() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_weights() ;

constexpr void __cordl_internal_set_cumulativeWeights(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_items(::System::Collections::Generic::List_1<T>*  value) ;

constexpr void __cordl_internal_set_totalWeight(float_t  value) ;

constexpr void __cordl_internal_set_weights(::System::Collections::Generic::List_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<T,float_t> get_Item(int32_t  index) ;

/// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<T>* get_Items() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WeightedList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WeightedList_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WeightedList_1(WeightedList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WeightedList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WeightedList_1(WeightedList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{148};

/// @brief Field items, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___items;

/// @brief Field weights, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___weights;

/// @brief Field cumulativeWeights, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___cumulativeWeights;

/// @brief Field totalWeight, offset: 0x28, size: 0x4, def value: None
 float_t  ___totalWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
