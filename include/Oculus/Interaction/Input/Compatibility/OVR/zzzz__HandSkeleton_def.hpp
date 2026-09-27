#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandSkeleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandSkeletonJoint_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandSkeleton)
namespace GlobalNamespace {
struct HandSkeleton___c__DisplayClass7_0;
}
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct HandSkeletonJoint;
}
namespace Oculus::Interaction::Input::Compatibility::OVR {
class HandSkeleton___c;
}
namespace Oculus::Interaction::Input::Compatibility::OVR {
class IReadOnlyHandSkeletonJointList;
}
namespace Oculus::Interaction::Input::Compatibility::OVR {
class IReadOnlyHandSkeleton;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
class HandSkeleton;
}
namespace Oculus::Interaction::Input::Compatibility::OVR {
class HandSkeleton___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*);
MARK_REF_T(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*, "Oculus.Interaction.Input.Compatibility.OVR", "HandSkeleton");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*, "Oculus.Interaction.Input.Compatibility.OVR", "HandSkeleton/<>c");
// [DefaultMember("Item")]
// Dependencies Oculus.Interaction.Input.Compatibility.OVR.HandSkeletonJoint, System.Object
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.HandSkeleton
class CORDL_TYPE HandSkeleton : public ::System::Object {
public:
// Declarations
using __c__DisplayClass7_0 = ::GlobalNamespace::HandSkeleton___c__DisplayClass7_0;

using __c = ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c;

/// @brief Field DefaultLeftSkeleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultLeftSkeleton, put=setStaticF_DefaultLeftSkeleton)) ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*  DefaultLeftSkeleton;

/// @brief Field DefaultRightSkeleton, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultRightSkeleton, put=setStaticF_DefaultRightSkeleton)) ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*  DefaultRightSkeleton;

/// @brief [IsReadOnly]
 __declspec(property(get=get_Item)) ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint  Item[];

 __declspec(property(get=get_Joints)) ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*  Joints;

/// @brief Field joints, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_joints, put=__cordl_internal_set_joints)) ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>  joints;

/// @brief Convert operator to "::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton"
constexpr operator  ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList"
constexpr operator  ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList*() noexcept;

/// @brief Method FromJoints, addr 0xa516ae8, size 0x16c, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* FromJoints(::ArrayW<::UnityEngine::Transform*>  joints) ;

static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <FromJoints>g__FindParentIndex|7_0, addr 0xa516c54, size 0x110, virtual false, abstract: false, final false
static inline int32_t _FromJoints_g__FindParentIndex_7_0(int32_t  jointIndex, ::by_ref<::GlobalNamespace::HandSkeleton___c__DisplayClass7_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint> const& __cordl_internal_get_joints() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>& __cordl_internal_get_joints() ;

constexpr void __cordl_internal_set_joints(::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>  value) ;

/// @brief Method .ctor, addr 0xa516d64, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* getStaticF_DefaultLeftSkeleton() ;

static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton* getStaticF_DefaultRightSkeleton() ;

/// @brief Method get_Item, addr 0xa516ab4, size 0x34, virtual true, abstract: false, final true
inline ::by_ref<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint> get_Item(int32_t  jointId) ;

/// @brief Method get_Joints, addr 0xa516ab0, size 0x4, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList* get_Joints() ;

/// @brief Convert to "::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton"
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeleton* i___Oculus__Interaction__Input__Compatibility__OVR__IReadOnlyHandSkeleton() noexcept;

/// @brief Convert to "::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList"
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::IReadOnlyHandSkeletonJointList* i___Oculus__Interaction__Input__Compatibility__OVR__IReadOnlyHandSkeletonJointList() noexcept;

static inline void setStaticF_DefaultLeftSkeleton(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*  value) ;

static inline void setStaticF_DefaultRightSkeleton(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16542};

/// @brief Field joints, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint>  ___joints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton, ___joints) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.HandSkeleton/<>c
class CORDL_TYPE HandSkeleton___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*  __9;

static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c* New_ctor() ;

/// @brief Method <.cctor>b__9_0, addr 0xa517cb4, size 0x70, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint __cctor_b__9_0(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeletonJoint  joint) ;

/// @brief Method .ctor, addr 0xa517cac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c* getStaticF___9() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandSkeleton___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandSkeleton___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandSkeleton___c(HandSkeleton___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandSkeleton___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandSkeleton___c(HandSkeleton___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::Compatibility::OVR::HandSkeleton___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
