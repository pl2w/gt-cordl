#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/IUniTaskSource_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IUniTaskSource_1)
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::IUniTaskSource_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::IUniTaskSource_1, "Cysharp.Threading.Tasks", "IUniTaskSource`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.IUniTaskSource`1<T>
class CORDL_TYPE IUniTaskSource_1 {
public:
// Declarations
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T GetResult(int16_t  token) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUniTaskSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUniTaskSource_1(IUniTaskSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21619};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
