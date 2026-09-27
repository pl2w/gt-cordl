#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationTelemetryData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LocalizationTelemetryData)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalizationTelemetryData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalizationTelemetryData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizationTelemetryData, "", "LocalizationTelemetryData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalizationTelemetryData
struct CORDL_TYPE LocalizationTelemetryData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationTelemetryData() ;

// Ctor Parameters [CppParam { name: "EventName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomTags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "BodyData", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None, comment: None }]
constexpr LocalizationTelemetryData(::StringW  EventName, ::ArrayW<::StringW>  CustomTags, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  BodyData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3084};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field EventName, offset: 0x0, size: 0x8, def value: None
 ::StringW  EventName;

/// @brief Field CustomTags, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  CustomTags;

/// @brief Field BodyData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  BodyData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizationTelemetryData, EventName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationTelemetryData, CustomTags) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationTelemetryData, BodyData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizationTelemetryData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
