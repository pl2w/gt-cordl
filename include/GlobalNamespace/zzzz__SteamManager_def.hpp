#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamManager)
namespace Steamworks {
class SteamAPIWarningMessageHook_t;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteamManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamManager*, "", "SteamManager");
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamManager
class CORDL_TYPE SteamManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_SteamAPIWarningMessageHook, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SteamAPIWarningMessageHook, put=__cordl_internal_set_m_SteamAPIWarningMessageHook)) ::Steamworks::SteamAPIWarningMessageHook_t*  m_SteamAPIWarningMessageHook;

/// @brief Field m_bInitialized, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bInitialized, put=__cordl_internal_set_m_bInitialized)) bool  m_bInitialized;

/// @brief Field s_EverInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_EverInitialized, put=setStaticF_s_EverInitialized)) bool  s_EverInitialized;

/// @brief Field s_instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_instance, put=setStaticF_s_instance)) ::UnityW<::GlobalNamespace::SteamManager>  s_instance;

/// @brief Method Awake, addr 0x5ac394c, size 0x418, virtual true, abstract: false, final false
inline void Awake() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method InitOnPlayMode, addr 0x5ac38fc, size 0x50, virtual false, abstract: false, final false
static inline void InitOnPlayMode() ;

static inline ::GlobalNamespace::SteamManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5ac3e80, size 0xbc, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x5ac3d64, size 0x11c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// [MonoPInvokeCallback(typeof(Steamworks.SteamAPIWarningMessageHook_t))]
/// @brief Method SteamAPIDebugTextHook, addr 0x5ac378c, size 0x58, virtual false, abstract: false, final false
static inline void SteamAPIDebugTextHook(int32_t  nSeverity, ::System::Text::StringBuilder*  pchDebugText) ;

/// @brief Method Update, addr 0x5ac3f3c, size 0x14, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Steamworks::SteamAPIWarningMessageHook_t* const& __cordl_internal_get_m_SteamAPIWarningMessageHook() const;

constexpr ::Steamworks::SteamAPIWarningMessageHook_t*& __cordl_internal_get_m_SteamAPIWarningMessageHook() ;

constexpr bool const& __cordl_internal_get_m_bInitialized() const;

constexpr bool& __cordl_internal_get_m_bInitialized() ;

constexpr void __cordl_internal_set_m_SteamAPIWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  value) ;

constexpr void __cordl_internal_set_m_bInitialized(bool  value) ;

/// @brief Method .ctor, addr 0x5ac3f50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_s_EverInitialized() ;

static inline ::UnityW<::GlobalNamespace::SteamManager> getStaticF_s_instance() ;

/// @brief Method get_Initialized, addr 0x5ac38e0, size 0x1c, virtual false, abstract: false, final false
static inline bool get_Initialized() ;

/// @brief Method get_Instance, addr 0x5ac37e4, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SteamManager> get_Instance() ;

static inline void setStaticF_s_EverInitialized(bool  value) ;

static inline void setStaticF_s_instance(::UnityW<::GlobalNamespace::SteamManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamManager(SteamManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamManager(SteamManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3358};

/// @brief Field m_bInitialized, offset: 0x20, size: 0x1, def value: None
 bool  ___m_bInitialized;

/// @brief Field m_SteamAPIWarningMessageHook, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::SteamAPIWarningMessageHook_t*  ___m_SteamAPIWarningMessageHook;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamManager, ___m_bInitialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamManager, ___m_SteamAPIWarningMessageHook) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
