#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpaceQuery)
namespace GlobalNamespace {
template<typename T>
struct OVREnumerable_1;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo2;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo;
}
namespace GlobalNamespace {
struct OVRSpaceQuery_Options;
}
namespace GlobalNamespace {
struct OVRSpaceQuery_QueryInfoUnion;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSpaceQuery;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRSpaceQuery*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpaceQuery*, "", "OVRSpaceQuery");
// [Extension]
// Dependencies OVRPlugin::SpaceComponentType, OVRPlugin::SpaceQueryInfo2, OVRPlugin::SpaceStorageLocation, System.Guid, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpaceQuery
class CORDL_TYPE OVRSpaceQuery : public ::System::Object {
public:
// Declarations
using Options = ::GlobalNamespace::OVRSpaceQuery_Options;

using QueryInfoUnion = ::GlobalNamespace::OVRSpaceQuery_QueryInfoUnion;

/// @brief Field s_ComponentTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ComponentTypes, put=setStaticF_s_ComponentTypes)) ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>  s_ComponentTypes;

/// @brief Field s_Ids, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Ids, put=setStaticF_s_Ids)) ::ArrayW<::System::Guid>  s_Ids;

/// @brief Field s_TemplateQuery, offset 0xffffffff, size 0x50 
 __declspec(property(get=getStaticF_s_TemplateQuery, put=setStaticF_s_TemplateQuery)) ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  s_TemplateQuery;

/// @brief Method AppendAnchors, addr 0xa63e040, size 0x2c4, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> AppendAnchors(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds) ;

/// @brief Method ForAnchors, addr 0xa63dfa8, size 0x98, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> ForAnchors(/* [CanBeNull] */ ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query) ;

/// @brief Method ForAnchorsThrow, addr 0xa63e600, size 0x1b0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForAnchorsThrow(/* [NotNull] */ ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds, ::StringW  argName) ;

/// @brief Method ForAnchorsUnchecked, addr 0xa63e304, size 0x22c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForAnchorsUnchecked(::GlobalNamespace::OVREnumerable_1<::System::Guid>  anchorIds) ;

/// @brief Method ForComponent, addr 0xa63e7b0, size 0xd4, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> ForComponent(::GlobalNamespace::OVRPlugin_SpaceComponentType  type, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query) ;

/// @brief Method ForComponentThrow, addr 0xa63e978, size 0x1a8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForComponentThrow(::GlobalNamespace::OVRPlugin_SpaceComponentType  type, ::StringW  argName) ;

/// @brief Method ForComponentUnchecked, addr 0xa63e884, size 0xf4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForComponentUnchecked(::GlobalNamespace::OVRPlugin_SpaceComponentType  type) ;

/// @brief Method ForGroup, addr 0xa63eb20, size 0x14c, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> ForGroup(::System::Guid  groupUuid, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds) ;

/// @brief Method ForGroupThrow, addr 0xa63eea4, size 0x1c8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForGroupThrow(::System::Guid  groupUuid, ::StringW  argName, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds) ;

/// @brief Method ForGroupUnchecked, addr 0xa63ec6c, size 0x238, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ForGroupUnchecked(::System::Guid  groupUuid, ::GlobalNamespace::OVREnumerable_1<::System::Guid>  anchorIds) ;

/// @brief Method PostProcessQuery, addr 0xa63e530, size 0xd0, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> PostProcessQuery(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query, ::GlobalNamespace::OVRPlugin_Result  result, /* [IsReadOnly] */ ::by_ref<::StringW>  why) ;

/// [Extension]
/// @brief Method ToV1, addr 0xa63f06c, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo ToV1(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query2) ;

/// [Extension]
/// @brief Method ToV2, addr 0xa63f0bc, size 0x4c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ToV2(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>  query1) ;

static inline ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType> getStaticF_s_ComponentTypes() ;

static inline ::ArrayW<::System::Guid> getStaticF_s_Ids() ;

static inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 getStaticF_s_TemplateQuery() ;

static inline void setStaticF_s_ComponentTypes(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>  value) ;

static inline void setStaticF_s_Ids(::ArrayW<::System::Guid>  value) ;

static inline void setStaticF_s_TemplateQuery(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSpaceQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSpaceQuery(OVRSpaceQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpaceQuery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSpaceQuery(OVRSpaceQuery const& ) = delete;

/// @brief Field DefaultStorageLocation value: I32(2)
static ::GlobalNamespace::OVRPlugin_SpaceStorageLocation const DefaultStorageLocation;

/// @brief Field DefaultTimeout offset 0xffffffff size 0x8
static constexpr double_t  DefaultTimeout{static_cast<double_t>(0.0)};

/// @brief Field MaxResultsForAnchors offset 0xffffffff size 0x4
static constexpr int32_t  MaxResultsForAnchors{static_cast<int32_t>(0x400)};

/// @brief Field MaxResultsForGroup offset 0xffffffff size 0x4
static constexpr int32_t  MaxResultsForGroup{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12458};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRSpaceQuery) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
