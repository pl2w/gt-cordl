#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI_JStringBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNI_JStringBinding)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct AndroidJNI_JStringBinding;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AndroidJNI_JStringBinding);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AndroidJNI_JStringBinding, "UnityEngine", "AndroidJNI/JStringBinding");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AndroidJNI/JStringBinding
struct CORDL_TYPE AndroidJNI_JStringBinding {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb52d7d8, size 0x58, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ToString, addr 0xb528694, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNI_JStringBinding() ;

// Ctor Parameters [CppParam { name: "javaString", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "chars", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ownsRef", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AndroidJNI_JStringBinding(::System::IntPtr  javaString, ::System::IntPtr  chars, int32_t  length, bool  ownsRef) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field javaString, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  javaString;

/// @brief Field chars, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  chars;

/// @brief Field length, offset: 0x10, size: 0x4, def value: None
 int32_t  length;

/// @brief Field ownsRef, offset: 0x14, size: 0x1, def value: None
 bool  ownsRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AndroidJNI_JStringBinding, javaString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AndroidJNI_JStringBinding, chars) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AndroidJNI_JStringBinding, length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AndroidJNI_JStringBinding, ownsRef) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AndroidJNI_JStringBinding) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
