#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_LoadOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor_LoadOptions)
namespace GlobalNamespace {
struct OVRSpaceQuery_Options;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpatialAnchor_LoadOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor_LoadOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, "", "OVRSpatialAnchor/LoadOptions");
// [Obsolete("Only for use with the obsolete version of LoadUnboundAnchorsAsync. Use the overload of LoadUnboundAnchorsAsync that accepts a collection of Guids")]
// Dependencies OVRSpace::StorageLocation
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/LoadOptions
struct CORDL_TYPE OVRSpatialAnchor_LoadOptions {
public:
// Declarations
/// @brief [Obsolete("This property is no longer required. MaxAnchorCount will be automatically set to the number of uuids to load.")]
 __declspec(property(get=get_MaxAnchorCount, put=set_MaxAnchorCount)) int32_t  MaxAnchorCount;

 __declspec(property(get=get_StorageLocation, put=set_StorageLocation)) ::GlobalNamespace::OVRSpace_StorageLocation  StorageLocation;

 __declspec(property(get=get_Timeout, put=set_Timeout)) double_t  Timeout;

 __declspec(property(get=get_Uuids, put=set_Uuids)) ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  Uuids;

/// @brief Method ToQueryOptions, addr 0xa646d84, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSpaceQuery_Options ToQueryOptions() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_MaxAnchorCount, addr 0xa648190, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxAnchorCount() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_StorageLocation, addr 0xa648180, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSpace_StorageLocation get_StorageLocation() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Timeout, addr 0xa6481a0, size 0x8, virtual false, abstract: false, final false
inline double_t get_Timeout() ;

/// @brief Method get_Uuids, addr 0xa6481b0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>* get_Uuids() ;

/// [CompilerGenerated]
/// @brief Method set_MaxAnchorCount, addr 0xa648198, size 0x8, virtual false, abstract: false, final false
inline void set_MaxAnchorCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_StorageLocation, addr 0xa648188, size 0x8, virtual false, abstract: false, final false
inline void set_StorageLocation(::GlobalNamespace::OVRSpace_StorageLocation  value) ;

/// [CompilerGenerated]
/// @brief Method set_Timeout, addr 0xa6481a8, size 0x8, virtual false, abstract: false, final false
inline void set_Timeout(double_t  value) ;

/// @brief Method set_Uuids, addr 0xa6481b8, size 0x184, virtual false, abstract: false, final false
inline void set_Uuids(::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor_LoadOptions() ;

// Ctor Parameters [CppParam { name: "_StorageLocation_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaxAnchorCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_uuids", ty: "::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor_LoadOptions(::GlobalNamespace::OVRSpace_StorageLocation  _StorageLocation_k__BackingField, int32_t  _MaxAnchorCount_k__BackingField, double_t  _Timeout_k__BackingField, ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  _uuids) noexcept;

/// @brief Field MaxSupported offset 0xffffffff size 0x4
static constexpr int32_t  MaxSupported{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12468};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <StorageLocation>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRSpace_StorageLocation  _StorageLocation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxAnchorCount>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _MaxAnchorCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Timeout>k__BackingField, offset: 0x8, size: 0x8, def value: None
 double_t  _Timeout_k__BackingField;

/// @brief Field _uuids, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::System::Guid>*  _uuids;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, _StorageLocation_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, _MaxAnchorCount_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, _Timeout_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions, _uuids) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor_LoadOptions) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
