#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_FilterUnion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterInfoComponents_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterInfoIds_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceDiscoveryFilterType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRAnchor_FilterUnion)
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_FilterUnion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_FilterUnion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_FilterUnion, "", "OVRAnchor/FilterUnion");
// Dependencies OVRPlugin::SpaceDiscoveryFilterInfoComponents, OVRPlugin::SpaceDiscoveryFilterInfoIds, OVRPlugin::SpaceDiscoveryFilterType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/FilterUnion
struct CORDL_TYPE OVRAnchor_FilterUnion {
public:
// Declarations
/// @brief Field ComponentFilter, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ComponentFilter, put=__cordl_internal_set_ComponentFilter)) ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents  ComponentFilter;

/// @brief Field IdFilter, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_IdFilter, put=__cordl_internal_set_IdFilter)) ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds  IdFilter;

/// @brief Field Type, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type;

constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents const& __cordl_internal_get_ComponentFilter() const;

constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents& __cordl_internal_get_ComponentFilter() ;

constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds const& __cordl_internal_get_IdFilter() const;

constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds& __cordl_internal_get_IdFilter() ;

constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType const& __cordl_internal_get_Type() const;

constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents  value) ;

constexpr void __cordl_internal_set_IdFilter(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds  value) ;

constexpr void __cordl_internal_set_Type(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_FilterUnion() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentFilter", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents", modifiers: "", def_value: None, comment: None }, CppParam { name: "IdFilter", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_FilterUnion(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  Type, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents  ComponentFilter, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds  IdFilter) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Type_padding[0x0];
/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  ___Type;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Type_padding_forAlignment[0x0];
/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType  ___Type_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___ComponentFilter_padding[0x0];
/// @brief Field ComponentFilter, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents  ___ComponentFilter;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___ComponentFilter_padding_forAlignment[0x0];
/// @brief Field ComponentFilter, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents  ___ComponentFilter_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___IdFilter_padding[0x0];
/// @brief Field IdFilter, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds  ___IdFilter;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___IdFilter_padding_forAlignment[0x0];
/// @brief Field IdFilter, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds  ___IdFilter_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11815};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRAnchor_FilterUnion) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
