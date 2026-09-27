#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/BaseAndroidConnectionImpl_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BaseAndroidConnectionImpl_1)
namespace Oculus::Voice::Core::Bindings::Android {
class AndroidServiceConnection;
}
// Forward declare root types
namespace Oculus::Voice::Core::Bindings::Android {
template<typename T>
class BaseAndroidConnectionImpl_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1, "Oculus.Voice.Core.Bindings.Android", "BaseAndroidConnectionImpl`1");
// Dependencies System.Object
namespace Oculus::Voice::Core::Bindings::Android {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<T>
class CORDL_TYPE BaseAndroidConnectionImpl_1 : public ::System::Object {
public:
// Declarations
/// @brief Field fragmentClassName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fragmentClassName, put=__cordl_internal_set_fragmentClassName)) ::StringW  fragmentClassName;

/// @brief Field service, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_service, put=__cordl_internal_set_service)) T  service;

/// @brief Field serviceConnection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_serviceConnection, put=__cordl_internal_set_serviceConnection)) ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*  serviceConnection;

/// @brief Method Connect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Connect(::StringW  version) ;

/// @brief Method Disconnect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Disconnect() ;

static inline ::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>* New_ctor(::StringW  className) ;

constexpr ::StringW const& __cordl_internal_get_fragmentClassName() const;

constexpr ::StringW& __cordl_internal_get_fragmentClassName() ;

constexpr T const& __cordl_internal_get_service() const;

constexpr T& __cordl_internal_get_service() ;

constexpr ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection* const& __cordl_internal_get_serviceConnection() const;

constexpr ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*& __cordl_internal_get_serviceConnection() ;

constexpr void __cordl_internal_set_fragmentClassName(::StringW  value) ;

constexpr void __cordl_internal_set_service(T  value) ;

constexpr void __cordl_internal_set_serviceConnection(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  className) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAndroidConnectionImpl_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAndroidConnectionImpl_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAndroidConnectionImpl_1(BaseAndroidConnectionImpl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAndroidConnectionImpl_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAndroidConnectionImpl_1(BaseAndroidConnectionImpl_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32938};

/// @brief Field fragmentClassName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___fragmentClassName;

/// @brief Field service, offset: 0x18, size: 0x8, def value: None
 T  ___service;

/// @brief Field serviceConnection, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*  ___serviceConnection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Voice::Core::Bindings::Android
