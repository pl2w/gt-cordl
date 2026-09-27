#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable_AwaitableHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Awaitable_AwaitableHandle)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
struct Awaitable_AwaitableHandle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Awaitable_AwaitableHandle);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Awaitable_AwaitableHandle, "UnityEngine", "Awaitable/AwaitableHandle");
// [IsReadOnly]
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Awaitable/AwaitableHandle
struct CORDL_TYPE Awaitable_AwaitableHandle {
public:
// Declarations
 __declspec(property(get=get_IsManaged)) bool  IsManaged;

 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Field ManagedHandle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ManagedHandle, put=setStaticF_ManagedHandle)) ::GlobalNamespace::Awaitable_AwaitableHandle  ManagedHandle;

/// @brief Field NullHandle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NullHandle, put=setStaticF_NullHandle)) ::GlobalNamespace::Awaitable_AwaitableHandle  NullHandle;

/// @brief Method .ctor, addr 0xb5db388, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  handle) ;

static inline ::GlobalNamespace::Awaitable_AwaitableHandle getStaticF_ManagedHandle() ;

static inline ::GlobalNamespace::Awaitable_AwaitableHandle getStaticF_NullHandle() ;

/// @brief Method get_IsManaged, addr 0xb5da4c4, size 0x68, virtual false, abstract: false, final false
inline bool get_IsManaged() ;

/// @brief Method get_IsNull, addr 0xb5da52c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNull() ;

/// @brief Method op_Implicit, addr 0xb5d97f0, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Awaitable_AwaitableHandle op_Implicit___GlobalNamespace__Awaitable_AwaitableHandle(::System::IntPtr  handle) ;

/// @brief Method op_Implicit, addr 0xb5db390, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Implicit___System__IntPtr(::GlobalNamespace::Awaitable_AwaitableHandle  handle) ;

static inline void setStaticF_ManagedHandle(::GlobalNamespace::Awaitable_AwaitableHandle  value) ;

static inline void setStaticF_NullHandle(::GlobalNamespace::Awaitable_AwaitableHandle  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Awaitable_AwaitableHandle() ;

// Ctor Parameters [CppParam { name: "_handle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr Awaitable_AwaitableHandle(::System::IntPtr  _handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15053};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _handle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Awaitable_AwaitableHandle, _handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Awaitable_AwaitableHandle) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
