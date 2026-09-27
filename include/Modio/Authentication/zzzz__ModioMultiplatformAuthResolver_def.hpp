#pragma once
// IWYU pragma private; include "Modio/Authentication/ModioMultiplatformAuthResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__ModioServicePriority_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioMultiplatformAuthResolver)
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
namespace Modio::Authentication {
class IGetActiveUserIdentifier;
}
namespace Modio::Authentication {
class IModioAuthService;
}
namespace Modio::Authentication {
class IPotentialModioEmailAuthService;
}
namespace Modio::Authentication {
class ModioMultiplatformAuthResolver___c;
}
namespace Modio {
class Error;
}
namespace Modio {
struct ModioServicePriority;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Authentication {
class ModioMultiplatformAuthResolver;
}
namespace Modio::Authentication {
class ModioMultiplatformAuthResolver___c;
}
// Write type traits
MARK_REF_T(::Modio::Authentication::ModioMultiplatformAuthResolver*);
MARK_REF_T(::Modio::Authentication::ModioMultiplatformAuthResolver___c*);
DEFINE_IL2CPP_CLASS(::Modio::Authentication::ModioMultiplatformAuthResolver*, "Modio.Authentication", "ModioMultiplatformAuthResolver");
DEFINE_IL2CPP_CLASS(::Modio::Authentication::ModioMultiplatformAuthResolver___c*, "Modio.Authentication", "ModioMultiplatformAuthResolver/<>c");
// Dependencies Modio.ModioServicePriority, System.Object
namespace Modio::Authentication {
// Is value type: false
// CS Name: Modio.Authentication.ModioMultiplatformAuthResolver
class CORDL_TYPE ModioMultiplatformAuthResolver : public ::System::Object {
public:
// Declarations
using __c = ::Modio::Authentication::ModioMultiplatformAuthResolver___c;

 __declspec(property(get=get_IsEmailPlatform)) bool  IsEmailPlatform;

 __declspec(property(get=get_Portal)) ::GlobalNamespace::ModioAPI_Portal  Portal;

/// @brief Field <AuthBindings>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__AuthBindings_k__BackingField, put=setStaticF__AuthBindings_k__BackingField)) ::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*  _AuthBindings_k__BackingField;

/// @brief Field <ServiceOverride>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ServiceOverride_k__BackingField, put=setStaticF__ServiceOverride_k__BackingField)) ::Modio::Authentication::IModioAuthService*  _ServiceOverride_k__BackingField;

/// @brief Field _hasInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasInitialized, put=setStaticF__hasInitialized)) bool  _hasInitialized;

/// @brief Field _resolveUsingThis, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__resolveUsingThis, put=setStaticF__resolveUsingThis)) bool  _resolveUsingThis;

/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr operator  ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr operator  ::Modio::Authentication::IModioAuthService*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr operator  ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept;

/// @brief Method Authenticate, addr 0xa064124, size 0xd0, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Get() ;

/// @brief Method GetActiveUserIdentifier, addr 0xa0641f4, size 0xb8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* GetActiveUserIdentifier() ;

/// @brief Method Initialize, addr 0xa063a38, size 0x6a4, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method IsActiveForConditional, addr 0xa0640dc, size 0x48, virtual false, abstract: false, final false
static inline bool IsActiveForConditional() ;

static inline ::Modio::Authentication::ModioMultiplatformAuthResolver* New_ctor() ;

/// @brief Method .ctor, addr 0xa06443c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>* getStaticF__AuthBindings_k__BackingField() ;

static inline ::Modio::Authentication::IModioAuthService* getStaticF__ServiceOverride_k__BackingField() ;

static inline bool getStaticF__hasInitialized() ;

static inline bool getStaticF__resolveUsingThis() ;

/// [CompilerGenerated]
/// @brief Method get_AuthBindings, addr 0xa0639a0, size 0x48, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>* get_AuthBindings() ;

/// @brief Method get_IsEmailPlatform, addr 0xa0642ac, size 0xc8, virtual true, abstract: false, final true
inline bool get_IsEmailPlatform() ;

/// @brief Method get_Portal, addr 0xa064374, size 0xc8, virtual true, abstract: false, final true
inline ::GlobalNamespace::ModioAPI_Portal get_Portal() ;

/// [CompilerGenerated]
/// @brief Method get_ServiceOverride, addr 0xa063908, size 0x48, virtual false, abstract: false, final false
static inline ::Modio::Authentication::IModioAuthService* get_ServiceOverride() ;

/// @brief Convert to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr ::Modio::Authentication::IGetActiveUserIdentifier* i___Modio__Authentication__IGetActiveUserIdentifier() noexcept;

/// @brief Convert to "::Modio::Authentication::IModioAuthService"
constexpr ::Modio::Authentication::IModioAuthService* i___Modio__Authentication__IModioAuthService() noexcept;

/// @brief Convert to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr ::Modio::Authentication::IPotentialModioEmailAuthService* i___Modio__Authentication__IPotentialModioEmailAuthService() noexcept;

static inline void setStaticF__AuthBindings_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*  value) ;

static inline void setStaticF__ServiceOverride_k__BackingField(::Modio::Authentication::IModioAuthService*  value) ;

static inline void setStaticF__hasInitialized(bool  value) ;

static inline void setStaticF__resolveUsingThis(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_AuthBindings, addr 0xa0639e8, size 0x50, virtual false, abstract: false, final false
static inline void set_AuthBindings(::System::Collections::Generic::IReadOnlyList_1<::Modio::Authentication::IModioAuthService*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ServiceOverride, addr 0xa063950, size 0x50, virtual false, abstract: false, final false
static inline void set_ServiceOverride(::Modio::Authentication::IModioAuthService*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioMultiplatformAuthResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioMultiplatformAuthResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioMultiplatformAuthResolver(ModioMultiplatformAuthResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioMultiplatformAuthResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioMultiplatformAuthResolver(ModioMultiplatformAuthResolver const& ) = delete;

/// @brief Field SERVICE_BINDING_PRIORITY value: I32(50)
static ::Modio::ModioServicePriority const SERVICE_BINDING_PRIORITY;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17770};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Authentication::ModioMultiplatformAuthResolver) == 0x10, "Size mismatch!");

} // namespace end def Modio::Authentication
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Authentication {
// Is value type: false
// CS Name: Modio.Authentication.ModioMultiplatformAuthResolver/<>c
class CORDL_TYPE ModioMultiplatformAuthResolver___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Authentication::ModioMultiplatformAuthResolver___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::ModioServicePriority>*  __9__11_0;

/// @brief Field <>9__11_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_1, put=setStaticF___9__11_1)) ::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::Authentication::IModioAuthService*>*  __9__11_1;

/// @brief Field <>9__11_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_2, put=setStaticF___9__11_2)) ::System::Func_2<::Modio::Authentication::IModioAuthService*,bool>*  __9__11_2;

static inline ::Modio::Authentication::ModioMultiplatformAuthResolver___c* New_ctor() ;

/// @brief Method <Initialize>b__11_0, addr 0xa0644b4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::ModioServicePriority _Initialize_b__11_0(::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>  tuple) ;

/// @brief Method <Initialize>b__11_1, addr 0xa0644bc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Authentication::IModioAuthService* _Initialize_b__11_1(::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>  platformPair) ;

/// @brief Method <Initialize>b__11_2, addr 0xa0644c4, size 0x54, virtual false, abstract: false, final false
inline bool _Initialize_b__11_2(::Modio::Authentication::IModioAuthService*  platform) ;

/// @brief Method .ctor, addr 0xa0644ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Authentication::ModioMultiplatformAuthResolver___c* getStaticF___9() ;

static inline ::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::ModioServicePriority>* getStaticF___9__11_0() ;

static inline ::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::Authentication::IModioAuthService*>* getStaticF___9__11_1() ;

static inline ::System::Func_2<::Modio::Authentication::IModioAuthService*,bool>* getStaticF___9__11_2() ;

static inline void setStaticF___9(::Modio::Authentication::ModioMultiplatformAuthResolver___c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::ModioServicePriority>*  value) ;

static inline void setStaticF___9__11_1(::System::Func_2<::System::ValueTuple_2<::Modio::Authentication::IModioAuthService*,::Modio::ModioServicePriority>,::Modio::Authentication::IModioAuthService*>*  value) ;

static inline void setStaticF___9__11_2(::System::Func_2<::Modio::Authentication::IModioAuthService*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioMultiplatformAuthResolver___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioMultiplatformAuthResolver___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioMultiplatformAuthResolver___c(ModioMultiplatformAuthResolver___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioMultiplatformAuthResolver___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioMultiplatformAuthResolver___c(ModioMultiplatformAuthResolver___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17769};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Authentication::ModioMultiplatformAuthResolver___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Authentication
