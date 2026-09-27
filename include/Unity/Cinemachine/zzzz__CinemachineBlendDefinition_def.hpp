#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBlendDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_Styles_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineBlendDefinition)
namespace GlobalNamespace {
struct CinemachineBlendDefinition_Styles;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Cinemachine {
class CinemachineBlendDefinition_LookupBlendDelegate;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineBlendDefinition_LookupBlendDelegate;
}
namespace Unity::Cinemachine {
struct CinemachineBlendDefinition;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*);
MARK_VAL_T(::Unity::Cinemachine::CinemachineBlendDefinition);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate*, "Unity.Cinemachine", "CinemachineBlendDefinition/LookupBlendDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineBlendDefinition, "Unity.Cinemachine", "CinemachineBlendDefinition");
// Dependencies Unity.Cinemachine.CinemachineBlendDefinition::Styles, UnityEngine.AnimationCurve
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineBlendDefinition
struct CORDL_TYPE CinemachineBlendDefinition {
public:
// Declarations
using Styles = ::GlobalNamespace::CinemachineBlendDefinition_Styles;

using LookupBlendDelegate = ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate;

 __declspec(property(get=get_BlendCurve)) ::UnityEngine::AnimationCurve*  BlendCurve;

 __declspec(property(get=get_BlendTime)) float_t  BlendTime;

/// @brief Field s_StandardCurves, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StandardCurves, put=setStaticF_s_StandardCurves)) ::ArrayW<::UnityEngine::AnimationCurve*>  s_StandardCurves;

/// @brief Method CreateStandardCurves, addr 0xaeaef78, size 0x55c, virtual false, abstract: false, final false
inline void CreateStandardCurves() ;

/// @brief Method .ctor, addr 0xaeaef64, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CinemachineBlendDefinition_Styles  style, float_t  time) ;

static inline ::ArrayW<::UnityEngine::AnimationCurve*> getStaticF_s_StandardCurves() ;

/// @brief Method get_BlendCurve, addr 0xaeaf4d4, size 0xc8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_BlendCurve() ;

/// @brief Method get_BlendTime, addr 0xaeaef4c, size 0x18, virtual false, abstract: false, final false
inline float_t get_BlendTime() ;

static inline void setStaticF_s_StandardCurves(::ArrayW<::UnityEngine::AnimationCurve*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBlendDefinition() ;

// Ctor Parameters [CppParam { name: "Style", ty: "::GlobalNamespace::CinemachineBlendDefinition_Styles", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CustomCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineBlendDefinition(::GlobalNamespace::CinemachineBlendDefinition_Styles  Style, float_t  Time, ::UnityEngine::AnimationCurve*  CustomCurve) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22268};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("Shape of the blend curve")]
/// [FormerlySerializedAs("m_Style")]
/// @brief Field Style, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineBlendDefinition_Styles  Style;

/// [Tooltip("Duration of the blend, in seconds")]
/// [FormerlySerializedAs("m_Time")]
/// @brief Field Time, offset: 0x4, size: 0x4, def value: None
 float_t  Time;

/// [FormerlySerializedAs("m_CustomCurve")]
/// @brief Field CustomCurve, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  CustomCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineBlendDefinition, Style) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBlendDefinition, Time) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineBlendDefinition, CustomCurve) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineBlendDefinition) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineBlendDefinition/LookupBlendDelegate
class CORDL_TYPE CinemachineBlendDefinition_LookupBlendDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaeaf6bc, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaeaf6e4, size 0x2c, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaeaf6a8, size 0x14, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::CinemachineBlendDefinition Invoke(::Unity::Cinemachine::ICinemachineCamera*  outgoing, ::Unity::Cinemachine::ICinemachineCamera*  incoming) ;

static inline ::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaeaf59c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBlendDefinition_LookupBlendDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBlendDefinition_LookupBlendDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineBlendDefinition_LookupBlendDelegate(CinemachineBlendDefinition_LookupBlendDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineBlendDefinition_LookupBlendDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineBlendDefinition_LookupBlendDelegate(CinemachineBlendDefinition_LookupBlendDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22266};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineBlendDefinition_LookupBlendDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
