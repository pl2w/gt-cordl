#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/INativeClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(INativeClient)
namespace Backtrace::Unity::Model::Attributes {
class IDynamicAttributeProvider;
}
// Forward declare root types
namespace Backtrace::Unity::Runtime::Native {
class INativeClient;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Runtime::Native::INativeClient*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Runtime::Native::INativeClient*, "Backtrace.Unity.Runtime.Native", "INativeClient");
// Dependencies 
namespace Backtrace::Unity::Runtime::Native {
// Is value type: false
// CS Name: Backtrace.Unity.Runtime.Native.INativeClient
class CORDL_TYPE INativeClient {
public:
// Declarations
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr operator  ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*() noexcept;

/// @brief Method Disable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Disable() ;

/// @brief Method HandleAnr, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleAnr() ;

/// @brief Method OnOOM, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool OnOOM() ;

/// @brief Method PauseAnrThread, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PauseAnrThread(bool  state) ;

/// @brief Method SetAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetAttribute(::StringW  key, ::StringW  value) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(float_t  time) ;

/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider* i___Backtrace__Unity__Model__Attributes__IDynamicAttributeProvider() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INativeClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INativeClient(INativeClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27582};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Runtime::Native
