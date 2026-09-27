#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/IHitboxColliderContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IHitboxColliderContainer)
namespace Fusion::LagCompensation {
struct HitboxCollider;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class IHitboxColliderContainer;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::IHitboxColliderContainer*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::IHitboxColliderContainer*, "Fusion.LagCompensation", "IHitboxColliderContainer");
// Dependencies 
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.IHitboxColliderContainer
class CORDL_TYPE IHitboxColliderContainer {
public:
// Declarations
/// @brief Method GetCollider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> GetCollider(int32_t  index) ;

/// @brief Method GetNextCollider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> GetNextCollider(::by_ref<int32_t>  index) ;

/// @brief Method GetNextTempCollider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::by_ref<::Fusion::LagCompensation::HitboxCollider> GetNextTempCollider(::by_ref<int32_t>  tmpIndex) ;

/// @brief Method ReleaseCollider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReleaseCollider(int32_t  index) ;

/// @brief Method ReleaseTempColliders, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReleaseTempColliders() ;

// Ctor Parameters [CppParam { name: "", ty: "IHitboxColliderContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHitboxColliderContainer(IHitboxColliderContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::LagCompensation
