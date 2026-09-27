#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/BaseServiceBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseServiceBinding)
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Oculus::Voice::Core::Bindings::Android {
class BaseServiceBinding;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*, "Oculus.Voice.Core.Bindings.Android", "BaseServiceBinding");
// Dependencies System.Object
namespace Oculus::Voice::Core::Bindings::Android {
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
class CORDL_TYPE BaseServiceBinding : public ::System::Object {
public:
// Declarations
/// @brief Field binding, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_binding, put=__cordl_internal_set_binding)) ::UnityEngine::AndroidJavaObject*  binding;

static inline ::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding* New_ctor(::UnityEngine::AndroidJavaObject*  sdkInstance) ;

/// @brief Method Shutdown, addr 0x5e30964, size 0xc4, virtual false, abstract: false, final false
inline void Shutdown() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_binding() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_binding() ;

constexpr void __cordl_internal_set_binding(::UnityEngine::AndroidJavaObject*  value) ;

/// @brief Method .ctor, addr 0x5e30934, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AndroidJavaObject*  sdkInstance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseServiceBinding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseServiceBinding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseServiceBinding(BaseServiceBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseServiceBinding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseServiceBinding(BaseServiceBinding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32939};

/// @brief Field binding, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___binding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding, ___binding) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Voice::Core::Bindings::Android
