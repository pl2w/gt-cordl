#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/ThreadExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ThreadExtensions)
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace Backtrace::Unity::Extensions {
class ThreadExtensions;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Extensions::ThreadExtensions*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Extensions::ThreadExtensions*, "Backtrace.Unity.Extensions", "ThreadExtensions");
// [Extension]
// Dependencies System.Object
namespace Backtrace::Unity::Extensions {
// Is value type: false
// CS Name: Backtrace.Unity.Extensions.ThreadExtensions
class CORDL_TYPE ThreadExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GenerateValidThreadName, addr 0x5f1afe4, size 0xac, virtual false, abstract: false, final false
static inline ::StringW GenerateValidThreadName(::System::Threading::Thread*  thread) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadExtensions(ThreadExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadExtensions(ThreadExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27668};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Extensions::ThreadExtensions) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Extensions
