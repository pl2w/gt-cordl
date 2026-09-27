#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/IScopeAttributeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IScopeAttributeProvider)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Attributes {
class IScopeAttributeProvider;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*, "Backtrace.Unity.Model.Attributes", "IScopeAttributeProvider");
// Dependencies 
namespace Backtrace::Unity::Model::Attributes {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Attributes.IScopeAttributeProvider
class CORDL_TYPE IScopeAttributeProvider {
public:
// Declarations
/// @brief Method GetAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

// Ctor Parameters [CppParam { name: "", ty: "IScopeAttributeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IScopeAttributeProvider(IScopeAttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27649};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model::Attributes
