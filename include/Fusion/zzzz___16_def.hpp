#pragma once
// IWYU pragma private; include "Fusion/_16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz___16__Data_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(_16)
namespace Fusion {
class IFixedStorage;
}
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct _16__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion {
struct _16;
}
// Write type traits
MARK_VAL_T(::Fusion::_16);
DEFINE_IL2CPP_CLASS(::Fusion::_16, "Fusion", "_16");
// [NetworkStructWeaved(16)]
// Dependencies Fusion._16::<Data>e__FixedBuffer
namespace Fusion {
// Is value type: true
// CS Name: Fusion._16
#pragma pack(push, 4)
struct CORDL_TYPE _16 {
public:
// Declarations
using _Data_e__FixedBuffer = ::GlobalNamespace::_16__Data_e__FixedBuffer;

/// @brief Field Data, offset 0x0, size 0x40 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::_16__Data_e__FixedBuffer  Data;

/// @brief Field _data0, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__data0, put=__cordl_internal_set__data0)) uint32_t  _data0;

/// @brief Field _data1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__data1, put=__cordl_internal_set__data1)) uint32_t  _data1;

/// @brief Field _data10, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__data10, put=__cordl_internal_set__data10)) uint32_t  _data10;

/// @brief Field _data11, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__data11, put=__cordl_internal_set__data11)) uint32_t  _data11;

/// @brief Field _data12, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__data12, put=__cordl_internal_set__data12)) uint32_t  _data12;

/// @brief Field _data13, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__data13, put=__cordl_internal_set__data13)) uint32_t  _data13;

/// @brief Field _data14, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__data14, put=__cordl_internal_set__data14)) uint32_t  _data14;

/// @brief Field _data15, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__data15, put=__cordl_internal_set__data15)) uint32_t  _data15;

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

/// @brief Field _data8, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__data8, put=__cordl_internal_set__data8)) uint32_t  _data8;

/// @brief Field _data9, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__data9, put=__cordl_internal_set__data9)) uint32_t  _data9;

/// @brief Convert operator to "::Fusion::IFixedStorage"
constexpr operator  ::Fusion::IFixedStorage*() ;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::GlobalNamespace::_16__Data_e__FixedBuffer const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::_16__Data_e__FixedBuffer& __cordl_internal_get_Data() ;

constexpr uint32_t const& __cordl_internal_get__data0() const;

constexpr uint32_t& __cordl_internal_get__data0() ;

constexpr uint32_t const& __cordl_internal_get__data1() const;

constexpr uint32_t& __cordl_internal_get__data1() ;

constexpr uint32_t const& __cordl_internal_get__data10() const;

constexpr uint32_t& __cordl_internal_get__data10() ;

constexpr uint32_t const& __cordl_internal_get__data11() const;

constexpr uint32_t& __cordl_internal_get__data11() ;

constexpr uint32_t const& __cordl_internal_get__data12() const;

constexpr uint32_t& __cordl_internal_get__data12() ;

constexpr uint32_t const& __cordl_internal_get__data13() const;

constexpr uint32_t& __cordl_internal_get__data13() ;

constexpr uint32_t const& __cordl_internal_get__data14() const;

constexpr uint32_t& __cordl_internal_get__data14() ;

constexpr uint32_t const& __cordl_internal_get__data15() const;

constexpr uint32_t& __cordl_internal_get__data15() ;

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

constexpr uint32_t const& __cordl_internal_get__data8() const;

constexpr uint32_t& __cordl_internal_get__data8() ;

constexpr uint32_t const& __cordl_internal_get__data9() const;

constexpr uint32_t& __cordl_internal_get__data9() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::_16__Data_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set__data0(uint32_t  value) ;

constexpr void __cordl_internal_set__data1(uint32_t  value) ;

constexpr void __cordl_internal_set__data10(uint32_t  value) ;

constexpr void __cordl_internal_set__data11(uint32_t  value) ;

constexpr void __cordl_internal_set__data12(uint32_t  value) ;

constexpr void __cordl_internal_set__data13(uint32_t  value) ;

constexpr void __cordl_internal_set__data14(uint32_t  value) ;

constexpr void __cordl_internal_set__data15(uint32_t  value) ;

constexpr void __cordl_internal_set__data2(uint32_t  value) ;

constexpr void __cordl_internal_set__data3(uint32_t  value) ;

constexpr void __cordl_internal_set__data4(uint32_t  value) ;

constexpr void __cordl_internal_set__data5(uint32_t  value) ;

constexpr void __cordl_internal_set__data6(uint32_t  value) ;

constexpr void __cordl_internal_set__data7(uint32_t  value) ;

constexpr void __cordl_internal_set__data8(uint32_t  value) ;

constexpr void __cordl_internal_set__data9(uint32_t  value) ;

/// @brief Convert to "::Fusion::IFixedStorage"
constexpr ::Fusion::IFixedStorage* i___Fusion__IFixedStorage() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr _16() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::_16__Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data2", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data3", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data4", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data5", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data6", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data7", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data8", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data9", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data10", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data11", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data12", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data13", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data14", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data15", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr _16(::GlobalNamespace::_16__Data_e__FixedBuffer  Data, uint32_t  _data0, uint32_t  _data1, uint32_t  _data2, uint32_t  _data3, uint32_t  _data4, uint32_t  _data5, uint32_t  _data6, uint32_t  _data7, uint32_t  _data8, uint32_t  _data9, uint32_t  _data10, uint32_t  _data11, uint32_t  _data12, uint32_t  _data13, uint32_t  _data14, uint32_t  _data15) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Data_padding[0x0];
/// [FixedBuffer(typeof(System.UInt32), 16)]
/// @brief Field Data, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::_16__Data_e__FixedBuffer  ___Data;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Data_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.UInt32), 16)]
/// @brief Field Data, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::_16__Data_e__FixedBuffer  ___Data_forAlignment;
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
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ____data8_padding[0x20];
/// @brief Field _data8, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____data8;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ____data8_padding_forAlignment[0x20];
/// @brief Field _data8, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____data8_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ____data9_padding[0x24];
/// @brief Field _data9, offset: 0x24, size: 0x4, def value: None
 uint32_t  ____data9;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ____data9_padding_forAlignment[0x24];
/// @brief Field _data9, offset: 0x24, size: 0x4, def value: None
 uint32_t  ____data9_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ____data10_padding[0x28];
/// @brief Field _data10, offset: 0x28, size: 0x4, def value: None
 uint32_t  ____data10;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ____data10_padding_forAlignment[0x28];
/// @brief Field _data10, offset: 0x28, size: 0x4, def value: None
 uint32_t  ____data10_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ____data11_padding[0x2c];
/// @brief Field _data11, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ____data11;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ____data11_padding_forAlignment[0x2c];
/// @brief Field _data11, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ____data11_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ____data12_padding[0x30];
/// @brief Field _data12, offset: 0x30, size: 0x4, def value: None
 uint32_t  ____data12;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ____data12_padding_forAlignment[0x30];
/// @brief Field _data12, offset: 0x30, size: 0x4, def value: None
 uint32_t  ____data12_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x34
 uint8_t  ____data13_padding[0x34];
/// @brief Field _data13, offset: 0x34, size: 0x4, def value: None
 uint32_t  ____data13;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x34 for alignment
 uint8_t  ____data13_padding_forAlignment[0x34];
/// @brief Field _data13, offset: 0x34, size: 0x4, def value: None
 uint32_t  ____data13_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ____data14_padding[0x38];
/// @brief Field _data14, offset: 0x38, size: 0x4, def value: None
 uint32_t  ____data14;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ____data14_padding_forAlignment[0x38];
/// @brief Field _data14, offset: 0x38, size: 0x4, def value: None
 uint32_t  ____data14_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3c
 uint8_t  ____data15_padding[0x3c];
/// @brief Field _data15, offset: 0x3c, size: 0x4, def value: None
 uint32_t  ____data15;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3c for alignment
 uint8_t  ____data15_padding_forAlignment[0x3c];
/// @brief Field _data15, offset: 0x3c, size: 0x4, def value: None
 uint32_t  ____data15_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19031};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::_16) == 0x40, "Size mismatch!");

} // namespace end def Fusion
