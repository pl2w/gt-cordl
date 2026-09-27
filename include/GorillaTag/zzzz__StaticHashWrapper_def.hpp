#pragma once
// IWYU pragma private; include "GorillaTag/StaticHashWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StaticHashWrapper)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GorillaTag {
struct StaticHashWrapper;
}
// Write type traits
MARK_VAL_T(::GorillaTag::StaticHashWrapper);
DEFINE_IL2CPP_CLASS(::GorillaTag::StaticHashWrapper, "GorillaTag", "StaticHashWrapper");
// Dependencies 
namespace GorillaTag {
// Is value type: true
// CS Name: GorillaTag.StaticHashWrapper
struct CORDL_TYPE StaticHashWrapper {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GorillaTag::StaticHashWrapper>"
constexpr operator  ::System::IEquatable_1<::GorillaTag::StaticHashWrapper>*() ;

/// @brief Convert operator to "::System::IEquatable_1<int32_t>"
constexpr operator  ::System::IEquatable_1<int32_t>*() ;

/// @brief Method Equals, addr 0x5d36960, size 0x8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5d3693c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::GorillaTag::StaticHashWrapper  other) ;

/// @brief Method Equals, addr 0x5d3692c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(int32_t  other) ;

/// @brief Method GetHashCode, addr 0x5d36924, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GorillaTag::StaticHashWrapper>"
constexpr ::System::IEquatable_1<::GorillaTag::StaticHashWrapper>* i___System__IEquatable_1___GorillaTag__StaticHashWrapper_() ;

/// @brief Convert to "::System::IEquatable_1<int32_t>"
constexpr ::System::IEquatable_1<int32_t>* i___System__IEquatable_1_int32_t_() ;

/// @brief Method op_Equality, addr 0x5d3694c, size 0x14, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash1, /* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash2) ;

/// @brief Method op_Equality, addr 0x5d36970, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash1, int32_t  hash2) ;

/// @brief Method op_Equality, addr 0x5d36980, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(int32_t  hash1, /* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash2) ;

/// @brief Method op_Implicit, addr 0x5d36968, size 0x8, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash) ;

/// @brief Method op_Inequality, addr 0x5d36990, size 0x14, virtual false, abstract: false, final false
static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash1, /* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash2) ;

/// @brief Method op_Inequality, addr 0x5d369a4, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash1, int32_t  hash2) ;

/// @brief Method op_Inequality, addr 0x5d369b4, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(int32_t  hash1, /* [IsReadOnly] */ ::by_ref<::GorillaTag::StaticHashWrapper>  hash2) ;

// Ctor Parameters []
// @brief default ctor
constexpr StaticHashWrapper() ;

// Ctor Parameters [CppParam { name: "m_hashcode", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StaticHashWrapper(int32_t  m_hashcode) noexcept;

/// @brief Field NULL_HASH offset 0xffffffff size 0x4
static constexpr int32_t  NULL_HASH{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4672};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// @brief Field m_hashcode, offset: 0x0, size: 0x4, def value: None
 int32_t  m_hashcode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::StaticHashWrapper, m_hashcode) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::StaticHashWrapper) == 0x4, "Size mismatch!");

} // namespace end def GorillaTag
