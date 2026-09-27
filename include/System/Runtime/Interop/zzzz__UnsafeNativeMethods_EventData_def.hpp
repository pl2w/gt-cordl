#pragma once
// IWYU pragma private; include "System/Runtime/Interop/UnsafeNativeMethods_EventData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeNativeMethods_EventData)
// Forward declare root types
namespace GlobalNamespace {
struct UnsafeNativeMethods_EventData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnsafeNativeMethods_EventData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnsafeNativeMethods_EventData, "System.Runtime.Interop", "UnsafeNativeMethods/EventData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Runtime.Interop.UnsafeNativeMethods/EventData
#pragma pack(push, 0)
struct CORDL_TYPE UnsafeNativeMethods_EventData {
public:
// Declarations
/// @brief Field DataPointer, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataPointer, put=__cordl_internal_set_DataPointer)) uint64_t  DataPointer;

/// @brief Field Reserved, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_Reserved, put=__cordl_internal_set_Reserved)) int32_t  Reserved;

/// @brief Field Size, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Size, put=__cordl_internal_set_Size)) uint32_t  Size;

constexpr uint64_t const& __cordl_internal_get_DataPointer() const;

constexpr uint64_t& __cordl_internal_get_DataPointer() ;

constexpr int32_t const& __cordl_internal_get_Reserved() const;

constexpr int32_t& __cordl_internal_get_Reserved() ;

constexpr uint32_t const& __cordl_internal_get_Size() const;

constexpr uint32_t& __cordl_internal_get_Size() ;

constexpr void __cordl_internal_set_DataPointer(uint64_t  value) ;

constexpr void __cordl_internal_set_Reserved(int32_t  value) ;

constexpr void __cordl_internal_set_Size(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeNativeMethods_EventData() ;

// Ctor Parameters [CppParam { name: "DataPointer", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Size", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeNativeMethods_EventData(uint64_t  DataPointer, uint32_t  Size, int32_t  Reserved) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___DataPointer_padding[0x0];
/// @brief Field DataPointer, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___DataPointer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___DataPointer_padding_forAlignment[0x0];
/// @brief Field DataPointer, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___DataPointer_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Size_padding[0x8];
/// @brief Field Size, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___Size;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Size_padding_forAlignment[0x8];
/// @brief Field Size, offset: 0x8, size: 0x4, def value: None
 uint32_t  ___Size_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___Reserved_padding[0xc];
/// @brief Field Reserved, offset: 0xc, size: 0x4, def value: None
 int32_t  ___Reserved;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___Reserved_padding_forAlignment[0xc];
/// @brief Field Reserved, offset: 0xc, size: 0x4, def value: None
 int32_t  ___Reserved_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnsafeNativeMethods_EventData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
