#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/ProcessAttributeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProcessAttributeProvider)
namespace Backtrace::Unity::Model::Attributes {
class IDynamicAttributeProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Attributes {
class ProcessAttributeProvider;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider*, "Backtrace.Unity.Model.Attributes", "ProcessAttributeProvider");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Attributes {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Attributes.ProcessAttributeProvider
class CORDL_TYPE ProcessAttributeProvider : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr operator  ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*() noexcept;

/// @brief Method GetAttributes, addr 0x5f224f4, size 0x968, virtual true, abstract: false, final true
inline void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

static inline ::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider* New_ctor() ;

/// @brief Method .ctor, addr 0x5f19a84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider* i___Backtrace__Unity__Model__Attributes__IDynamicAttributeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProcessAttributeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProcessAttributeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProcessAttributeProvider(ProcessAttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProcessAttributeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProcessAttributeProvider(ProcessAttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27653};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::Attributes::ProcessAttributeProvider) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Attributes
