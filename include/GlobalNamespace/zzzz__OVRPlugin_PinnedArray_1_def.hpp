#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PinnedArray_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_PinnedArray_1)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct OVRPlugin_PinnedArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRPlugin_PinnedArray_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRPlugin_PinnedArray_1, "", "OVRPlugin/PinnedArray`1");
// Dependencies System.Runtime.InteropServices.GCHandle
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: OVRPlugin/PinnedArray`1<T>
struct CORDL_TYPE OVRPlugin_PinnedArray_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  array) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Implicit___System__IntPtr(::GlobalNamespace::OVRPlugin_PinnedArray_1<T>  pinnedArray) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PinnedArray_1() ;

// Ctor Parameters [CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PinnedArray_1(::System::Runtime::InteropServices::GCHandle  _handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _handle, offset: 0x0, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  _handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
