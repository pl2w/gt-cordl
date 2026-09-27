#pragma once
// IWYU pragma private; include "GlobalNamespace/__f__AnonymousType0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(__f__AnonymousType0)
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class __f__AnonymousType0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::__f__AnonymousType0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::__f__AnonymousType0*, "", "<>f__AnonymousType0");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: <>f__AnonymousType0
class CORDL_TYPE __f__AnonymousType0 : public ::System::Object {
public:
// Declarations
/// [DebuggerHidden]
/// @brief Method Equals, addr 0x55e40cc, size 0x68, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method GetHashCode, addr 0x55e4134, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::__f__AnonymousType0* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method ToString, addr 0x55e413c, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55e40c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __f__AnonymousType0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__f__AnonymousType0(__f__AnonymousType0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__f__AnonymousType0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__f__AnonymousType0(__f__AnonymousType0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::__f__AnonymousType0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
