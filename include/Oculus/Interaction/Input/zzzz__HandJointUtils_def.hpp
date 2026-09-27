#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandJointUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HandJointUtils)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandJointUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandJointUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandJointUtils*, "Oculus.Interaction.Input", "HandJointUtils");
// Dependencies Oculus.Interaction.Input.HandFinger, Oculus.Interaction.Input.HandJointId, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandJointUtils
class CORDL_TYPE HandJointUtils : public ::System::Object {
public:
// Declarations
/// @brief Field FingerToJointList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FingerToJointList, put=setStaticF_FingerToJointList)) ::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::HandJointId>>*  FingerToJointList;

/// @brief Field JointChildrenList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JointChildrenList, put=setStaticF_JointChildrenList)) ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  JointChildrenList;

/// @brief Field JointIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JointIds, put=setStaticF_JointIds)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*  JointIds;

/// @brief Field JointParentList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JointParentList, put=setStaticF_JointParentList)) ::ArrayW<::Oculus::Interaction::Input::HandJointId>  JointParentList;

/// @brief Field JointToFingerList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JointToFingerList, put=setStaticF_JointToFingerList)) ::ArrayW<::Oculus::Interaction::Input::HandFinger>  JointToFingerList;

/// @brief Field _handFingerProximals, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__handFingerProximals, put=setStaticF__handFingerProximals)) ::ArrayW<::Oculus::Interaction::Input::HandJointId>  _handFingerProximals;

/// @brief Method GetHandFingerProximal, addr 0xa5008b8, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::HandJointId GetHandFingerProximal(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetHandFingerTip, addr 0xa4fb648, size 0x14, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::HandJointId GetHandFingerTip(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method IsFingerTip, addr 0xa50089c, size 0x1c, virtual false, abstract: false, final false
static inline bool IsFingerTip(::Oculus::Interaction::Input::HandJointId  joint) ;

static inline ::Oculus::Interaction::Input::HandJointUtils* New_ctor() ;

/// @brief Method WristJointPosesToLocalRotations, addr 0xa500934, size 0x1e8, virtual false, abstract: false, final false
static inline bool WristJointPosesToLocalRotations(::ArrayW<::UnityEngine::Pose>  jointPoses, ::by_ref<::ArrayW<::UnityEngine::Quaternion>>  joints) ;

/// @brief Method .ctor, addr 0xa500b1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::HandJointId>>* getStaticF_FingerToJointList() ;

static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>> getStaticF_JointChildrenList() ;

static inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>* getStaticF_JointIds() ;

static inline ::ArrayW<::Oculus::Interaction::Input::HandJointId> getStaticF_JointParentList() ;

static inline ::ArrayW<::Oculus::Interaction::Input::HandFinger> getStaticF_JointToFingerList() ;

static inline ::ArrayW<::Oculus::Interaction::Input::HandJointId> getStaticF__handFingerProximals() ;

static inline void setStaticF_FingerToJointList(::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::HandJointId>>*  value) ;

static inline void setStaticF_JointChildrenList(::ArrayW<::ArrayW<::Oculus::Interaction::Input::HandJointId>>  value) ;

static inline void setStaticF_JointIds(::System::Collections::Generic::List_1<::Oculus::Interaction::Input::HandJointId>*  value) ;

static inline void setStaticF_JointParentList(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value) ;

static inline void setStaticF_JointToFingerList(::ArrayW<::Oculus::Interaction::Input::HandFinger>  value) ;

static inline void setStaticF__handFingerProximals(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandJointUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandJointUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandJointUtils(HandJointUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandJointUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandJointUtils(HandJointUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16441};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::HandJointUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
