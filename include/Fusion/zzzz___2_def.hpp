#pragma once
// IWYU pragma private; include "Fusion/_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz___2__Data_e__FixedBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(_2)
namespace Fusion {
class IFixedStorage;
}
namespace Fusion {
class INetworkStruct;
}
namespace GlobalNamespace {
struct _2__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Fusion {
struct _2;
}
// Write type traits
MARK_VAL_T(::Fusion::_2);
DEFINE_IL2CPP_CLASS(::Fusion::_2, "Fusion", "_2");
// [NetworkStructWeaved(2)]
// Dependencies Fusion._2::<Data>e__FixedBuffer
namespace Fusion {
// Is value type: true
// CS Name: Fusion._2
#pragma pack(push, 4)
struct CORDL_TYPE _2 {
public:
// Declarations
using _Data_e__FixedBuffer = ::GlobalNamespace::_2__Data_e__FixedBuffer;

/// @brief Field Data, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::GlobalNamespace::_2__Data_e__FixedBuffer  Data;

/// @brief Field _data0, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__data0, put=__cordl_internal_set__data0)) uint32_t  _data0;

/// @brief Field _data1, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__data1, put=__cordl_internal_set__data1)) uint32_t  _data1;

/// @brief Convert operator to "::Fusion::IFixedStorage"
constexpr operator  ::Fusion::IFixedStorage*() ;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::GlobalNamespace::_2__Data_e__FixedBuffer const& __cordl_internal_get_Data() const;

constexpr ::GlobalNamespace::_2__Data_e__FixedBuffer& __cordl_internal_get_Data() ;

constexpr uint32_t const& __cordl_internal_get__data0() const;

constexpr uint32_t& __cordl_internal_get__data0() ;

constexpr uint32_t const& __cordl_internal_get__data1() const;

constexpr uint32_t& __cordl_internal_get__data1() ;

constexpr void __cordl_internal_set_Data(::GlobalNamespace::_2__Data_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set__data0(uint32_t  value) ;

constexpr void __cordl_internal_set__data1(uint32_t  value) ;

/// @brief Convert to "::Fusion::IFixedStorage"
constexpr ::Fusion::IFixedStorage* i___Fusion__IFixedStorage() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr _2() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::GlobalNamespace::_2__Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data0", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data1", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr _2(::GlobalNamespace::_2__Data_e__FixedBuffer  Data, uint32_t  _data0, uint32_t  _data1) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Data_padding[0x0];
/// [FixedBuffer(typeof(System.UInt32), 2)]
/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::_2__Data_e__FixedBuffer  ___Data;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Data_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.UInt32), 2)]
/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::_2__Data_e__FixedBuffer  ___Data_forAlignment;
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
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::_2) == 0x8, "Size mismatch!");

} // namespace end def Fusion
