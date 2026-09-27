#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTriangleMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTriangleMesh)
namespace GlobalNamespace {
template<typename T>
class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_FlipTriangleWindingJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_GetMeshJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_NegateXJob;
}
namespace GlobalNamespace {
struct OVRTriangleMesh_Triangle;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTriangleMesh;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTriangleMesh);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRTriangleMesh, "", "OVRTriangleMesh");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTriangleMesh
struct CORDL_TYPE OVRTriangleMesh {
public:
// Declarations
using FlipTriangleWindingJob = ::GlobalNamespace::OVRTriangleMesh_FlipTriangleWindingJob;

using GetMeshJob = ::GlobalNamespace::OVRTriangleMesh_GetMeshJob;

using NegateXJob = ::GlobalNamespace::OVRTriangleMesh_NegateXJob;

using Triangle = ::GlobalNamespace::OVRTriangleMesh_Triangle;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRTriangleMesh__get_Handle)) uint64_t  IOVRAnchorComponent_OVRTriangleMesh__Handle;

 __declspec(property(get=IOVRAnchorComponent_OVRTriangleMesh__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  IOVRAnchorComponent_OVRTriangleMesh__Type;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::GlobalNamespace::OVRTriangleMesh  Null;

 __declspec(property(get=get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType  Type;

/// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr operator  ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>*() ;

/// @brief Method Equals, addr 0xa57bcb0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa57bb6c, size 0x68, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRTriangleMesh  other) ;

/// @brief Method GetHashCode, addr 0xa57bd40, size 0x9c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.FromAnchor, addr 0xa57b94c, size 0x30, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRTriangleMesh IOVRAnchorComponent_OVRTriangleMesh__FromAnchor(::GlobalNamespace::OVRAnchor  anchor) ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.SetEnabledAsync, addr 0xa57bb20, size 0x4c, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRTriangleMesh__SetEnabledAsync(bool  enabled, double_t  timeout) ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Handle, addr 0xa57b8f8, size 0x54, virtual true, abstract: false, final true
inline uint64_t IOVRAnchorComponent_OVRTriangleMesh__get_Handle() ;

/// @brief Method IOVRAnchorComponent<OVRTriangleMesh>.get_Type, addr 0xa57b898, size 0x54, virtual true, abstract: false, final true
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRTriangleMesh__get_Type() ;

/// @brief Method ScheduleGetMeshJob, addr 0xa57c0d0, size 0x17c, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle ScheduleGetMeshJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Jobs::JobHandle  dependencies) ;

/// @brief Method ToString, addr 0xa57bddc, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetCounts, addr 0xa57be80, size 0x98, virtual false, abstract: false, final false
inline bool TryGetCounts(::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  triangleCount) ;

/// @brief Method TryGetMesh, addr 0xa57bfc8, size 0x108, virtual false, abstract: false, final false
inline bool TryGetMesh(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method TryGetMeshRawUntransformed, addr 0xa57bf18, size 0xb0, virtual false, abstract: false, final false
inline bool TryGetMeshRawUntransformed(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method .ctor, addr 0xa57b97c, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRAnchor  anchor) ;

static inline ::GlobalNamespace::OVRTriangleMesh getStaticF_Null() ;

/// [CompilerGenerated]
/// @brief Method get_Handle, addr 0xa57be78, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Handle() ;

/// @brief Method get_IsEnabled, addr 0xa57ba3c, size 0xe4, virtual true, abstract: false, final true
inline bool get_IsEnabled() ;

/// @brief Method get_IsNull, addr 0xa57b9e0, size 0x5c, virtual true, abstract: false, final true
inline bool get_IsNull() ;

/// @brief Method get_Type, addr 0xa57b8ec, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type() ;

/// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRTriangleMesh>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRTriangleMesh_() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTriangleMesh>* i___System__IEquatable_1___GlobalNamespace__OVRTriangleMesh_() ;

/// @brief Method op_Equality, addr 0xa57bbd4, size 0x6c, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRTriangleMesh  lhs, ::GlobalNamespace::OVRTriangleMesh  rhs) ;

/// @brief Method op_Inequality, addr 0xa57bc40, size 0x70, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRTriangleMesh  lhs, ::GlobalNamespace::OVRTriangleMesh  rhs) ;

static inline void setStaticF_Null(::GlobalNamespace::OVRTriangleMesh  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTriangleMesh() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRTriangleMesh(uint64_t  _Handle_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11861};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _Handle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTriangleMesh, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRTriangleMesh) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
