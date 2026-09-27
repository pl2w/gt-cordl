#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandSkeletonOVR.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandSkeleton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandSkeletonOVR)
namespace GlobalNamespace {
struct OVRPlugin_BoneCapsule;
}
namespace GlobalNamespace {
struct OVRPlugin_Skeleton2;
}
namespace Oculus::Interaction::Input {
class HandSkeletonOVR___c__DisplayClass6_0;
}
namespace Oculus::Interaction::Input {
class HandSkeleton;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHandSkeletonProvider;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandSkeletonOVR;
}
namespace Oculus::Interaction::Input {
class HandSkeletonOVR___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandSkeletonOVR*);
MARK_REF_T(::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandSkeletonOVR*, "Oculus.Interaction.Input", "HandSkeletonOVR");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0*, "Oculus.Interaction.Input", "HandSkeletonOVR/<>c__DisplayClass6_0");
// [DefaultMember("Item")]
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies Oculus.Interaction.Input.HandSkeleton, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandSkeletonOVR
class CORDL_TYPE HandSkeletonOVR : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass6_0 = ::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0;

 __declspec(property(get=get_Item)) ::Oculus::Interaction::Input::HandSkeleton*  Item[];

/// @brief Field _skeletons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__skeletons, put=__cordl_internal_set__skeletons)) ::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>  _skeletons;

/// @brief Convert operator to "::Oculus::Interaction::Input::IHandSkeletonProvider"
constexpr operator  ::Oculus::Interaction::Input::IHandSkeletonProvider*() noexcept;

/// @brief Method ApplyToSkeleton, addr 0xa41f2c8, size 0x11c, virtual false, abstract: false, final false
static inline void ApplyToSkeleton(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>  ovrSkeleton, ::Oculus::Interaction::Input::HandSkeleton*  handSkeleton) ;

/// @brief Method Awake, addr 0xa41f22c, size 0x9c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateSkeletonData, addr 0xa41f3e4, size 0xb0, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::HandSkeleton* CreateSkeletonData(::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Method GetBoneRadius, addr 0xa41e37c, size 0x150, virtual false, abstract: false, final false
static inline float_t GetBoneRadius(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>  ovrSkeleton, int32_t  boneIndex) ;

static inline ::Oculus::Interaction::Input::HandSkeletonOVR* New_ctor() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandSkeleton*> const& __cordl_internal_get__skeletons() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>& __cordl_internal_get__skeletons() ;

constexpr void __cordl_internal_set__skeletons(::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>  value) ;

/// @brief Method .ctor, addr 0xa41f49c, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xa41f1fc, size 0x30, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::HandSkeleton* get_Item(::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Convert to "::Oculus::Interaction::Input::IHandSkeletonProvider"
constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider* i___Oculus__Interaction__Input__IHandSkeletonProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandSkeletonOVR() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandSkeletonOVR", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandSkeletonOVR(HandSkeletonOVR && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandSkeletonOVR", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandSkeletonOVR(HandSkeletonOVR const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31146};

/// @brief Field _skeletons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>  ____skeletons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandSkeletonOVR, ____skeletons) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandSkeletonOVR) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandSkeletonOVR/<>c__DisplayClass6_0
class CORDL_TYPE HandSkeletonOVR___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field boneIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_boneIndex, put=__cordl_internal_set_boneIndex)) int32_t  boneIndex;

static inline ::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <GetBoneRadius>b__0, addr 0xa41f5c8, size 0x14, virtual false, abstract: false, final false
inline bool _GetBoneRadius_b__0(::GlobalNamespace::OVRPlugin_BoneCapsule  c) ;

constexpr int32_t const& __cordl_internal_get_boneIndex() const;

constexpr int32_t& __cordl_internal_get_boneIndex() ;

constexpr void __cordl_internal_set_boneIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xa41f494, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandSkeletonOVR___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandSkeletonOVR___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandSkeletonOVR___c__DisplayClass6_0(HandSkeletonOVR___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandSkeletonOVR___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandSkeletonOVR___c__DisplayClass6_0(HandSkeletonOVR___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31145};

/// @brief Field boneIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___boneIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0, ___boneIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandSkeletonOVR___c__DisplayClass6_0) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
