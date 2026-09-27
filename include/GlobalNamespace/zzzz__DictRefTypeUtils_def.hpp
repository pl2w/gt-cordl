#pragma once
// IWYU pragma private; include "GlobalNamespace/DictRefTypeUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictRefTypeUtils)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class DictRefTypeUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DictRefTypeUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DictRefTypeUtils*, "", "DictRefTypeUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DictRefTypeUtils
class CORDL_TYPE DictRefTypeUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method TryGetOrAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
requires(::cordl_internals::reference_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void TryGetOrAdd(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dict, TKey  key, ::by_ref<TValue>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictRefTypeUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictRefTypeUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DictRefTypeUtils(DictRefTypeUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictRefTypeUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictRefTypeUtils(DictRefTypeUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DictRefTypeUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
