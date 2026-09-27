#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUniTaskSource)
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::IUniTaskSource*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::IUniTaskSource*, "Cysharp.Threading.Tasks", "IUniTaskSource");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IUniTaskSource
class CORDL_TYPE IUniTaskSource {
public:
// Declarations
/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

// Ctor Parameters [CppParam { name: "", ty: "IUniTaskSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUniTaskSource(IUniTaskSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21618};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
