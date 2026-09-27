#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/WaitForFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WaitForFrame)
namespace Backtrace::Unity::Model::Waiter {
class IWaiter;
}
namespace UnityEngine {
class YieldInstruction;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class WaitForFrame;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::WaitForFrame*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::WaitForFrame*, "Backtrace.Unity.Model", "WaitForFrame");
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.WaitForFrame
class CORDL_TYPE WaitForFrame : public ::System::Object {
public:
// Declarations
/// @brief Field _waiter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__waiter, put=setStaticF__waiter)) ::Backtrace::Unity::Model::Waiter::IWaiter*  _waiter;

/// @brief Method CreateWaiterStrategy, addr 0x5f15d38, size 0x9c, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::Waiter::IWaiter* CreateWaiterStrategy() ;

static inline ::Backtrace::Unity::Model::WaitForFrame* New_ctor() ;

/// @brief Method Wait, addr 0x5f15c70, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::YieldInstruction* Wait() ;

/// @brief Method .ctor, addr 0x5f15de4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Backtrace::Unity::Model::Waiter::IWaiter* getStaticF__waiter() ;

static inline void setStaticF__waiter(::Backtrace::Unity::Model::Waiter::IWaiter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForFrame(WaitForFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForFrame(WaitForFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27612};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::WaitForFrame) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
