#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceQuery_Options.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryActionType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpaceQuery_Options)
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryActionType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo2;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryType;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpaceQuery_Options;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpaceQuery_Options);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpaceQuery_Options, "", "OVRSpaceQuery/Options");
// [Obsolete("This helper is for obsolete usages of xrQuerySpacesFB. See OVRAnchor.FetchAnchorsAsync.")]
// Dependencies OVRPlugin::SpaceComponentType, OVRPlugin::SpaceQueryActionType, OVRPlugin::SpaceQueryType, OVRSpace::StorageLocation, System.Guid, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpaceQuery/Options
struct CORDL_TYPE OVRSpaceQuery_Options {
public:
// Declarations
 __declspec(property(get=get_ActionType, put=set_ActionType)) ::GlobalNamespace::OVRPlugin_SpaceQueryActionType  ActionType;

 __declspec(property(get=get_ComponentFilter, put=set_ComponentFilter)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  ComponentFilter;

 __declspec(property(get=get_GroupFilter, put=set_GroupFilter)) ::System::Nullable_1<::System::Guid>  GroupFilter;

 __declspec(property(get=get_Location, put=set_Location)) ::GlobalNamespace::OVRSpace_StorageLocation  Location;

 __declspec(property(get=get_MaxResults, put=set_MaxResults)) int32_t  MaxResults;

 __declspec(property(get=get_QueryType, put=set_QueryType)) ::GlobalNamespace::OVRPlugin_SpaceQueryType  QueryType;

 __declspec(property(get=get_Timeout, put=set_Timeout)) double_t  Timeout;

 __declspec(property(get=get_UuidFilter, put=set_UuidFilter)) ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  UuidFilter;

/// @brief Method ToQueryInfo, addr 0xa63f624, size 0x1ec, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo ToQueryInfo() ;

/// @brief Method ToQueryInfo2, addr 0xa63f810, size 0x238, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 ToQueryInfo2() ;

/// @brief Method TryQuerySpaces, addr 0xa63fa48, size 0x94, virtual false, abstract: false, final false
inline bool TryQuerySpaces(::by_ref<uint64_t>  requestId) ;

/// @brief Method ValidateSingleFilter, addr 0xa63f324, size 0xbc, virtual false, abstract: false, final false
static inline void ValidateSingleFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuidFilter, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentFilter, ::System::Nullable_1<::System::Guid>  groupFilter) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ActionType, addr 0xa63f2c8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceQueryActionType get_ActionType() ;

/// @brief Method get_ComponentFilter, addr 0xa63f2d8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_ComponentFilter() ;

/// @brief Method get_GroupFilter, addr 0xa63f5bc, size 0x14, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::Guid> get_GroupFilter() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Location, addr 0xa63f2a8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSpace_StorageLocation get_Location() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_MaxResults, addr 0xa63f288, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxResults() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_QueryType, addr 0xa63f2b8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceQueryType get_QueryType() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Timeout, addr 0xa63f298, size 0x8, virtual false, abstract: false, final false
inline double_t get_Timeout() ;

/// @brief Method get_UuidFilter, addr 0xa63f3e0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* get_UuidFilter() ;

/// [CompilerGenerated]
/// @brief Method set_ActionType, addr 0xa63f2d0, size 0x8, virtual false, abstract: false, final false
inline void set_ActionType(::GlobalNamespace::OVRPlugin_SpaceQueryActionType  value) ;

/// @brief Method set_ComponentFilter, addr 0xa63f2e0, size 0x44, virtual false, abstract: false, final false
inline void set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceComponentType  value) ;

/// @brief Method set_GroupFilter, addr 0xa63f5d0, size 0x54, virtual false, abstract: false, final false
inline void set_GroupFilter(::System::Nullable_1<::System::Guid>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Location, addr 0xa63f2b0, size 0x8, virtual false, abstract: false, final false
inline void set_Location(::GlobalNamespace::OVRSpace_StorageLocation  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxResults, addr 0xa63f290, size 0x8, virtual false, abstract: false, final false
inline void set_MaxResults(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_QueryType, addr 0xa63f2c0, size 0x8, virtual false, abstract: false, final false
inline void set_QueryType(::GlobalNamespace::OVRPlugin_SpaceQueryType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Timeout, addr 0xa63f2a0, size 0x8, virtual false, abstract: false, final false
inline void set_Timeout(double_t  value) ;

/// @brief Method set_UuidFilter, addr 0xa63f3e8, size 0x1d4, virtual false, abstract: false, final false
inline void set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpaceQuery_Options() ;

// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Location_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "_QueryType_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ActionType_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryActionType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_componentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_uuidFilter", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_groupFilter", ty: "::System::Nullable_1<::System::Guid>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpaceQuery_Options(int32_t  _MaxResults_k__BackingField, double_t  _Timeout_k__BackingField, ::GlobalNamespace::OVRSpace_StorageLocation  _Location_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceQueryType  _QueryType_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceQueryActionType  _ActionType_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceComponentType  _componentType, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  _uuidFilter, ::System::Nullable_1<::System::Guid>  _groupFilter) noexcept;

/// @brief Field MaxUuidCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxUuidCount{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12457};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// [CompilerGenerated]
/// @brief Field <MaxResults>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _MaxResults_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Timeout>k__BackingField, offset: 0x8, size: 0x8, def value: None
 double_t  _Timeout_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Location>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRSpace_StorageLocation  _Location_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <QueryType>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryType  _QueryType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ActionType>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceQueryActionType  _ActionType_k__BackingField;

/// @brief Field _componentType, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceComponentType  _componentType;

/// @brief Field _uuidFilter, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  _uuidFilter;

/// @brief Field _groupFilter, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::Guid>  _groupFilter;

/// @brief Size padding 0x40 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _MaxResults_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _Timeout_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _Location_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _QueryType_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _ActionType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _componentType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _uuidFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceQuery_Options, _groupFilter) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpaceQuery_Options) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
