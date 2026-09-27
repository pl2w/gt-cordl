#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSerializableKeyValue_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GTSerializableKeyValue_2)
// Forward declare root types
namespace GlobalNamespace {
template<typename T1,typename T2>
struct GTSerializableKeyValue_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::GTSerializableKeyValue_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::GTSerializableKeyValue_2, "", "GTSerializableKeyValue`2");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T1,typename T2>
// Is value type: true
// CS Name: GTSerializableKeyValue`2<T1,T2>
struct CORDL_TYPE GTSerializableKeyValue_2 {
public:
// Declarations
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T1  k, T2  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTSerializableKeyValue_2() ;

// Ctor Parameters [CppParam { name: "k", ty: "T1", modifiers: "", def_value: None, comment: None }, CppParam { name: "v", ty: "T2", modifiers: "", def_value: None, comment: None }]
constexpr GTSerializableKeyValue_2(T1  k, T2  v) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k, offset: 0x0, size: 0x8, def value: None
 T1  k;

/// @brief Field v, offset: 0x8, size: 0x8, def value: None
 T2  v;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
