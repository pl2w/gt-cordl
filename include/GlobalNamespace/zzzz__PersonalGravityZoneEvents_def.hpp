#pragma once
// IWYU pragma private; include "GlobalNamespace/PersonalGravityZoneEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PersonalGravityZoneEvents)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PersonalGravityZoneEvents;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PersonalGravityZoneEvents*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PersonalGravityZoneEvents*, "", "PersonalGravityZoneEvents");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PersonalGravityZoneEvents
class CORDL_TYPE PersonalGravityZoneEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::PersonalGravityZoneEvents* New_ctor() ;

/// @brief Method SetLocalPlayerGravityDirection, addr 0x5abbcd4, size 0xbc, virtual false, abstract: false, final false
inline void SetLocalPlayerGravityDirection(::UnityEngine::Vector3  direction) ;

/// @brief Method SetLocalPlayerGravityDirection, addr 0x5abbd90, size 0x9c, virtual false, abstract: false, final false
inline void SetLocalPlayerGravityDirection(::UnityEngine::Transform*  referenceDir) ;

/// @brief Method .ctor, addr 0x5abbe2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersonalGravityZoneEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersonalGravityZoneEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersonalGravityZoneEvents(PersonalGravityZoneEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersonalGravityZoneEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersonalGravityZoneEvents(PersonalGravityZoneEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PersonalGravityZoneEvents) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
