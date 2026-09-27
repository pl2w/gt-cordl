#pragma once
// IWYU pragma private; include "Steamworks/InteropHelp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InteropHelp)
namespace Steamworks {
class InteropHelp_UTF8StringHandle;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class InteropHelp;
}
namespace Steamworks {
class InteropHelp_UTF8StringHandle;
}
// Write type traits
MARK_REF_T(::Steamworks::InteropHelp*);
MARK_REF_T(::Steamworks::InteropHelp_UTF8StringHandle*);
DEFINE_IL2CPP_CLASS(::Steamworks::InteropHelp*, "Steamworks", "InteropHelp");
DEFINE_IL2CPP_CLASS(::Steamworks::InteropHelp_UTF8StringHandle*, "Steamworks", "InteropHelp/UTF8StringHandle");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.InteropHelp
class CORDL_TYPE InteropHelp : public ::System::Object {
public:
// Declarations
using UTF8StringHandle = ::Steamworks::InteropHelp_UTF8StringHandle;

/// @brief Method PtrToStringUTF8, addr 0x5f329b0, size 0x110, virtual false, abstract: false, final false
static inline ::StringW PtrToStringUTF8(::System::IntPtr  nativeUtf8) ;

/// @brief Method TestIfAvailableClient, addr 0x5f2c04c, size 0x94, virtual false, abstract: false, final false
static inline void TestIfAvailableClient() ;

/// @brief Method TestIfPlatformSupported, addr 0x5f32148, size 0x4, virtual false, abstract: false, final false
static inline void TestIfPlatformSupported() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteropHelp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteropHelp(InteropHelp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteropHelp(InteropHelp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::InteropHelp) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.InteropHelp/UTF8StringHandle
class CORDL_TYPE InteropHelp_UTF8StringHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
static inline ::Steamworks::InteropHelp_UTF8StringHandle* New_ctor(::StringW  str) ;

/// @brief Method ReleaseHandle, addr 0x5f32ac0, size 0x78, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x5f2c0e0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  str) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteropHelp_UTF8StringHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp_UTF8StringHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteropHelp_UTF8StringHandle(InteropHelp_UTF8StringHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp_UTF8StringHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteropHelp_UTF8StringHandle(InteropHelp_UTF8StringHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32142};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::InteropHelp_UTF8StringHandle) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
