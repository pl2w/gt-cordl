#pragma once
// IWYU pragma private; include "Modio/Customizations/Wss.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Wss)
namespace GlobalNamespace {
struct Wss__BeginAuthenticationProcess_d__0;
}
namespace GlobalNamespace {
struct Wss__WaitForAccessToken_d__1;
}
namespace Modio::Customizations {
struct ExternalAuthenticationToken;
}
namespace Modio::Customizations {
struct WssLoginSuccess;
}
namespace Modio::Customizations {
class Wss___c;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Customizations {
class Wss;
}
namespace Modio::Customizations {
class Wss___c;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::Wss*);
MARK_REF_T(::Modio::Customizations::Wss___c*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::Wss*, "Modio.Customizations", "Wss");
DEFINE_IL2CPP_CLASS(::Modio::Customizations::Wss___c*, "Modio.Customizations", "Wss/<>c");
// Dependencies System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.Wss
class CORDL_TYPE Wss : public ::System::Object {
public:
// Declarations
using _BeginAuthenticationProcess_d__0 = ::GlobalNamespace::Wss__BeginAuthenticationProcess_d__0;

using _WaitForAccessToken_d__1 = ::GlobalNamespace::Wss__WaitForAccessToken_d__1;

using __c = ::Modio::Customizations::Wss___c;

/// [AsyncStateMachine(typeof(Modio.Customizations.Wss::<BeginAuthenticationProcess>d__0))]
/// @brief Method BeginAuthenticationProcess, addr 0xa05a844, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::ExternalAuthenticationToken>>* BeginAuthenticationProcess(bool  restartProcess) ;

/// [AsyncStateMachine(typeof(Modio.Customizations.Wss::<WaitForAccessToken>d__1))]
/// @brief Method WaitForAccessToken, addr 0xa05a9ac, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssLoginSuccess>>* WaitForAccessToken() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Wss() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Wss", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Wss(Wss && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Wss", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Wss(Wss const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17733};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Customizations::Wss) == 0x10, "Size mismatch!");

} // namespace end def Modio::Customizations
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.Wss/<>c
class CORDL_TYPE Wss___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Customizations::Wss___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action*  __9__0_0;

static inline ::Modio::Customizations::Wss___c* New_ctor() ;

/// @brief Method <BeginAuthenticationProcess>b__0_0, addr 0xa05ab08, size 0x64, virtual false, abstract: false, final false
inline void _BeginAuthenticationProcess_b__0_0() ;

/// @brief Method .ctor, addr 0xa05ab00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Customizations::Wss___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Modio::Customizations::Wss___c*  value) ;

static inline void setStaticF___9__0_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Wss___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Wss___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Wss___c(Wss___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Wss___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Wss___c(Wss___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17730};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Customizations::Wss___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Customizations
