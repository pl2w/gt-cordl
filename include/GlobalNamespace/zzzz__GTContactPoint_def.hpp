#pragma once
// IWYU pragma private; include "GlobalNamespace/GTContactPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTContactType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTContactPoint)
// Forward declare root types
namespace GlobalNamespace {
class GTContactPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTContactPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTContactPoint*, "", "GTContactPoint");
// Dependencies GTContactType, System.Object, UnityEngine.Color, UnityEngine.Matrix4x4, UnityEngine.Vector3, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTContactPoint
class CORDL_TYPE GTContactPoint : public ::System::Object {
public:
// Declarations
/// @brief Field color, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field contactPoint, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_contactPoint, put=__cordl_internal_set_contactPoint)) ::UnityEngine::Vector3  contactPoint;

/// @brief Field contactType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_contactType, put=__cordl_internal_set_contactType)) ::GlobalNamespace::GTContactType  contactType;

/// @brief Field counterVelocity, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_counterVelocity, put=__cordl_internal_set_counterVelocity)) ::UnityEngine::Vector3  counterVelocity;

/// @brief Field data, offset 0x10, size 0x40 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::UnityEngine::Matrix4x4  data;

/// @brief Field data0, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_data0, put=__cordl_internal_set_data0)) ::UnityEngine::Vector4  data0;

/// @brief Field data1, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_data1, put=__cordl_internal_set_data1)) ::UnityEngine::Vector4  data1;

/// @brief Field data2, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_data2, put=__cordl_internal_set_data2)) ::UnityEngine::Vector4  data2;

/// @brief Field data3, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_data3, put=__cordl_internal_set_data3)) ::UnityEngine::Vector4  data3;

/// @brief Field free, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_free, put=__cordl_internal_set_free)) uint32_t  free;

/// @brief Field lifetime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifetime, put=__cordl_internal_set_lifetime)) float_t  lifetime;

/// @brief Field radius, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field timestamp, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timestamp, put=__cordl_internal_set_timestamp)) float_t  timestamp;

static inline ::GlobalNamespace::GTContactPoint* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_contactPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_contactPoint() ;

constexpr ::GlobalNamespace::GTContactType const& __cordl_internal_get_contactType() const;

constexpr ::GlobalNamespace::GTContactType& __cordl_internal_get_contactType() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_counterVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_counterVelocity() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_data() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_data() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_data0() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_data0() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_data1() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_data1() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_data2() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_data2() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_data3() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_data3() ;

constexpr uint32_t const& __cordl_internal_get_free() const;

constexpr uint32_t& __cordl_internal_get_free() ;

constexpr float_t const& __cordl_internal_get_lifetime() const;

constexpr float_t& __cordl_internal_get_lifetime() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr float_t const& __cordl_internal_get_timestamp() const;

constexpr float_t& __cordl_internal_get_timestamp() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_contactPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_contactType(::GlobalNamespace::GTContactType  value) ;

constexpr void __cordl_internal_set_counterVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_data(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_data0(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_data1(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_data2(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_data3(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_free(uint32_t  value) ;

constexpr void __cordl_internal_set_lifetime(float_t  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_timestamp(float_t  value) ;

/// @brief Method .ctor, addr 0x56746bc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTContactPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTContactPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTContactPoint(GTContactPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTContactPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTContactPoint(GTContactPoint const& ) = delete;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___data_padding[0x10];
/// @brief Field data, offset: 0x10, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___data;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___data_padding_forAlignment[0x10];
/// @brief Field data, offset: 0x10, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___data_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___data0_padding[0x10];
/// @brief Field data0, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___data0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___data0_padding_forAlignment[0x10];
/// @brief Field data0, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___data0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___data1_padding[0x20];
/// @brief Field data1, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___data1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___data1_padding_forAlignment[0x20];
/// @brief Field data1, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___data1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___data2_padding[0x30];
/// @brief Field data2, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___data2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___data2_padding_forAlignment[0x30];
/// @brief Field data2, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___data2_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x40
 uint8_t  ___data3_padding[0x40];
/// @brief Field data3, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___data3;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x40 for alignment
 uint8_t  ___data3_padding_forAlignment[0x40];
/// @brief Field data3, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___data3_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___contactPoint_padding[0x10];
/// @brief Field contactPoint, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___contactPoint;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___contactPoint_padding_forAlignment[0x10];
/// @brief Field contactPoint, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___contactPoint_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___radius_padding[0x1c];
/// @brief Field radius, offset: 0x1c, size: 0x4, def value: None
 float_t  ___radius;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___radius_padding_forAlignment[0x1c];
/// @brief Field radius, offset: 0x1c, size: 0x4, def value: None
 float_t  ___radius_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___counterVelocity_padding[0x20];
/// @brief Field counterVelocity, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___counterVelocity;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___counterVelocity_padding_forAlignment[0x20];
/// @brief Field counterVelocity, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___counterVelocity_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ___timestamp_padding[0x2c];
/// @brief Field timestamp, offset: 0x2c, size: 0x4, def value: None
 float_t  ___timestamp;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ___timestamp_padding_forAlignment[0x2c];
/// @brief Field timestamp, offset: 0x2c, size: 0x4, def value: None
 float_t  ___timestamp_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___color_padding[0x30];
/// @brief Field color, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___color_padding_forAlignment[0x30];
/// @brief Field color, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___color_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x40
 uint8_t  ___contactType_padding[0x40];
/// @brief Field contactType, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::GTContactType  ___contactType;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x40 for alignment
 uint8_t  ___contactType_padding_forAlignment[0x40];
/// @brief Field contactType, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::GTContactType  ___contactType_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x44
 uint8_t  ___lifetime_padding[0x44];
/// @brief Field lifetime, offset: 0x44, size: 0x4, def value: None
 float_t  ___lifetime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x44 for alignment
 uint8_t  ___lifetime_padding_forAlignment[0x44];
/// @brief Field lifetime, offset: 0x44, size: 0x4, def value: None
 float_t  ___lifetime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x48
 uint8_t  ___free_padding[0x48];
/// @brief Field free, offset: 0x48, size: 0x4, def value: None
 uint32_t  ___free;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x48 for alignment
 uint8_t  ___free_padding_forAlignment[0x48];
/// @brief Field free, offset: 0x48, size: 0x4, def value: None
 uint32_t  ___free_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{832};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTContactPoint) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
