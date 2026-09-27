#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandJointUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HandJointUtils)
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct HandFinger;
}
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct HandJointId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
class HandJointUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils*, "Oculus.Interaction.Input.Compatibility.OVR", "HandJointUtils");
// Dependencies Oculus.Interaction.Input.Compatibility.OVR.HandFinger, Oculus.Interaction.Input.Compatibility.OVR.HandJointId, System.Object
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.HandJointUtils
class CORDL_TYPE HandJointUtils : public ::System::Object {
public:
// Declarations
/// @brief Field FingerToJointList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FingerToJointList, put=setStaticF_FingerToJointList)) ::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>*  FingerToJointList;

/// @brief Field JointChildrenList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JointChildrenList, put=setStaticF_JointChildrenList)) ::ArrayW<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>  JointChildrenList;

/// @brief Field JointIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JointIds, put=setStaticF_JointIds)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>*  JointIds;

/// @brief Field JointParentList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JointParentList, put=setStaticF_JointParentList)) ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>  JointParentList;

/// @brief Field JointToFingerList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JointToFingerList, put=setStaticF_JointToFingerList)) ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>  JointToFingerList;

/// @brief Field _handFingerProximals, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__handFingerProximals, put=setStaticF__handFingerProximals)) ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>  _handFingerProximals;

/// @brief Method GetHandFingerProximal, addr 0xa515518, size 0x7c, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId GetHandFingerProximal(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  finger) ;

/// @brief Method GetHandFingerTip, addr 0xa515500, size 0x8, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId GetHandFingerTip(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  finger) ;

/// @brief Method IsFingerTip, addr 0xa515508, size 0x10, virtual false, abstract: false, final false
static inline bool IsFingerTip(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId  joint) ;

static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils* New_ctor() ;

/// @brief Method .ctor, addr 0xa515594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>* getStaticF_FingerToJointList() ;

static inline ::ArrayW<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>> getStaticF_JointChildrenList() ;

static inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>* getStaticF_JointIds() ;

static inline ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId> getStaticF_JointParentList() ;

static inline ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger> getStaticF_JointToFingerList() ;

static inline ::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId> getStaticF__handFingerProximals() ;

static inline void setStaticF_FingerToJointList(::System::Collections::Generic::List_1<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>*  value) ;

static inline void setStaticF_JointChildrenList(::ArrayW<::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>>  value) ;

static inline void setStaticF_JointIds(::System::Collections::Generic::List_1<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>*  value) ;

static inline void setStaticF_JointParentList(::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>  value) ;

static inline void setStaticF_JointToFingerList(::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandFinger>  value) ;

static inline void setStaticF__handFingerProximals(::ArrayW<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::Compatibility::OVR::HandJointUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
