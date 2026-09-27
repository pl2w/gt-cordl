#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODNextStreamData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VODPlayer_VODNextStreamData)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
struct VODPlayer_VODNextStreamData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODPlayer_VODNextStreamData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer_VODNextStreamData, "", "VODPlayer/VODNextStreamData");
// Dependencies System.DateTime
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/VODNextStreamData
struct CORDL_TYPE VODPlayer_VODNextStreamData {
public:
// Declarations
/// @brief Method .ctor, addr 0x5d043f8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  title, ::System::DateTime  startTime) ;

// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer_VODNextStreamData() ;

// Ctor Parameters [CppParam { name: "Title", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "StartTime", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr VODPlayer_VODNextStreamData(::StringW  Title, ::System::DateTime  StartTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{430};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Title, offset: 0x0, size: 0x8, def value: None
 ::StringW  Title;

/// @brief Field StartTime, offset: 0x8, size: 0x8, def value: None
 ::System::DateTime  StartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer_VODNextStreamData, Title) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODNextStreamData, StartTime) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer_VODNextStreamData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
