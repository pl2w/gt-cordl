#pragma once
// IWYU pragma private; include "Fusion/NetworkCCData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkTRSPData_def.hpp"
#include "Fusion/zzzz__Vector3Compressed_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkCCData)
namespace Fusion {
class INetworkStruct;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
struct NetworkCCData;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkCCData);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkCCData, "Fusion", "NetworkCCData");
// [NetworkStructWeaved(22)]
// Dependencies Fusion.NetworkTRSPData, Fusion.Vector3Compressed
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkCCData
struct CORDL_TYPE NetworkCCData {
public:
// Declarations
 __declspec(property(get=get_Grounded, put=set_Grounded)) bool  Grounded;

/// @brief Field TRSPData, offset 0x0, size 0x38 
 __declspec(property(get=__cordl_internal_get_TRSPData, put=__cordl_internal_set_TRSPData)) ::Fusion::NetworkTRSPData  TRSPData;

 __declspec(property(get=get_Velocity, put=set_Velocity)) ::UnityEngine::Vector3  Velocity;

/// @brief Field _grounded, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__grounded, put=__cordl_internal_set__grounded)) int32_t  _grounded;

/// @brief Field _velocityData, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__velocityData, put=__cordl_internal_set__velocityData)) ::Fusion::Vector3Compressed  _velocityData;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::NetworkTRSPData const& __cordl_internal_get_TRSPData() const;

constexpr ::Fusion::NetworkTRSPData& __cordl_internal_get_TRSPData() ;

constexpr int32_t const& __cordl_internal_get__grounded() const;

constexpr int32_t& __cordl_internal_get__grounded() ;

constexpr ::Fusion::Vector3Compressed const& __cordl_internal_get__velocityData() const;

constexpr ::Fusion::Vector3Compressed& __cordl_internal_get__velocityData() ;

constexpr void __cordl_internal_set_TRSPData(::Fusion::NetworkTRSPData  value) ;

constexpr void __cordl_internal_set__grounded(int32_t  value) ;

constexpr void __cordl_internal_set__velocityData(::Fusion::Vector3Compressed  value) ;

/// @brief Method get_Grounded, addr 0x60ee024, size 0x10, virtual false, abstract: false, final false
inline bool get_Grounded() ;

/// @brief Method get_Velocity, addr 0x60ee040, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Velocity() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Method set_Grounded, addr 0x60ee034, size 0xc, virtual false, abstract: false, final false
inline void set_Grounded(bool  value) ;

/// @brief Method set_Velocity, addr 0x60ee054, size 0x20, virtual false, abstract: false, final false
inline void set_Velocity(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkCCData() ;

// Ctor Parameters [CppParam { name: "TRSPData", ty: "::Fusion::NetworkTRSPData", modifiers: "", def_value: None, comment: None }, CppParam { name: "_grounded", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_velocityData", ty: "::Fusion::Vector3Compressed", modifiers: "", def_value: None, comment: None }]
constexpr NetworkCCData(::Fusion::NetworkTRSPData  TRSPData, int32_t  _grounded, ::Fusion::Vector3Compressed  _velocityData) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___TRSPData_padding[0x0];
/// @brief Field TRSPData, offset: 0x0, size: 0x38, def value: None
 ::Fusion::NetworkTRSPData  ___TRSPData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___TRSPData_padding_forAlignment[0x0];
/// @brief Field TRSPData, offset: 0x0, size: 0x38, def value: None
 ::Fusion::NetworkTRSPData  ___TRSPData_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ____grounded_padding[0x38];
/// @brief Field _grounded, offset: 0x38, size: 0x4, def value: None
 int32_t  ____grounded;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ____grounded_padding_forAlignment[0x38];
/// @brief Field _grounded, offset: 0x38, size: 0x4, def value: None
 int32_t  ____grounded_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3c
 uint8_t  ____velocityData_padding[0x3c];
/// @brief Field _velocityData, offset: 0x3c, size: 0xc, def value: None
 ::Fusion::Vector3Compressed  ____velocityData;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3c for alignment
 uint8_t  ____velocityData_padding_forAlignment[0x3c];
/// @brief Field _velocityData, offset: 0x3c, size: 0xc, def value: None
 ::Fusion::Vector3Compressed  ____velocityData_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x48)};

/// @brief Field WORDS offset 0xffffffff size 0x4
static constexpr int32_t  WORDS{static_cast<int32_t>(0x12)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkCCData) == 0x48, "Size mismatch!");

} // namespace end def Fusion
