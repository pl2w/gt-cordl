#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs_NativeArrayHelper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMeshJobs_NativeArrayHelper_1)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct OVRMeshJobs_NativeArrayHelper_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRMeshJobs_NativeArrayHelper_1, "", "OVRMeshJobs/NativeArrayHelper`1");
// Dependencies System.Runtime.InteropServices.GCHandle, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVRMeshJobs/NativeArrayHelper`1<T>
struct CORDL_TYPE OVRMeshJobs_NativeArrayHelper_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  ovrArray, int32_t  length) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRMeshJobs_NativeArrayHelper_1() ;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }]
constexpr OVRMeshJobs_NativeArrayHelper_1(::Unity::Collections::NativeArray_1<T>  UnityNativeArray, ::System::Runtime::InteropServices::GCHandle  _handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12659};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field UnityNativeArray, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<T>  UnityNativeArray;

/// @brief Field _handle, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  _handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
