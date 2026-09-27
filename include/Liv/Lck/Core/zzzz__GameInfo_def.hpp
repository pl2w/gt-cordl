#pragma once
// IWYU pragma private; include "Liv/Lck/Core/GameInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameInfo)
// Forward declare root types
namespace Liv::Lck::Core {
struct GameInfo;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::GameInfo);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::GameInfo, "Liv.Lck.Core", "GameInfo");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: true
// CS Name: Liv.Lck.Core.GameInfo
struct CORDL_TYPE GameInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameInfo() ;

// Ctor Parameters [CppParam { name: "GameName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameVersion", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ProjectName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompanyName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "EngineVersion", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "RenderPipeline", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "GraphicsAPI", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Platform", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "PersistentDataPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "InteractionSystems", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr GameInfo(::StringW  GameName, ::StringW  GameVersion, ::StringW  ProjectName, ::StringW  CompanyName, ::StringW  EngineVersion, ::StringW  RenderPipeline, ::StringW  GraphicsAPI, ::StringW  Platform, ::StringW  PersistentDataPath, ::StringW  InteractionSystems) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31906};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field GameName, offset: 0x0, size: 0x8, def value: None
 ::StringW  GameName;

/// @brief Field GameVersion, offset: 0x8, size: 0x8, def value: None
 ::StringW  GameVersion;

/// @brief Field ProjectName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ProjectName;

/// @brief Field CompanyName, offset: 0x18, size: 0x8, def value: None
 ::StringW  CompanyName;

/// @brief Field EngineVersion, offset: 0x20, size: 0x8, def value: None
 ::StringW  EngineVersion;

/// @brief Field RenderPipeline, offset: 0x28, size: 0x8, def value: None
 ::StringW  RenderPipeline;

/// @brief Field GraphicsAPI, offset: 0x30, size: 0x8, def value: None
 ::StringW  GraphicsAPI;

/// @brief Field Platform, offset: 0x38, size: 0x8, def value: None
 ::StringW  Platform;

/// @brief Field PersistentDataPath, offset: 0x40, size: 0x8, def value: None
 ::StringW  PersistentDataPath;

/// @brief Field InteractionSystems, offset: 0x48, size: 0x8, def value: None
 ::StringW  InteractionSystems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::GameInfo, GameName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, GameVersion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, ProjectName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, CompanyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, EngineVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, RenderPipeline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, GraphicsAPI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, Platform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, PersistentDataPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::GameInfo, InteractionSystems) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::GameInfo) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck::Core
