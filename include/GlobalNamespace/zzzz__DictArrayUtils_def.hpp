#pragma once
// IWYU pragma private; include "GlobalNamespace/DictArrayUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DictArrayUtils)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DictArrayUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DictArrayUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DictArrayUtils*, "", "DictArrayUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DictArrayUtils
class CORDL_TYPE DictArrayUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method TryGetOrAddArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline void TryGetOrAddArray(::System::Collections::Generic::Dictionary_2<TKey,::ArrayW<TValue>>*  dict, TKey  key, ::by_ref<::ArrayW<TValue>>  array, int32_t  size) ;

/// [Extension]
/// @brief Method TryGetOrAddList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline void TryGetOrAddList(::System::Collections::Generic::Dictionary_2<TKey,::System::Collections::Generic::List_1<TValue>*>*  dict, TKey  key, ::by_ref<::System::Collections::Generic::List_1<TValue>*>  list, int32_t  capacity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictArrayUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictArrayUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DictArrayUtils(DictArrayUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictArrayUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictArrayUtils(DictArrayUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DictArrayUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
