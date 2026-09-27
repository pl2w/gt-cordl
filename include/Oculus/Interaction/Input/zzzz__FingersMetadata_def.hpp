#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FingersMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FingersMetadata)
namespace Oculus::Interaction::Input {
class FingersMetadata___c__DisplayClass10_0;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct JointFreedom;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class FingersMetadata;
}
namespace Oculus::Interaction::Input {
class FingersMetadata___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::FingersMetadata*);
MARK_REF_T(::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::FingersMetadata*, "Oculus.Interaction.Input", "FingersMetadata");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0*, "Oculus.Interaction.Input", "FingersMetadata/<>c__DisplayClass10_0");
// Dependencies Oculus.Interaction.Input.HandFinger, Oculus.Interaction.Input.HandJointId, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.FingersMetadata
class CORDL_TYPE FingersMetadata : public ::System::Object {
public:
// Declarations
using __c__DisplayClass10_0 = ::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0;

/// @brief Field FINGER_TO_JOINTS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FINGER_TO_JOINTS, put=setStaticF_FINGER_TO_JOINTS)) ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  FINGER_TO_JOINTS;

/// @brief Field FINGER_TO_JOINT_INDEX, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FINGER_TO_JOINT_INDEX, put=setStaticF_FINGER_TO_JOINT_INDEX)) ::ArrayW<::ArrayW<int32_t>>  FINGER_TO_JOINT_INDEX;

/// @brief Field HAND_JOINT_CAN_MOVE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HAND_JOINT_CAN_MOVE, put=setStaticF_HAND_JOINT_CAN_MOVE)) ::ArrayW<bool>  HAND_JOINT_CAN_MOVE;

/// @brief Field HAND_JOINT_CAN_SPREAD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HAND_JOINT_CAN_SPREAD, put=setStaticF_HAND_JOINT_CAN_SPREAD)) ::ArrayW<bool>  HAND_JOINT_CAN_SPREAD;

/// @brief Field HAND_JOINT_IDS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HAND_JOINT_IDS, put=setStaticF_HAND_JOINT_IDS)) ::ArrayW<::Oculus::Interaction::Input::HandJointId>  HAND_JOINT_IDS;

/// @brief Field JOINT_TO_FINGER, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JOINT_TO_FINGER, put=setStaticF_JOINT_TO_FINGER)) ::ArrayW<::Oculus::Interaction::Input::HandFinger>  JOINT_TO_FINGER;

/// @brief Field JOINT_TO_FINGER_INDEX, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JOINT_TO_FINGER_INDEX, put=setStaticF_JOINT_TO_FINGER_INDEX)) ::ArrayW<int32_t>  JOINT_TO_FINGER_INDEX;

/// @brief Field JOINT_TO_INDEX, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JOINT_TO_INDEX, put=setStaticF_JOINT_TO_INDEX)) ::ArrayW<int32_t>  JOINT_TO_INDEX;

/// @brief Method DefaultFingersFreedom, addr 0xa50c2f8, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<::Oculus::Interaction::Input::JointFreedom> DefaultFingersFreedom() ;

/// @brief Method HandJointIdToIndex, addr 0xa509afc, size 0x7c, virtual false, abstract: false, final false
static inline int32_t HandJointIdToIndex(::Oculus::Interaction::Input::HandJointId  id) ;

/// @brief Method InitializeCanMove, addr 0xa50ca90, size 0x12c, virtual false, abstract: false, final false
static inline ::ArrayW<bool> InitializeCanMove() ;

/// @brief Method InitializeCanSpread, addr 0xa50c94c, size 0x144, virtual false, abstract: false, final false
static inline ::ArrayW<bool> InitializeCanSpread() ;

/// @brief Method InitializeFingerToJoint, addr 0xa50c4dc, size 0x1b8, virtual false, abstract: false, final false
static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> InitializeFingerToJoint() ;

/// @brief Method InitializeFingerToJointIndex, addr 0xa50c694, size 0x194, virtual false, abstract: false, final false
static inline ::ArrayW<::ArrayW<int32_t>> InitializeFingerToJointIndex() ;

/// @brief Method InitializeHandJointIdToIndex, addr 0xa50c368, size 0x16c, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> InitializeHandJointIdToIndex() ;

/// @brief Method InitializeJointToFingerIndex, addr 0xa50c828, size 0x124, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> InitializeJointToFingerIndex() ;

static inline ::Oculus::Interaction::Input::FingersMetadata* New_ctor() ;

/// @brief Method .ctor, addr 0xa50cbbc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> getStaticF_FINGER_TO_JOINTS() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF_FINGER_TO_JOINT_INDEX() ;

static inline ::ArrayW<bool> getStaticF_HAND_JOINT_CAN_MOVE() ;

static inline ::ArrayW<bool> getStaticF_HAND_JOINT_CAN_SPREAD() ;

static inline ::ArrayW<::Oculus::Interaction::Input::HandJointId> getStaticF_HAND_JOINT_IDS() ;

static inline ::ArrayW<::Oculus::Interaction::Input::HandFinger> getStaticF_JOINT_TO_FINGER() ;

static inline ::ArrayW<int32_t> getStaticF_JOINT_TO_FINGER_INDEX() ;

static inline ::ArrayW<int32_t> getStaticF_JOINT_TO_INDEX() ;

static inline void setStaticF_FINGER_TO_JOINTS(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value) ;

static inline void setStaticF_FINGER_TO_JOINT_INDEX(::ArrayW<::ArrayW<int32_t>>  value) ;

static inline void setStaticF_HAND_JOINT_CAN_MOVE(::ArrayW<bool>  value) ;

static inline void setStaticF_HAND_JOINT_CAN_SPREAD(::ArrayW<bool>  value) ;

static inline void setStaticF_HAND_JOINT_IDS(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value) ;

static inline void setStaticF_JOINT_TO_FINGER(::ArrayW<::Oculus::Interaction::Input::HandFinger>  value) ;

static inline void setStaticF_JOINT_TO_FINGER_INDEX(::ArrayW<int32_t>  value) ;

static inline void setStaticF_JOINT_TO_INDEX(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingersMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingersMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingersMetadata(FingersMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingersMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingersMetadata(FingersMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16484};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::FingersMetadata) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies Oculus.Interaction.Input.HandJointId, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.FingersMetadata/<>c__DisplayClass10_0
class CORDL_TYPE FingersMetadata___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field jointId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_jointId, put=__cordl_internal_set_jointId)) ::Oculus::Interaction::Input::HandJointId  jointId;

static inline ::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <InitializeHandJointIdToIndex>b__0, addr 0xa50cd20, size 0x10, virtual false, abstract: false, final false
inline bool _InitializeHandJointIdToIndex_b__0(::Oculus::Interaction::Input::HandJointId  joint) ;

constexpr ::Oculus::Interaction::Input::HandJointId const& __cordl_internal_get_jointId() const;

constexpr ::Oculus::Interaction::Input::HandJointId& __cordl_internal_get_jointId() ;

constexpr void __cordl_internal_set_jointId(::Oculus::Interaction::Input::HandJointId  value) ;

/// @brief Method .ctor, addr 0xa50c4d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingersMetadata___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingersMetadata___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingersMetadata___c__DisplayClass10_0(FingersMetadata___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingersMetadata___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingersMetadata___c__DisplayClass10_0(FingersMetadata___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16483};

/// @brief Field jointId, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  ___jointId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0, ___jointId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::FingersMetadata___c__DisplayClass10_0) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
