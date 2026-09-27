#pragma once
// IWYU pragma private; include "Fusion/_8.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz___8__Data_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(_8)
namespace Fusion {
class IFixedStorage;
}
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct _8__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion {
struct _8;
}
// Write type traits
MARK_VAL_T(::Fusion::_8);
DEFINE_IL2CPP_CLASS(::Fusion::_8, "Fusion", "_8");
// [NetworkStructWeaved(8)]
// Dependencies Fusion._8::<Data>e__FixedBuffer
namespace Fusion {
// Is value type: true
// CS Name: Fusion._8
#pragma pack(push, 4)
struct CORDL_TYPE _8 {
public:
// Declarations
using _Data_e__FixedBuffer = ::GlobalNamespace::_8__Data_e__FixedBuffer;

/// @brief Field Data, offset 0x0, size 0x20 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::_8__Data_e__FixedBuffer  Data;

/// @brief Field _data0, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__data0, put=__cordl_internal_set__data0)) uint32_t  _data0;

/// @brief Field _data1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__data1, put=__cordl_internal_set__data1)) uint32_t  _data1;

/// @brief Field _data2, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__data2, put=__cordl_internal_set__data2)) uint32_t  _data2;

/// @brief Field _data3, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get__data3, put=__cordl_internal_set__data3)) uint32_t  _data3;

/// @brief Field _data4, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__data4, put=__cordl_internal_set__data4)) uint32_t  _data4;

/// @brief Field _data5, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__data5, put=__cordl_internal_set__data5)) uint32_t  _data5;

/// @brief Field _data6, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__data6, put=__cordl_internal_set__data6)) uint32_t  _data6;

/// @brief Field _data7, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__data7, put=__cordl_internal_set__data7)) uint32_t  _data7;

/// @brief Convert operator to "::Fusion::IFixedStorage"
constexpr operator  ::Fusion::IFixedStorage*() ;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::GlobalNamespace::_8__Data_e__FixedBuffer const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::_8__Data_e__FixedBuffer& __cordl_internal_get_Data() ;

constexpr uint32_t const& __cordl_internal_get__data0() const;

constexpr uint32_t& __cordl_internal_get__data0() ;

constexpr uint32_t const& __cordl_internal_get__data1() const;

constexpr uint32_t& __cordl_internal_get__data1() ;

constexpr uint32_t const& __cordl_internal_get__data2() const;

constexpr uint32_t& __cordl_internal_get__data2() ;

constexpr uint32_t const& __cordl_internal_get__data3() const;

constexpr uint32_t& __cordl_internal_get__data3() ;

constexpr uint32_t const& __cordl_internal_get__data4() const;

constexpr uint32_t& __cordl_internal_get__data4() ;

constexpr uint32_t const& __cordl_internal_get__data5() const;

constexpr uint32_t& __cordl_internal_get__data5() ;

constexpr uint32_t const& __cordl_internal_get__data6() const;

constexpr uint32_t& __cordl_internal_get__data6() ;

constexpr uint32_t const& __cordl_internal_get__data7() const;

constexpr uint32_t& __cordl_internal_get__data7() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::_8__Data_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set__data0(uint32_t  value) ;

constexpr void __cordl_internal_set__data1(uint32_t  value) ;

constexpr void __cordl_internal_set__data2(uint32_t  value) ;

constexpr void __cordl_internal_set__data3(uint32_t  value) ;

constexpr void __cordl_internal_set__data4(uint32_t  value) ;

constexpr void __cordl_internal_set__data5(uint32_t  value) ;

constexpr void __cordl_internal_set__data6(uint32_t  value) ;

constexpr void __cordl_internal_set__data7(uint32_t  value) ;

/// @brief Convert to "::Fusion::IFixedStorage"
constexpr ::Fusion::IFixedStorage* i___Fusion__IFixedStorage() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr _8() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::_8__Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data2", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data3", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data4", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data5", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data6", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data7", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr _8(::GlobalNamespace::_8__Data_e__FixedBuffer  Data, uint32_t  _data0, uint32_t  _data1, uint32_t  _data2, uint32_t  _data3, uint32_t  _data4, uint32_t  _data5, uint32_t  _data6, uint32_t  _data7) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Data_padding[0x0];
/// [FixedBuffer(typeof(System.UInt32), 8)]
/// @brief Field Data, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::_8__Data_e__FixedBuffer  ___Data;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Data_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.UInt32), 8)]
/// @brief Field Data, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::_8__Data_e__FixedBuffer  ___Data_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____data0_padding[0x0];
/// @brief Field _data0, offset: 0x0, size: 0x4, def value: None
 uint32_t  ____data0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____data0_padding_forAlignment[0x0];
/// @brief Field _data0, offset: 0x0, size: 0x4, def value: None
 uint32_t  ____data0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____data1_padding[0x4];
/// @brief Field _data1, offset: 0x4, size: 0x4, def value: None
 uint32_t  ____data1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____data1_padding_forAlignment[0x4];
/// @brief Field _data1, offset: 0x4, size: 0x4, def value: None
 uint32_t  ____data1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____data2_padding[0x8];
/// @brief Field _data2, offset: 0x8, size: 0x4, def value: None
 uint32_t  ____data2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____data2_padding_forAlignment[0x8];
/// @brief Field _data2, offset: 0x8, size: 0x4, def value: None
 uint32_t  ____data2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____data3_padding[0xc];
/// @brief Field _data3, offset: 0xc, size: 0x4, def value: None
 uint32_t  ____data3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____data3_padding_forAlignment[0xc];
/// @brief Field _data3, offset: 0xc, size: 0x4, def value: None
 uint32_t  ____data3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____data4_padding[0x10];
/// @brief Field _data4, offset: 0x10, size: 0x4, def value: None
 uint32_t  ____data4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____data4_padding_forAlignment[0x10];
/// @brief Field _data4, offset: 0x10, size: 0x4, def value: None
 uint32_t  ____data4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ____data5_padding[0x14];
/// @brief Field _data5, offset: 0x14, size: 0x4, def value: None
 uint32_t  ____data5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ____data5_padding_forAlignment[0x14];
/// @brief Field _data5, offset: 0x14, size: 0x4, def value: None
 uint32_t  ____data5_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ____data6_padding[0x18];
/// @brief Field _data6, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____data6;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ____data6_padding_forAlignment[0x18];
/// @brief Field _data6, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____data6_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ____data7_padding[0x1c];
/// @brief Field _data7, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ____data7;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ____data7_padding_forAlignment[0x1c];
/// @brief Field _data7, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ____data7_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19029};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::_8) == 0x20, "Size mismatch!");

} // namespace end def Fusion
