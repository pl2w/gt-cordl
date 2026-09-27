#pragma once
// IWYU pragma private; include "Fusion/NetworkRNG.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRNG)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace Fusion {
struct NetworkRNG;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkRNG);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRNG, "Fusion", "NetworkRNG");
// [NetworkStructWeaved(4)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkRNG
struct CORDL_TYPE NetworkRNG {
public:
// Declarations
 __declspec(property(get=get_Peek)) ::Fusion::NetworkRNG  Peek;

/// @brief Field _inc, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get__inc, put=__cordl_internal_set__inc)) uint64_t  _inc;

/// @brief Field _state, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) uint64_t  _state;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Method Next, addr 0x5fa0df4, size 0x54, virtual false, abstract: false, final false
inline double_t Next() ;

/// @brief Method NextExclusive, addr 0x5fa0e90, size 0x48, virtual false, abstract: false, final false
inline double_t NextExclusive() ;

/// @brief Method NextInt32, addr 0x5fa0f7c, size 0x48, virtual false, abstract: false, final false
inline int32_t NextInt32() ;

/// @brief Method NextSingle, addr 0x5fa0ed8, size 0x58, virtual false, abstract: false, final false
inline float_t NextSingle() ;

/// @brief Method NextSingleExclusive, addr 0x5fa0f30, size 0x4c, virtual false, abstract: false, final false
inline float_t NextSingleExclusive() ;

/// @brief Method NextSplitMix64, addr 0x5fa10e8, size 0x58, virtual false, abstract: false, final false
static inline uint64_t NextSplitMix64(::by_ref<uint64_t>  x) ;

/// @brief Method NextUInt32, addr 0x5fa0fc4, size 0x48, virtual false, abstract: false, final false
inline uint32_t NextUInt32() ;

/// @brief Method NextUInt32Internal, addr 0x5fa0e48, size 0x48, virtual false, abstract: false, final false
inline uint32_t NextUInt32Internal() ;

/// @brief Method NextUnbiasedUInt32, addr 0x5fa100c, size 0x64, virtual false, abstract: false, final false
inline uint32_t NextUnbiasedUInt32(uint32_t  max) ;

/// @brief Method RangeExclusive, addr 0x5fa13e4, size 0x2c, virtual false, abstract: false, final false
inline int32_t RangeExclusive(int32_t  minInclusive, int32_t  maxExclusive) ;

/// @brief Method RangeExclusive, addr 0x5fa1480, size 0x2c, virtual false, abstract: false, final false
inline uint32_t RangeExclusive(uint32_t  minInclusive, uint32_t  maxExclusive) ;

/// @brief Method RangeInclusive, addr 0x5fa1308, size 0x6c, virtual false, abstract: false, final false
inline double_t RangeInclusive(double_t  minInclusive, double_t  maxInclusive) ;

/// @brief Method RangeInclusive, addr 0x5fa1374, size 0x70, virtual false, abstract: false, final false
inline float_t RangeInclusive(float_t  minInclusive, float_t  maxInclusive) ;

/// @brief Method RangeInclusive, addr 0x5fa1410, size 0x70, virtual false, abstract: false, final false
inline int32_t RangeInclusive(int32_t  minInclusive, int32_t  maxInclusive) ;

/// @brief Method RangeInclusive, addr 0x5fa14ac, size 0x70, virtual false, abstract: false, final false
inline uint32_t RangeInclusive(uint32_t  minInclusive, uint32_t  maxInclusive) ;

/// @brief Method ToString, addr 0x5fa1140, size 0x1c8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr uint64_t const& __cordl_internal_get__inc() const;

constexpr uint64_t& __cordl_internal_get__inc() ;

constexpr uint64_t const& __cordl_internal_get__state() const;

constexpr uint64_t& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__inc(uint64_t  value) ;

constexpr void __cordl_internal_set__state(uint64_t  value) ;

/// @brief Method .ctor, addr 0x5fa1070, size 0x78, virtual false, abstract: false, final false
inline void _ctor(int32_t  seed) ;

/// @brief Method get_Peek, addr 0x5fa0de8, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::NetworkRNG get_Peek() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRNG() ;

// Ctor Parameters [CppParam { name: "_state", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_inc", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRNG(uint64_t  _state, uint64_t  _inc) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____state_padding[0x0];
/// @brief Field _state, offset: 0x0, size: 0x8, def value: None
 uint64_t  ____state;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____state_padding_forAlignment[0x0];
/// @brief Field _state, offset: 0x0, size: 0x8, def value: None
 uint64_t  ____state_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____inc_padding[0x8];
/// @brief Field _inc, offset: 0x8, size: 0x8, def value: None
 uint64_t  ____inc;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____inc_padding_forAlignment[0x8];
/// @brief Field _inc, offset: 0x8, size: 0x8, def value: None
 uint64_t  ____inc_forAlignment;
};
};
public:

/// @brief Field FP_32_32_ToUnitDoubleExclusive offset 0xffffffff size 0x8
static constexpr double_t  FP_32_32_ToUnitDoubleExclusive{static_cast<double_t>(2.3283064365386963e-10)};

/// @brief Field FP_32_32_ToUnitDoubleInclusive offset 0xffffffff size 0x8
static constexpr double_t  FP_32_32_ToUnitDoubleInclusive{static_cast<double_t>(2.3283064370807974e-10)};

/// @brief Field FP_8_24_ToUnitSingleExclusive offset 0xffffffff size 0x4
static constexpr float_t  FP_8_24_ToUnitSingleExclusive{static_cast<float_t>(5.9604645e-8f)};

/// @brief Field FP_8_24_ToUnitSingleInclusive offset 0xffffffff size 0x4
static constexpr float_t  FP_8_24_ToUnitSingleInclusive{static_cast<float_t>(5.960465e-8f)};

/// @brief Field MAX offset 0xffffffff size 0x4
static constexpr uint32_t  MAX{static_cast<uint32_t>(0xffffffffu)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19078};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRNG) == 0x10, "Size mismatch!");

} // namespace end def Fusion
