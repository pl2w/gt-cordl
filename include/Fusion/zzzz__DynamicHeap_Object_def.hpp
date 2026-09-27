#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Object.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DynamicHeap_ObjectFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_Object)
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_Object;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_Object);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_Object, "Fusion", "DynamicHeap/Object");
// Dependencies Fusion.DynamicHeap::ObjectFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/Object
struct CORDL_TYPE DynamicHeap_Object {
public:
// Declarations
/// @brief Field Array, offset 0x6, size 0x2 
 __declspec(property(get=__cordl_internal_get_Array, put=__cordl_internal_set_Array)) uint16_t  Array;

/// @brief Field Block, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_Block, put=__cordl_internal_set_Block)) uint8_t  Block;

/// @brief Field Flags, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_Flags, put=__cordl_internal_set_Flags)) ::GlobalNamespace::DynamicHeap_ObjectFlags  Flags;

/// @brief Field Gen, offset 0x2, size 0x2 
 __declspec(property(get=__cordl_internal_get_Gen, put=__cordl_internal_set_Gen)) uint16_t  Gen;

/// @brief Field Type, offset 0x4, size 0x2 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) uint16_t  Type;

constexpr uint16_t const& __cordl_internal_get_Array() const;

constexpr uint16_t& __cordl_internal_get_Array() ;

constexpr uint8_t const& __cordl_internal_get_Block() const;

constexpr uint8_t& __cordl_internal_get_Block() ;

constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags const& __cordl_internal_get_Flags() const;

constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags& __cordl_internal_get_Flags() ;

constexpr uint16_t const& __cordl_internal_get_Gen() const;

constexpr uint16_t& __cordl_internal_get_Gen() ;

constexpr uint16_t const& __cordl_internal_get_Type() const;

constexpr uint16_t& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Array(uint16_t  value) ;

constexpr void __cordl_internal_set_Block(uint8_t  value) ;

constexpr void __cordl_internal_set_Flags(::GlobalNamespace::DynamicHeap_ObjectFlags  value) ;

constexpr void __cordl_internal_set_Gen(uint16_t  value) ;

constexpr void __cordl_internal_set_Type(uint16_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_Object() ;

// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::DynamicHeap_ObjectFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "Block", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Gen", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Type", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Array", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_Object(::GlobalNamespace::DynamicHeap_ObjectFlags  Flags, uint8_t  Block, uint16_t  Gen, uint16_t  Type, uint16_t  Array) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Flags_padding[0x0];
/// @brief Field Flags, offset: 0x0, size: 0x1, def value: None
 ::GlobalNamespace::DynamicHeap_ObjectFlags  ___Flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Flags_padding_forAlignment[0x0];
/// @brief Field Flags, offset: 0x0, size: 0x1, def value: None
 ::GlobalNamespace::DynamicHeap_ObjectFlags  ___Flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___Block_padding[0x1];
/// @brief Field Block, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Block;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___Block_padding_forAlignment[0x1];
/// @brief Field Block, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___Block_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___Gen_padding[0x2];
/// @brief Field Gen, offset: 0x2, size: 0x2, def value: None
 uint16_t  ___Gen;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___Gen_padding_forAlignment[0x2];
/// @brief Field Gen, offset: 0x2, size: 0x2, def value: None
 uint16_t  ___Gen_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Type_padding[0x4];
/// @brief Field Type, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___Type;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Type_padding_forAlignment[0x4];
/// @brief Field Type, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___Type_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___Array_padding[0x6];
/// @brief Field Array, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___Array;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___Array_padding_forAlignment[0x6];
/// @brief Field Array, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___Array_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x8)};

/// @brief Field WORDS offset 0xffffffff size 0x4
static constexpr int32_t  WORDS{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DynamicHeap_Object) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
