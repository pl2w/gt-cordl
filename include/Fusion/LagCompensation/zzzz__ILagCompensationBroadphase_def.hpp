#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/ILagCompensationBroadphase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILagCompensationBroadphase)
namespace Fusion::LagCompensation {
class IBoundsTraversalTest;
}
namespace Fusion {
class HitboxRoot;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class ILagCompensationBroadphase;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::ILagCompensationBroadphase*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::ILagCompensationBroadphase*, "Fusion.LagCompensation", "ILagCompensationBroadphase");
// Dependencies 
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.ILagCompensationBroadphase
class CORDL_TYPE ILagCompensationBroadphase {
public:
// Declarations
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Add(::Fusion::HitboxRoot*  root) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyFrom(::Fusion::LagCompensation::ILagCompensationBroadphase*  other) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Remove(::Fusion::HitboxRoot*  root) ;

/// @brief Method Traverse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Traverse(::Fusion::LagCompensation::IBoundsTraversalTest*  hitTest, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  candidateRoots, int32_t  layerMask) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(::Fusion::HitboxRoot*  changed, int32_t  tick) ;

// Ctor Parameters [CppParam { name: "", ty: "ILagCompensationBroadphase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILagCompensationBroadphase(ILagCompensationBroadphase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19416};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::LagCompensation
