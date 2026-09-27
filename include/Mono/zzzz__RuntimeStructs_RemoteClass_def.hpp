#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs_RemoteClass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeStructs_RemoteClass)
namespace GlobalNamespace {
struct RuntimeStructs_MonoClass;
}
// Forward declare root types
namespace GlobalNamespace {
struct RuntimeStructs_RemoteClass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RuntimeStructs_RemoteClass);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimeStructs_RemoteClass, "Mono", "RuntimeStructs/RemoteClass");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.RuntimeStructs/RemoteClass
struct CORDL_TYPE RuntimeStructs_RemoteClass {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeStructs_RemoteClass() ;

// Ctor Parameters [CppParam { name: "default_vtable", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "xdomain_vtable", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "proxy_class", ty: "::GlobalNamespace::RuntimeStructs_MonoClass*", modifiers: "", def_value: None, comment: None }, CppParam { name: "proxy_class_name", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeStructs_RemoteClass(::System::IntPtr  default_vtable, ::System::IntPtr  xdomain_vtable, ::GlobalNamespace::RuntimeStructs_MonoClass*  proxy_class, ::System::IntPtr  proxy_class_name, uint32_t  interface_count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field default_vtable, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  default_vtable;

/// @brief Field xdomain_vtable, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  xdomain_vtable;

/// @brief Field proxy_class, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::RuntimeStructs_MonoClass*  proxy_class;

/// @brief Field proxy_class_name, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  proxy_class_name;

/// @brief Field interface_count, offset: 0x20, size: 0x4, def value: None
 uint32_t  interface_count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeStructs_RemoteClass, default_vtable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_RemoteClass, xdomain_vtable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_RemoteClass, proxy_class) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_RemoteClass, proxy_class_name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_RemoteClass, interface_count) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimeStructs_RemoteClass) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
