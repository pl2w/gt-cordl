#pragma once
// IWYU pragma private; include "Liv/Lck/Core/FFI/GameInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameInfo)
namespace Liv::Lck::Core {
struct GameInfo;
}
// Forward declare root types
namespace Liv::Lck::Core::FFI {
struct GameInfo;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::FFI::GameInfo);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::FFI::GameInfo, "Liv.Lck.Core.FFI", "GameInfo");
// Dependencies System.IntPtr
namespace Liv::Lck::Core::FFI {
// Is value type: true
// CS Name: Liv.Lck.Core.FFI.GameInfo
struct CORDL_TYPE GameInfo {
public:
// Declarations
/// @brief Method AllocateFromGameInfo, addr 0x9cfe4b8, size 0x44, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::GameInfo AllocateFromGameInfo(::Liv::Lck::Core::GameInfo  gameInfo) ;

/// @brief Method Free, addr 0x9d02054, size 0x5c, virtual false, abstract: false, final false
inline void Free() ;

/// @brief Method .ctor, addr 0x9d01fbc, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Core::GameInfo  gameInfo) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameInfo() ;

// Ctor Parameters [CppParam { name: "GameName", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameVersion", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "ProjectName", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompanyName", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "EngineVersion", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "RenderPipeline", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "GraphicsAPI", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "Platform", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "PersistentDataPath", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "InteractionSystems", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr GameInfo(::System::IntPtr  GameName, ::System::IntPtr  GameVersion, ::System::IntPtr  ProjectName, ::System::IntPtr  CompanyName, ::System::IntPtr  EngineVersion, ::System::IntPtr  RenderPipeline, ::System::IntPtr  GraphicsAPI, ::System::IntPtr  Platform, ::System::IntPtr  PersistentDataPath, ::System::IntPtr  InteractionSystems) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31938};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field GameName, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  GameName;

/// @brief Field GameVersion, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  GameVersion;

/// @brief Field ProjectName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ProjectName;

/// @brief Field CompanyName, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  CompanyName;

/// @brief Field EngineVersion, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  EngineVersion;

/// @brief Field RenderPipeline, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  RenderPipeline;

/// @brief Field GraphicsAPI, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  GraphicsAPI;

/// @brief Field Platform, offset: 0x38, size: 0x8, def value: None
 ::System::IntPtr  Platform;

/// @brief Field PersistentDataPath, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  PersistentDataPath;

/// @brief Field InteractionSystems, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  InteractionSystems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, GameName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, GameVersion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, ProjectName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, CompanyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, EngineVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, RenderPipeline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, GraphicsAPI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, Platform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, PersistentDataPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::FFI::GameInfo, InteractionSystems) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::FFI::GameInfo) == 0x50, "Size mismatch!");

} // namespace end def Liv::Lck::Core::FFI
