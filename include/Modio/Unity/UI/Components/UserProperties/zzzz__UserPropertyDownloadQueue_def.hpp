#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyDownloadQueue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UserPropertyDownloadQueue)
namespace GlobalNamespace {
struct UserPropertyDownloadQueue__HideAfterDelay_d__18;
}
namespace Modio::Mods {
struct ModChangeType;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::UserProperties {
class IUserProperty;
}
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
namespace Modio::Users {
class UserProfile;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::UserProperties {
class UserPropertyDownloadQueue;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue*, "Modio.Unity.UI.Components.UserProperties", "UserPropertyDownloadQueue");
// Dependencies System.Object, UnityEngine.UI.Image
namespace Modio::Unity::UI::Components::UserProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.UserProperties.UserPropertyDownloadQueue
class CORDL_TYPE UserPropertyDownloadQueue : public ::System::Object {
public:
// Declarations
using _HideAfterDelay_d__18 = ::GlobalNamespace::UserPropertyDownloadQueue__HideAfterDelay_d__18;

/// @brief Field _completedOperationCount, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__completedOperationCount, put=__cordl_internal_set__completedOperationCount)) int32_t  _completedOperationCount;

/// @brief Field _disableIfNoOperations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableIfNoOperations, put=__cordl_internal_set__disableIfNoOperations)) ::UnityW<::UnityEngine::GameObject>  _disableIfNoOperations;

/// @brief Field _hideAfterSecondsOfInactivity, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__hideAfterSecondsOfInactivity, put=__cordl_internal_set__hideAfterSecondsOfInactivity)) float_t  _hideAfterSecondsOfInactivity;

/// @brief Field _mod, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Field _operationCountText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__operationCountText, put=__cordl_internal_set__operationCountText)) ::UnityW<::TMPro::TMP_Text>  _operationCountText;

/// @brief Field _progressBars, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressBars, put=__cordl_internal_set__progressBars)) ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  _progressBars;

/// @brief Field _progressPercentText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressPercentText, put=__cordl_internal_set__progressPercentText)) ::UnityW<::TMPro::TMP_Text>  _progressPercentText;

/// @brief Field _progressSizesText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressSizesText, put=__cordl_internal_set__progressSizesText)) ::UnityW<::TMPro::TMP_Text>  _progressSizesText;

/// @brief Field _showForDownloadOnly, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__showForDownloadOnly, put=__cordl_internal_set__showForDownloadOnly)) ::UnityW<::UnityEngine::GameObject>  _showForDownloadOnly;

/// @brief Field _showForInstallOnly, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__showForInstallOnly, put=__cordl_internal_set__showForInstallOnly)) ::UnityW<::UnityEngine::GameObject>  _showForInstallOnly;

/// @brief Field _speedText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__speedText, put=__cordl_internal_set__speedText)) ::UnityW<::TMPro::TMP_Text>  _speedText;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr operator  ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept;

/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr operator  ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Components.UserProperties.UserPropertyDownloadQueue::<HideAfterDelay>d__18))]
/// @brief Method HideAfterDelay, addr 0x9fc02ac, size 0xa8, virtual false, abstract: false, final false
inline void HideAfterDelay() ;

static inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fbf944, size 0x4, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fbfb28, size 0x114, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fbf948, size 0x108, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnModChangeEvent, addr 0x9fbfc3c, size 0x1ec, virtual false, abstract: false, final false
inline void OnModChangeEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  modChangeType) ;

/// @brief Method OnModUpdated, addr 0x9fbfe28, size 0x484, virtual false, abstract: false, final false
inline void OnModUpdated() ;

/// @brief Method OnUserUpdate, addr 0x9fbf93c, size 0x4, virtual true, abstract: false, final true
inline void OnUserUpdate(::Modio::Users::UserProfile*  user) ;

/// @brief Method SetInstallOrDownloadState, addr 0x9fbfa50, size 0xd8, virtual false, abstract: false, final false
inline void SetInstallOrDownloadState(bool  isDownloading) ;

/// @brief Method Start, addr 0x9fbf940, size 0x4, virtual true, abstract: false, final true
inline void Start() ;

constexpr int32_t const& __cordl_internal_get__completedOperationCount() const;

constexpr int32_t& __cordl_internal_get__completedOperationCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__disableIfNoOperations() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__disableIfNoOperations() ;

constexpr float_t const& __cordl_internal_get__hideAfterSecondsOfInactivity() const;

constexpr float_t& __cordl_internal_get__hideAfterSecondsOfInactivity() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__operationCountText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__operationCountText() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& __cordl_internal_get__progressBars() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& __cordl_internal_get__progressBars() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__progressPercentText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__progressPercentText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__progressSizesText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__progressSizesText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__showForDownloadOnly() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__showForDownloadOnly() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__showForInstallOnly() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__showForInstallOnly() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__speedText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__speedText() ;

constexpr void __cordl_internal_set__completedOperationCount(int32_t  value) ;

constexpr void __cordl_internal_set__disableIfNoOperations(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__hideAfterSecondsOfInactivity(float_t  value) ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__operationCountText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__progressBars(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value) ;

constexpr void __cordl_internal_set__progressPercentText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__progressSizesText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__showForDownloadOnly(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__showForInstallOnly(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__speedText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fc0354, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept;

/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserPropertyDownloadQueue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyDownloadQueue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserPropertyDownloadQueue(UserPropertyDownloadQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserPropertyDownloadQueue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserPropertyDownloadQueue(UserPropertyDownloadQueue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27173};

/// [SerializeField]
/// @brief Field _progressBars, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Image>>  ____progressBars;

/// [SerializeField]
/// @brief Field _progressPercentText, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____progressPercentText;

/// [SerializeField]
/// @brief Field _progressSizesText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____progressSizesText;

/// [SerializeField]
/// @brief Field _operationCountText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____operationCountText;

/// [SerializeField]
/// @brief Field _speedText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____speedText;

/// [SerializeField]
/// @brief Field _disableIfNoOperations, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____disableIfNoOperations;

/// [SerializeField]
/// @brief Field _showForDownloadOnly, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____showForDownloadOnly;

/// [SerializeField]
/// @brief Field _showForInstallOnly, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____showForInstallOnly;

/// [SerializeField]
/// @brief Field _hideAfterSecondsOfInactivity, offset: 0x50, size: 0x4, def value: None
 float_t  ____hideAfterSecondsOfInactivity;

/// @brief Field _completedOperationCount, offset: 0x54, size: 0x4, def value: None
 int32_t  ____completedOperationCount;

/// @brief Field _mod, offset: 0x58, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____progressBars) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____progressPercentText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____progressSizesText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____operationCountText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____speedText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____disableIfNoOperations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____showForDownloadOnly) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____showForInstallOnly) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____hideAfterSecondsOfInactivity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____completedOperationCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue, ____mod) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::UserProperties::UserPropertyDownloadQueue) == 0x60, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::UserProperties
