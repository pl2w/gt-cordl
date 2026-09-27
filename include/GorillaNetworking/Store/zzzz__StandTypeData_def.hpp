#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StandTypeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StandTypeData)
namespace GlobalNamespace {
struct HeadModel_CosmeticStand_BustType;
}
namespace GlobalNamespace {
struct StandTypeData_EStandDataID;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class StandTypeData;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StandTypeData*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StandTypeData*, "GorillaNetworking.Store", "StandTypeData");
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StandTypeData
class CORDL_TYPE StandTypeData : public ::System::Object {
public:
// Declarations
using EStandDataID = ::GlobalNamespace::StandTypeData_EStandDataID;

/// @brief Field bustType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bustType, put=__cordl_internal_set_bustType)) ::StringW  bustType;

/// @brief Field departmentID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_departmentID, put=__cordl_internal_set_departmentID)) ::StringW  departmentID;

/// @brief Field displayID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayID, put=__cordl_internal_set_displayID)) ::StringW  displayID;

/// @brief Field playFabID, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabID, put=__cordl_internal_set_playFabID)) ::StringW  playFabID;

/// @brief Field standID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_standID, put=__cordl_internal_set_standID)) ::StringW  standID;

static inline ::GorillaNetworking::Store::StandTypeData* New_ctor(::StringW  departmentID, ::StringW  displayID, ::StringW  standID, ::GlobalNamespace::HeadModel_CosmeticStand_BustType  bustType, ::StringW  playFabID) ;

static inline ::GorillaNetworking::Store::StandTypeData* New_ctor(::ArrayW<::StringW>  spawnData) ;

constexpr ::StringW const& __cordl_internal_get_bustType() const;

constexpr ::StringW& __cordl_internal_get_bustType() ;

constexpr ::StringW const& __cordl_internal_get_departmentID() const;

constexpr ::StringW& __cordl_internal_get_departmentID() ;

constexpr ::StringW const& __cordl_internal_get_displayID() const;

constexpr ::StringW& __cordl_internal_get_displayID() ;

constexpr ::StringW const& __cordl_internal_get_playFabID() const;

constexpr ::StringW& __cordl_internal_get_playFabID() ;

constexpr ::StringW const& __cordl_internal_get_standID() const;

constexpr ::StringW& __cordl_internal_get_standID() ;

constexpr void __cordl_internal_set_bustType(::StringW  value) ;

constexpr void __cordl_internal_set_departmentID(::StringW  value) ;

constexpr void __cordl_internal_set_displayID(::StringW  value) ;

constexpr void __cordl_internal_set_playFabID(::StringW  value) ;

constexpr void __cordl_internal_set_standID(::StringW  value) ;

/// @brief Method .ctor, addr 0x5cb1ec8, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::StringW  departmentID, ::StringW  displayID, ::StringW  standID, ::GlobalNamespace::HeadModel_CosmeticStand_BustType  bustType, ::StringW  playFabID) ;

/// @brief Method .ctor, addr 0x5cb1930, size 0x320, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  spawnData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandTypeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandTypeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandTypeData(StandTypeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandTypeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandTypeData(StandTypeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4441};

/// @brief Field departmentID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___departmentID;

/// @brief Field displayID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___displayID;

/// @brief Field standID, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___standID;

/// @brief Field bustType, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___bustType;

/// @brief Field playFabID, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___playFabID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StandTypeData, ___departmentID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StandTypeData, ___displayID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StandTypeData, ___standID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StandTypeData, ___bustType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StandTypeData, ___playFabID) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StandTypeData) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
