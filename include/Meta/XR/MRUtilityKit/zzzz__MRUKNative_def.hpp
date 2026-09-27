#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNative)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class MRUKNative;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKNative*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKNative*, "Meta.XR.MRUtilityKit", "MRUKNative");
// Dependencies System.IntPtr, System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKNative
class CORDL_TYPE MRUKNative : public ::System::Object {
public:
// Declarations
/// @brief Field _nativeLibraryPtr, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nativeLibraryPtr, put=setStaticF__nativeLibraryPtr)) ::System::IntPtr  _nativeLibraryPtr;

/// @brief Method FreeDllHandle, addr 0x9f32d94, size 0x54, virtual false, abstract: false, final false
static inline bool FreeDllHandle(::System::IntPtr  dllHandle) ;

/// @brief Method FreeMRUKSharedLibrary, addr 0x9f32ef4, size 0xac, virtual false, abstract: false, final false
static inline void FreeMRUKSharedLibrary() ;

/// @brief Method GetDllExport, addr 0x9f32d90, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDllExport(::System::IntPtr  dllHandle, ::StringW  name) ;

/// @brief Method GetDllHandle, addr 0x9f32d88, size 0x8, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDllHandle(::StringW  path) ;

/// @brief Method LoadFunction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T LoadFunction(::StringW  name) ;

/// @brief Method LoadMRUKSharedLibrary, addr 0x9f32de8, size 0x10c, virtual false, abstract: false, final false
static inline void LoadMRUKSharedLibrary() ;

/// @brief Method dlclose, addr 0x9f32d10, size 0x78, virtual false, abstract: false, final false
static inline int32_t dlclose(::System::IntPtr  handle) ;

/// @brief Method dlopen, addr 0x9f32bd4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::IntPtr dlopen(::StringW  filename, int32_t  flags) ;

/// @brief Method dlsym, addr 0x9f32c70, size 0xa0, virtual false, abstract: false, final false
static inline ::System::IntPtr dlsym(::System::IntPtr  handle, ::StringW  symbol) ;

static inline ::System::IntPtr getStaticF__nativeLibraryPtr() ;

static inline void setStaticF__nativeLibraryPtr(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKNative", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKNative(MRUKNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKNative", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKNative(MRUKNative const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25888};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKNative) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
