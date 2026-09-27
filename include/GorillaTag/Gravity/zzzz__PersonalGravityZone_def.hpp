#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/PersonalGravityZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
CORDL_MODULE_EXPORT(PersonalGravityZone)
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class PersonalGravityZone;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::PersonalGravityZone*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::PersonalGravityZone*, "GorillaTag.Gravity", "PersonalGravityZone");
// Dependencies GorillaTag.Gravity.BasicGravityZone
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.PersonalGravityZone
class CORDL_TYPE PersonalGravityZone : public ::GorillaTag::Gravity::BasicGravityZone {
public:
// Declarations
/// @brief Method GetGravityVectorAtPoint, addr 0x5d3b59c, size 0x1c, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGravityVectorAtPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPosition, /* [IsReadOnly] */ ::by_ref<::GorillaTag::Gravity::MonkeGravityController*>  controller) ;

static inline ::GorillaTag::Gravity::PersonalGravityZone* New_ctor() ;

/// @brief Method OnTargetExited, addr 0x5d3b724, size 0x4, virtual true, abstract: false, final false
inline void OnTargetExited(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method OnTargetFilteredOut, addr 0x5d3b728, size 0x4, virtual true, abstract: false, final false
inline void OnTargetFilteredOut(::GorillaTag::Gravity::MonkeGravityController*  target) ;

/// @brief Method ResetLocalPlayerIfMatch, addr 0x5d3b5b8, size 0x16c, virtual false, abstract: false, final false
inline void ResetLocalPlayerIfMatch(::GorillaTag::Gravity::MonkeGravityController*  controller) ;

/// @brief Method SetLocalPlayerGravityDirection, addr 0x5d3b44c, size 0xb8, virtual false, abstract: false, final false
inline void SetLocalPlayerGravityDirection(::UnityEngine::Vector3  direction) ;

/// @brief Method SetLocalPlayerGravityDirection, addr 0x5d3b504, size 0x98, virtual false, abstract: false, final false
inline void SetLocalPlayerGravityDirection(::UnityEngine::Transform*  referenceDir) ;

/// @brief Method .ctor, addr 0x5d3b72c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PersonalGravityZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PersonalGravityZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PersonalGravityZone(PersonalGravityZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PersonalGravityZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PersonalGravityZone(PersonalGravityZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Gravity::PersonalGravityZone) == 0x80, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
