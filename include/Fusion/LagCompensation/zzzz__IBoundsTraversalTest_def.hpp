#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/IBoundsTraversalTest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBoundsTraversalTest)
namespace Fusion::LagCompensation {
struct AABB;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class IBoundsTraversalTest;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::IBoundsTraversalTest*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::IBoundsTraversalTest*, "Fusion.LagCompensation", "IBoundsTraversalTest");
// Dependencies 
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.IBoundsTraversalTest
class CORDL_TYPE IBoundsTraversalTest {
public:
// Declarations
/// @brief Method Check, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds) ;

// Ctor Parameters [CppParam { name: "", ty: "IBoundsTraversalTest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBoundsTraversalTest(IBoundsTraversalTest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::LagCompensation
