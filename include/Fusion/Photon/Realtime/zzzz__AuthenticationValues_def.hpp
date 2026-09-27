#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/AuthenticationValues.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__CustomAuthenticationType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationValues)
namespace Fusion::Photon::Realtime {
struct CustomAuthenticationType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class AuthenticationValues;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::AuthenticationValues*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::AuthenticationValues*, "Fusion.Photon.Realtime", "AuthenticationValues");
// Dependencies Fusion.Photon.Realtime.CustomAuthenticationType, System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.AuthenticationValues
class CORDL_TYPE AuthenticationValues : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AuthGetParameters, put=set_AuthGetParameters)) ::StringW  AuthGetParameters;

 __declspec(property(get=get_AuthPostData, put=set_AuthPostData)) ::System::Object*  AuthPostData;

 __declspec(property(get=get_AuthType, put=set_AuthType)) ::Fusion::Photon::Realtime::CustomAuthenticationType  AuthType;

 __declspec(property(get=get_Token, put=set_Token)) ::System::Object*  Token;

 __declspec(property(get=get_UserId, put=set_UserId)) ::StringW  UserId;

/// @brief Field <AuthGetParameters>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__AuthGetParameters_k__BackingField, put=__cordl_internal_set__AuthGetParameters_k__BackingField)) ::StringW  _AuthGetParameters_k__BackingField;

/// @brief Field <AuthPostData>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__AuthPostData_k__BackingField, put=__cordl_internal_set__AuthPostData_k__BackingField)) ::System::Object*  _AuthPostData_k__BackingField;

/// @brief Field <Token>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Token_k__BackingField, put=__cordl_internal_set__Token_k__BackingField)) ::System::Object*  _Token_k__BackingField;

/// @brief Field <UserId>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserId_k__BackingField, put=__cordl_internal_set__UserId_k__BackingField)) ::StringW  _UserId_k__BackingField;

/// @brief Field authType, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_authType, put=__cordl_internal_set_authType)) ::Fusion::Photon::Realtime::CustomAuthenticationType  authType;

/// @brief Method AddAuthParameter, addr 0x5f5e180, size 0x208, virtual true, abstract: false, final false
inline void AddAuthParameter(::StringW  key, ::StringW  value) ;

/// @brief Method CopyTo, addr 0x5f5e5e0, size 0x60, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::AuthenticationValues* CopyTo(::Fusion::Photon::Realtime::AuthenticationValues*  copy) ;

static inline ::Fusion::Photon::Realtime::AuthenticationValues* New_ctor() ;

static inline ::Fusion::Photon::Realtime::AuthenticationValues* New_ctor(::StringW  userId) ;

/// @brief Method SetAuthPostData, addr 0x5f5e170, size 0x8, virtual true, abstract: false, final false
inline void SetAuthPostData(::ArrayW<uint8_t>  byteData) ;

/// @brief Method SetAuthPostData, addr 0x5f5e178, size 0x8, virtual true, abstract: false, final false
inline void SetAuthPostData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  dictData) ;

/// @brief Method SetAuthPostData, addr 0x5f5e130, size 0x40, virtual true, abstract: false, final false
inline void SetAuthPostData(::StringW  stringData) ;

/// @brief Method ToString, addr 0x5f5e388, size 0x258, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__AuthGetParameters_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AuthGetParameters_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__AuthPostData_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__AuthPostData_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__Token_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Token_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UserId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UserId_k__BackingField() ;

constexpr ::Fusion::Photon::Realtime::CustomAuthenticationType const& __cordl_internal_get_authType() const;

constexpr ::Fusion::Photon::Realtime::CustomAuthenticationType& __cordl_internal_get_authType() ;

constexpr void __cordl_internal_set__AuthGetParameters_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__AuthPostData_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__Token_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__UserId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_authType(::Fusion::Photon::Realtime::CustomAuthenticationType  value) ;

/// @brief Method .ctor, addr 0x5f5e0e8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f5e0f8, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  userId) ;

/// [CompilerGenerated]
/// @brief Method get_AuthGetParameters, addr 0x5f5e0a8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_AuthGetParameters() ;

/// [CompilerGenerated]
/// @brief Method get_AuthPostData, addr 0x5f5e0b8, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_AuthPostData() ;

/// @brief Method get_AuthType, addr 0x5f5cf34, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::CustomAuthenticationType get_AuthType() ;

/// [CompilerGenerated]
/// @brief Method get_Token, addr 0x5f5e0c8, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Token() ;

/// [CompilerGenerated]
/// @brief Method get_UserId, addr 0x5f5e0d8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// [CompilerGenerated]
/// @brief Method set_AuthGetParameters, addr 0x5f5e0b0, size 0x8, virtual false, abstract: false, final false
inline void set_AuthGetParameters(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_AuthPostData, addr 0x5f5e0c0, size 0x8, virtual false, abstract: false, final false
inline void set_AuthPostData(::System::Object*  value) ;

/// @brief Method set_AuthType, addr 0x5f5e0a0, size 0x8, virtual false, abstract: false, final false
inline void set_AuthType(::Fusion::Photon::Realtime::CustomAuthenticationType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Token, addr 0x5f5e0d0, size 0x8, virtual false, abstract: false, final false
inline void set_Token(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method set_UserId, addr 0x5f5e0e0, size 0x8, virtual false, abstract: false, final false
inline void set_UserId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationValues", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationValues(AuthenticationValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationValues", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationValues(AuthenticationValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28092};

/// @brief Field authType, offset: 0x10, size: 0x1, def value: None
 ::Fusion::Photon::Realtime::CustomAuthenticationType  ___authType;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AuthGetParameters>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____AuthGetParameters_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <AuthPostData>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____AuthPostData_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Token>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____Token_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <UserId>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____UserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::AuthenticationValues, ___authType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AuthenticationValues, ____AuthGetParameters_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AuthenticationValues, ____AuthPostData_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AuthenticationValues, ____Token_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::AuthenticationValues, ____UserId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::AuthenticationValues) == 0x38, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
