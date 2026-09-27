#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/AndroidServiceConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AndroidServiceConnection)
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Oculus::Voice::Core::Bindings::Android {
class AndroidServiceConnection;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*, "Oculus.Voice.Core.Bindings.Android", "AndroidServiceConnection");
// Dependencies System.Object
namespace Oculus::Voice::Core::Bindings::Android {
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
class CORDL_TYPE AndroidServiceConnection : public ::System::Object {
public:
// Declarations
/// @brief Field mAssistantServiceConnection, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mAssistantServiceConnection, put=__cordl_internal_set_mAssistantServiceConnection)) ::UnityEngine::AndroidJavaObject*  mAssistantServiceConnection;

/// @brief Field serviceFragmentClass, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_serviceFragmentClass, put=__cordl_internal_set_serviceFragmentClass)) ::StringW  serviceFragmentClass;

/// @brief Field serviceGetter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_serviceGetter, put=__cordl_internal_set_serviceGetter)) ::StringW  serviceGetter;

/// @brief Method Connect, addr 0x5e30380, size 0x414, virtual true, abstract: false, final true
inline void Connect(::StringW  version) ;

/// @brief Method Disconnect, addr 0x5e30794, size 0xcc, virtual true, abstract: false, final true
inline void Disconnect() ;

/// @brief Method GetService, addr 0x5e30860, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::AndroidJavaObject* GetService() ;

static inline ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection* New_ctor(::StringW  serviceFragmentClassName, ::StringW  serviceGetterMethodName) ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_mAssistantServiceConnection() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_mAssistantServiceConnection() ;

constexpr ::StringW const& __cordl_internal_get_serviceFragmentClass() const;

constexpr ::StringW& __cordl_internal_get_serviceFragmentClass() ;

constexpr ::StringW const& __cordl_internal_get_serviceGetter() const;

constexpr ::StringW& __cordl_internal_get_serviceGetter() ;

constexpr void __cordl_internal_set_mAssistantServiceConnection(::UnityEngine::AndroidJavaObject*  value) ;

constexpr void __cordl_internal_set_serviceFragmentClass(::StringW  value) ;

constexpr void __cordl_internal_set_serviceGetter(::StringW  value) ;

/// @brief Method .ctor, addr 0x5e3033c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  serviceFragmentClassName, ::StringW  serviceGetterMethodName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidServiceConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidServiceConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidServiceConnection(AndroidServiceConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidServiceConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidServiceConnection(AndroidServiceConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32937};

/// @brief Field mAssistantServiceConnection, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___mAssistantServiceConnection;

/// @brief Field serviceFragmentClass, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___serviceFragmentClass;

/// @brief Field serviceGetter, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___serviceGetter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection, ___mAssistantServiceConnection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection, ___serviceFragmentClass) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection, ___serviceGetter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Voice::Core::Bindings::Android
