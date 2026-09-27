#pragma once
// IWYU pragma private; include "System/RuntimeType_ListBuilder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeType_ListBuilder_1)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct RuntimeType_ListBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RuntimeType_ListBuilder_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RuntimeType_ListBuilder_1, "System", "RuntimeType/ListBuilder`1");
// [DefaultMember("Item")]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.RuntimeType/ListBuilder`1<T>
struct CORDL_TYPE RuntimeType_ListBuilder_1 {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T  item) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<::System::Object*>  array, int32_t  index) ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> ToArray() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

// Ctor Parameters []
// @brief default ctor
constexpr RuntimeType_ListBuilder_1() ;

// Ctor Parameters [CppParam { name: "_items", ty: "::ArrayW<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_item", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeType_ListBuilder_1(::ArrayW<T>  _items, T  _item, int32_t  _count, int32_t  _capacity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5690};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _items, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<T>  _items;

/// @brief Field _item, offset: 0x8, size: 0x8, def value: None
 T  _item;

/// @brief Field _count, offset: 0x10, size: 0x4, def value: None
 int32_t  _count;

/// @brief Field _capacity, offset: 0x14, size: 0x4, def value: None
 int32_t  _capacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
