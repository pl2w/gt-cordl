#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRObjectPool_DictionaryScope_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRObjectPool_DictionaryScope_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct OVRObjectPool_DictionaryScope_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::OVRObjectPool_DictionaryScope_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRObjectPool_DictionaryScope_2, "", "OVRObjectPool/DictionaryScope`2");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: OVRObjectPool/DictionaryScope`2<TKey,TValue>
struct CORDL_TYPE OVRObjectPool_DictionaryScope_2 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::System::Collections::Generic::Dictionary_2<TKey,TValue>*>  dictionary) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRObjectPool_DictionaryScope_2() ;

// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: None, comment: None }]
constexpr OVRObjectPool_DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _dictionary, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
