#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingAccelerationStructure.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RayTracingAccelerationStructure)
namespace GlobalNamespace {
struct RayTracingAccelerationStructure_BuildSettings;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RayTracingAccelerationStructure*);
MARK_REF_T(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingAccelerationStructure*, "UnityEngine.Rendering", "RayTracingAccelerationStructure");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller*, "UnityEngine.Rendering", "RayTracingAccelerationStructure/BindingsMarshaller");
// [MovedFrom("UnityEngine.Experimental.Rendering")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure
class CORDL_TYPE RayTracingAccelerationStructure : public ::System::Object {
public:
// Declarations
using BuildSettings = ::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings;

using BindingsMarshaller = ::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [FreeFunction("RayTracingAccelerationStructure_Bindings::Destroy")]
/// @brief Method Destroy, addr 0xb608018, size 0x48, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelStruct) ;

/// @brief Method Destroy_Injected, addr 0xb608060, size 0x3c, virtual false, abstract: false, final false
static inline void Destroy_Injected(::System::IntPtr  accelStruct) ;

/// @brief Method Dispose, addr 0xb607f24, size 0x9c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb607fc0, size 0x58, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayTracingAccelerationStructure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayTracingAccelerationStructure(RayTracingAccelerationStructure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayTracingAccelerationStructure(RayTracingAccelerationStructure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15508};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingAccelerationStructure, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RayTracingAccelerationStructure) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RayTracingAccelerationStructure/BindingsMarshaller
class CORDL_TYPE RayTracingAccelerationStructure_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb60810c, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayTracingAccelerationStructure_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayTracingAccelerationStructure_BindingsMarshaller(RayTracingAccelerationStructure_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayTracingAccelerationStructure_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayTracingAccelerationStructure_BindingsMarshaller(RayTracingAccelerationStructure_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15507};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RayTracingAccelerationStructure_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
