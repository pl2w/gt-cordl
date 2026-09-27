#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceQuery_QueryInfoUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRSpaceQuery_QueryInfoUnion)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpaceQuery_QueryInfoUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion, "", "OVRSpaceQuery/QueryInfoUnion");
// Dependencies OVRPlugin::SpaceQueryInfo, OVRPlugin::SpaceQueryInfo2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpaceQuery/QueryInfoUnion
struct CORDL_TYPE OVRSpaceQuery_QueryInfoUnion {
public:
// Declarations
/// @brief Field V1, offset 0x0, size 0x40 
 __declspec(property(get=__cordl_internal_get_V1, put=__cordl_internal_set_V1)) ::GlobalNamespace::OVRPlugin_SpaceQueryInfo  V1;

/// @brief Field V2, offset 0x0, size 0x50 
 __declspec(property(get=__cordl_internal_get_V2, put=__cordl_internal_set_V2)) ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  V2;

constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo const& __cordl_internal_get_V1() const;

constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo& __cordl_internal_get_V1() ;

constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 const& __cordl_internal_get_V2() const;

constexpr ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2& __cordl_internal_get_V2() ;

constexpr void __cordl_internal_set_V1(::GlobalNamespace::OVRPlugin_SpaceQueryInfo  value) ;

constexpr void __cordl_internal_set_V2(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpaceQuery_QueryInfoUnion() ;

// Ctor Parameters [CppParam { name: "V1", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "V2", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryInfo2", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpaceQuery_QueryInfoUnion(::GlobalNamespace::OVRPlugin_SpaceQueryInfo  V1, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  V2) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___V1_padding[0x0];
/// @brief Field V1, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryInfo  ___V1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___V1_padding_forAlignment[0x0];
/// @brief Field V1, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryInfo  ___V1_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___V2_padding[0x0];
/// @brief Field V2, offset: 0x0, size: 0x50, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  ___V2;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___V2_padding_forAlignment[0x0];
/// @brief Field V2, offset: 0x0, size: 0x50, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  ___V2_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12456};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
