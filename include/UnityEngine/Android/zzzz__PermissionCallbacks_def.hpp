#pragma once
// IWYU pragma private; include "UnityEngine/Android/PermissionCallbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PermissionCallbacks)
namespace GlobalNamespace {
struct PermissionCallbacks_Result;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Write type traits
MARK_REF_T(::UnityEngine::Android::PermissionCallbacks*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Android::PermissionCallbacks*, "UnityEngine.Android", "PermissionCallbacks");
// Dependencies UnityEngine.AndroidJavaProxy
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.PermissionCallbacks
class CORDL_TYPE PermissionCallbacks : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
using Result = ::GlobalNamespace::PermissionCallbacks_Result;

/// @brief Field PermissionDenied, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PermissionDenied, put=__cordl_internal_set_PermissionDenied)) ::System::Action_1<::StringW>*  PermissionDenied;

/// @brief Field PermissionDeniedAndDontAskAgain, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PermissionDeniedAndDontAskAgain, put=__cordl_internal_set_PermissionDeniedAndDontAskAgain)) ::System::Action_1<::StringW>*  PermissionDeniedAndDontAskAgain;

/// @brief Field PermissionGranted, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PermissionGranted, put=__cordl_internal_set_PermissionGranted)) ::System::Action_1<::StringW>*  PermissionGranted;

/// @brief Field PermissionRequestDismissed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PermissionRequestDismissed, put=__cordl_internal_set_PermissionRequestDismissed)) ::System::Action_1<::StringW>*  PermissionRequestDismissed;

/// @brief Method Invoke, addr 0xb538070, size 0x90, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(::StringW  methodName, ::System::IntPtr  javaArgs) ;

static inline ::UnityEngine::Android::PermissionCallbacks* New_ctor() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionDenied() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionDenied() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionDeniedAndDontAskAgain() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionDeniedAndDontAskAgain() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionGranted() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionGranted() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_PermissionRequestDismissed() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_PermissionRequestDismissed() ;

constexpr void __cordl_internal_set_PermissionDenied(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PermissionGranted(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PermissionRequestDismissed(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb538004, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_PermissionDenied, addr 0xb537be4, size 0xb0, virtual false, abstract: false, final false
inline void add_PermissionDenied(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_PermissionDeniedAndDontAskAgain, addr 0xb537d44, size 0xb0, virtual false, abstract: false, final false
inline void add_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_PermissionGranted, addr 0xb537a84, size 0xb0, virtual false, abstract: false, final false
inline void add_PermissionGranted(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_PermissionRequestDismissed, addr 0xb537ea4, size 0xb0, virtual false, abstract: false, final false
inline void add_PermissionRequestDismissed(::System::Action_1<::StringW>*  value) ;

/// @brief Method onPermissionResult, addr 0xb538100, size 0xf8, virtual false, abstract: false, final false
inline void onPermissionResult(::System::IntPtr  javaArgs) ;

/// [CompilerGenerated]
/// @brief Method remove_PermissionDenied, addr 0xb537c94, size 0xb0, virtual false, abstract: false, final false
inline void remove_PermissionDenied(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_PermissionDeniedAndDontAskAgain, addr 0xb537df4, size 0xb0, virtual false, abstract: false, final false
inline void remove_PermissionDeniedAndDontAskAgain(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_PermissionGranted, addr 0xb537b34, size 0xb0, virtual false, abstract: false, final false
inline void remove_PermissionGranted(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_PermissionRequestDismissed, addr 0xb537f54, size 0xb0, virtual false, abstract: false, final false
inline void remove_PermissionRequestDismissed(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PermissionCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PermissionCallbacks(PermissionCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PermissionCallbacks(PermissionCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30293};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field PermissionGranted, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PermissionGranted;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field PermissionDenied, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PermissionDenied;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field PermissionDeniedAndDontAskAgain, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PermissionDeniedAndDontAskAgain;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field PermissionRequestDismissed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___PermissionRequestDismissed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionGranted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionDenied) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionDeniedAndDontAskAgain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::PermissionCallbacks, ___PermissionRequestDismissed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Android::PermissionCallbacks) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Android
