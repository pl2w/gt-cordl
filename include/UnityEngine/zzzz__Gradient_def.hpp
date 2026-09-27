#pragma once
// IWYU pragma private; include "UnityEngine/Gradient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Gradient)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct GradientAlphaKey;
}
namespace UnityEngine {
struct GradientColorKey;
}
namespace UnityEngine {
struct GradientMode;
}
namespace UnityEngine {
class Gradient_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Gradient_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Gradient*);
MARK_REF_T(::UnityEngine::Gradient_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Gradient*, "UnityEngine", "Gradient");
DEFINE_IL2CPP_CLASS(::UnityEngine::Gradient_BindingsMarshaller*, "UnityEngine", "Gradient/BindingsMarshaller");
// [RequiredByNativeCode]
// [NativeHeader("Runtime/Export/Math/Gradient.bindings.h")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gradient
class CORDL_TYPE Gradient : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Gradient_BindingsMarshaller;

 __declspec(property(get=get_alphaKeys, put=set_alphaKeys)) ::ArrayW<::UnityEngine::GradientAlphaKey>  alphaKeys;

 __declspec(property(get=get_colorKeys, put=set_colorKeys)) ::ArrayW<::UnityEngine::GradientColorKey>  colorKeys;

/// @brief [NativeProperty(IsThreadSafe = true)]
 __declspec(property(get=get_colorSpace, put=set_colorSpace)) ::UnityEngine::ColorSpace  colorSpace;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Field m_RequiresNativeCleanup, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RequiresNativeCleanup, put=__cordl_internal_set_m_RequiresNativeCleanup)) bool  m_RequiresNativeCleanup;

/// @brief [NativeProperty(IsThreadSafe = true)]
 __declspec(property(get=get_mode, put=set_mode)) ::UnityEngine::GradientMode  mode;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Gradient*>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Gradient*>*() noexcept;

/// [FreeFunction(Name = "Gradient_Bindings::Cleanup", IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method Cleanup, addr 0xb5c7f90, size 0x50, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Cleanup_Injected, addr 0xb5c7fe0, size 0x3c, virtual false, abstract: false, final false
static inline void Cleanup_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Equals, addr 0xb5c8cf8, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method Equals, addr 0xb5c8df8, size 0x78, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Gradient*  other) ;

/// [FreeFunction(Name = "Gradient_Bindings::Evaluate", IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method Evaluate, addr 0xb5c81bc, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Color Evaluate(float_t  time) ;

/// @brief Method Evaluate_Injected, addr 0xb5c8238, size 0x54, virtual false, abstract: false, final false
static inline void Evaluate_Injected(::System::IntPtr  _unity_self, float_t  time, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method Finalize, addr 0xb5c8130, size 0x8c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetHashCode, addr 0xb5c8e70, size 0xc, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// [FreeFunction(Name = "Gradient_Bindings::Init", IsThreadSafe = true)]
/// @brief Method Init, addr 0xb5c7f68, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr Init() ;

/// [FreeFunction("Gradient_Bindings::Internal_Equals", IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method Internal_Equals, addr 0xb5c801c, size 0x58, virtual false, abstract: false, final false
inline bool Internal_Equals(::System::IntPtr  other) ;

/// @brief Method Internal_Equals_Injected, addr 0xb5c8074, size 0x44, virtual false, abstract: false, final false
static inline bool Internal_Equals_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  other) ;

/// @brief [RequiredByNativeCode]
static inline ::UnityEngine::Gradient* New_ctor() ;

/// @brief [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
static inline ::UnityEngine::Gradient* New_ctor(::System::IntPtr  ptr) ;

/// @brief Method SetKeys, addr 0xb5c8a5c, size 0x108, virtual false, abstract: false, final false
inline void SetKeys(::ArrayW<::UnityEngine::GradientColorKey>  colorKeys, ::ArrayW<::UnityEngine::GradientAlphaKey>  alphaKeys) ;

/// [FreeFunction(Name = "Gradient_Bindings::SetKeysWithSpans", HasExplicitThis = true, IsThreadSafe = true)]
/// @brief Method SetKeys, addr 0xb5c8b64, size 0x140, virtual false, abstract: false, final false
inline void SetKeys(::System::ReadOnlySpan_1<::UnityEngine::GradientColorKey>  colorKeys, ::System::ReadOnlySpan_1<::UnityEngine::GradientAlphaKey>  alphaKeys) ;

/// @brief Method SetKeys_Injected, addr 0xb5c8ca4, size 0x54, virtual false, abstract: false, final false
static inline void SetKeys_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorKeys, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  alphaKeys) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr bool const& __cordl_internal_get_m_RequiresNativeCleanup() const;

constexpr bool& __cordl_internal_get_m_RequiresNativeCleanup() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_RequiresNativeCleanup(bool  value) ;

/// [RequiredByNativeCode]
/// @brief Method .ctor, addr 0xb5c80b8, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
/// @brief Method .ctor, addr 0xb5c8104, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  ptr) ;

/// [FreeFunction("Gradient_Bindings::GetAlphaKeysArray", IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method get_alphaKeys, addr 0xb5c854c, size 0x148, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::GradientAlphaKey> get_alphaKeys() ;

/// @brief Method get_alphaKeys_Injected, addr 0xb5c8694, size 0x44, virtual false, abstract: false, final false
static inline void get_alphaKeys_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// [FreeFunction("Gradient_Bindings::GetColorKeysArray", IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method get_colorKeys, addr 0xb5c828c, size 0x148, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::GradientColorKey> get_colorKeys() ;

/// @brief Method get_colorKeys_Injected, addr 0xb5c83d4, size 0x44, virtual false, abstract: false, final false
static inline void get_colorKeys_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method get_colorSpace, addr 0xb5c8934, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::ColorSpace get_colorSpace() ;

/// @brief Method get_colorSpace_Injected, addr 0xb5c8984, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::ColorSpace get_colorSpace_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_mode, addr 0xb5c880c, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GradientMode get_mode() ;

/// @brief Method get_mode_Injected, addr 0xb5c885c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::GradientMode get_mode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Gradient*>"
constexpr ::System::IEquatable_1<::UnityEngine::Gradient*>* i___System__IEquatable_1___UnityEngine__Gradient__() noexcept;

/// [FreeFunction("Gradient_Bindings::SetAlphaKeysWithSpan", IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method set_alphaKeys, addr 0xb5c86d8, size 0xf0, virtual false, abstract: false, final false
inline void set_alphaKeys(::ArrayW<::UnityEngine::GradientAlphaKey>  value) ;

/// @brief Method set_alphaKeys_Injected, addr 0xb5c87c8, size 0x44, virtual false, abstract: false, final false
static inline void set_alphaKeys_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// [FreeFunction("Gradient_Bindings::SetColorKeysWithSpan", IsThreadSafe = true, HasExplicitThis = true)]
/// @brief Method set_colorKeys, addr 0xb5c8418, size 0xf0, virtual false, abstract: false, final false
inline void set_colorKeys(::ArrayW<::UnityEngine::GradientColorKey>  value) ;

/// @brief Method set_colorKeys_Injected, addr 0xb5c8508, size 0x44, virtual false, abstract: false, final false
static inline void set_colorKeys_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_colorSpace, addr 0xb5c89c0, size 0x58, virtual false, abstract: false, final false
inline void set_colorSpace(::UnityEngine::ColorSpace  value) ;

/// @brief Method set_colorSpace_Injected, addr 0xb5c8a18, size 0x44, virtual false, abstract: false, final false
static inline void set_colorSpace_Injected(::System::IntPtr  _unity_self, ::UnityEngine::ColorSpace  value) ;

/// @brief Method set_mode, addr 0xb5c8898, size 0x58, virtual false, abstract: false, final false
inline void set_mode(::UnityEngine::GradientMode  value) ;

/// @brief Method set_mode_Injected, addr 0xb5c88f0, size 0x44, virtual false, abstract: false, final false
static inline void set_mode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::GradientMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gradient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gradient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Gradient(Gradient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gradient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gradient(Gradient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14981};

/// [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field m_RequiresNativeCleanup, offset: 0x18, size: 0x1, def value: None
 bool  ___m_RequiresNativeCleanup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Gradient, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Gradient, ___m_RequiresNativeCleanup) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Gradient) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gradient/BindingsMarshaller
class CORDL_TYPE Gradient_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToManaged, addr 0xb5c8e90, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Gradient* ConvertToManaged(::System::IntPtr  ptr) ;

/// @brief Method ConvertToNative, addr 0xb5c8e7c, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Gradient*  graident) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Gradient_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Gradient_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Gradient_BindingsMarshaller(Gradient_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gradient_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gradient_BindingsMarshaller(Gradient_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Gradient_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
