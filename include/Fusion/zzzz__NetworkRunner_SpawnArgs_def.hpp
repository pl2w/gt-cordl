#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_SpawnArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkRunner_SpawnFlagsInternal_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkRunner_SpawnArgs)
namespace Fusion {
class NetworkObjectSpawnDelegate;
}
namespace Fusion {
struct NetworkObjectTypeId;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkSpawnFlags;
}
namespace Fusion {
struct PlayerRef;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkRunner_SpawnArgs;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkRunner_SpawnArgs);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkRunner_SpawnArgs, "Fusion", "NetworkRunner/SpawnArgs");
// [IsReadOnly]
// Dependencies Fusion.NetworkObjectTypeId, Fusion.NetworkRunner::SpawnFlagsInternal, Fusion.PlayerRef, System.Nullable`1<T>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkRunner/SpawnArgs
struct CORDL_TYPE NetworkRunner_SpawnArgs {
public:
// Declarations
 __declspec(property(get=get_DontDestroyOnLoad)) bool  DontDestroyOnLoad;

 __declspec(property(get=get_MasterClientOverride)) ::System::Nullable_1<bool>  MasterClientOverride;

 __declspec(property(get=get_Synchronous)) bool  Synchronous;

/// @brief Method ToString, addr 0x5fd1d18, size 0x484, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5fd1b24, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetworkRunner_SpawnArgs>  other, ::Fusion::NetworkObjectSpawnDelegate*  del) ;

/// @brief Method .ctor, addr 0x5fd1bec, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkObjectTypeId  typeId, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation, ::System::Nullable_1<::Fusion::PlayerRef>  inputAuthority, ::System::Object*  onBeforeSpawned, ::Fusion::NetworkSpawnFlags  flags, ::Fusion::NetworkObjectSpawnDelegate*  spawned, bool  synchronous, ::Fusion::NetworkObject*  resumeNO) ;

/// @brief Method get_DontDestroyOnLoad, addr 0x5fd1c84, size 0xc, virtual false, abstract: false, final false
inline bool get_DontDestroyOnLoad() ;

/// @brief Method get_MasterClientOverride, addr 0x5fd1c90, size 0x88, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_MasterClientOverride() ;

/// @brief Method get_Synchronous, addr 0x5fd1c78, size 0xc, virtual false, abstract: false, final false
inline bool get_Synchronous() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunner_SpawnArgs() ;

// Ctor Parameters [CppParam { name: "TypeId", ty: "::Fusion::NetworkObjectTypeId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty: "::System::Nullable_1<::UnityEngine::Vector3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rotation", ty: "::System::Nullable_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "InputAuthority", ty: "::System::Nullable_1<::Fusion::PlayerRef>", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnBeforeSpawned", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Spawned", ty: "::Fusion::NetworkObjectSpawnDelegate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "SpawnFlags", ty: "::GlobalNamespace::NetworkRunner_SpawnFlagsInternal", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResumeNO", ty: "::UnityW<::Fusion::NetworkObject>", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunner_SpawnArgs(::Fusion::NetworkObjectTypeId  TypeId, ::System::Nullable_1<::UnityEngine::Vector3>  Position, ::System::Nullable_1<::UnityEngine::Quaternion>  Rotation, ::System::Nullable_1<::Fusion::PlayerRef>  InputAuthority, ::System::Object*  OnBeforeSpawned, ::Fusion::NetworkObjectSpawnDelegate*  Spawned, ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal  SpawnFlags, ::UnityW<::Fusion::NetworkObject>  ResumeNO) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19210};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field TypeId, offset: 0x0, size: 0x8, def value: None
 ::Fusion::NetworkObjectTypeId  TypeId;

/// @brief Field Position, offset: 0x8, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  Position;

/// @brief Field Rotation, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Quaternion>  Rotation;

/// @brief Field InputAuthority, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::PlayerRef>  InputAuthority;

/// @brief Field OnBeforeSpawned, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  OnBeforeSpawned;

/// @brief Field Spawned, offset: 0x40, size: 0x8, def value: None
 ::Fusion::NetworkObjectSpawnDelegate*  Spawned;

/// @brief Field SpawnFlags, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::NetworkRunner_SpawnFlagsInternal  SpawnFlags;

/// @brief Field ResumeNO, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ResumeNO;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnArgs, TypeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnArgs, Position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnArgs, Rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnArgs, InputAuthority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnArgs, OnBeforeSpawned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnArgs, Spawned) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnArgs, SpawnFlags) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkRunner_SpawnArgs, ResumeNO) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkRunner_SpawnArgs) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
