#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticArrayBag_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StaticArrayBag_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class StaticArrayBag_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::StaticArrayBag_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::StaticArrayBag_1, "", "StaticArrayBag`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: StaticArrayBag`1<T>
class CORDL_TYPE StaticArrayBag_1 : public ::System::Object {
public:
// Declarations
/// @brief Field m_bag, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_bag, put=__cordl_internal_set_m_bag)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<T>>*  m_bag;

/// @brief Method GetStaticArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> GetStaticArray(int32_t  size) ;

static inline ::GlobalNamespace::StaticArrayBag_1<T>* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<T>>* const& __cordl_internal_get_m_bag() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<T>>*& __cordl_internal_get_m_bag() ;

constexpr void __cordl_internal_set_m_bag(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<T>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticArrayBag_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticArrayBag_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticArrayBag_1(StaticArrayBag_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticArrayBag_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticArrayBag_1(StaticArrayBag_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3560};

/// @brief Field m_bag, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<T>>*  ___m_bag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
