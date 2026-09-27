#pragma once
// IWYU pragma private; include "Fusion/CodeGen/FixedStorage@6.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@6__Data_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedStorage@6)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct FixedStorage@6__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct FixedStorage@6;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::FixedStorage@6);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::FixedStorage@6, "Fusion.CodeGen", "FixedStorage@6");
// [WeaverGenerated]
// [NetworkStructWeaved(6)]
// Dependencies Fusion.CodeGen.FixedStorage@6::<Data>e__FixedBuffer
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.FixedStorage@6
struct CORDL_TYPE FixedStorage@6 {
public:
// Declarations
using _Data_e__FixedBuffer = ::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer;

/// @brief Field Data, offset 0x0, size 0x18 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer  Data;

/// @brief Field _1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__1, put=__cordl_internal_set__1)) int32_t  _1;

/// @brief Field _2, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__2, put=__cordl_internal_set__2)) int32_t  _2;

/// @brief Field _3, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get__3, put=__cordl_internal_set__3)) int32_t  _3;

/// @brief Field _4, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__4, put=__cordl_internal_set__4)) int32_t  _4;

/// @brief Field _5, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__5, put=__cordl_internal_set__5)) int32_t  _5;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer& __cordl_internal_get_Data() ;

constexpr int32_t const& __cordl_internal_get__1() const;

constexpr int32_t& __cordl_internal_get__1() ;

constexpr int32_t const& __cordl_internal_get__2() const;

constexpr int32_t& __cordl_internal_get__2() ;

constexpr int32_t const& __cordl_internal_get__3() const;

constexpr int32_t& __cordl_internal_get__3() ;

constexpr int32_t const& __cordl_internal_get__4() const;

constexpr int32_t& __cordl_internal_get__4() ;

constexpr int32_t const& __cordl_internal_get__5() const;

constexpr int32_t& __cordl_internal_get__5() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set__1(int32_t  value) ;

constexpr void __cordl_internal_set__2(int32_t  value) ;

constexpr void __cordl_internal_set__3(int32_t  value) ;

constexpr void __cordl_internal_set__4(int32_t  value) ;

constexpr void __cordl_internal_set__5(int32_t  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedStorage@6() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_5", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FixedStorage@6(::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer  Data, int32_t  _1, int32_t  _2, int32_t  _3, int32_t  _4, int32_t  _5) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Data_padding[0x0];
/// [FixedBuffer(typeof(System.Int32), 6)]
/// [WeaverGenerated]
/// @brief Field Data, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer  ___Data;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Data_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Int32), 6)]
/// [WeaverGenerated]
/// @brief Field Data, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::FixedStorage@6__Data_e__FixedBuffer  ___Data_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____1_padding[0x4];
/// [WeaverGenerated]
/// @brief Field _1, offset: 0x4, size: 0x4, def value: None
 int32_t  ____1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____1_padding_forAlignment[0x4];
/// [WeaverGenerated]
/// @brief Field _1, offset: 0x4, size: 0x4, def value: None
 int32_t  ____1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____2_padding[0x8];
/// [WeaverGenerated]
/// @brief Field _2, offset: 0x8, size: 0x4, def value: None
 int32_t  ____2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____2_padding_forAlignment[0x8];
/// [WeaverGenerated]
/// @brief Field _2, offset: 0x8, size: 0x4, def value: None
 int32_t  ____2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ____3_padding[0xc];
/// [WeaverGenerated]
/// @brief Field _3, offset: 0xc, size: 0x4, def value: None
 int32_t  ____3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ____3_padding_forAlignment[0xc];
/// [WeaverGenerated]
/// @brief Field _3, offset: 0xc, size: 0x4, def value: None
 int32_t  ____3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ____4_padding[0x10];
/// [WeaverGenerated]
/// @brief Field _4, offset: 0x10, size: 0x4, def value: None
 int32_t  ____4;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ____4_padding_forAlignment[0x10];
/// [WeaverGenerated]
/// @brief Field _4, offset: 0x10, size: 0x4, def value: None
 int32_t  ____4_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x14
 uint8_t  ____5_padding[0x14];
/// [WeaverGenerated]
/// @brief Field _5, offset: 0x14, size: 0x4, def value: None
 int32_t  ____5;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x14 for alignment
 uint8_t  ____5_padding_forAlignment[0x14];
/// [WeaverGenerated]
/// @brief Field _5, offset: 0x14, size: 0x4, def value: None
 int32_t  ____5_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5296};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::FixedStorage@6) == 0x18, "Size mismatch!");

} // namespace end def Fusion::CodeGen
