#pragma once
// IWYU pragma private; include "Liv/Lck/LckMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckMonitor)
namespace Liv::Lck {
class ILckMonitor;
}
namespace Liv::Lck {
class LckMonitor_LckMonitorRenderTextureSetDelegate;
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
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Liv::Lck {
class LckMonitor;
}
namespace Liv::Lck {
class LckMonitor_LckMonitorRenderTextureSetDelegate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckMonitor*);
MARK_REF_T(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckMonitor*, "Liv.Lck", "LckMonitor");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*, "Liv.Lck", "LckMonitor/LckMonitorRenderTextureSetDelegate");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckMonitor
class CORDL_TYPE LckMonitor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LckMonitorRenderTextureSetDelegate = ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate;

 __declspec(property(get=get_MonitorId)) ::StringW  MonitorId;

/// @brief Field OnRenderTextureSet, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRenderTextureSet, put=__cordl_internal_set_OnRenderTextureSet)) ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*  OnRenderTextureSet;

/// @brief Field _monitorId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitorId, put=__cordl_internal_set__monitorId)) ::StringW  _monitorId;

/// @brief Convert operator to "::Liv::Lck::ILckMonitor"
constexpr operator  ::Liv::Lck::ILckMonitor*() noexcept;

static inline ::Liv::Lck::LckMonitor* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9ce4960, size 0x54, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x9ce48a4, size 0xa0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetRenderTexture, addr 0x9ce4944, size 0x1c, virtual true, abstract: false, final false
inline void SetRenderTexture(::UnityEngine::RenderTexture*  renderTexture) ;

constexpr ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate* const& __cordl_internal_get_OnRenderTextureSet() const;

constexpr ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*& __cordl_internal_get_OnRenderTextureSet() ;

constexpr ::StringW const& __cordl_internal_get__monitorId() const;

constexpr ::StringW& __cordl_internal_get__monitorId() ;

constexpr void __cordl_internal_set_OnRenderTextureSet(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*  value) ;

constexpr void __cordl_internal_set__monitorId(::StringW  value) ;

/// @brief Method .ctor, addr 0x9ce49b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnRenderTextureSet, addr 0x9ce4764, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRenderTextureSet(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*  value) ;

/// @brief Method get_MonitorId, addr 0x9ce489c, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_MonitorId() ;

/// @brief Convert to "::Liv::Lck::ILckMonitor"
constexpr ::Liv::Lck::ILckMonitor* i___Liv__Lck__ILckMonitor() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnRenderTextureSet, addr 0x9ce4800, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRenderTextureSet(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMonitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMonitor(LckMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMonitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMonitor(LckMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24736};

/// [CompilerGenerated]
/// @brief Field OnRenderTextureSet, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate*  ___OnRenderTextureSet;

/// [SerializeField]
/// @brief Field _monitorId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____monitorId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckMonitor, ___OnRenderTextureSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckMonitor, ____monitorId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckMonitor) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck
// Dependencies System.MulticastDelegate
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckMonitor/LckMonitorRenderTextureSetDelegate
class CORDL_TYPE LckMonitor_LckMonitorRenderTextureSetDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9ce4ad8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::RenderTexture*  renderTexture, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9ce4af8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9ce4ac4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::RenderTexture*  renderTexture) ;

static inline ::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9ce49bc, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckMonitor_LckMonitorRenderTextureSetDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckMonitor_LckMonitorRenderTextureSetDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckMonitor_LckMonitorRenderTextureSetDelegate(LckMonitor_LckMonitorRenderTextureSetDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckMonitor_LckMonitorRenderTextureSetDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckMonitor_LckMonitorRenderTextureSetDelegate(LckMonitor_LckMonitorRenderTextureSetDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24735};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckMonitor_LckMonitorRenderTextureSetDelegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck
