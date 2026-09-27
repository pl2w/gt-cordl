#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/IAsyncWriter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncWriter_1)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
template<typename T>
class IAsyncWriter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1, "Cysharp.Threading.Tasks.Linq", "IAsyncWriter`1");
// Dependencies 
namespace Cysharp::Threading::Tasks::Linq {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.IAsyncWriter`1<T>
class CORDL_TYPE IAsyncWriter_1 {
public:
// Declarations
/// @brief Method YieldAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTask YieldAsync(T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncWriter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncWriter_1(IAsyncWriter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20504};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Linq
