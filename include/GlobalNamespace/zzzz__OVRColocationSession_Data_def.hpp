#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRColocationSession_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRColocationSession_Data)
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRColocationSession_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRColocationSession_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRColocationSession_Data, "", "OVRColocationSession/Data");
// Dependencies System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRColocationSession/Data
struct CORDL_TYPE OVRColocationSession_Data {
public:
// Declarations
 __declspec(property(get=get_AdvertisementUuid, put=set_AdvertisementUuid)) ::System::Guid  AdvertisementUuid;

 __declspec(property(get=get_Metadata, put=set_Metadata)) ::ArrayW<uint8_t>  Metadata;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_AdvertisementUuid, addr 0xa582b0c, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_AdvertisementUuid() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Metadata, addr 0xa582b20, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Metadata() ;

/// [CompilerGenerated]
/// @brief Method set_AdvertisementUuid, addr 0xa582b18, size 0x8, virtual false, abstract: false, final false
inline void set_AdvertisementUuid(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Metadata, addr 0xa582b28, size 0x8, virtual false, abstract: false, final false
inline void set_Metadata(::ArrayW<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRColocationSession_Data() ;

// Ctor Parameters [CppParam { name: "_AdvertisementUuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Metadata_k__BackingField", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr OVRColocationSession_Data(::System::Guid  _AdvertisementUuid_k__BackingField, ::ArrayW<uint8_t>  _Metadata_k__BackingField) noexcept;

/// @brief Field MaxMetadataSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxMetadataSize{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11873};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <AdvertisementUuid>k__BackingField, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  _AdvertisementUuid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Metadata>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _Metadata_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRColocationSession_Data, _AdvertisementUuid_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRColocationSession_Data, _Metadata_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRColocationSession_Data) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
