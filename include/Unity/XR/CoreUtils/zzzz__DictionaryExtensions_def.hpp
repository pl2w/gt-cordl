#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/DictionaryExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DictionaryExtensions)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class DictionaryExtensions;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::DictionaryExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::DictionaryExtensions*, "Unity.XR.CoreUtils", "DictionaryExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.DictionaryExtensions
class CORDL_TYPE DictionaryExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method First, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TKey,typename TValue>
static inline ::System::Collections::Generic::KeyValuePair_2<TKey,TValue> First(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::DictionaryExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
