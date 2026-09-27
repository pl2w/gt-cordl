#pragma once
// IWYU pragma private; include "Unity/Collections/INativeList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(INativeList_1)
namespace Unity::Collections {
template<typename T>
class IIndexable_1;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T>
class INativeList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Collections::INativeList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Collections::INativeList_1, "Unity.Collections", "INativeList`1");
// [DefaultMember("Item")]
// Dependencies 
namespace Unity::Collections {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Collections.INativeList`1<T>
class CORDL_TYPE INativeList_1 {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
constexpr operator  ::Unity::Collections::IIndexable_1<T>*() noexcept;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Capacity() ;

/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
constexpr ::Unity::Collections::IIndexable_1<T>* i___Unity__Collections__IIndexable_1_T_() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "INativeList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INativeList_1(INativeList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
