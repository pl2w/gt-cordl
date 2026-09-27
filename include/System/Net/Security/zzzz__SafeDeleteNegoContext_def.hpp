#pragma once
// IWYU pragma private; include "System/Net/Security/SafeDeleteNegoContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__SafeDeleteContext_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SafeDeleteNegoContext)
namespace Microsoft::Win32::SafeHandles {
class SafeGssContextHandle;
}
namespace Microsoft::Win32::SafeHandles {
class SafeGssNameHandle;
}
namespace System::Net::Security {
class SafeFreeNegoCredentials;
}
// Forward declare root types
namespace System::Net::Security {
class SafeDeleteNegoContext;
}
// Write type traits
MARK_REF_T(::System::Net::Security::SafeDeleteNegoContext*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::SafeDeleteNegoContext*, "System.Net.Security", "SafeDeleteNegoContext");
// Dependencies System.Net.Security.SafeDeleteContext
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.SafeDeleteNegoContext
class CORDL_TYPE SafeDeleteNegoContext : public ::System::Net::Security::SafeDeleteContext {
public:
// Declarations
 __declspec(property(get=get_GssContext)) ::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  GssContext;

 __declspec(property(get=get_IsNtlmUsed)) bool  IsNtlmUsed;

 __declspec(property(get=get_TargetName)) ::Microsoft::Win32::SafeHandles::SafeGssNameHandle*  TargetName;

/// @brief Field _context, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__context, put=__cordl_internal_set__context)) ::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  _context;

/// @brief Field _isNtlmUsed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isNtlmUsed, put=__cordl_internal_set__isNtlmUsed)) bool  _isNtlmUsed;

/// @brief Field _targetName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetName, put=__cordl_internal_set__targetName)) ::Microsoft::Win32::SafeHandles::SafeGssNameHandle*  _targetName;

/// @brief Method Dispose, addr 0xacf493c, size 0x74, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::System::Net::Security::SafeDeleteNegoContext* New_ctor(::System::Net::Security::SafeFreeNegoCredentials*  credential, ::StringW  targetName) ;

/// @brief Method SetAuthenticationPackage, addr 0xacf4934, size 0x8, virtual false, abstract: false, final false
inline void SetAuthenticationPackage(bool  isNtlmUsed) ;

/// @brief Method SetGssContext, addr 0xacf492c, size 0x8, virtual false, abstract: false, final false
inline void SetGssContext(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  context) ;

constexpr ::Microsoft::Win32::SafeHandles::SafeGssContextHandle* const& __cordl_internal_get__context() const;

constexpr ::Microsoft::Win32::SafeHandles::SafeGssContextHandle*& __cordl_internal_get__context() ;

constexpr bool const& __cordl_internal_get__isNtlmUsed() const;

constexpr bool& __cordl_internal_get__isNtlmUsed() ;

constexpr ::Microsoft::Win32::SafeHandles::SafeGssNameHandle* const& __cordl_internal_get__targetName() const;

constexpr ::Microsoft::Win32::SafeHandles::SafeGssNameHandle*& __cordl_internal_get__targetName() ;

constexpr void __cordl_internal_set__context(::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  value) ;

constexpr void __cordl_internal_set__isNtlmUsed(bool  value) ;

constexpr void __cordl_internal_set__targetName(::Microsoft::Win32::SafeHandles::SafeGssNameHandle*  value) ;

/// @brief Method .ctor, addr 0xacf37d4, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Security::SafeFreeNegoCredentials*  credential, ::StringW  targetName) ;

/// @brief Method get_GssContext, addr 0xacf4924, size 0x8, virtual false, abstract: false, final false
inline ::Microsoft::Win32::SafeHandles::SafeGssContextHandle* get_GssContext() ;

/// @brief Method get_IsNtlmUsed, addr 0xacf491c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsNtlmUsed() ;

/// @brief Method get_TargetName, addr 0xacf4914, size 0x8, virtual false, abstract: false, final false
inline ::Microsoft::Win32::SafeHandles::SafeGssNameHandle* get_TargetName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeDeleteNegoContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeDeleteNegoContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeDeleteNegoContext(SafeDeleteNegoContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeDeleteNegoContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeDeleteNegoContext(SafeDeleteNegoContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10930};

/// @brief Field _targetName, offset: 0x28, size: 0x8, def value: None
 ::Microsoft::Win32::SafeHandles::SafeGssNameHandle*  ____targetName;

/// @brief Field _context, offset: 0x30, size: 0x8, def value: None
 ::Microsoft::Win32::SafeHandles::SafeGssContextHandle*  ____context;

/// @brief Field _isNtlmUsed, offset: 0x38, size: 0x1, def value: None
 bool  ____isNtlmUsed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::SafeDeleteNegoContext, ____targetName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SafeDeleteNegoContext, ____context) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SafeDeleteNegoContext, ____isNtlmUsed) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::Security::SafeDeleteNegoContext) == 0x40, "Size mismatch!");

} // namespace end def System::Net::Security
