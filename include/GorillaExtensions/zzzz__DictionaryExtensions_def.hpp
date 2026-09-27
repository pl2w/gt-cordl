#pragma once
// IWYU pragma private; include "GorillaExtensions/DictionaryExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryExtensions)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace GorillaExtensions {
class DictionaryExtensions;
}
// Write type traits
MARK_REF_T(::GorillaExtensions::DictionaryExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaExtensions::DictionaryExtensions*, "GorillaExtensions", "DictionaryExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaExtensions {
// Is value type: false
// CS Name: GorillaExtensions.DictionaryExtensions
class CORDL_TYPE DictionaryExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
requires(::cordl_internals::default_constructor_constraint<TValue>)
static inline TValue GetOrCreate(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  dict, TKey  key) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictionaryExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictionaryExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DictionaryExtensions(DictionaryExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictionaryExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictionaryExtensions(DictionaryExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4554};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaExtensions::DictionaryExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaExtensions
