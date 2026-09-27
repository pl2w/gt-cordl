#pragma once
// IWYU pragma private; include "GlobalNamespace/PooledList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PooledList_1)
namespace GorillaTag {
class ObjectPoolEvents;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class PooledList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::PooledList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::PooledList_1, "", "PooledList`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PooledList`1<T>
class CORDL_TYPE PooledList_1 : public ::System::Object {
public:
// Declarations
/// @brief Field List, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_List, put=__cordl_internal_set_List)) ::System::Collections::Generic::List_1<T>*  List;

/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
constexpr operator  ::GorillaTag::ObjectPoolEvents*() noexcept;

/// @brief Method GorillaTag.ObjectPoolEvents.OnReturned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GorillaTag_ObjectPoolEvents_OnReturned() ;

/// @brief Method GorillaTag.ObjectPoolEvents.OnTaken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GorillaTag_ObjectPoolEvents_OnTaken() ;

static inline ::GlobalNamespace::PooledList_1<T>* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<T>* const& __cordl_internal_get_List() const;

constexpr ::System::Collections::Generic::List_1<T>*& __cordl_internal_get_List() ;

constexpr void __cordl_internal_set_List(::System::Collections::Generic::List_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
constexpr ::GorillaTag::ObjectPoolEvents* i___GorillaTag__ObjectPoolEvents() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PooledList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PooledList_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PooledList_1(PooledList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PooledList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PooledList_1(PooledList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3583};

/// @brief Field List, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<T>*  ___List;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
