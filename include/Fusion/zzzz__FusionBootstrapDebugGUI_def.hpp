#pragma once
// IWYU pragma private; include "Fusion/FusionBootstrapDebugGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionBootstrapDebugGUI)
namespace Fusion {
class FusionBootstrap;
}
namespace GlobalNamespace {
struct FusionBootstrap_Stage;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GUISkin;
}
// Forward declare root types
namespace Fusion {
class FusionBootstrapDebugGUI;
}
// Write type traits
MARK_REF_T(::Fusion::FusionBootstrapDebugGUI*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionBootstrapDebugGUI*, "Fusion", "FusionBootstrapDebugGUI");
// [RequireComponent(typeof(Fusion.FusionBootstrap))]
// [AddComponentMenu("Fusion/Fusion Boostrap Debug GUI")]
// [ScriptHelp(BackColor = (Fusion.ScriptHeaderBackColor)7)]
// Dependencies Fusion.Behaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionBootstrapDebugGUI
class CORDL_TYPE FusionBootstrapDebugGUI : public ::Fusion::Behaviour {
public:
// Declarations
/// @brief Field BaseSkin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_BaseSkin, put=__cordl_internal_set_BaseSkin)) ::UnityW<::UnityEngine::GUISkin>  BaseSkin;

/// @brief Field EnableHotkeys, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableHotkeys, put=__cordl_internal_set_EnableHotkeys)) bool  EnableHotkeys;

/// @brief Field _clientCount, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientCount, put=__cordl_internal_set__clientCount)) ::StringW  _clientCount;

/// @brief Field _isMultiplePeerMode, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMultiplePeerMode, put=__cordl_internal_set__isMultiplePeerMode)) bool  _isMultiplePeerMode;

/// @brief Field _networkDebugStart, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkDebugStart, put=__cordl_internal_set__networkDebugStart)) ::UnityW<::Fusion::FusionBootstrap>  _networkDebugStart;

/// @brief Field _nicifiedStageNames, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__nicifiedStageNames, put=__cordl_internal_set__nicifiedStageNames)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FusionBootstrap_Stage,::StringW>*  _nicifiedStageNames;

/// @brief Method Awake, addr 0x60ecb54, size 0xc4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ConvertEnumToNicifiedNameLookup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::Dictionary_2<T,::StringW>* ConvertEnumToNicifiedNameLookup(::StringW  prefix, ::System::Collections::Generic::Dictionary_2<T,::StringW>*  nonalloc) ;

/// @brief Method EnsureNetworkDebugStartExists, addr 0x60ecc18, size 0x17c, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::FusionBootstrap> EnsureNetworkDebugStartExists() ;

/// @brief Method GetClientCount, addr 0x60eca7c, size 0xd8, virtual false, abstract: false, final false
inline int32_t GetClientCount() ;

static inline ::Fusion::FusionBootstrapDebugGUI* New_ctor() ;

/// @brief Method OnGUI, addr 0x60ed37c, size 0xca0, virtual true, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnValidate, addr 0x60ec9b4, size 0x4, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x60ecd94, size 0x30, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartHostWithClients, addr 0x60ecf60, size 0xf4, virtual false, abstract: false, final false
inline void StartHostWithClients(::Fusion::FusionBootstrap*  nds) ;

/// @brief Method StartMultipleAutoClients, addr 0x60ed248, size 0x40, virtual false, abstract: false, final false
inline void StartMultipleAutoClients(::Fusion::FusionBootstrap*  nds) ;

/// @brief Method StartMultipleClients, addr 0x60ed154, size 0xf4, virtual false, abstract: false, final false
inline void StartMultipleClients(::Fusion::FusionBootstrap*  nds) ;

/// @brief Method StartMultipleSharedClients, addr 0x60ed288, size 0xf4, virtual false, abstract: false, final false
inline void StartMultipleSharedClients(::Fusion::FusionBootstrap*  nds) ;

/// @brief Method StartServerWithClients, addr 0x60ed054, size 0x100, virtual false, abstract: false, final false
inline void StartServerWithClients(::Fusion::FusionBootstrap*  nds) ;

/// @brief Method Update, addr 0x60ecdc4, size 0x19c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method ValidateClientCount, addr 0x60ec9b8, size 0xc4, virtual false, abstract: false, final false
inline void ValidateClientCount() ;

constexpr ::UnityW<::UnityEngine::GUISkin> const& __cordl_internal_get_BaseSkin() const;

constexpr ::UnityW<::UnityEngine::GUISkin>& __cordl_internal_get_BaseSkin() ;

constexpr bool const& __cordl_internal_get_EnableHotkeys() const;

constexpr bool& __cordl_internal_get_EnableHotkeys() ;

constexpr ::StringW const& __cordl_internal_get__clientCount() const;

constexpr ::StringW& __cordl_internal_get__clientCount() ;

constexpr bool const& __cordl_internal_get__isMultiplePeerMode() const;

constexpr bool& __cordl_internal_get__isMultiplePeerMode() ;

constexpr ::UnityW<::Fusion::FusionBootstrap> const& __cordl_internal_get__networkDebugStart() const;

constexpr ::UnityW<::Fusion::FusionBootstrap>& __cordl_internal_get__networkDebugStart() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FusionBootstrap_Stage,::StringW>* const& __cordl_internal_get__nicifiedStageNames() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FusionBootstrap_Stage,::StringW>*& __cordl_internal_get__nicifiedStageNames() ;

constexpr void __cordl_internal_set_BaseSkin(::UnityW<::UnityEngine::GUISkin>  value) ;

constexpr void __cordl_internal_set_EnableHotkeys(bool  value) ;

constexpr void __cordl_internal_set__clientCount(::StringW  value) ;

constexpr void __cordl_internal_set__isMultiplePeerMode(bool  value) ;

constexpr void __cordl_internal_set__networkDebugStart(::UnityW<::Fusion::FusionBootstrap>  value) ;

constexpr void __cordl_internal_set__nicifiedStageNames(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FusionBootstrap_Stage,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x60ee01c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionBootstrapDebugGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrapDebugGUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBootstrapDebugGUI(FusionBootstrapDebugGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrapDebugGUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBootstrapDebugGUI(FusionBootstrapDebugGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23466};

/// [InlineHelp]
/// @brief Field EnableHotkeys, offset: 0x20, size: 0x1, def value: None
 bool  ___EnableHotkeys;

/// [InlineHelp]
/// @brief Field BaseSkin, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GUISkin>  ___BaseSkin;

/// @brief Field _networkDebugStart, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::FusionBootstrap>  ____networkDebugStart;

/// @brief Field _clientCount, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____clientCount;

/// @brief Field _isMultiplePeerMode, offset: 0x40, size: 0x1, def value: None
 bool  ____isMultiplePeerMode;

/// @brief Field _nicifiedStageNames, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FusionBootstrap_Stage,::StringW>*  ____nicifiedStageNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionBootstrapDebugGUI, ___EnableHotkeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrapDebugGUI, ___BaseSkin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrapDebugGUI, ____networkDebugStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrapDebugGUI, ____clientCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrapDebugGUI, ____isMultiplePeerMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrapDebugGUI, ____nicifiedStageNames) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionBootstrapDebugGUI) == 0x50, "Size mismatch!");

} // namespace end def Fusion
