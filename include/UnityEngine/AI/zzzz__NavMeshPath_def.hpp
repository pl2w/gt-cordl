#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshPath)
namespace System {
struct IntPtr;
}
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
namespace UnityEngine::AI {
class NavMeshPath_BindingsMarshaller;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace UnityEngine::AI {
class NavMeshPath_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshPath*);
MARK_REF_T(::UnityEngine::AI::NavMeshPath_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshPath*, "UnityEngine.AI", "NavMeshPath");
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshPath_BindingsMarshaller*, "UnityEngine.AI", "NavMeshPath/BindingsMarshaller");
// [NativeHeader("Modules/AI/NavMeshPath.bindings.h")]
// [MovedFrom("UnityEngine")]
// Dependencies System.IntPtr, System.Object, UnityEngine.Vector3
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshPath
class CORDL_TYPE NavMeshPath : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::AI::NavMeshPath_BindingsMarshaller;

 __declspec(property(get=get_corners)) ::ArrayW<::UnityEngine::Vector3>  corners;

/// @brief Field m_Corners, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Corners, put=__cordl_internal_set_m_Corners)) ::ArrayW<::UnityEngine::Vector3>  m_Corners;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(get=get_status)) ::UnityEngine::AI::NavMeshPathStatus  status;

/// @brief Method CalculateCorners, addr 0xb521c88, size 0x40, virtual false, abstract: false, final false
inline void CalculateCorners() ;

/// [FreeFunction("NavMeshPathScriptBindings::CalculateCornersInternal", HasExplicitThis = true)]
/// @brief Method CalculateCornersInternal, addr 0xb521a70, size 0x148, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> CalculateCornersInternal() ;

/// @brief Method CalculateCornersInternal_Injected, addr 0xb521bb8, size 0x44, virtual false, abstract: false, final false
static inline void CalculateCornersInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method ClearCorners, addr 0xb5207e4, size 0x20, virtual false, abstract: false, final false
inline void ClearCorners() ;

/// [FreeFunction("NavMeshPathScriptBindings::ClearCornersInternal", HasExplicitThis = true)]
/// @brief Method ClearCornersInternal, addr 0xb521bfc, size 0x50, virtual false, abstract: false, final false
inline void ClearCornersInternal() ;

/// @brief Method ClearCornersInternal_Injected, addr 0xb521c4c, size 0x3c, virtual false, abstract: false, final false
static inline void ClearCornersInternal_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("NavMeshPathScriptBindings::DestroyNavMeshPath", IsThreadSafe = true)]
/// @brief Method DestroyNavMeshPath, addr 0xb5218a4, size 0x3c, virtual false, abstract: false, final false
static inline void DestroyNavMeshPath(::System::IntPtr  ptr) ;

/// @brief Method Finalize, addr 0xb5217f0, size 0xb4, virtual true, abstract: false, final false
inline void Finalize() ;

/// [FreeFunction("NavMeshPathScriptBindings::GetCornersNonAlloc", HasExplicitThis = true)]
/// @brief Method GetCornersNonAlloc, addr 0xb5218e0, size 0x14c, virtual false, abstract: false, final false
inline int32_t GetCornersNonAlloc(::by_ref<::ArrayW<::UnityEngine::Vector3>>  results) ;

/// @brief Method GetCornersNonAlloc_Injected, addr 0xb521a2c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetCornersNonAlloc_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  results) ;

/// [FreeFunction("NavMeshPathScriptBindings::InitializeNavMeshPath")]
/// @brief Method InitializeNavMeshPath, addr 0xb5217c8, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr InitializeNavMeshPath() ;

static inline ::UnityEngine::AI::NavMeshPath* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_m_Corners() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_m_Corners() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Corners(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb521784, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_corners, addr 0xb521cc8, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_corners() ;

/// @brief Method get_status, addr 0xb521ce0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::AI::NavMeshPathStatus get_status() ;

/// @brief Method get_status_Injected, addr 0xb521d30, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AI::NavMeshPathStatus get_status_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshPath(NavMeshPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshPath(NavMeshPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32111};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_Corners, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___m_Corners;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshPath, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshPath, ___m_Corners) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshPath) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::AI
// Dependencies System.Object
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshPath/BindingsMarshaller
class CORDL_TYPE NavMeshPath_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb521d6c, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::AI::NavMeshPath*  navMeshPath) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshPath_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshPath_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshPath_BindingsMarshaller(NavMeshPath_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshPath_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshPath_BindingsMarshaller(NavMeshPath_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32110};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AI::NavMeshPath_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AI
