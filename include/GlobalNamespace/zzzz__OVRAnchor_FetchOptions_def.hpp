#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_FetchOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_FetchOptions)
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
struct Guid;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_FetchOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_FetchOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_FetchOptions, "", "OVRAnchor/FetchOptions");
// Dependencies System.Guid, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/FetchOptions
struct CORDL_TYPE OVRAnchor_FetchOptions {
public:
// Declarations
/// @brief Method DiscoverSpaces, addr 0xa5671e0, size 0x8f0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Result DiscoverSpaces(::by_ref<uint64_t>  requestId) ;

/// @brief Method GetSpaceComponentType, addr 0xa56d20c, size 0x194, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GetSpaceComponentType(::System::Type*  type) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_FetchOptions() ;

// Ctor Parameters [CppParam { name: "SingleUuid", ty: "::System::Nullable_1<::System::Guid>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SingleComponentType", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ComponentTypes", ty: "::System::Collections::Generic::IEnumerable_1<::System::Type*>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_FetchOptions(::System::Nullable_1<::System::Guid>  SingleUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  Uuids, ::System::Type*  SingleComponentType, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  ComponentTypes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11814};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field SingleUuid, offset: 0x0, size: 0x10, def value: None
 ::System::Nullable_1<::System::Guid>  SingleUuid;

/// @brief Field Uuids, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  Uuids;

/// @brief Field SingleComponentType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  SingleComponentType;

/// @brief Field ComponentTypes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  ComponentTypes;

/// @brief Size padding 0x30 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchOptions, SingleUuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchOptions, Uuids) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchOptions, SingleComponentType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_FetchOptions, ComponentTypes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_FetchOptions) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
