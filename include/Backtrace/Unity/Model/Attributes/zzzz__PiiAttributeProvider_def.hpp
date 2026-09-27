#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/PiiAttributeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PiiAttributeProvider)
namespace Backtrace::Unity::Model::Attributes {
class IScopeAttributeProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Attributes {
class PiiAttributeProvider;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Attributes::PiiAttributeProvider*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Attributes::PiiAttributeProvider*, "Backtrace.Unity.Model.Attributes", "PiiAttributeProvider");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Attributes {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Attributes.PiiAttributeProvider
class CORDL_TYPE PiiAttributeProvider : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr operator  ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*() noexcept;

/// @brief Method GetAttributes, addr 0x5f222ac, size 0x248, virtual true, abstract: false, final true
inline void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

static inline ::Backtrace::Unity::Model::Attributes::PiiAttributeProvider* New_ctor() ;

/// @brief Method .ctor, addr 0x5f19a74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider* i___Backtrace__Unity__Model__Attributes__IScopeAttributeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PiiAttributeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PiiAttributeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PiiAttributeProvider(PiiAttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PiiAttributeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PiiAttributeProvider(PiiAttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27652};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::Attributes::PiiAttributeProvider) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Attributes
