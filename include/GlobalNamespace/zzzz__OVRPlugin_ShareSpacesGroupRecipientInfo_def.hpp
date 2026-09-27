#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ShareSpacesGroupRecipientInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ShareSpacesGroupRecipientInfo)
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ShareSpacesGroupRecipientInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ShareSpacesGroupRecipientInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ShareSpacesGroupRecipientInfo, "", "OVRPlugin/ShareSpacesGroupRecipientInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ShareSpacesGroupRecipientInfo
struct CORDL_TYPE OVRPlugin_ShareSpacesGroupRecipientInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ShareSpacesGroupRecipientInfo() ;

// Ctor Parameters [CppParam { name: "GroupCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GroupUuids", ty: "::System::Guid*", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ShareSpacesGroupRecipientInfo(uint32_t  GroupCount, ::System::Guid*  GroupUuids) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12224};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field GroupCount, offset: 0x0, size: 0x4, def value: None
 uint32_t  GroupCount;

/// @brief Field GroupUuids, offset: 0x8, size: 0x8, def value: None
 ::System::Guid*  GroupUuids;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ShareSpacesGroupRecipientInfo, GroupCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ShareSpacesGroupRecipientInfo, GroupUuids) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ShareSpacesGroupRecipientInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
