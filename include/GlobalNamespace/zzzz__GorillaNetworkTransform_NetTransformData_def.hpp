#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNetworkTransform_NetTransformData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaNetworkTransform_NetTransformData)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaNetworkTransform_NetTransformData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaNetworkTransform_NetTransformData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaNetworkTransform_NetTransformData, "", "GorillaNetworkTransform/NetTransformData");
// [NetworkStructWeaved(15)]
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworkTransform/NetTransformData
#pragma pack(push, 0)
struct CORDL_TYPE GorillaNetworkTransform_NetTransformData {
public:
// Declarations
/// @brief Field SentTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SentTime, put=__cordl_internal_set_SentTime)) double_t  SentTime;

/// @brief Field position, offset 0x0, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field scale, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::UnityEngine::Vector3  scale;

/// @brief Field velocity, offset 0xc, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr double_t const& __cordl_internal_get_SentTime() const;

constexpr double_t& __cordl_internal_get_SentTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_scale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_SentTime(double_t  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_scale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaNetworkTransform_NetTransformData() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "SentTime", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaNetworkTransform_NetTransformData(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, double_t  SentTime) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___position_padding[0x0];
/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___position_padding_forAlignment[0x0];
/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___velocity_padding[0xc];
/// @brief Field velocity, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___velocity_padding_forAlignment[0xc];
/// @brief Field velocity, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___rotation_padding[0x18];
/// @brief Field rotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___rotation_padding_forAlignment[0x18];
/// @brief Field rotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ___scale_padding[0x28];
/// @brief Field scale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scale;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ___scale_padding_forAlignment[0x28];
/// @brief Field scale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scale_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ___SentTime_padding[0x38];
/// @brief Field SentTime, offset: 0x38, size: 0x8, def value: None
 double_t  ___SentTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ___SentTime_padding_forAlignment[0x38];
/// @brief Field SentTime, offset: 0x38, size: 0x8, def value: None
 double_t  ___SentTime_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

/// @brief Size padding 0x3c - 0x40 = 0x4, packed as 0x4
 uint8_t  _cordl_size_padding[0x4];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaNetworkTransform_NetTransformData) == 0x3c, "Size mismatch!");

} // namespace end def GlobalNamespace
