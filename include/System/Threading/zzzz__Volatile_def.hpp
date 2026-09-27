#pragma once
// IWYU pragma private; include "System/Threading/Volatile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Volatile)
namespace GlobalNamespace {
struct Volatile_VolatileBoolean;
}
namespace GlobalNamespace {
struct Volatile_VolatileInt32;
}
namespace GlobalNamespace {
struct Volatile_VolatileIntPtr;
}
namespace GlobalNamespace {
struct Volatile_VolatileObject;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Threading {
class Volatile;
}
// Write type traits
MARK_REF_T(::System::Threading::Volatile*);
DEFINE_IL2CPP_CLASS(::System::Threading::Volatile*, "System.Threading", "Volatile");
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Volatile
class CORDL_TYPE Volatile : public ::System::Object {
public:
// Declarations
using VolatileBoolean = ::GlobalNamespace::Volatile_VolatileBoolean;

using VolatileInt32 = ::GlobalNamespace::Volatile_VolatileInt32;

using VolatileIntPtr = ::GlobalNamespace::Volatile_VolatileIntPtr;

using VolatileObject = ::GlobalNamespace::Volatile_VolatileObject;

/// [Intrinsic]
/// @brief Method Read, addr 0xa356294, size 0x18, virtual false, abstract: false, final false
static inline ::System::IntPtr Read(::by_ref<::System::IntPtr>  location) ;

/// [Intrinsic]
/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline T Read(::by_ref<T>  location) ;

/// [Intrinsic]
/// @brief Method Read, addr 0xa35621c, size 0x18, virtual false, abstract: false, final false
static inline bool Read(::by_ref<bool>  location) ;

/// [Intrinsic]
/// @brief Method Read, addr 0xa356258, size 0x18, virtual false, abstract: false, final false
static inline int32_t Read(::by_ref<int32_t>  location) ;

/// [Intrinsic]
/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline void Write(::by_ref<T>  location, T  value) ;

/// [Intrinsic]
/// @brief Method Write, addr 0xa356234, size 0x24, virtual false, abstract: false, final false
static inline void Write(::by_ref<bool>  location, bool  value) ;

/// [Intrinsic]
/// @brief Method Write, addr 0xa356270, size 0x24, virtual false, abstract: false, final false
static inline void Write(::by_ref<int32_t>  location, int32_t  value) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method Write, addr 0xa3562ac, size 0x24, virtual false, abstract: false, final false
static inline void Write(::by_ref<int64_t>  location, int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Volatile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Volatile(Volatile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Volatile(Volatile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5886};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Volatile) == 0x10, "Size mismatch!");

} // namespace end def System::Threading
