#pragma once
// IWYU pragma private; include "GlobalNamespace/ICustomKnockbackAbility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomKnockbackAbility)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ICustomKnockbackAbility;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICustomKnockbackAbility*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICustomKnockbackAbility*, "", "ICustomKnockbackAbility");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICustomKnockbackAbility
class CORDL_TYPE ICustomKnockbackAbility {
public:
// Declarations
/// @brief Method CalculateImpulse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Nullable_1<::UnityEngine::Vector3> CalculateImpulse(::UnityEngine::Transform*  targetTransform) ;

// Ctor Parameters [CppParam { name: "", ty: "ICustomKnockbackAbility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICustomKnockbackAbility(ICustomKnockbackAbility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
