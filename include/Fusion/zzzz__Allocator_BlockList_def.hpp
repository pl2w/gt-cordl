#pragma once
// IWYU pragma private; include "Fusion/Allocator_BlockList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator_BlockList)
namespace Fusion {
class Allocator;
}
namespace GlobalNamespace {
struct Allocator_Block;
}
// Forward declare root types
namespace GlobalNamespace {
struct Allocator_BlockList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Allocator_BlockList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Allocator_BlockList, "Fusion", "Allocator/BlockList");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Allocator/BlockList
struct CORDL_TYPE Allocator_BlockList {
public:
// Declarations
/// @brief Field Head, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Head, put=__cordl_internal_set_Head)) int32_t  Head;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Field Tail, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tail, put=__cordl_internal_set_Tail)) int32_t  Tail;

/// @brief Method AddFirst, addr 0x5f6dab8, size 0xe0, virtual false, abstract: false, final false
inline void AddFirst(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item) ;

/// @brief Method AddLast, addr 0x5f6ee64, size 0xe0, virtual false, abstract: false, final false
inline void AddLast(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item) ;

/// [IsReadOnly]
/// @brief Method Contains, addr 0x5f6dd68, size 0x5c, virtual false, abstract: false, final false
inline bool Contains(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item) ;

/// [IsReadOnly]
/// [Conditional("DEBUG")]
/// @brief Method DebugVerifyListIntegrity, addr 0x5f6f59c, size 0xe0, virtual false, abstract: false, final false
inline void DebugVerifyListIntegrity(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a) ;

/// @brief Method MoveFirst, addr 0x5f6e8b0, size 0x68, virtual false, abstract: false, final false
inline void MoveFirst(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item) ;

/// @brief Method MoveLast, addr 0x5f6ddc4, size 0x68, virtual false, abstract: false, final false
inline void MoveLast(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item) ;

/// @brief Method Remove, addr 0x5f6e7b0, size 0x100, virtual false, abstract: false, final false
inline void Remove(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::by_ref<::GlobalNamespace::Allocator_Block>  item) ;

/// @brief Method RemoveHead, addr 0x5f6da3c, size 0x70, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::Allocator_Block> RemoveHead(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a) ;

/// @brief Method ToString, addr 0x5f6f67c, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Head() const;

constexpr int32_t& __cordl_internal_get_Head() ;

constexpr int32_t const& __cordl_internal_get_Tail() const;

constexpr int32_t& __cordl_internal_get_Tail() ;

constexpr void __cordl_internal_set_Head(int32_t  value) ;

constexpr void __cordl_internal_set_Tail(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f6edc8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsEmpty, addr 0x5f6da2c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

// Ctor Parameters []
// @brief default ctor
constexpr Allocator_BlockList() ;

// Ctor Parameters [CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Allocator_BlockList(int32_t  Head, int32_t  Tail) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Head_padding[0x0];
/// @brief Field Head, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Head;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Head_padding_forAlignment[0x0];
/// @brief Field Head, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Head_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Tail_padding[0x4];
/// @brief Field Tail, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Tail;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Tail_padding_forAlignment[0x4];
/// @brief Field Tail, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Tail_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18788};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Allocator_BlockList) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
