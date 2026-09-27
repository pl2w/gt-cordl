#pragma once
// IWYU pragma private; include "Liv/Lck/Core/InteropUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InteropUtilities)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::Lck::Core {
class InteropUtilities;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::InteropUtilities*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::InteropUtilities*, "Liv.Lck.Core", "InteropUtilities");
// Dependencies System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.InteropUtilities
class CORDL_TYPE InteropUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method AllocateUnmanagedArray, addr 0x9cfd7f8, size 0x1cc, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocateUnmanagedArray(::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>*  ptrs) ;

/// @brief Method AllocateUnmanagedStringPointers, addr 0x9cfd3e8, size 0x410, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyCollection_1<::System::IntPtr>* AllocateUnmanagedStringPointers(::System::Collections::Generic::IEnumerable_1<::StringW>*  strings, ::System::Text::Encoding*  targetEncoding) ;

/// @brief Method CopyUnmanagedByteArray, addr 0x9cfd9c4, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> CopyUnmanagedByteArray(::System::IntPtr  byteArrayStartPtr, int32_t  byteArrayLength) ;

/// @brief Method Free, addr 0x9cfdc44, size 0x58, virtual false, abstract: false, final false
static inline void Free(::System::IntPtr  ptr) ;

/// @brief Method StringToUTF8Pointer, addr 0x9cfdb64, size 0xe0, virtual false, abstract: false, final false
static inline ::System::IntPtr StringToUTF8Pointer(::StringW  str) ;

/// @brief Method UTF8PointerToString, addr 0x9cfda64, size 0x100, virtual false, abstract: false, final false
static inline ::StringW UTF8PointerToString(::System::IntPtr  ptr) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteropUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteropUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteropUtilities(InteropUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteropUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteropUtilities(InteropUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31905};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::InteropUtilities) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core
