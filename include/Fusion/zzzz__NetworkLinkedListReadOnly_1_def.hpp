#pragma once
// IWYU pragma private; include "Fusion/NetworkLinkedListReadOnly_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkLinkedListReadOnly_1)
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace Fusion {
template<typename T>
struct NetworkLinkedListReadOnly_1;
}
// Write type traits
MARK_GEN_VAL_T(::Fusion::NetworkLinkedListReadOnly_1);
DEFINE_IL2CPP_GEN_CLASS(::Fusion::NetworkLinkedListReadOnly_1, "Fusion", "NetworkLinkedListReadOnly`1");
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// [DefaultMember("Item")]
// Dependencies 
namespace Fusion {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.NetworkLinkedListReadOnly`1<T>
struct CORDL_TYPE NetworkLinkedListReadOnly_1 {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Head)) int32_t  Head;

 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Tail)) int32_t  Tail;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  value) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method Entry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t* Entry(int32_t  index) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Get(int32_t  index) ;

/// @brief Method GetEntryByListIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t* GetEntryByListIndex(int32_t  listIndex) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  value) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  equalityComparer) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Read(int32_t*  entry) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(uint8_t*  data, int32_t  capacity, ::Fusion::IElementReaderWriter_1<T>*  rw) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Head, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Head() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Tail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Tail() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkLinkedListReadOnly_1() ;

// Ctor Parameters [CppParam { name: "_data", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rw", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkLinkedListReadOnly_1(int32_t*  _data, int32_t  _stride, int32_t  _capacity, ::Fusion::IElementReaderWriter_1<T>*  _rw) noexcept;

/// @brief Field COUNT offset 0xffffffff size 0x4
static constexpr int32_t  COUNT{static_cast<int32_t>(0x0)};

/// @brief Field ELEMENT_WORDS offset 0xffffffff size 0x4
static constexpr int32_t  ELEMENT_WORDS{static_cast<int32_t>(0x2)};

/// @brief Field HEAD offset 0xffffffff size 0x4
static constexpr int32_t  HEAD{static_cast<int32_t>(0x1)};

/// @brief Field INVALID offset 0xffffffff size 0x4
static constexpr int32_t  INVALID{static_cast<int32_t>(0x0)};

/// @brief Field META_WORDS offset 0xffffffff size 0x4
static constexpr int32_t  META_WORDS{static_cast<int32_t>(0x3)};

/// @brief Field NEXT offset 0xffffffff size 0x4
static constexpr int32_t  NEXT{static_cast<int32_t>(0x1)};

/// @brief Field OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  OFFSET{static_cast<int32_t>(0x1)};

/// @brief Field PREV offset 0xffffffff size 0x4
static constexpr int32_t  PREV{static_cast<int32_t>(0x0)};

/// @brief Field TAIL offset 0xffffffff size 0x4
static constexpr int32_t  TAIL{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19077};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _data, offset: 0x0, size: 0x8, def value: None
 int32_t*  _data;

/// @brief Field _stride, offset: 0x8, size: 0x4, def value: None
 int32_t  _stride;

/// @brief Field _capacity, offset: 0xc, size: 0x4, def value: None
 int32_t  _capacity;

/// @brief Field _rw, offset: 0x10, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<T>*  _rw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Fusion
