#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandSkeleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandSkeletonJoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandSkeleton)
namespace GlobalNamespace {
struct HandSkeleton___c__DisplayClass7_0;
}
namespace Oculus::Interaction::Input {
struct HandSkeletonJoint;
}
namespace Oculus::Interaction::Input {
class IReadOnlyHandSkeletonJointList;
}
namespace Oculus::Interaction::Input {
class IReadOnlyHandSkeleton;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandSkeleton;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandSkeleton*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandSkeleton*, "Oculus.Interaction.Input", "HandSkeleton");
// [DefaultMember("Item")]
// Dependencies Oculus.Interaction.Input.HandSkeletonJoint, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandSkeleton
class CORDL_TYPE HandSkeleton : public ::System::Object {
public:
// Declarations
using __c__DisplayClass7_0 = ::GlobalNamespace::HandSkeleton___c__DisplayClass7_0;

/// @brief Field DefaultLeftSkeleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultLeftSkeleton, put=setStaticF_DefaultLeftSkeleton)) ::Oculus::Interaction::Input::HandSkeleton*  DefaultLeftSkeleton;

/// @brief Field DefaultRightSkeleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultRightSkeleton, put=setStaticF_DefaultRightSkeleton)) ::Oculus::Interaction::Input::HandSkeleton*  DefaultRightSkeleton;

/// @brief [IsReadOnly]
 __declspec(property(get=get_Item)) ::Oculus::Interaction::Input::HandSkeletonJoint  Item[];

 __declspec(property(get=get_Joints)) ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*  Joints;

/// @brief Field joints, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_joints, put=__cordl_internal_set_joints)) ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>  joints;

/// @brief Convert operator to "::Oculus::Interaction::Input::IReadOnlyHandSkeleton"
constexpr operator  ::Oculus::Interaction::Input::IReadOnlyHandSkeleton*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList"
constexpr operator  ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*() noexcept;

/// @brief Method FromJoints, addr 0xa5021b0, size 0x168, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::HandSkeleton* FromJoints(::ArrayW<::UnityEngine::Transform*>  joints) ;

static inline ::Oculus::Interaction::Input::HandSkeleton* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <FromJoints>g__FindParentIndex|7_0, addr 0xa502318, size 0x110, virtual false, abstract: false, final false
static inline int32_t _FromJoints_g__FindParentIndex_7_0(int32_t  jointIndex, ::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint> const& __cordl_internal_get_joints() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>& __cordl_internal_get_joints() ;

constexpr void __cordl_internal_set_joints(::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>  value) ;

/// @brief Method .ctor, addr 0xa502428, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::HandSkeleton* getStaticF_DefaultLeftSkeleton() ;

static inline ::Oculus::Interaction::Input::HandSkeleton* getStaticF_DefaultRightSkeleton() ;

/// @brief Method get_Item, addr 0xa50217c, size 0x34, virtual true, abstract: false, final true
inline ::by_ref<::Oculus::Interaction::Input::HandSkeletonJoint> get_Item(int32_t  jointId) ;

/// @brief Method get_Joints, addr 0xa502178, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList* get_Joints() ;

/// @brief Convert to "::Oculus::Interaction::Input::IReadOnlyHandSkeleton"
constexpr ::Oculus::Interaction::Input::IReadOnlyHandSkeleton* i___Oculus__Interaction__Input__IReadOnlyHandSkeleton() noexcept;

/// @brief Convert to "::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList"
constexpr ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList* i___Oculus__Interaction__Input__IReadOnlyHandSkeletonJointList() noexcept;

static inline void setStaticF_DefaultLeftSkeleton(::Oculus::Interaction::Input::HandSkeleton*  value) ;

static inline void setStaticF_DefaultRightSkeleton(::Oculus::Interaction::Input::HandSkeleton*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandSkeleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandSkeleton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandSkeleton(HandSkeleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandSkeleton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandSkeleton(HandSkeleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16449};

/// @brief Field joints, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>  ___joints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandSkeleton, ___joints) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandSkeleton) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
