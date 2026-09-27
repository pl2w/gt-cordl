#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshData)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshData;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshData*, "UnityEngine.AI", "NavMeshData");
// [NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshData
class CORDL_TYPE NavMeshData : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(put=set_rotation)) ::UnityEngine::Quaternion  rotation;

 __declspec(property(get=get_sourceBounds)) ::UnityEngine::Bounds  sourceBounds;

/// [StaticAccessor("NavMeshDataBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method Internal_Create, addr 0xb51ff00, size 0x44, virtual false, abstract: false, final false
static inline void Internal_Create(/* [Writable] */ ::UnityEngine::AI::NavMeshData*  mono, int32_t  agentTypeID) ;

static inline ::UnityEngine::AI::NavMeshData* New_ctor() ;

static inline ::UnityEngine::AI::NavMeshData* New_ctor(int32_t  agentTypeID) ;

/// @brief Method .ctor, addr 0xb51fe7c, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb51df60, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  agentTypeID) ;

/// @brief Method get_sourceBounds, addr 0xb51ff44, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_sourceBounds() ;

/// @brief Method get_sourceBounds_Injected, addr 0xb51ffe8, size 0x44, virtual false, abstract: false, final false
static inline void get_sourceBounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method set_position, addr 0xb51dff0, size 0x90, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_position_Injected, addr 0xb52002c, size 0x44, virtual false, abstract: false, final false
static inline void set_position_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_rotation, addr 0xb51e080, size 0x90, virtual false, abstract: false, final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

/// @brief Method set_rotation_Injected, addr 0xb520070, size 0x44, virtual false, abstract: false, final false
static inline void set_rotation_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Quaternion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshData(NavMeshData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshData(NavMeshData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AI::NavMeshData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::AI
