#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkRegionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRegionInfo)
// Forward declare root types
namespace GlobalNamespace {
class NetworkRegionInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkRegionInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRegionInfo*, "", "NetworkRegionInfo");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkRegionInfo
class CORDL_TYPE NetworkRegionInfo : public ::System::Object {
public:
// Declarations
/// @brief Field pingToRegion, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_pingToRegion, put=__cordl_internal_set_pingToRegion)) int32_t  pingToRegion;

/// @brief Field playersInRegion, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_playersInRegion, put=__cordl_internal_set_playersInRegion)) int32_t  playersInRegion;

static inline ::GlobalNamespace::NetworkRegionInfo* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_pingToRegion() const;

constexpr int32_t& __cordl_internal_get_pingToRegion() ;

constexpr int32_t const& __cordl_internal_get_playersInRegion() const;

constexpr int32_t& __cordl_internal_get_playersInRegion() ;

constexpr void __cordl_internal_set_pingToRegion(int32_t  value) ;

constexpr void __cordl_internal_set_playersInRegion(int32_t  value) ;

/// @brief Method .ctor, addr 0x56ecf1c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRegionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRegionInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRegionInfo(NetworkRegionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRegionInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRegionInfo(NetworkRegionInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1139};

/// @brief Field playersInRegion, offset: 0x10, size: 0x4, def value: None
 int32_t  ___playersInRegion;

/// @brief Field pingToRegion, offset: 0x14, size: 0x4, def value: None
 int32_t  ___pingToRegion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRegionInfo, ___playersInRegion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRegionInfo, ___pingToRegion) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRegionInfo) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
