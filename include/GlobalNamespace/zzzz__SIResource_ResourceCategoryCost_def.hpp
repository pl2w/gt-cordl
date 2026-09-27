#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResource_ResourceCategoryCost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIResource_ResourceCategoryCost)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIResource_ResourceCategoryCost;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIResource_ResourceCategoryCost);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResource_ResourceCategoryCost, "", "SIResource/ResourceCategoryCost");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIResource/ResourceCategoryCost
struct CORDL_TYPE SIResource_ResourceCategoryCost {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCategoryCost>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCategoryCost>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCategoryCost>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCategoryCost>*() ;

/// @brief Method CompareTo, addr 0x5ae7e44, size 0x40, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::SIResource_ResourceCategoryCost  other) ;

/// @brief Method Equals, addr 0x5ae7e84, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::SIResource_ResourceCategoryCost  other) ;

/// @brief Method GetHashCode, addr 0x5ae7f30, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Max, addr 0x5ae7f10, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SIResource_ResourceCategoryCost Max(::GlobalNamespace::SIResource_ResourceCategoryCost  left, ::GlobalNamespace::SIResource_ResourceCategoryCost  right) ;

/// @brief Method .ctor, addr 0x5ae7e3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  techPoints, int32_t  misc) ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCategoryCost>"
constexpr ::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCategoryCost>* i___System__IComparable_1___GlobalNamespace__SIResource_ResourceCategoryCost_() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCategoryCost>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCategoryCost>* i___System__IEquatable_1___GlobalNamespace__SIResource_ResourceCategoryCost_() ;

/// @brief Method op_Addition, addr 0x5ae7eb8, size 0x18, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SIResource_ResourceCategoryCost op_Addition(::GlobalNamespace::SIResource_ResourceCategoryCost  left, ::GlobalNamespace::SIResource_ResourceCategoryCost  right) ;

/// @brief Method op_Equality, addr 0x5ae73b8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::SIResource_ResourceCategoryCost  left, ::GlobalNamespace::SIResource_ResourceCategoryCost  right) ;

/// @brief Method op_Inequality, addr 0x5ae7eac, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::SIResource_ResourceCategoryCost  left, ::GlobalNamespace::SIResource_ResourceCategoryCost  right) ;

/// @brief Method op_Multiply, addr 0x5ae7ee8, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SIResource_ResourceCategoryCost op_Multiply(::GlobalNamespace::SIResource_ResourceCategoryCost  cost, int32_t  multiple) ;

/// @brief Method op_Multiply, addr 0x5ae7efc, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SIResource_ResourceCategoryCost op_Multiply(int32_t  multiple, ::GlobalNamespace::SIResource_ResourceCategoryCost  cost) ;

/// @brief Method op_Subtraction, addr 0x5ae7ed0, size 0x18, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SIResource_ResourceCategoryCost op_Subtraction(::GlobalNamespace::SIResource_ResourceCategoryCost  left, ::GlobalNamespace::SIResource_ResourceCategoryCost  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr SIResource_ResourceCategoryCost() ;

// Ctor Parameters [CppParam { name: "techPoints", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "misc", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIResource_ResourceCategoryCost(int32_t  techPoints, int32_t  misc) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{339};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field techPoints, offset: 0x0, size: 0x4, def value: None
 int32_t  techPoints;

/// @brief Field misc, offset: 0x4, size: 0x4, def value: None
 int32_t  misc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResource_ResourceCategoryCost, techPoints) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource_ResourceCategoryCost, misc) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResource_ResourceCategoryCost) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
