#pragma once
// IWYU pragma private; include "GorillaTag/HashWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashWrapper)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaTag {
struct HashWrapper;
}
// Write type traits
MARK_VAL_T(::GorillaTag::HashWrapper);
DEFINE_IL2CPP_CLASS(::GorillaTag::HashWrapper, "GorillaTag", "HashWrapper");
// Dependencies 
namespace GorillaTag {
// Is value type: true
// CS Name: GorillaTag.HashWrapper
struct CORDL_TYPE HashWrapper {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<int32_t>"
constexpr operator  ::System::IEquatable_1<int32_t>*() ;

/// @brief Method Equals, addr 0x5d23028, size 0x8, virtual true, abstract: false, final true
inline bool Equals(int32_t  i) ;

/// @brief Method Equals, addr 0x5d23020, size 0x8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x5d23018, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x5d23010, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  hash) ;

/// @brief Convert to "::System::IEquatable_1<int32_t>"
constexpr ::System::IEquatable_1<int32_t>* i___System__IEquatable_1_int32_t_() ;

/// @brief Method op_Implicit, addr 0x5d23030, size 0x8, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(/* [IsReadOnly] */ ::by_ref<::GorillaTag::HashWrapper>  hash) ;

// Ctor Parameters []
// @brief default ctor
constexpr HashWrapper() ;

// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HashWrapper(int32_t  hashCode) noexcept;

/// @brief Field NULL_HASH offset 0xffffffff size 0x4
static constexpr int32_t  NULL_HASH{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4611};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
 int32_t  hashCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::HashWrapper, hashCode) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::HashWrapper) == 0x4, "Size mismatch!");

} // namespace end def GorillaTag
