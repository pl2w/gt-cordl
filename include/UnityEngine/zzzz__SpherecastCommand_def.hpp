#pragma once
// IWYU pragma private; include "UnityEngine/SpherecastCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpherecastCommand)
namespace GlobalNamespace {
struct JobsUtility_JobScheduleParameters;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct QueryParameters;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct SpherecastCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SpherecastCommand);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpherecastCommand, "UnityEngine", "SpherecastCommand");
// [NativeHeader("Runtime/Jobs/ScriptBindings/JobsBindingsTypes.h")]
// [NativeHeader("Modules/Physics/BatchCommands/SpherecastCommand.h")]
// Dependencies UnityEngine.PhysicsScene, UnityEngine.QueryParameters, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SpherecastCommand
struct CORDL_TYPE SpherecastCommand {
public:
// Declarations
 __declspec(property(put=set_direction)) ::UnityEngine::Vector3  direction;

 __declspec(property(put=set_distance)) float_t  distance;

 __declspec(property(put=set_origin)) ::UnityEngine::Vector3  origin;

 __declspec(property(put=set_physicsScene)) ::UnityEngine::PhysicsScene  physicsScene;

 __declspec(property(put=set_radius)) float_t  radius;

/// @brief Method ScheduleBatch, addr 0xb68f1ec, size 0x1e4, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand>  commands, ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  results, int32_t  minCommandsPerJob, int32_t  maxHits, ::Unity::Jobs::JobHandle  dependsOn) ;

/// [FreeFunction("ScheduleSpherecastCommandBatch", ThrowsException = true)]
/// @brief Method ScheduleSpherecastBatch, addr 0xb68f3d0, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleSpherecastBatch(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, void*  commands, int32_t  commandLen, void*  result, int32_t  resultLen, int32_t  minCommandsPerJob, int32_t  maxHits) ;

/// @brief Method ScheduleSpherecastBatch_Injected, addr 0xb68f46c, size 0x8c, virtual false, abstract: false, final false
static inline void ScheduleSpherecastBatch_Injected(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, void*  commands, int32_t  commandLen, void*  result, int32_t  resultLen, int32_t  minCommandsPerJob, int32_t  maxHits, ::by_ref<::Unity::Jobs::JobHandle>  ret) ;

/// @brief Method .ctor, addr 0xb68f0f8, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::UnityEngine::QueryParameters  queryParameters, float_t  distance) ;

/// [CompilerGenerated]
/// @brief Method set_direction, addr 0xb68f1d0, size 0xc, virtual false, abstract: false, final false
inline void set_direction(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_distance, addr 0xb68f1dc, size 0x8, virtual false, abstract: false, final false
inline void set_distance(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_origin, addr 0xb68f1bc, size 0xc, virtual false, abstract: false, final false
inline void set_origin(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_physicsScene, addr 0xb68f1e4, size 0x8, virtual false, abstract: false, final false
inline void set_physicsScene(::UnityEngine::PhysicsScene  value) ;

/// [CompilerGenerated]
/// @brief Method set_radius, addr 0xb68f1c8, size 0x8, virtual false, abstract: false, final false
inline void set_radius(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SpherecastCommand() ;

// Ctor Parameters [CppParam { name: "_origin_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_radius_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_direction_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: None, comment: None }, CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters", modifiers: "", def_value: None, comment: None }]
constexpr SpherecastCommand(::UnityEngine::Vector3  _origin_k__BackingField, float_t  _radius_k__BackingField, ::UnityEngine::Vector3  _direction_k__BackingField, float_t  _distance_k__BackingField, ::UnityEngine::PhysicsScene  _physicsScene_k__BackingField, ::UnityEngine::QueryParameters  queryParameters) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <origin>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _origin_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <radius>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _radius_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <direction>k__BackingField, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  _direction_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <distance>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  _distance_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <physicsScene>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  _physicsScene_k__BackingField;

/// @brief Field queryParameters, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::QueryParameters  queryParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpherecastCommand, _origin_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, _radius_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, _direction_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, _distance_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, _physicsScene_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpherecastCommand, queryParameters) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SpherecastCommand) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine
