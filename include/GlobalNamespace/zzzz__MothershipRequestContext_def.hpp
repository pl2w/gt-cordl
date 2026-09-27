#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipRequestContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MothershipRequestContext)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipRequestContext;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipRequestContext*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipRequestContext*, "", "MothershipRequestContext");
// Dependencies System.Object, System.Runtime.InteropServices.HandleRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipRequestContext
class CORDL_TYPE MothershipRequestContext : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DeploymentId, put=set_DeploymentId)) ::StringW  DeploymentId;

 __declspec(property(get=get_DeploymentIdIsSet, put=set_DeploymentIdIsSet)) bool  DeploymentIdIsSet;

 __declspec(property(get=get_EnvironmentId, put=set_EnvironmentId)) ::StringW  EnvironmentId;

 __declspec(property(get=get_EnvironmentIdIsSet, put=set_EnvironmentIdIsSet)) bool  EnvironmentIdIsSet;

 __declspec(property(get=get_Language, put=set_Language)) ::StringW  Language;

 __declspec(property(get=get_LanguageIsSet, put=set_LanguageIsSet)) bool  LanguageIsSet;

 __declspec(property(get=get_OrgId, put=set_OrgId)) ::StringW  OrgId;

 __declspec(property(get=get_OrgIdIsSet, put=set_OrgIdIsSet)) bool  OrgIdIsSet;

 __declspec(property(get=get_SessionId, put=set_SessionId)) ::StringW  SessionId;

 __declspec(property(get=get_SessionIdIsSet, put=set_SessionIdIsSet)) bool  SessionIdIsSet;

 __declspec(property(get=get_TitleId, put=set_TitleId)) ::StringW  TitleId;

 __declspec(property(get=get_TitleIdIsSet, put=set_TitleIdIsSet)) bool  TitleIdIsSet;

/// @brief Field swigCMemOwn, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_swigCMemOwn, put=__cordl_internal_set_swigCMemOwn)) bool  swigCMemOwn;

/// @brief Field swigCPtr, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_swigCPtr, put=__cordl_internal_set_swigCPtr)) ::System::Runtime::InteropServices::HandleRef  swigCPtr;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x52ba7c8, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x52ba8c4, size 0x14c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x52ba834, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::MothershipRequestContext* New_ctor() ;

static inline ::GlobalNamespace::MothershipRequestContext* New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

constexpr bool& __cordl_internal_get_swigCMemOwn() ;

constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr() ;

constexpr void __cordl_internal_set_swigCMemOwn(bool  value) ;

constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value) ;

/// @brief Method .ctor, addr 0x52bbe20, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x52ba690, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  cPtr, bool  cMemoryOwn) ;

/// @brief Method getCPtr, addr 0x52ba6f0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::GlobalNamespace::MothershipRequestContext*  obj) ;

/// @brief Method get_DeploymentId, addr 0x52bb4f0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_DeploymentId() ;

/// @brief Method get_DeploymentIdIsSet, addr 0x52bb69c, size 0xd4, virtual false, abstract: false, final false
inline bool get_DeploymentIdIsSet() ;

/// @brief Method get_EnvironmentId, addr 0x52bb198, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_EnvironmentId() ;

/// @brief Method get_EnvironmentIdIsSet, addr 0x52bb344, size 0xd4, virtual false, abstract: false, final false
inline bool get_EnvironmentIdIsSet() ;

/// @brief Method get_Language, addr 0x52bbba0, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_Language() ;

/// @brief Method get_LanguageIsSet, addr 0x52bbd4c, size 0xd4, virtual false, abstract: false, final false
inline bool get_LanguageIsSet() ;

/// @brief Method get_OrgId, addr 0x52baae8, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_OrgId() ;

/// @brief Method get_OrgIdIsSet, addr 0x52bac94, size 0xd4, virtual false, abstract: false, final false
inline bool get_OrgIdIsSet() ;

/// @brief Method get_SessionId, addr 0x52bb848, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_SessionId() ;

/// @brief Method get_SessionIdIsSet, addr 0x52bb9f4, size 0xd4, virtual false, abstract: false, final false
inline bool get_SessionIdIsSet() ;

/// @brief Method get_TitleId, addr 0x52bae40, size 0xd4, virtual false, abstract: false, final false
inline ::StringW get_TitleId() ;

/// @brief Method get_TitleIdIsSet, addr 0x52bafec, size 0xd4, virtual false, abstract: false, final false
inline bool get_TitleIdIsSet() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_DeploymentId, addr 0x52bb418, size 0xd8, virtual false, abstract: false, final false
inline void set_DeploymentId(::StringW  value) ;

/// @brief Method set_DeploymentIdIsSet, addr 0x52bb5c4, size 0xd8, virtual false, abstract: false, final false
inline void set_DeploymentIdIsSet(bool  value) ;

/// @brief Method set_EnvironmentId, addr 0x52bb0c0, size 0xd8, virtual false, abstract: false, final false
inline void set_EnvironmentId(::StringW  value) ;

/// @brief Method set_EnvironmentIdIsSet, addr 0x52bb26c, size 0xd8, virtual false, abstract: false, final false
inline void set_EnvironmentIdIsSet(bool  value) ;

/// @brief Method set_Language, addr 0x52bbac8, size 0xd8, virtual false, abstract: false, final false
inline void set_Language(::StringW  value) ;

/// @brief Method set_LanguageIsSet, addr 0x52bbc74, size 0xd8, virtual false, abstract: false, final false
inline void set_LanguageIsSet(bool  value) ;

/// @brief Method set_OrgId, addr 0x52baa10, size 0xd8, virtual false, abstract: false, final false
inline void set_OrgId(::StringW  value) ;

/// @brief Method set_OrgIdIsSet, addr 0x52babbc, size 0xd8, virtual false, abstract: false, final false
inline void set_OrgIdIsSet(bool  value) ;

/// @brief Method set_SessionId, addr 0x52bb770, size 0xd8, virtual false, abstract: false, final false
inline void set_SessionId(::StringW  value) ;

/// @brief Method set_SessionIdIsSet, addr 0x52bb91c, size 0xd8, virtual false, abstract: false, final false
inline void set_SessionIdIsSet(bool  value) ;

/// @brief Method set_TitleId, addr 0x52bad68, size 0xd8, virtual false, abstract: false, final false
inline void set_TitleId(::StringW  value) ;

/// @brief Method set_TitleIdIsSet, addr 0x52baf14, size 0xd8, virtual false, abstract: false, final false
inline void set_TitleIdIsSet(bool  value) ;

/// @brief Method swigRelease, addr 0x52ba730, size 0x98, virtual false, abstract: false, final false
static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::GlobalNamespace::MothershipRequestContext*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipRequestContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipRequestContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipRequestContext(MothershipRequestContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipRequestContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipRequestContext(MothershipRequestContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9361};

/// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
 ::System::Runtime::InteropServices::HandleRef  ___swigCPtr;

/// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
 bool  ___swigCMemOwn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MothershipRequestContext, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MothershipRequestContext, ___swigCMemOwn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MothershipRequestContext) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
