#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Waiter/EndOfFrameWaiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EndOfFrameWaiter)
namespace Backtrace::Unity::Model::Waiter {
class IWaiter;
}
namespace UnityEngine {
class YieldInstruction;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Waiter {
class EndOfFrameWaiter;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter*, "Backtrace.Unity.Model.Waiter", "EndOfFrameWaiter");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Waiter {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Waiter.EndOfFrameWaiter
class CORDL_TYPE EndOfFrameWaiter : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Backtrace::Unity::Model::Waiter::IWaiter"
constexpr operator  ::Backtrace::Unity::Model::Waiter::IWaiter*() noexcept;

static inline ::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter* New_ctor() ;

/// @brief Method Wait, addr 0x5f15e4c, size 0x54, virtual true, abstract: false, final true
inline ::UnityEngine::YieldInstruction* Wait() ;

/// @brief Method .ctor, addr 0x5f15ddc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Backtrace::Unity::Model::Waiter::IWaiter"
constexpr ::Backtrace::Unity::Model::Waiter::IWaiter* i___Backtrace__Unity__Model__Waiter__IWaiter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndOfFrameWaiter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndOfFrameWaiter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EndOfFrameWaiter(EndOfFrameWaiter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndOfFrameWaiter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndOfFrameWaiter(EndOfFrameWaiter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::Waiter::EndOfFrameWaiter) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Waiter
