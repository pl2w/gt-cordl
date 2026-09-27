#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeDataBindingsUpdater_VersionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeDataBindingsUpdater_VersionInfo)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct VisualTreeDataBindingsUpdater_VersionInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo, "UnityEngine.UIElements", "VisualTreeDataBindingsUpdater/VersionInfo");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeDataBindingsUpdater/VersionInfo
struct CORDL_TYPE VisualTreeDataBindingsUpdater_VersionInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0xb72ef38, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  source, int64_t  version) ;

// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeDataBindingsUpdater_VersionInfo() ;

// Ctor Parameters [CppParam { name: "source", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualTreeDataBindingsUpdater_VersionInfo(::System::Object*  source, int64_t  version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7224};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field source, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  source;

/// @brief Field version, offset: 0x8, size: 0x8, def value: None
 int64_t  version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo, version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualTreeDataBindingsUpdater_VersionInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
