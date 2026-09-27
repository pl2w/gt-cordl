#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResource_ResourceCost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIResource_ResourceCost)
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIResource_ResourceCost;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIResource_ResourceCost);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResource_ResourceCost, "", "SIResource/ResourceCost");
// Dependencies SIResource::ResourceType
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIResource/ResourceCost
struct CORDL_TYPE SIResource_ResourceCost {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>*() ;

/// @brief Method CompareTo, addr 0x5ae7be8, size 0x9c, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::SIResource_ResourceCost  other) ;

/// @brief Method Equals, addr 0x5ae7c84, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5ae78bc, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::SIResource_ResourceCost  other) ;

/// @brief Method GetHashCode, addr 0x5ae7d0c, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5ae7d80, size 0xbc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5ae7b18, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::SIResource_ResourceType  type, int32_t  amount) ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>"
constexpr ::System::IComparable_1<::GlobalNamespace::SIResource_ResourceCost>* i___System__IComparable_1___GlobalNamespace__SIResource_ResourceCost_() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SIResource_ResourceCost>* i___System__IEquatable_1___GlobalNamespace__SIResource_ResourceCost_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SIResource_ResourceCost() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::SIResource_ResourceType", modifiers: "", def_value: None, comment: None }, CppParam { name: "amount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIResource_ResourceCost(::GlobalNamespace::SIResource_ResourceType  type, int32_t  amount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{338};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SIResource_ResourceType  type;

/// @brief Field amount, offset: 0x4, size: 0x4, def value: None
 int32_t  amount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResource_ResourceCost, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResource_ResourceCost, amount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResource_ResourceCost) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
