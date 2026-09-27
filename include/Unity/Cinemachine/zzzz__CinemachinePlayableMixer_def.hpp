#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePlayableMixer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachinePlayableMixer)
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
class CinemachinePlayableMixer_MasterDirectorDelegate;
}
namespace Unity::Cinemachine {
class ICameraOverrideStack;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachinePlayableMixer;
}
namespace Unity::Cinemachine {
class CinemachinePlayableMixer_MasterDirectorDelegate;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachinePlayableMixer*);
MARK_REF_T(::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePlayableMixer*, "Unity.Cinemachine", "CinemachinePlayableMixer");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*, "Unity.Cinemachine", "CinemachinePlayableMixer/MasterDirectorDelegate");
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePlayableMixer
class CORDL_TYPE CinemachinePlayableMixer : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using MasterDirectorDelegate = ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate;

/// @brief Field GetMasterPlayableDirector, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetMasterPlayableDirector, put=setStaticF_GetMasterPlayableDirector)) ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*  GetMasterPlayableDirector;

/// @brief Field Priority, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Priority, put=__cordl_internal_set_Priority)) int32_t  Priority;

/// @brief Field m_BrainOverrideId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BrainOverrideId, put=__cordl_internal_set_m_BrainOverrideId)) int32_t  m_BrainOverrideId;

/// @brief Field m_BrainOverrideStack, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BrainOverrideStack, put=__cordl_internal_set_m_BrainOverrideStack)) ::Unity::Cinemachine::ICameraOverrideStack*  m_BrainOverrideStack;

/// @brief Field m_PreviewPlay, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreviewPlay, put=__cordl_internal_set_m_PreviewPlay)) bool  m_PreviewPlay;

/// @brief Method GetDeltaTime, addr 0xaf008f0, size 0xc4, virtual false, abstract: false, final false
inline float_t GetDeltaTime(float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachinePlayableMixer* New_ctor() ;

/// @brief Method OnPlayableDestroy, addr 0xaf001f4, size 0xb4, virtual true, abstract: false, final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method PrepareFrame, addr 0xaf002a8, size 0x8, virtual true, abstract: false, final false
inline void PrepareFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method ProcessFrame, addr 0xaf002b0, size 0x5e0, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

constexpr int32_t const& __cordl_internal_get_Priority() const;

constexpr int32_t& __cordl_internal_get_Priority() ;

constexpr int32_t const& __cordl_internal_get_m_BrainOverrideId() const;

constexpr int32_t& __cordl_internal_get_m_BrainOverrideId() ;

constexpr ::Unity::Cinemachine::ICameraOverrideStack* const& __cordl_internal_get_m_BrainOverrideStack() const;

constexpr ::Unity::Cinemachine::ICameraOverrideStack*& __cordl_internal_get_m_BrainOverrideStack() ;

constexpr bool const& __cordl_internal_get_m_PreviewPlay() const;

constexpr bool& __cordl_internal_get_m_PreviewPlay() ;

constexpr void __cordl_internal_set_Priority(int32_t  value) ;

constexpr void __cordl_internal_set_m_BrainOverrideId(int32_t  value) ;

constexpr void __cordl_internal_set_m_BrainOverrideStack(::Unity::Cinemachine::ICameraOverrideStack*  value) ;

constexpr void __cordl_internal_set_m_PreviewPlay(bool  value) ;

/// @brief Method .ctor, addr 0xaf009b4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate* getStaticF_GetMasterPlayableDirector() ;

static inline void setStaticF_GetMasterPlayableDirector(::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePlayableMixer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePlayableMixer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePlayableMixer(CinemachinePlayableMixer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePlayableMixer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePlayableMixer(CinemachinePlayableMixer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22531};

/// @brief Field Priority, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Priority;

/// @brief Field m_BrainOverrideStack, offset: 0x18, size: 0x8, def value: None
 ::Unity::Cinemachine::ICameraOverrideStack*  ___m_BrainOverrideStack;

/// @brief Field m_BrainOverrideId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_BrainOverrideId;

/// @brief Field m_PreviewPlay, offset: 0x24, size: 0x1, def value: None
 bool  ___m_PreviewPlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachinePlayableMixer, ___Priority) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePlayableMixer, ___m_BrainOverrideStack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePlayableMixer, ___m_BrainOverrideId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePlayableMixer, ___m_PreviewPlay) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachinePlayableMixer) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.MulticastDelegate
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePlayableMixer/MasterDirectorDelegate
class CORDL_TYPE CinemachinePlayableMixer_MasterDirectorDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xaf00a74, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xaf00a90, size 0xc, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableDirector> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xaf00a60, size 0x14, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableDirector> Invoke() ;

static inline ::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaf009c4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePlayableMixer_MasterDirectorDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePlayableMixer_MasterDirectorDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePlayableMixer_MasterDirectorDelegate(CinemachinePlayableMixer_MasterDirectorDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePlayableMixer_MasterDirectorDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePlayableMixer_MasterDirectorDelegate(CinemachinePlayableMixer_MasterDirectorDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22530};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachinePlayableMixer_MasterDirectorDelegate) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
