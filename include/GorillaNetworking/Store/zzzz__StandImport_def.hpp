#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StandImport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StandImport)
namespace GorillaNetworking::Store {
class StandTypeData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class StandImport;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StandImport*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StandImport*, "GorillaNetworking.Store", "StandImport");
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StandImport
class CORDL_TYPE StandImport : public ::System::Object {
public:
// Declarations
/// @brief Field standData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_standData, put=__cordl_internal_set_standData)) ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StandTypeData*>*  standData;

/// @brief Field standKeyToDataDict, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_standKeyToDataDict, put=__cordl_internal_set_standKeyToDataDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StandTypeData*>*  standKeyToDataDict;

/// @brief Method DecomposeFromTitleDataString, addr 0x5cb08ec, size 0xb0, virtual false, abstract: false, final false
inline void DecomposeFromTitleDataString(::StringW  data) ;

/// @brief Method DecomposeStandData, addr 0x5cb1cd8, size 0x1f0, virtual false, abstract: false, final false
inline void DecomposeStandData(::StringW  dataString) ;

/// @brief Method DecomposeStandDataTitleData, addr 0x5cb172c, size 0x204, virtual false, abstract: false, final false
inline void DecomposeStandDataTitleData(::StringW  dataString) ;

/// @brief Method DeserializeFromJSON, addr 0x5cb1c50, size 0x88, virtual false, abstract: false, final false
inline void DeserializeFromJSON(::StringW  JSONString) ;

static inline ::GorillaNetworking::Store::StandImport* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StandTypeData*>* const& __cordl_internal_get_standData() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StandTypeData*>*& __cordl_internal_get_standData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StandTypeData*>* const& __cordl_internal_get_standKeyToDataDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StandTypeData*>*& __cordl_internal_get_standKeyToDataDict() ;

constexpr void __cordl_internal_set_standData(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StandTypeData*>*  value) ;

constexpr void __cordl_internal_set_standKeyToDataDict(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StandTypeData*>*  value) ;

/// @brief Method .ctor, addr 0x5cb0810, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandImport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandImport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandImport(StandImport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandImport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandImport(StandImport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4439};

/// @brief Field standData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StandTypeData*>*  ___standData;

/// @brief Field standKeyToDataDict, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::Store::StandTypeData*>*  ___standKeyToDataDict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StandImport, ___standData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StandImport, ___standKeyToDataDict) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StandImport) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
