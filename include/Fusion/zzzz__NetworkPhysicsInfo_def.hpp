#pragma once
// IWYU pragma private; include "Fusion/NetworkPhysicsInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPhysicsInfo)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace Fusion {
struct NetworkPhysicsInfo;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkPhysicsInfo);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPhysicsInfo, "Fusion", "NetworkPhysicsInfo");
// [NetworkStructWeaved(10)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkPhysicsInfo
struct CORDL_TYPE NetworkPhysicsInfo {
public:
// Declarations
/// @brief Field TimeScale, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_TimeScale, put=__cordl_internal_set_TimeScale)) float_t  TimeScale;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr float_t const& __cordl_internal_get_TimeScale() const;

constexpr float_t& __cordl_internal_get_TimeScale() ;

constexpr void __cordl_internal_set_TimeScale(float_t  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPhysicsInfo() ;

// Ctor Parameters [CppParam { name: "TimeScale", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkPhysicsInfo(float_t  TimeScale) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___TimeScale_padding[0x0];
/// @brief Field TimeScale, offset: 0x0, size: 0x4, def value: None
 float_t  ___TimeScale;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___TimeScale_padding_forAlignment[0x0];
/// @brief Field TimeScale, offset: 0x0, size: 0x4, def value: None
 float_t  ___TimeScale_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x28)};

/// @brief Field WORD_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  WORD_COUNT{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkPhysicsInfo) == 0x4, "Size mismatch!");

} // namespace end def Fusion
