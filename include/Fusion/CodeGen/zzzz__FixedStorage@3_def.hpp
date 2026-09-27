#pragma once
// IWYU pragma private; include "Fusion/CodeGen/FixedStorage@3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@3__Data_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedStorage@3)
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct FixedStorage@3__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion::CodeGen {
struct FixedStorage@3;
}
// Write type traits
MARK_VAL_T(::Fusion::CodeGen::FixedStorage@3);
DEFINE_IL2CPP_CLASS(::Fusion::CodeGen::FixedStorage@3, "Fusion.CodeGen", "FixedStorage@3");
// [WeaverGenerated]
// [NetworkStructWeaved(3)]
// Dependencies Fusion.CodeGen.FixedStorage@3::<Data>e__FixedBuffer
namespace Fusion::CodeGen {
// Is value type: true
// CS Name: Fusion.CodeGen.FixedStorage@3
struct CORDL_TYPE FixedStorage@3 {
public:
// Declarations
using _Data_e__FixedBuffer = ::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer;

/// @brief Field Data, offset 0x0, size 0xc 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer  Data;

/// @brief Field _1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__1, put=__cordl_internal_set__1)) int32_t  _1;

/// @brief Field _2, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get__2, put=__cordl_internal_set__2)) int32_t  _2;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer& __cordl_internal_get_Data() ;

constexpr int32_t const& __cordl_internal_get__1() const;

constexpr int32_t& __cordl_internal_get__1() ;

constexpr int32_t const& __cordl_internal_get__2() const;

constexpr int32_t& __cordl_internal_get__2() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set__1(int32_t  value) ;

constexpr void __cordl_internal_set__2(int32_t  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedStorage@3() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_2", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FixedStorage@3(::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer  Data, int32_t  _1, int32_t  _2) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Data_padding[0x0];
/// [FixedBuffer(typeof(System.Int32), 3)]
/// [WeaverGenerated]
/// @brief Field Data, offset: 0x0, size: 0xc, def value: None
 ::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer  ___Data;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Data_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Int32), 3)]
/// [WeaverGenerated]
/// @brief Field Data, offset: 0x0, size: 0xc, def value: None
 ::GlobalNamespace::FixedStorage@3__Data_e__FixedBuffer  ___Data_forAlignment;
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
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5262};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::CodeGen::FixedStorage@3) == 0xc, "Size mismatch!");

} // namespace end def Fusion::CodeGen
