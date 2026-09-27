#pragma once
// IWYU pragma private; include "Photon/Realtime/Region.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Region)
// Forward declare root types
namespace Photon::Realtime {
class Region;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::Region*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::Region*, "Photon.Realtime", "Region");
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.Region
class CORDL_TYPE Region : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Cluster, put=set_Cluster)) ::StringW  Cluster;

 __declspec(property(get=get_Code, put=set_Code)) ::StringW  Code;

 __declspec(property(get=get_HostAndPort, put=set_HostAndPort)) ::StringW  HostAndPort;

 __declspec(property(get=get_Ping, put=set_Ping)) int32_t  Ping;

 __declspec(property(get=get_WasPinged)) bool  WasPinged;

/// @brief Field <Cluster>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cluster_k__BackingField, put=__cordl_internal_set__Cluster_k__BackingField)) ::StringW  _Cluster_k__BackingField;

/// @brief Field <Code>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Code_k__BackingField, put=__cordl_internal_set__Code_k__BackingField)) ::StringW  _Code_k__BackingField;

/// @brief Field <HostAndPort>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__HostAndPort_k__BackingField, put=__cordl_internal_set__HostAndPort_k__BackingField)) ::StringW  _HostAndPort_k__BackingField;

/// @brief Field <Ping>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Ping_k__BackingField, put=__cordl_internal_set__Ping_k__BackingField)) int32_t  _Ping_k__BackingField;

static inline ::Photon::Realtime::Region* New_ctor(::StringW  code, ::StringW  address) ;

static inline ::Photon::Realtime::Region* New_ctor(::StringW  code, int32_t  ping) ;

/// @brief Method SetCodeAndCluster, addr 0xa70b1cc, size 0x104, virtual false, abstract: false, final false
inline void SetCodeAndCluster(::StringW  codeAsString) ;

/// @brief Method ToString, addr 0xa70b308, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa70b310, size 0x104, virtual false, abstract: false, final false
inline ::StringW ToString(bool  compact) ;

constexpr ::StringW const& __cordl_internal_get__Cluster_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Cluster_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Code_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Code_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__HostAndPort_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__HostAndPort_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Ping_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Ping_k__BackingField() ;

constexpr void __cordl_internal_set__Cluster_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Code_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__HostAndPort_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Ping_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xa70b180, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::StringW  code, ::StringW  address) ;

/// @brief Method .ctor, addr 0xa70b2d0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  code, int32_t  ping) ;

/// [CompilerGenerated]
/// @brief Method get_Cluster, addr 0xa70b13c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Cluster() ;

/// [CompilerGenerated]
/// @brief Method get_Code, addr 0xa70b12c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Code() ;

/// [CompilerGenerated]
/// @brief Method get_HostAndPort, addr 0xa70b14c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_HostAndPort() ;

/// [CompilerGenerated]
/// @brief Method get_Ping, addr 0xa70b15c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Ping() ;

/// @brief Method get_WasPinged, addr 0xa70b16c, size 0x14, virtual false, abstract: false, final false
inline bool get_WasPinged() ;

/// [CompilerGenerated]
/// @brief Method set_Cluster, addr 0xa70b144, size 0x8, virtual false, abstract: false, final false
inline void set_Cluster(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Code, addr 0xa70b134, size 0x8, virtual false, abstract: false, final false
inline void set_Code(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_HostAndPort, addr 0xa70b154, size 0x8, virtual false, abstract: false, final false
inline void set_HostAndPort(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Ping, addr 0xa70b164, size 0x8, virtual false, abstract: false, final false
inline void set_Ping(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Region() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Region", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Region(Region && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Region", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Region(Region const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29893};

/// [CompilerGenerated]
/// @brief Field <Code>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Code_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Cluster>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Cluster_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HostAndPort>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____HostAndPort_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Ping>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____Ping_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::Region, ____Code_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Region, ____Cluster_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Region, ____HostAndPort_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Region, ____Ping_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::Region) == 0x30, "Size mismatch!");

} // namespace end def Photon::Realtime
