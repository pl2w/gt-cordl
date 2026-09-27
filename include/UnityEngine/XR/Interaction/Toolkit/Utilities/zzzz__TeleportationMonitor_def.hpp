#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/TeleportationMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportationMonitor)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class LocomotionProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyTransformer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class ProviderMonitor_1_TeleportationMonitor___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TeleportationMonitor_PoseContainer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class TeleportationMonitor_ProviderMonitor_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TeleportationMonitor_ProviderMonitor;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class ProviderMonitor_1_TeleportationMonitor___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TeleportationMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TeleportationMonitor_PoseContainer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class TeleportationMonitor_ProviderMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class TeleportationMonitor_ProviderMonitor_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*);
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TeleportationMonitor/ProviderMonitor`1/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TeleportationMonitor");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TeleportationMonitor/PoseContainer");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TeleportationMonitor/ProviderMonitor");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "TeleportationMonitor/ProviderMonitor`1");
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor::ProviderMonitor
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor
class CORDL_TYPE TeleportationMonitor : public ::System::Object {
public:
// Declarations
using PoseContainer = ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer;

using ProviderMonitor = ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor;

template<typename T>
using ProviderMonitor_1 = ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>;

/// @brief Field m_Monitors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Monitors, put=__cordl_internal_set_m_Monitors)) ::ArrayW<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>  m_Monitors;

/// @brief Field m_TeleportedFrame, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TeleportedFrame, put=__cordl_internal_set_m_TeleportedFrame)) int32_t  m_TeleportedFrame;

/// @brief Field teleported, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleported, put=__cordl_internal_set_teleported)) ::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*  teleported;

/// @brief Method AddInteractor, addr 0xb42814c, size 0x84, virtual false, abstract: false, final false
inline void AddInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method Initialize, addr 0xb427dec, size 0x360, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* New_ctor() ;

/// @brief Method OnTeleportedAlways, addr 0xb428244, size 0xa0, virtual false, abstract: false, final false
inline void OnTeleportedAlways(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*  poseContainer) ;

/// @brief Method OnTeleportedTurnAround, addr 0xb428410, size 0x12c, virtual false, abstract: false, final false
inline void OnTeleportedTurnAround(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*  poseContainer) ;

/// @brief Method RemoveInteractor, addr 0xb4281d0, size 0x74, virtual false, abstract: false, final false
inline void RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

constexpr ::ArrayW<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*> const& __cordl_internal_get_m_Monitors() const;

constexpr ::ArrayW<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>& __cordl_internal_get_m_Monitors() ;

constexpr int32_t const& __cordl_internal_get_m_TeleportedFrame() const;

constexpr int32_t& __cordl_internal_get_m_TeleportedFrame() ;

constexpr ::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>* const& __cordl_internal_get_teleported() const;

constexpr ::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*& __cordl_internal_get_teleported() ;

constexpr void __cordl_internal_set_m_Monitors(::ArrayW<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>  value) ;

constexpr void __cordl_internal_set_m_TeleportedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_teleported(::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*  value) ;

/// @brief Method .ctor, addr 0xb42853c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_teleported, addr 0xb427c8c, size 0xb0, virtual false, abstract: false, final false
inline void add_teleported(::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_teleported, addr 0xb427d3c, size 0xb0, virtual false, abstract: false, final false
inline void remove_teleported(::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationMonitor(TeleportationMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationMonitor(TeleportationMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11221};

/// [CompilerGenerated]
/// @brief Field teleported, offset: 0x10, size: 0x8, def value: None
 ::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*  ___teleported;

/// @brief Field m_TeleportedFrame, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_TeleportedFrame;

/// @brief Field m_Monitors, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>  ___m_Monitors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor, ___teleported) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor, ___m_TeleportedFrame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor, ___m_Monitors) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor::ProviderMonitor
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor/ProviderMonitor`1<T>
class CORDL_TYPE TeleportationMonitor_ProviderMonitor_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor {
public:
// Declarations
using __c = ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>;

/// @brief Field m_ProviderInteractors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProviderInteractors, put=__cordl_internal_set_m_ProviderInteractors)) ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*  m_ProviderInteractors;

/// @brief Field providerStepped, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_providerStepped, put=__cordl_internal_set_providerStepped)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  providerStepped;

/// @brief Field s_ProviderInteractorsPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProviderInteractorsPool, put=setStaticF_s_ProviderInteractorsPool)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>*  s_ProviderInteractorsPool;

/// @brief Field s_Providers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Providers, put=setStaticF_s_Providers)) ::System::Collections::Generic::List_1<T>*  s_Providers;

/// @brief Method AddInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method CaptureOriginPoseAfter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer* CaptureOriginPoseAfter(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer) ;

/// @brief Method CaptureOriginPoseBefore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CaptureOriginPoseBefore(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer) ;

/// @brief Method InitializeProvidersList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void InitializeProvidersList() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>* New_ctor() ;

/// @brief Method OnAfterStepLocomotion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnAfterStepLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

/// @brief Method OnBeforeStepLocomotion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void OnBeforeStepLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

/// @brief Method RemoveInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// [CompilerGenerated]
/// @brief Method <InitializeProvidersList>g__OnLocomotionProvidersChanged|6_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void _InitializeProvidersList_g__OnLocomotionProvidersChanged_6_0(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider) ;

constexpr ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>* const& __cordl_internal_get_m_ProviderInteractors() const;

constexpr ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*& __cordl_internal_get_m_ProviderInteractors() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>* const& __cordl_internal_get_providerStepped() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*& __cordl_internal_get_providerStepped() ;

constexpr void __cordl_internal_set_m_ProviderInteractors(::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*  value) ;

constexpr void __cordl_internal_set_providerStepped(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_providerStepped, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_providerStepped(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  value) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>* getStaticF_s_ProviderInteractorsPool() ;

static inline ::System::Collections::Generic::List_1<T>* getStaticF_s_Providers() ;

/// [CompilerGenerated]
/// @brief Method remove_providerStepped, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_providerStepped(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  value) ;

static inline void setStaticF_s_ProviderInteractorsPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>*  value) ;

static inline void setStaticF_s_Providers(::System::Collections::Generic::List_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationMonitor_ProviderMonitor_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor_ProviderMonitor_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationMonitor_ProviderMonitor_1(TeleportationMonitor_ProviderMonitor_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor_ProviderMonitor_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationMonitor_ProviderMonitor_1(TeleportationMonitor_ProviderMonitor_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11220};

/// [CompilerGenerated]
/// @brief Field providerStepped, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  ___providerStepped;

/// @brief Field m_ProviderInteractors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*  ___m_ProviderInteractors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor/ProviderMonitor`1/<>c<T>
class CORDL_TYPE ProviderMonitor_1_TeleportationMonitor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*  __9;

/// @brief Field <>9__6_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_1, put=setStaticF___9__6_1)) ::System::Predicate_1<T>*  __9__6_1;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>* New_ctor() ;

/// @brief Method <InitializeProvidersList>b__6_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _InitializeProvidersList_b__6_1(T  p) ;

/// @brief Method <.cctor>b__14_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>* __cctor_b__14_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>* getStaticF___9() ;

static inline ::System::Predicate_1<T>* getStaticF___9__6_1() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*  value) ;

static inline void setStaticF___9__6_1(::System::Predicate_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProviderMonitor_1_TeleportationMonitor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProviderMonitor_1_TeleportationMonitor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProviderMonitor_1_TeleportationMonitor___c(ProviderMonitor_1_TeleportationMonitor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProviderMonitor_1_TeleportationMonitor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProviderMonitor_1_TeleportationMonitor___c(ProviderMonitor_1_TeleportationMonitor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11219};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor/ProviderMonitor
class CORDL_TYPE TeleportationMonitor_ProviderMonitor : public ::System::Object {
public:
// Declarations
/// @brief Field s_OriginPoses, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OriginPoses, put=setStaticF_s_OriginPoses)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>,::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  s_OriginPoses;

/// @brief Method AddInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor* New_ctor() ;

/// @brief Method RemoveInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method .ctor, addr 0xb42864c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>,::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>* getStaticF_s_OriginPoses() ;

static inline void setStaticF_s_OriginPoses(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>,::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationMonitor_ProviderMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor_ProviderMonitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationMonitor_ProviderMonitor(TeleportationMonitor_ProviderMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor_ProviderMonitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationMonitor_ProviderMonitor(TeleportationMonitor_ProviderMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11218};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.Object, UnityEngine.Pose
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor/PoseContainer
class CORDL_TYPE TeleportationMonitor_PoseContainer : public ::System::Object {
public:
// Declarations
/// @brief Field afterPose, offset 0x2c, size 0x1c 
 __declspec(property(get=__cordl_internal_get_afterPose, put=__cordl_internal_set_afterPose)) ::UnityEngine::Pose  afterPose;

/// @brief Field beforePose, offset 0x10, size 0x1c 
 __declspec(property(get=__cordl_internal_get_beforePose, put=__cordl_internal_set_beforePose)) ::UnityEngine::Pose  beforePose;

/// @brief Field deltaPose, offset 0x48, size 0x1c 
 __declspec(property(get=__cordl_internal_get_deltaPose, put=__cordl_internal_set_deltaPose)) ::UnityEngine::Pose  deltaPose;

/// @brief Field m_AfterFrame, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AfterFrame, put=__cordl_internal_set_m_AfterFrame)) int32_t  m_AfterFrame;

/// @brief Field m_BeforeFrame, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BeforeFrame, put=__cordl_internal_set_m_BeforeFrame)) int32_t  m_BeforeFrame;

/// @brief Field m_DeltaFrame, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeltaFrame, put=__cordl_internal_set_m_DeltaFrame)) int32_t  m_DeltaFrame;

/// @brief Method CalculateDeltaPose, addr 0xb4282e4, size 0x12c, virtual false, abstract: false, final false
inline void CalculateDeltaPose() ;

/// @brief Method CaptureAfterPose, addr 0xb4285c0, size 0x74, virtual false, abstract: false, final false
inline void CaptureAfterPose(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer) ;

/// @brief Method CaptureBeforePose, addr 0xb42854c, size 0x74, virtual false, abstract: false, final false
inline void CaptureBeforePose(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer* New_ctor() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_afterPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_afterPose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_beforePose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_beforePose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_deltaPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_deltaPose() ;

constexpr int32_t const& __cordl_internal_get_m_AfterFrame() const;

constexpr int32_t& __cordl_internal_get_m_AfterFrame() ;

constexpr int32_t const& __cordl_internal_get_m_BeforeFrame() const;

constexpr int32_t& __cordl_internal_get_m_BeforeFrame() ;

constexpr int32_t const& __cordl_internal_get_m_DeltaFrame() const;

constexpr int32_t& __cordl_internal_get_m_DeltaFrame() ;

constexpr void __cordl_internal_set_afterPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_beforePose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_deltaPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_AfterFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_BeforeFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_DeltaFrame(int32_t  value) ;

/// @brief Method .ctor, addr 0xb428634, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportationMonitor_PoseContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor_PoseContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportationMonitor_PoseContainer(TeleportationMonitor_PoseContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportationMonitor_PoseContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportationMonitor_PoseContainer(TeleportationMonitor_PoseContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11217};

/// @brief Field beforePose, offset: 0x10, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___beforePose;

/// @brief Field afterPose, offset: 0x2c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___afterPose;

/// @brief Field deltaPose, offset: 0x48, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___deltaPose;

/// @brief Field m_BeforeFrame, offset: 0x64, size: 0x4, def value: None
 int32_t  ___m_BeforeFrame;

/// @brief Field m_AfterFrame, offset: 0x68, size: 0x4, def value: None
 int32_t  ___m_AfterFrame;

/// @brief Field m_DeltaFrame, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___m_DeltaFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer, ___beforePose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer, ___afterPose) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer, ___deltaPose) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer, ___m_BeforeFrame) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer, ___m_AfterFrame) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer, ___m_DeltaFrame) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer) == 0x70, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
